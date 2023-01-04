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

/**
 Represents an ID token returned by the LINE Platform. The ID token is a JSON Web Token object. The LINE SDK
 parses and verifies JWT tokens for you.
 */
@interface LineSDKJSONWebToken : NSObject

/**
 The issuer claim of the ID token. The issuer of ID tokens from the LINE Platform is always
 https://access.line.me.
 */
@property (nonatomic, readonly) NSString *issuer;

/**
 The subject claim of the ID token. The subject of ID tokens from the LINE Platform is the user ID of the
 authorized user.
 */
@property (nonatomic, readonly) NSString *subject;

/**
 The audience claim of the ID token. The audience of ID tokens from the LINE Platform is the channel ID of your
 app.
 */
@property (nonatomic, readonly) NSString *audience;

/**
 The expiration time of the ID token.
 */
@property (nonatomic, readonly) NSDate *expiration;

/**
 The issued time of the ID token.
 */
@property (nonatomic, readonly) NSDate *issueAt;

/**
 The user’s display name. Not included if the `profile` permission was not specified in the authorization
 request.
 */
@property (nonatomic, readonly) NSString *name;

/**
 The user’s profile image URL. Not included if the `profile` permission was not specified in the authorization
 request.
 */
@property (nonatomic, readonly) NSURL *pictureURL;

/**
 The user’s email address. Not included if the `email` permission was not specified in the authorization request.
 */
@property (nonatomic, readonly) NSString *email;

/**
 Gets an NSString value from the current payload.

 @param key The key of a claim that contains an NSString value.
 @return The NSString value for `key`. `nil` if `key` has no value or the value is not an NSString value.
 */
- (NSString *)stringValueForKey:(NSString *)key;

/**
 Gets a BOOL value from the current payload.

 @param key The key of a claim that contains a BOOL value.
 @return The BOOL value for `key`. `nil` if `key` has no value or the value is not a BOOL value.
 */
- (BOOL)boolValueForKey:(NSString *)key;

/**
 Gets an NSNumber value from the current payload.

 @param key The key of a claim that contains an NSNumber value.
 @return The NSNumber value for `key`. `nil` if `key` has no value or the value is not an NSNumber value.
 */
- (NSNumber *)numberValueForKey:(NSString *)key;

/**
 Creates a JSON Web token from the given JWT string.

 @param string The JWT string composed of the header, payload, and signature.
 @return A JWT object. `nil` if the input string is not a valid JWT string.
 */
- (instancetype)initWithString:(NSString *)string;

/**
 Creates a JSON Web token from the given data.

 @param data The JWT data composed of the header, payload, and signature.
 @return A JWT object. `nil` if the input data is not a valid JWT data.
 */
- (instancetype)initWithData:(NSData *)data;

@end

