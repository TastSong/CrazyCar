//
//  Copyright (c) 2016-present, LINE Corporation All rights reserved.
//
//  You are hereby granted a non-exclusive, worldwide, royalty-free license to use,
//  copy and distribute this software in source code or binary form for use
//  in connection with the web services and APIs provided by LINE Corporation.
//
//  As with any software that integrates with the LINE Corporation platform, your use of this software
//  is subject to the LINE Developers Agreement [http://terms2.line.me/LINE_Developers_Agreement].
//  This copyright notice shall be included in all copies or substantial portions of the software.
//
//  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED,
//  INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
//  FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.
//  IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM,
//  DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
//  OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
//

#import <Foundation/Foundation.h>
#import "LineSDKRequestProtocol.h"
#import "LineSDKAttributes.h"

NS_ASSUME_NONNULL_BEGIN

@class LineSDKAccessToken;
@class LineSDKConfiguration;
@class LineSDKGroup;
@class LineSDKMessage;
@class LineSDKProfile;
@class LineSDKSendMessageResult;
@class LineSDKUser;
@class LineSDKVerifyResult;
@class LineSDKBotFriendshipStatusResult;

/**
 Represents the completion handler of the refresh token API.

 @param accessToken A `LineSDKAccessToken` object which is parsed from API response data.
 If an error happens during the request, it is `nil`.

 @param error An error object that indicates why the request failed, or nil if the request was successful.
 */
typedef void(^LineSDKAPITokenRefreshCompletion)(LineSDKAccessToken * _Nullable accessToken, NSError * _Nullable error);

/**
 Represents the completion handler of the verify token API.

 @param result A `LineSDKVerifyResult` object which represents the verifying result.
 If an error happens during the request, it is `nil`.

 @param error An error object that indicates why the request failed, or nil if the request was successful.
 */
typedef void(^LineSDKAPIVerifyTokenCompletion)(LineSDKVerifyResult * _Nullable result, NSError * _Nullable error);

/**
 Represents the completion handler of the get profile API.

 @param profile A `LineSDKVerifyResult` object which represents the user profile.
 If an error happens during the request, it is `nil`.

 @param error An error object that indicates why the request failed, or nil if the request was successful.
 */
typedef void(^LineSDKAPIGetProfileCompletion)(LineSDKProfile * _Nullable profile, NSError * _Nullable error);

typedef void(^LineSDKAPIGetFriendsCompletion)(NSArray<LineSDKUser *> * _Nullable friends, NSString * _Nullable nextPageRequestToken, NSError * _Nullable error);
typedef void(^LineSDKAPIGetGroupsCompletion)(NSArray<LineSDKGroup *> * _Nullable groups, NSString * _Nullable nextPageRequestToken, NSError * _Nullable error);


/**
 Represents the completion handler of the user logout API.

 @param success Whether the user logging out operation finishes with no problem.
 @param error An error object that indicates why the request failed, or nil if the request was successful.
 */
typedef void(^LineSDKAPILogoutCompletion)(BOOL success, NSError * _Nullable error);

typedef void(^LineSDKAPIMultiSendMessagesCompletion)(LineSDKSendMessageResult * _Nullable results, NSError * _Nullable error);


/**
 Represents the completion handler of the get friendship status API.

 @param results A `LineSDKBotFriendshipStatusResult` object which represents the friendship status with the current channel bot.
 @param error An error object that indicates why the request failed, or nil if the request was successful.
 */
typedef void(^LineSDKAPIGetBotFriendshipStatusCompletion)(LineSDKBotFriendshipStatusResult * _Nullable results, NSError * _Nullable error);

typedef LineSDKAPIGetFriendsCompletion LineSDKAPIGetFriendsApproversCompletion;
typedef LineSDKAPIGetFriendsCompletion LineSDKAPIGetGroupsApproversCompletion;

/**
 Represents a utility class for calling the LINE Platform.
 */
NS_SWIFT_NAME(API)
@interface LineSDKAPI : NSObject <LineSDKAuthenticationRefreshDelegate>

/**
 :nodoc:
 Use `initWithConfiguration:` instead.
 */
