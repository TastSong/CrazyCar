//
//  Copyright (c) 2016-present, LINE Corporation. All rights reserved.
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

NS_ASSUME_NONNULL_BEGIN

/**
 The action type of template message.
 */
typedef NS_ENUM(NSUInteger, LineSDKTemplateMessageActionType) {

    /**
     When a control associated with this action is tapped, the URI specified
     in the uri property is opened.
     */
    LineSDKTemplateMessageActionTypeURI NS_SWIFT_NAME(uri),

} NS_SWIFT_NAME(TemplateMessageActionType);

/**
 Represents an action for your bot to take when a user taps a button or an
 image in a message.
 */
NS_SWIFT_NAME(TemplateMessageAction)
@protocol LineSDKTemplateMessageAction <NSObject>

/**
 The action type of template message. Only URI action is supported in the
 current version.
 */
@property (nonatomic, assign, readonly) LineSDKTemplateMessageActionType type;

@end

NS_ASSUME_NONNULL_END
