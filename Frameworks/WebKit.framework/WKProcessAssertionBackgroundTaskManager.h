/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

@interface WKProcessAssertionBackgroundTaskManager : NSObject {
    BOOL _appIsBackground;
    unsigned int _backgroundTask;
    unsigned int _needsToRunInBackgroundCount;
}

+ (id)shared;

- (void)_applicationDidEnterBackground:(id)arg1;
- (void)_applicationWillEnterForeground:(id)arg1;
- (void)_updateBackgroundTask;
- (void)dealloc;
- (void)decrementNeedsToRunInBackgroundCount;
- (void)incrementNeedsToRunInBackgroundCount;
- (id)init;

@end