- (instancetype)init LSDK_UNAVAILABLE("Use `initWithConfiguration:` instead");

/**
 Initializes the `LineSDKAPI` object using the `LineSDKConfiguration` object.

 @param configuration The `LineSDKConfiguration` used to create this API object. Normally, just use `[LineSDKConfiguration defaultConfig]`.
 @return The initialized `LineSDKAPI` object for sending requests to LINE APIs.
 */
- (instancetype)initWithConfiguration:(LineSDKConfiguration *)configuration NS_DESIGNATED_INITIALIZER;

/**
 Refreshes the access token that the SDK is using for the user. To specify a dispatch queue where the completion
 block is to be executed, pass the desired queue into the `queue` parameter.

 @param queue The queue where the completion block is executed. If `nil`, the completion block is executed in the
 main queue.

 @param completion The completion block called when the access token is refreshed.
 */
- (void)refreshTokenWithCallbackQueue:(dispatch_queue_t)queue
                           completion:(LineSDKAPITokenRefreshCompletion)completion
                                NS_SWIFT_NAME(refreshToken(queue:completion:));

/**
 Checks whether the access token that the SDK is using for the user is valid. To specify a dispatch queue
 where the completion block is to be executed, pass the desired queue into the `queue` parameter.

 @param queue The queue where the completion block is executed. If `nil`, the completion block is executed in the
 main queue.

 @param completion The completion block called when the user's token is verified.
 */
- (void)verifyTokenWithCallbackQueue:(dispatch_queue_t)queue
                          completion:(LineSDKAPIVerifyTokenCompletion)completion
                                NS_SWIFT_NAME(verifyToken(queue:completion:));

/**
 Gets the user's profile information. To specify a dispatch queue where the completion block is to be executed,
 pass the desired queue into the `queue` parameter.

 @param queue The queue where the completion block is executed. If `nil`, the completion block is executed in the
 main queue.

 @param completion The completion block called when the user's profile information is returned.
 */
- (void)getProfileWithCallbackQueue:(dispatch_queue_t)queue
                         completion:(LineSDKAPIGetProfileCompletion)completion
                                NS_SWIFT_NAME(getProfile(queue:completion:));

/**
 :nodoc:
 Returns a friend list of the user. Unless already having granted the channel,
 users who've configured the privacy filter are excluded from the list. This API
 returns a maximum of 200 users per request.

 @param queue Queue where the completion block is executed. The completion block
 is executed in the main queue if this is nil.

 @param pageRequestToken If a nextPageRequestToken value is included in the
 previous API call's completion block, pass it here to get the following page of
 the user's friend list.

 @param completion Completion block called when the user's friend list is
 returned.
 */
- (void)getFriendsWithCallbackQueue:(dispatch_queue_t)queue
                   pageRequestToken:(nullable NSString *)pageRequestToken
                         completion:(LineSDKAPIGetFriendsCompletion)completion
NS_SWIFT_NAME(getFriends(queue:pageToken:completion:));

/**
 :nodoc:
 Returns a list of the user's friends who have already approved the channel,
 regardless each user's privacy filter setting. This API returns a maximum of
 200 users per request.

 @param queue Queue where the completion block is executed. The completion block
 is executed in the main queue if this is nil.

 @param pageRequestToken If a nextPageRequestToken value is included in the
 previous API call's completion block, pass it here to get the following page of
 the list.

 @param completion Completion block called when the approver list is returned.
 */
- (void)getFriendsApproversWithCallbackQueue:(dispatch_queue_t)queue
                            pageRequestToken:(nullable NSString *)pageRequestToken
                                  completion:(LineSDKAPIGetFriendsApproversCompletion)completion
NS_SWIFT_NAME(getFriendsApprovers(queue:pageToken:completion:));

/**
 :nodoc:
 Returns a list of groups that the user belongs to. This API returns a maximum
 of 200 groups per request.

 @param queue Queue where the completion block is executed. The completion block
 is executed in the main queue if this is nil.

 @param pageRequestToken If a nextPageRequestToken value is included in the
 previous API call's completion block, pass it here to get the following page of
 the list.

 @param completion Completion block called when the list of groups is returned.
 */
