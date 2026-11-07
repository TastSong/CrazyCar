#import "SceneDelegate.h"
#import "UnityAppController.h"

@implementation SceneDelegate

- (void)scene:(UIScene *)scene
    willConnectToSession:(UISceneSession *)session
                 options:(UISceneConnectionOptions *)connectionOptions
{
    if (![scene isKindOfClass:[UIWindowScene class]]) return;
    UIWindowScene *windowScene = (UIWindowScene *)scene;

    UnityAppController *appController =
        (UnityAppController *)[UIApplication sharedApplication].delegate;

    // Unity 在 didFinishLaunchingWithOptions 里已经建好了 rootViewController，
    // 但那个 UIWindow 是 frame-based 的，在 scene 生命周期下不会显示。
    // 这里新建一个绑定 windowScene 的 window，把根视图接过来。
    UIWindow *window = [[UIWindow alloc] initWithWindowScene:windowScene];
    window.frame = windowScene.coordinateSpace.bounds;
    window.backgroundColor = [UIColor blackColor];
    window.rootViewController = [appController rootViewController];
    self.window = window;

    // Unity 内部 UnityGetMainWindow() 读的就是这个属性
    appController.window = window;
    [window makeKeyAndVisible];

    // 冷启动时携带的 URL（第三方登录 / 支付回调等）转交 Unity
    for (UIOpenURLContext *ctx in connectionOptions.URLContexts) {
        [appController application:[UIApplication sharedApplication]
                           openURL:ctx.URL
                           options:@{UIApplicationOpenURLOptionsSourceApplicationKey:
                                         ctx.options.sourceApplication ?: @""}];
    }
    // Universal Link
    for (NSUserActivity *activity in connectionOptions.userActivities) {
        if ([activity.activityType isEqualToString:NSUserActivityTypeBrowsingWeb]) {
            [appController application:[UIApplication sharedApplication]
                  continueUserActivity:activity
                    restorationHandler:^(NSArray<id<UIUserActivityRestoring>> *restorableObjects) {}];
        }
    }
}

#pragma mark - 生命周期转发（关键，不转发 Unity 不启动）

- (void)sceneDidBecomeActive:(UIScene *)scene
{
    UnityAppController *ac = (UnityAppController *)[UIApplication sharedApplication].delegate;
    if ([ac respondsToSelector:@selector(applicationDidBecomeActive:)]) {
        [ac applicationDidBecomeActive:[UIApplication sharedApplication]];
    }
}

- (void)sceneWillResignActive:(UIScene *)scene
{
    UnityAppController *ac = (UnityAppController *)[UIApplication sharedApplication].delegate;
    if ([ac respondsToSelector:@selector(applicationWillResignActive:)]) {
        [ac applicationWillResignActive:[UIApplication sharedApplication]];
    }
}

- (void)sceneWillEnterForeground:(UIScene *)scene
{
    UnityAppController *ac = (UnityAppController *)[UIApplication sharedApplication].delegate;
    if ([ac respondsToSelector:@selector(applicationWillEnterForeground:)]) {
        [ac applicationWillEnterForeground:[UIApplication sharedApplication]];
    }
}

- (void)sceneDidEnterBackground:(UIScene *)scene
{
    UnityAppController *ac = (UnityAppController *)[UIApplication sharedApplication].delegate;
    if ([ac respondsToSelector:@selector(applicationDidEnterBackground:)]) {
        [ac applicationDidEnterBackground:[UIApplication sharedApplication]];
    }
}

- (void)scene:(UIScene *)scene openURLContexts:(NSSet<UIOpenURLContext *> *)URLContexts
{
    UnityAppController *ac = (UnityAppController *)[UIApplication sharedApplication].delegate;
    for (UIOpenURLContext *ctx in URLContexts) {
        [ac application:[UIApplication sharedApplication]
                openURL:ctx.URL
                options:@{UIApplicationOpenURLOptionsSourceApplicationKey:
                              ctx.options.sourceApplication ?: @""}];
    }
}

- (void)scene:(UIScene *)scene continueUserActivity:(NSUserActivity *)userActivity
{
    UnityAppController *ac = (UnityAppController *)[UIApplication sharedApplication].delegate;
    [ac application:[UIApplication sharedApplication]
        continueUserActivity:userActivity
          restorationHandler:^(NSArray<id<UIUserActivityRestoring>> *restorableObjects) {}];
}

@end
