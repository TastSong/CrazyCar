/**
 * Copyright 2015 Kakao Corp.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#import <Foundation/Foundation.h>

FOUNDATION_EXPORT double KakaoOpenSDKVersionNumber;

FOUNDATION_EXPORT const unsigned char KakaoOpenSDKVersionString[];

#import <KakaoOpenSDK/KOError.h>
#import <KakaoOpenSDK/KOImages.h>
#import <KakaoOpenSDK/KOLoginButton.h>
#import <KakaoOpenSDK/KOSession.h>
#import <KakaoOpenSDK/KOUtils.h>
#import <KakaoOpenSDK/KOAgeAuthQueryStringBuilder.h>

#import <KakaoOpenSDK/KOSessionTask+UserManagementAPI.h>
#import <KakaoOpenSDK/KOSessionTask+TalkAPI.h>
#import <KakaoOpenSDK/KOSessionTask+StoryAPI.h>
#import <KakaoOpenSDK/KOSessionTask+PushAPI.h>
#import <KakaoOpenSDK/KOSessionTask+TokenAPI.h>
#import <KakaoOpenSDK/KOSessionTask+FriendAPI.h>
#import <KakaoOpenSDK/KOSessionTask+AgeAuthAPI.h>
#import <KakaoOpenSDK/KOSessionTask+AppFriendAPI.h>

#define KAKAO_SDK_IOS_VERSION_STRING    @"1.22.0"