- (void)getGroupsWithCallbackQueue:(dispatch_queue_t)queue
                  pageRequestToken:(nullable NSString *)pageRequestToken
                        completion:(LineSDKAPIGetGroupsCompletion)completion
NS_SWIFT_NAME(getGroups(queue:pageToken:completion:));

/**
 :nodoc:
 Returns a list of users in the specified group who've already approved the
 channel. Note that this API does not take friendship status into account.

 @param groupID The group ID.

 @param queue Queue where the completion block is executed. The completion block
 is executed in the main queue if this is nil.

 @param pageRequestToken If a nextPageRequestToken value is included in the
 previous API call's completion block, pass it here to get the following page of
 the list.

 @param completion Completion block called when the approver list is returned.
 */
- (void)getGroupsApproversInGroup:(NSString *)groupID
                withCallbackQueue:(dispatch_queue_t)queue
                 pageRequestToken:(nullable NSString *)pageRequestToken
                       completion:(LineSDKAPIGetGroupsApproversCompletion)completion
NS_SWIFT_NAME(getGroupsApprovers(group:queue:pageToken:completion:));

/**
 Revokes the access token. To specify a dispatch queue where the completion block is to be executed, pass the
 desired queue into the `queue` parameter.

 @param queue The queue where the completion block is executed. If `nil`, the completion block is executed in the
 main queue.

 @param completion The completion block called when the logout is completed.
 */
- (void)logoutWithCallbackQueue:(dispatch_queue_t)queue
                     completion:(LineSDKAPILogoutCompletion)completion
                            NS_SWIFT_NAME(logout(queue:completion:));

/**
 Gets the friendship status of the user and the bot linked to your LINE Login channel.
 
 @param queue The queue where the completion block is executed. If `nil`, the completion block is executed in the
 main queue.
 @param completion The completion block to be invoked when the friendship status is returned.
 */
- (void)getBotFriendshipStatusWithCallbackQueue:(dispatch_queue_t)queue
                                     completion:(LineSDKAPIGetBotFriendshipStatusCompletion)completion
NS_SWIFT_NAME(getBotFriendshipStatus(queue:completion:));

/**
 Gets the access token that the SDK is using for the user.

 @return The `LineSDKAccessToken` object which contains the access token. `nil` if no access token is available.
 */
- (nullable LineSDKAccessToken *)currentAccessToken;

- (void)refreshTokenWithAccessToken:(nullable LineSDKAccessToken *)accessToken
                         completion:(LineSDKAPITokenRefreshCompletion)completion;

// These APIs execute callback on the main-thread.

/**
 Refreshes the access token that the SDK is using for the user. The completion block is
 executed in the main queue.

 @param completion Completion block called when the access token is refreshed.
 */
- (void)refreshTokenWithCompletion:(LineSDKAPITokenRefreshCompletion)completion
    NS_SWIFT_UNAVAILABLE("Use refreshToken(queue: .main, completion:) instead");

/**
 Checks whether the access token that the SDK is using for the user is valid or
 not. The completion block is executed in the main queue.

 @param completion Completion block called when the access token is verified.
 */
- (void)verifyTokenWithCompletion:(LineSDKAPIVerifyTokenCompletion)completion
    NS_SWIFT_UNAVAILABLE("Use verifyToken(queue: .main, completion:) instead");

/**
 Gets the user's profile information. The completion block is executed in the
 main queue.

 @param completion Completion block called when the user's profile information
 is returned.
 */
- (void)getProfileWithCompletion:(LineSDKAPIGetProfileCompletion)completion
    NS_SWIFT_UNAVAILABLE("Use getProfile(queue: .main, completion:) instead");

/**
 :nodoc:
 Returns a friend list of the user. Unless already having granted the channel,
 users who've configured the privacy filter are excluded from the list. This API
 returns a maximum of 200 users per request.

 The completion block is executed in the main queue.

 @param pageRequestToken If a nextPageRequestToken value is included in the
 previous API call's completion block, pass it here to get the following page of
 the user's friend list.

 @param completion Completion block called when the user's friend list is
 returned.
 */
