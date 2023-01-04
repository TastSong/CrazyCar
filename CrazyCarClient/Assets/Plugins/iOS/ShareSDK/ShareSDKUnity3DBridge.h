//
//  ShareSDKUnity3DBridge.h
//  Unity-iPhone
//
//  Created by chenjd on 15/7/30.
//
//

#import <Foundation/Foundation.h>
#import "UnityAppController.h"
#import <ShareSDKExtension/SSERestoreSceneHeader.h>

@interface ShareSDKUnity3DBridge : NSObject

@end

@interface UnityAppController (ShareSDKRestoreSceneInit)

@end

@interface ShareSDKUnityRestoreSceneCallback : NSObject <ISSERestoreSceneDelegate>

+ (ShareSDKUnityRestoreSceneCallback *)defaultCallBack;

@end
