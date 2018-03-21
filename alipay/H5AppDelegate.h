//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "DTMicroApplicationDelegate-Protocol.h"
#import "H5ServiceDelegate-Protocol.h"

@class H5Session, NSString, UIViewController;

@interface H5AppDelegate : NSObject <H5ServiceDelegate, DTMicroApplicationDelegate>
{
    _Bool _ignoreWaitRender;
    UIViewController *_rootController;
    H5Session *_session;
    NSString *_appId;
    UIViewController *_modalPresentationContextViewController;
    long long _originModalPresentationStyle;
    long long _originLaunchMode;
}

@property(nonatomic) _Bool ignoreWaitRender; // @synthesize ignoreWaitRender=_ignoreWaitRender;
@property(nonatomic) long long originLaunchMode; // @synthesize originLaunchMode=_originLaunchMode;
@property(nonatomic) long long originModalPresentationStyle; // @synthesize originModalPresentationStyle=_originModalPresentationStyle;
@property(nonatomic) __weak UIViewController *modalPresentationContextViewController; // @synthesize modalPresentationContextViewController=_modalPresentationContextViewController;
@property(copy, nonatomic) NSString *appId; // @synthesize appId=_appId;
@property(retain, nonatomic) H5Session *session; // @synthesize session=_session;
@property(retain, nonatomic) UIViewController *rootController; // @synthesize rootController=_rootController;
- (void).cxx_destruct;
- (_Bool)isSceneEnableAlive:(id)arg1;
- (void)applicationWillShow:(id)arg1 options:(id)arg2;
- (void)applicationWillHide:(id)arg1;
- (_Bool)applicationShouldReleaseWhenReceivedMemoryWarning:(id)arg1;
- (double)survivalTimeIntervalOfApplication:(id)arg1;
- (_Bool)applicationShouldDelayRelease:(id)arg1;
- (void)dealloc;
- (void)appEnterBackground;
- (_Bool)isSystemVersion8_0;
- (void)applicationWillTerminate:(id)arg1 animated:(_Bool)arg2;
- (void)applicationWillPause:(id)arg1;
- (void)applicationDidFinishLaunching:(id)arg1;
- (id)rootControllerInApplication:(id)arg1;
- (void)application:(id)arg1 willResumeWithOptions:(id)arg2;
- (void)application:(id)arg1 willStartLaunchingWithOptions:(id)arg2;
- (void)applicationDidPresent:(id)arg1 params:(id)arg2;
- (void)applicationShouldPresent:(id)arg1 params:(id)arg2 navigationController:(id)arg3;
- (_Bool)applicationShouldStart:(id)arg1 params:(id)arg2 aunchMode:(long long)arg3;
- (long long)applicationLaunchMode:(id)arg1 params:(id)arg2;
- (_Bool)applicationShouldStartMultapplication:(id)arg1 launchMode:(long long)arg2 sourceId:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