- (void)getFriendsWithPageRequestToken:(nullable NSString *)pageRequestToken
                            completion:(LineSDKAPIGetFriendsCompletion)completion
    NS_SWIFT_UNAVAILABLE("Use getFriends(queue: .main, pageToken:completion:) instead");

/**
 :nodoc:
 Returns a list of the user's friends who have already approved the channel,
 regardless each user's privacy filter setting.

 The completion block is executed in the main queue.

 @param pageRequestToken If a nextPageRequestToken value is included in the
 previous API call's completion block, pass it here to get the following page of
 the list.

 @param completion Completion block called when the approver list is returned.
 */
- (void)getFriendsApproversWithPageRequestToken:(nullable NSString *)pageRequestToken
                                     completion:(LineSDKAPIGetFriendsApproversCompletion)completion
    NS_SWIFT_UNAVAILABLE("Use getFriendsApprovers(queue: .main, pageToken:completion:) instead");

/**
 :nodoc:
 Returns a list of groups that the user belongs to. This API returns a maximum
 of 200 groups per request.

 The completion block is executed in the main queue.

 @param pageRequestToken If a nextPageRequestToken value is included in the
 previous API call's completion block, pass it here to get the following page of
 the list.

 @param completion Completion block called when the list of groups is returned.
 */
- (void)getGroupsWithPageRequestToken:(nullable NSString *)pageRequestToken
                           completion:(LineSDKAPIGetGroupsCompletion)completion
    NS_SWIFT_UNAVAILABLE("Use getGroups(queue: .main, pageToken:completion:) instead");

/**
 :nodoc:
 Returns a list of users in the specified group who've already approved the
 channel. Note that this API does not take friendship status into account.

 The completion block is executed in the main queue.

 @param groupID The group ID.

 @param pageRequestToken If a nextPageRequestToken value is included in the
 previous API call's completion block, pass it here to get the following page of
 the list.

 @param completion Completion block called when the approver list is returned.
 */
- (void)getGroupsApproversInGroup:(NSString *)groupID
             withPageRequestToken:(nullable NSString *)pageRequestToken
                       completion:(LineSDKAPIGetGroupsApproversCompletion)completion
NS_SWIFT_UNAVAILABLE("Use getGroupsApprovers(group: queue: .main, pageToken:completion:) instead");

/**
 Revokes the access token. The completion block is executed in the main queue.

 @param completion Completion block called when the logout is complete.
 */
- (void)logoutWithCompletion:(LineSDKAPILogoutCompletion)completion
    NS_SWIFT_UNAVAILABLE("Use logout(queue: .main, completion:) instead");

/**
 :nodoc:
 Sends messages to a chat on behalf of a user. The completion block is executed
 in the main queue.

 @param messages An array of LineSDKMessage objects.

 @param chatID The chat ID to send messages to.

 @param completion Completion block called when the sending messages is complete.
 */
- (void)sendMessages:(NSArray<LineSDKMessage *> *)messages
            toChatID:(NSString *)chatID
          completion:(void(^)(NSError * _Nullable error))completion
    NS_SWIFT_NAME(send(messages:to:completion:));

/**
 :nodoc:
 Sends messages to multiple users on behalf of the current user. The completion
 block is executed in the main queue.

 @param messages An array of LineSDKMessage objects.

 @param userIDs An array of user IDs to send messages to.

 @param completion Completion block called when the sending messages is complete.
 */
- (void)sendMessages:(NSArray<LineSDKMessage *> *)messages
           toUserIDs:(NSArray<NSString *> *)userIDs
          completion:(LineSDKAPIMultiSendMessagesCompletion)completion
    NS_SWIFT_NAME(send(messages:to:completion:));

/**
 Gets the friendship status of the user and the bot linked to your LINE Login channel. The completion
 block is executed in the main queue.

 @param completion Completion block called when the result is returned.
 */
- (void)getBotFriendshipStatusWithCompletion:(LineSDKAPIGetBotFriendshipStatusCompletion)completion
    NS_SWIFT_UNAVAILABLE("Use getBotFriendshipStatus(queue: .main, pageToken:completion:) instead");

@end

NS_ASSUME_NONNULL_END
