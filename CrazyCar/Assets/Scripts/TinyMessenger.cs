//===============================================================================
// TinyMessenger
//
// A simple messenger/event aggregator.
//
// https://github.com/grumpydev/TinyMessenger
//===============================================================================
// Copyright © Steven Robbins.  All rights reserved.
// THIS CODE AND INFORMATION IS PROVIDED "AS IS" WITHOUT WARRANTY
// OF ANY KIND, EITHER EXPRESSED OR IMPLIED, INCLUDING BUT NOT
// LIMITED TO THE IMPLIED WARRANTIES OF MERCHANTABILITY AND
// FITNESS FOR A PARTICULAR PURPOSE.
//===============================================================================

using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace TinyMessenger
{
    #region Message Types / Interfaces

    public interface ISubscriberErrorHandler
    {
        void Handle(ITinyMessage message, Exception exception);
    }

    public class DefaultSubscriberErrorHandler : ISubscriberErrorHandler
    {
        public void Handle(ITinyMessage message, Exception exception)
        {
            //default behaviour is to do nothing
           
        }
    }

    /// <summary>
    /// A TinyMessage to be published/delivered by TinyMessenger
    /// </summary>
    public interface ITinyMessage
    {
        /// <summary>
        /// The sender of the message, or null if not supported by the message implementation.
        /// </summary>
        object Sender { get; }
    }

    /// <summary>
    /// Base class for messages that provides weak refrence storage of the sender
    /// </summary>
    public abstract class TinyMessageBase : ITinyMessage
    {
        /// <summary>
        /// Store a WeakReference to the sender just in case anyone is daft enough to
        /// keep the message around and prevent the sender from being collected.
        /// </summary>
        private WeakReference _Sender;
        public object Sender
        {
            get
            {
                return (_Sender == null) ? null : _Sender.Target;
            }
        }

        /// <summary>
        /// Initializes a new instance of the MessageBase class.
        /// </summary>
        /// <param name="sender">Message sender (usually "this")</param>
        public TinyMessageBase(object sender)
        {
            if (sender == null)
                throw new ArgumentNullException("sender");

            _Sender = new WeakReference(sender);
        }
    }

    /// <summary>
    /// Generic message with user specified content
    /// </summary>
    /// <typeparam name="TContent">Content type to store</typeparam>
    public class GenericTinyMessage<TContent> : TinyMessageBase
    {
        /// <summary>
        /// Contents of the message
        /// </summary>
        public TContent Content { get; protected set; }

        /// <summary>
        /// Create a new instance of the GenericTinyMessage class.
        /// </summary>
        /// <param name="sender">Message sender (usually "this")</param>
        /// <param name="content">Contents of the message</param>
        public GenericTinyMessage(object sender, TContent content)
            : base(sender)
        {
            Content = content;
        }
    }

    /// <summary>
    /// Basic "cancellable" generic message
    /// </summary>
    /// <typeparam name="TContent">Content type to store</typeparam>
    public class CancellableGenericTinyMessage<TContent> : TinyMessageBase
    {
        /// <summary>
        /// Cancel action
        /// </summary>
        public Action Cancel { get; protected set; }

        /// <summary>
        /// Contents of the message
        /// </summary>
        public TContent Content { get; protected set; }

        /// <summary>
        /// Create a new instance of the CancellableGenericTinyMessage class.
        /// </summary>
        /// <param name="sender">Message sender (usually "this")</param>
        /// <param name="content">Contents of the message</param>
        /// <param name="cancelAction">Action to call for cancellation</param>
        public CancellableGenericTinyMessage(object sender, TContent content, Action cancelAction)
            : base(sender)
        {
            if (cancelAction == null)
                throw new ArgumentNullException("cancelAction");

            Content = content;
            Cancel = cancelAction;
        }
    }

    /// <summary>
    /// Represents an active subscription to a message
    /// </summary>
    public sealed class TinyMessageSubscriptionToken : IDisposable
    {
        private WeakReference _Hub;
        private Type _MessageType;

        /// <summary>
        /// Initializes a new instance of the TinyMessageSubscriptionToken class.
        /// </summary>
        public TinyMessageSubscriptionToken(ITinyMessengerHub hub, Type messageType)
        {
            if (hub == null)
                throw new ArgumentNullException("hub");

            if (!typeof(ITinyMessage).IsAssignableFrom(messageType))
                throw new ArgumentOutOfRangeException("messageType");

            _Hub = new WeakReference(hub);
            _MessageType = messageType;
        }

        public void Dispose()
        {
            if (_Hub.IsAlive)
            {
                var hub = _Hub.Target as ITinyMessengerHub;

                if (hub != null)
                {
                    var unsubscribeMethod = typeof(ITinyMessengerHub).GetMethod("Unsubscribe", new Type[] {typeof(TinyMessageSubscriptionToken)});
                    unsubscribeMethod = unsubscribeMethod.MakeGenericMethod(_MessageType);
                    unsubscribeMethod.Invoke(hub, new object[] {this});
                }
            }

            GC.SuppressFinalize(this);
        }
    }

    /// <summary>
    /// Represents a message subscription
    /// </summary>
    public interface ITinyMessageSubscription
    {
        /// <summary>
        /// Token returned to the subscribed to reference this subscription
        /// </summary>
        TinyMessageSubscriptionToken SubscriptionToken { get; }

        /// <summary>
        /// Whether delivery should be attempted.
        /// </summary>
        /// <param name="message">Message that may potentially be delivered.</param>
        /// <returns>True - ok to send, False - should not attempt to send</returns>
        bool ShouldAttemptDelivery(ITinyMessage message);

        /// <summary>
        /// Deliver the message
        /// </summary>
        /// <param name="message">Message to deliver</param>
        void Deliver(ITinyMessage message);
    }

    /// <summary>
    /// Message proxy definition.
    /// 
    /// A message proxy can be used to intercept/alter messages and/or
    /// marshall delivery actions onto a particular thread.
    /// </summary>
    public interface ITinyMessageProxy
    {
        void Deliver(ITinyMessage message, ITinyMessageSubscription subscription);
    }

    /// <summary>
    /// Default "pass through" proxy.
    /// 
    /// Does nothing other than deliver the message.
    /// </summary>
    public sealed class DefaultTinyMessageProxy : ITinyMessageProxy
    {
        private static readonly DefaultTinyMessageProxy _Instance = new DefaultTinyMessageProxy();

        static DefaultTinyMessageProxy()
        {
        }

        /// <summary>
        /// Singleton instance of the proxy.
        /// </summary>
        public static DefaultTinyMessageProxy Instance
        {
            get
            {
                return _Instance;
            }
        }

        private DefaultTinyMessageProxy()
        {
        }

        public void Deliver(ITinyMessage message, ITinyMessageSubscription subscription)
        {
            subscription.Deliver(message);
        }
    }
    #endregion

    #region Exceptions
    /// <summary>
    /// Thrown when an exceptions occurs while subscribing to a message type
    /// </summary>
    public class TinyMessengerSubscriptionException : Exception
    {
        private const string ERROR_TEXT = "Unable to add subscription for {0} : {1}";

        public TinyMessengerSubscriptionException(Type messageType, string reason)
            : base(String.Format(ERROR_TEXT, messageType, reason))
        {

        }

        public TinyMessengerSubscriptionException(Type messageType, string reason, Exception innerException)
            : base(String.Format(ERROR_TEXT, messageType, reason), innerException)
        {

        }
    }
    #endregion

    #region Hub Interface
    /// <summary>
    /// Messenger hub responsible for taking subscriptions/publications and delivering of messages.
    /// </summary>
    public interface ITinyMessengerHub
    {
        /// <summary>
        /// Subscribe to a message type with the given destination and delivery action.
        /// All references are held with WeakReferences
        /// 
        /// All messages of this type will be delivered.
        /// </summary>
        /// <typeparam name="TMessage">Type of message</typeparam>
        /// <param name="deliveryAction">Action to invoke when message is delivered</param>
        /// <returns>TinyMessageSubscription used to unsubscribing</returns>
        TinyMessageSubscriptionToken Subscribe<TMessage>(Action<TMessage> deliveryAction) where TMessage : class, ITinyMessage;

        /// <summary>
        /// Subscribe to a message type with the given destination and delivery action.
        /// Messages will be delivered via the specified proxy.
        /// All references (apart from the proxy) are held with WeakReferences
        /// 
        /// All messages of this type will be delivered.
        /// </summary>
        /// <typeparam name="TMessage">Type of message</typeparam>
        /// <param name="deliveryAction">Action to invoke when message is delivered</param>
        /// <param name="proxy">Proxy to use when delivering the messages</param>
        /// <returns>TinyMessageSubscription used to unsubscribing</returns>
        TinyMessageSubscriptionToken Subscribe<TMessage>(Action<TMessage> deliveryAction, ITinyMessageProxy proxy) where TMessage : class, ITinyMessage;

        /// <summary>
        /// Subscribe to a message type with the given destination and delivery action.
        /// 
        /// All messages of this type will be delivered.
        /// </summary>
        /// <typeparam name="TMessage">Type of message</typeparam>
        /// <param name="deliveryAction">Action to invoke when message is delivered</param>
        /// <param name="useStrongReferences">Use strong references to destination and deliveryAction </param>
        /// <returns>TinyMessageSubscription used to unsubscribing</returns>
        TinyMessageSubscriptionToken Subscribe<TMessage>(Action<TMessage> deliveryAction, bool useStrongReferences) where TMessage : class, ITinyMessage;

        /// <summary>
        /// Subscribe to a message type with the given destination and delivery action.
        /// Messages will be delivered via the specified proxy.
        /// 
        /// All messages of this type will be delivered.
        /// </summary>
        /// <typeparam name="TMessage">Type of message</typeparam>
        /// <param name="deliveryAction">Action to invoke when message is delivered</param>
        /// <param name="useStrongReferences">Use strong references to destination and deliveryAction </param>
        /// <param name="proxy">Proxy to use when delivering the messages</param>
        /// <returns>TinyMessageSubscription used to unsubscribing</returns>
        TinyMessageSubscriptionToken Subscribe<TMessage>(Action<TMessage> deliveryAction, bool useStrongReferences, ITinyMessageProxy proxy) where TMessage : class, ITinyMessage;

        /// <summary>
        /// Subscribe to a message type with the given destination and delivery action with the given filter.
        /// All references are held with WeakReferences
        /// 
        /// Only messages that "pass" the filter will be delivered.
        /// </summary>
        /// <typeparam name="TMessage">Type of message</typeparam>
        /// <param name="deliveryAction">Action to invoke when message is delivered</param>
        /// <returns>TinyMessageSubscription used to unsubscribing</returns>
        TinyMessageSubscriptionToken Subscribe<TMessage>(Action<TMessage> deliveryAction, Func<TMessage, bool> messageFilter) where TMessage : class, ITinyMessage;

        /// <summary>
        /// Subscribe to a message type with the given destination and delivery action with the given filter.
        /// Messages will be delivered via the specified proxy.
        /// All references (apart from the proxy) are held with WeakReferences
        /// 
        /// Only messages that "pass" the filter will be delivered.
        /// </summary>
        /// <typeparam name="TMessage">Type of message</typeparam>
        /// <param name="deliveryAction">Action to invoke when message is delivered</param>
        /// <param name="proxy">Proxy to use when delivering the messages</param>
        /// <returns>TinyMessageSubscription used to unsubscribing</returns>
        TinyMessageSubscriptionToken Subscribe<TMessage>(Action<TMessage> deliveryAction, Func<TMessage, bool> messageFilter, ITinyMessageProxy proxy) where TMessage : class, ITinyMessage;

        /// <summary>
        /// Subscribe to a message type with the given destination and delivery action with the given filter.
        /// All references are held with WeakReferences
        /// 
        /// Only messages that "pass" the filter will be delivered.
        /// </summary>
        /// <typeparam name="TMessage">Type of message</typeparam>
        /// <param name="deliveryAction">Action to invoke when message is delivered</param>
        /// <param name="useStrongReferences">Use strong references to destination and deliveryAction </param>
        /// <returns>TinyMessageSubscription used to unsubscribing</returns>
        TinyMessageSubscriptionToken Subscribe<TMessage>(Action<TMessage> deliveryAction, Func<TMessage, bool> messageFilter, bool useStrongReferences) where TMessage : class, ITinyMessage;

        /// <summary>
        /// Subscribe to a message type with the given destination and delivery action with the given filter.
        /// Messages will be delivered via the specified proxy.
        /// All references are held with WeakReferences
        /// 
        /// Only messages that "pass" the filter will be delivered.
        /// </summary>
        /// <typeparam name="TMessage">Type of message</typeparam>
        /// <param name="deliveryAction">Action to invoke when message is delivered</param>
        /// <param name="useStrongReferences">Use strong references to destination and deliveryAction </param>
        /// <param name="proxy">Proxy to use when delivering the messages</param>
        /// <returns>TinyMessageSubscription used to unsubscribing</returns>
        TinyMessageSubscriptionToken Subscribe<TMessage>(Action<TMessage> deliveryAction, Func<TMessage, bool> messageFilter, bool useStrongReferences, ITinyMessageProxy proxy) where TMessage : class, ITinyMessage;

        /// <summary>
        /// Unsubscribe from a particular message type.
        /// 
        /// Does not throw an exception if the subscription is not found.
        /// </summary>
        /// <typeparam name="TMessage">Type of message</typeparam>
        /// <param name="subscriptionToken">Subscription token received from Subscribe</param>
        void Unsubscribe<TMessage>(TinyMessageSubscriptionToken subscriptionToken) where TMessage : class, ITinyMessage;

        /// <summary>
        /// Unsubscribe from a particular message type.
        /// 
        /// Does not throw an exception if the subscription is not found.
        /// </summary>
        /// <param name="subscriptionToken">Subscription token received from Subscribe</param>
        void Unsubscribe(TinyMessageSubscriptionToken subscriptionToken);

        /// <summary>
        /// Publish a message to any subscribers
        /// </summary>
        /// <typeparam name="TMessage">Type of message</typeparam>
        /// <param name="message">Message to deliver</param>
        void Publish<TMessage>(TMessage message) where TMessage : class, ITinyMessage;

        /// <summary>
        /// Publish a message to any subscribers asynchronously
        /// </summary>
        /// <typeparam name="TMessage">Type of message</typeparam>
        /// <param name="message">Message to deliver</param>
        void PublishAsync<TMessage>(TMessage message) where TMessage : class, ITinyMessage;

        /// <summary>
        /// Publish a message to any subscribers asynchronously
        /// </summary>
        /// <typeparam name="TMessage">Type of message</typeparam>
        /// <param name="message">Message to deliver</param>
        /// <param name="callback">AsyncCallback called on completion</param>
        void PublishAsync<TMessage>(TMessage message, AsyncCallback callback) where TMessage : class, ITinyMessage;
    }
    #endregion

    #region Hub Implementation
    /// <summary>
    /// Messenger hub responsible for taking subscriptions/publications and delivering of messages.
    /// </summary>
    public sealed class TinyMessengerHub : ITinyMessengerHub
    {
        readonly ISubscriberErrorHandler _SubscriberErrorHandler;

        #region ctor methods

        public TinyMessengerHub()
        {
            _SubscriberErrorHandler = new DefaultSubscriberErrorHandler();
        }

        public TinyMessengerHub(ISubscriberErrorHandler subscriberErrorHandler)
        {
            _SubscriberErrorHandler = subscriberErrorHandler;
        }
        #endregion

        #region Private Types and Interfaces
        private class WeakTinyMessageSubscription<TMessage> : ITinyMessageSubscription
            where TMessage : class, ITinyMessage
        {
            protected TinyMessageSubscriptionToken _SubscriptionToken;
            protected WeakReference _DeliveryAction;
            protected WeakReference _MessageFilter;

            public TinyMessageSubscriptionToken SubscriptionToken
            {
                get { return _SubscriptionToken; }
            }

            public bool ShouldAttemptDelivery(ITinyMessage message)
            {
                if (message == null)
                    return false;

                if (!(typeof(TMessage).IsAssignableFrom(message.GetType())))
                    return false;

                if (!_DeliveryAction.IsAlive)
                    return false;

                if (!_MessageFilter.IsAlive)
                    return false;

                return ((Func<TMessage, bool>)_MessageFilter.Target).Invoke(message as TMessage);
            }

            public void Deliver(ITinyMessage message)
            {
                if (!(message is TMessage))
                    throw new ArgumentException("Message is not the correct type");

                if (!_DeliveryAction.IsAlive)
                    return;

                ((Action<TMessage>)_DeliveryAction.Target).Invoke(message as TMessage);
            }

            /// <summary>
            /// Initializes a new instance of the WeakTinyMessageSubscription class.
            /// </summary>
            /// <param name="destination">Destination object</param>
            /// <param name="deliveryAction">Delivery action</param>
            /// <param name="messageFilter">Filter function</param>
            public WeakTinyMessageSubscription(TinyMessageSubscriptionToken subscriptionToken, Action<TMessage> deliveryAction, Func<TMessage, bool> messageFilter)
            {
                if (subscriptionToken == null)
                    throw new ArgumentNullException("subscriptionToken");

                if (deliveryAction == null)
                    throw new ArgumentNullException("deliveryAction");

                if (messageFilter == null)
                    throw new ArgumentNullException("messageFilter");

                _SubscriptionToken = subscriptionToken;
                _DeliveryAction = new WeakReference(deliveryAction);
                _MessageFilter = new WeakReference(messageFilter);
            }
        }

        private class StrongTinyMessageSubscription<TMessage> : ITinyMessageSubscription
            where TMessage : class, ITinyMessage
        {
            protected TinyMessageSubscriptionToken _SubscriptionToken;
            protected Action<TMessage> _DeliveryAction;
            protected Func<TMessage, bool> _MessageFilter;

            public TinyMessageSubscriptionToken SubscriptionToken
            {
                get { return _SubscriptionToken; }
            }

            public bool ShouldAttemptDelivery(ITinyMessage message)
            {
                if (message == null)
                    return false;

                if (!(typeof(TMessage).IsAssignableFrom(message.GetType())))
                    return false;

                return _MessageFilter.Invoke(message as TMessage);
            }

            public void Deliver(ITinyMessage message)
            {
                if (!(message is TMessage))
                    throw new ArgumentException("Message is not the correct type");

                _DeliveryAction.Invoke(message as TMessage);
            }

            /// <summary>
            /// Initializes a new instance of the TinyMessageSubscription class.
            /// </summary>
            /// <param name="destination">Destination object</param>
            /// <param name="deliveryAction">Delivery action</param>
            /// <param name="messageFilter">Filter function</param>
            public StrongTinyMessageSubscription(TinyMessageSubscriptionToken subscriptionToken, Action<TMessage> deliveryAction, Func<TMessage, bool> messageFilter)
            {
                if (subscriptionToken == null)
                    throw new ArgumentNullException("subscriptionToken");

                if (deliveryAction == null)
                    throw new ArgumentNullException("deliveryAction");

                if (messageFilter == null)
                    throw new ArgumentNullException("messageFilter");

                _SubscriptionToken = subscriptionToken;
                _DeliveryAction = deliveryAction;
                _MessageFilter = messageFilter;
            }
        }
        #endregion

        #region Subscription dictionary
        private class SubscriptionItem
        {
            public ITinyMessageProxy Proxy { get; private set; }
            public ITinyMessageSubscription Subscription { get; private set; }

            public SubscriptionItem(ITinyMessageProxy proxy, ITinyMessageSubscription subscription)
            {
                Proxy = proxy;
                Subscription = subscription;
            }
        }

        private readonly object _SubscriptionsPadlock = new object();
        private readonly List<SubscriptionItem> _Subscriptions = new List<SubscriptionItem>();
        #endregion

        #region Public API
        /// <summary>
        /// Subscribe to a message type with the given destination and delivery action.
        /// All references are held with strong references
        /// 
        /// All messages of this type will be delivered.
        /// </summary>
        /// <typeparam name="TMessage">Type of message</typeparam>
        /// <param name="deliveryAction">Action to invoke when message is delivered</param>
        /// <returns>TinyMessageSubscription used to unsubscribing</returns>
        public TinyMessageSubscriptionToken Subscribe<TMessage>(Action<TMessage> deliveryAction) where TMessage : class, ITinyMessage
        {
            return AddSubscriptionInternal<TMessage>(deliveryAction, (m) => true, true, DefaultTinyMessageProxy.Instance);
        }

        /// <summary>
        /// Subscribe to a message type with the given destination and delivery action.
        /// Messages will be delivered via the specified proxy.
        /// All references (apart from the proxy) are held with strong references
        /// 
        /// All messages of this type will be delivered.
        /// </summary>
        /// <typeparam name="TMessage">Type of message</typeparam>
        /// <param name="deliveryAction">Action to invoke when message is delivered</param>
        /// <param name="proxy">Proxy to use when delivering the messages</param>
        /// <returns>TinyMessageSubscription used to unsubscribing</returns>
        public TinyMessageSubscriptionToken Subscribe<TMessage>(Action<TMessage> deliveryAction, ITinyMessageProxy proxy) where TMessage : class, ITinyMessage
        {
            return AddSubscriptionInternal<TMessage>(deliveryAction, (m) => true, true, proxy);
        }

        /// <summary>
        /// Subscribe to a message type with the given destination and delivery action.
        /// 
        /// All messages of this type will be delivered.
        /// </summary>
        /// <typeparam name="TMessage">Type of message</typeparam>
        /// <param name="deliveryAction">Action to invoke when message is delivered</param>
        /// <param name="useStrongReferences">Use strong references to destination and deliveryAction </param>
        /// <returns>TinyMessageSubscription used to unsubscribing</returns>
        public TinyMessageSubscriptionToken Subscribe<TMessage>(Action<TMessage> deliveryAction, bool useStrongReferences) where TMessage : class, ITinyMessage
        {
            return AddSubscriptionInternal<TMessage>(deliveryAction, (m) => true, useStrongReferences, DefaultTinyMessageProxy.Instance);
        }

        /// <summary>
        /// Subscribe to a message type with the given destination and delivery action.
        /// Messages will be delivered via the specified proxy.
        /// 
        /// All messages of this type will be delivered.
        /// </summary>
        /// <typeparam name="TMessage">Type of message</typeparam>
        /// <param name="deliveryAction">Action to invoke when message is delivered</param>
        /// <param name="useStrongReferences">Use strong references to destination and deliveryAction </param>
        /// <param name="proxy">Proxy to use when delivering the messages</param>
        /// <returns>TinyMessageSubscription used to unsubscribing</returns>
        public TinyMessageSubscriptionToken Subscribe<TMessage>(Action<TMessage> deliveryAction, bool useStrongReferences, ITinyMessageProxy proxy) where TMessage : class, ITinyMessage
        {
            return AddSubscriptionInternal<TMessage>(deliveryAction, (m) => true, useStrongReferences, proxy);
        }

        /// <summary>
        /// Subscribe to a message type with the given destination and delivery action with the given filter.
        /// All references are held with WeakReferences
        /// 
        /// Only messages that "pass" the filter will be delivered.
        /// </summary>
        /// <typeparam name="TMessage">Type of message</typeparam>
        /// <param name="deliveryAction">Action to invoke when message is delivered</param>
        /// <returns>TinyMessageSubscription used to unsubscribing</returns>
        public TinyMessageSubscriptionToken Subscribe<TMessage>(Action<TMessage> deliveryAction, Func<TMessage, bool> messageFilter) where TMessage : class, ITinyMessage
        {
            return AddSubscriptionInternal<TMessage>(deliveryAction, messageFilter, true, DefaultTinyMessageProxy.Instance);
        }

        /// <summary>
        /// Subscribe to a message type with the given destination and delivery action with the given filter.
        /// Messages will be delivered via the specified proxy.
        /// All references (apart from the proxy) are held with WeakReferences
        /// 
        /// Only messages that "pass" the filter will be delivered.
        /// </summary>
        /// <typeparam name="TMessage">Type of message</typeparam>
        /// <param name="deliveryAction">Action to invoke when message is delivered</param>
        /// <param name="proxy">Proxy to use when delivering the messages</param>
        /// <returns>TinyMessageSubscription used to unsubscribing</returns>
        public TinyMessageSubscriptionToken Subscribe<TMessage>(Action<TMessage> deliveryAction, Func<TMessage, bool> messageFilter, ITinyMessageProxy proxy) where TMessage : class, ITinyMessage
        {
            return AddSubscriptionInternal<TMessage>(deliveryAction, messageFilter, true, proxy);
        }

        /// <summary>
        /// Subscribe to a message type with the given destination and delivery action with the given filter.
        /// All references are held with WeakReferences
        /// 
        /// Only messages that "pass" the filter will be delivered.
        /// </summary>
        /// <typeparam name="TMessage">Type of message</typeparam>
        /// <param name="deliveryAction">Action to invoke when message is delivered</param>
        /// <param name="useStrongReferences">Use strong references to destination and deliveryAction </param>
        /// <returns>TinyMessageSubscription used to unsubscribing</returns>
        public TinyMessageSubscriptionToken Subscribe<TMessage>(Action<TMessage> deliveryAction, Func<TMessage, bool> messageFilter, bool useStrongReferences) where TMessage : class, ITinyMessage
        {
            return AddSubscriptionInternal<TMessage>(deliveryAction, messageFilter, useStrongReferences, DefaultTinyMessageProxy.Instance);
        }

        /// <summary>
        /// Subscribe to a message type with the given destination and delivery action with the given filter.
        /// Messages will be delivered via the specified proxy.
        /// All references are held with WeakReferences
        /// 
        /// Only messages that "pass" the filter will be delivered.
        /// </summary>
        /// <typeparam name="TMessage">Type of message</typeparam>
        /// <param name="deliveryAction">Action to invoke when message is delivered</param>
        /// <param name="useStrongReferences">Use strong references to destination and deliveryAction </param>
        /// <param name="proxy">Proxy to use when delivering the messages</param>
        /// <returns>TinyMessageSubscription used to unsubscribing</returns>
        public TinyMessageSubscriptionToken Subscribe<TMessage>(Action<TMessage> deliveryAction, Func<TMessage, bool> messageFilter, bool useStrongReferences, ITinyMessageProxy proxy) where TMessage : class, ITinyMessage
        {
            return AddSubscriptionInternal<TMessage>(deliveryAction, messageFilter, useStrongReferences, proxy);
        }

        /// <summary>
        /// Unsubscribe from a particular message type.
        /// 
        /// Does not throw an exception if the subscription is not found.
        /// </summary>
        /// <typeparam name="TMessage">Type of message</typeparam>
        /// <param name="subscriptionToken">Subscription token received from Subscribe</param>
        public void Unsubscribe<TMessage>(TinyMessageSubscriptionToken subscriptionToken) where TMessage : class, ITinyMessage
        {
            RemoveSubscriptionInternal<TMessage>(subscriptionToken);
        }

        /// <summary>
        /// Unsubscribe from a particular message type.
        /// 
        /// Does not throw an exception if the subscription is not found.
        /// </summary>
        /// <param name="subscriptionToken">Subscription token received from Subscribe</param>
        public void Unsubscribe(TinyMessageSubscriptionToken subscriptionToken)
        {
            RemoveSubscriptionInternal<ITinyMessage>(subscriptionToken);
        }

        /// <summary>
        /// Publish a message to any subscribers
        /// </summary>
        /// <typeparam name="TMessage">Type of message</typeparam>
        /// <param name="message">Message to deliver</param>
        public void Publish<TMessage>(TMessage message) where TMessage : class, ITinyMessage
        {
            PublishInternal<TMessage>(message);
        }

        /// <summary>
        /// Publish a message to any subscribers asynchronously
        /// </summary>
        /// <typeparam name="TMessage">Type of message</typeparam>
        /// <param name="message">Message to deliver</param>
        public void PublishAsync<TMessage>(TMessage message) where TMessage : class, ITinyMessage
        {
            PublishAsyncInternal<TMessage>(message, null);
        }

        /// <summary>
        /// Publish a message to any subscribers asynchronously
        /// </summary>
        /// <typeparam name="TMessage">Type of message</typeparam>
        /// <param name="message">Message to deliver</param>
        /// <param name="callback">AsyncCallback called on completion</param>
        public void PublishAsync<TMessage>(TMessage message, AsyncCallback callback) where TMessage : class, ITinyMessage
        {
            PublishAsyncInternal<TMessage>(message, callback);
        }
        #endregion

        #region Internal Methods
        private TinyMessageSubscriptionToken AddSubscriptionInternal<TMessage>(Action<TMessage> deliveryAction, Func<TMessage, bool> messageFilter, bool strongReference, ITinyMessageProxy proxy)
                where TMessage : class, ITinyMessage
        {
            if (deliveryAction == null)
                throw new ArgumentNullException("deliveryAction");

            if (messageFilter == null)
                throw new ArgumentNullException("messageFilter");

            if (proxy == null)
                throw new ArgumentNullException("proxy");

            lock (_SubscriptionsPadlock)
            {
                var subscriptionToken = new TinyMessageSubscriptionToken(this, typeof(TMessage));

                ITinyMessageSubscription subscription;
                if (strongReference)
                    subscription = new StrongTinyMessageSubscription<TMessage>(subscriptionToken, deliveryAction, messageFilter);
                else
                    subscription = new WeakTinyMessageSubscription<TMessage>(subscriptionToken, deliveryAction, messageFilter);

                _Subscriptions.Add(new SubscriptionItem(proxy, subscription));

                return subscriptionToken;
            }
        }

        private void RemoveSubscriptionInternal<TMessage>(TinyMessageSubscriptionToken subscriptionToken)
                where TMessage : class, ITinyMessage
        {
            if (subscriptionToken == null)
                throw new ArgumentNullException("subscriptionToken");

            lock (_SubscriptionsPadlock)
            {
                var currentlySubscribed = (from sub in _Subscriptions
                                           where object.ReferenceEquals(sub.Subscription.SubscriptionToken, subscriptionToken)
                                           select sub).ToList();

                currentlySubscribed.ForEach(sub => _Subscriptions.Remove(sub));
            }
        }

        private void PublishInternal<TMessage>(TMessage message)
                where TMessage : class, ITinyMessage
        {
            if (message == null)
                throw new ArgumentNullException("message");

            List<SubscriptionItem> currentlySubscribed;
            lock (_SubscriptionsPadlock)
            {
                currentlySubscribed = (from sub in _Subscriptions
                                       where sub.Subscription.ShouldAttemptDelivery(message)
                                       select sub).ToList();
            }

            currentlySubscribed.ForEach(sub =>
            {
                try
                {
                    sub.Proxy.Deliver(message, sub.Subscription);
                }
                catch (Exception exception)
                {
                    // By default ignore any errors and carry on
                    _SubscriberErrorHandler.Handle(message, exception);
                }
            });
        }

        private void PublishAsyncInternal<TMessage>(TMessage message, AsyncCallback callback) where TMessage : class, ITinyMessage
        {
            Action publishAction = () => { PublishInternal<TMessage>(message); };

            publishAction.BeginInvoke(callback, null);
        }
        #endregion
    }
    #endregion
}
