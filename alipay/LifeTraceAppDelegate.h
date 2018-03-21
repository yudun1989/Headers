//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "DTMicroApplicationDelegate-Protocol.h"

@class CSPublishFeedManager, NSDictionary, NSString, UIViewController;

@interface LifeTraceAppDelegate : NSObject <DTMicroApplicationDelegate>
{
    UIViewController *_rootController;
    CSPublishFeedManager *_publishFeedManager;
    NSDictionary *_currentLaunchOptions;
}

+ (void)exitSendFeedApp:(_Bool)arg1;
+ (void)exitLifeTraceApp:(_Bool)arg1;
+ (void)sendCardWithSFFeed:(id)arg1 deleteCardId:(id)arg2;
@property(copy, nonatomic) NSDictionary *currentLaunchOptions; // @synthesize currentLaunchOptions=_currentLaunchOptions;
@property(retain, nonatomic) CSPublishFeedManager *publishFeedManager; // @synthesize publishFeedManager=_publishFeedManager;
@property(retain, nonatomic) UIViewController *rootController; // @synthesize rootController=_rootController;
- (void).cxx_destruct;
- (void)application:(id)arg1 didResumeWithOptions:(id)arg2;
- (void)application:(id)arg1 willStartLaunchingWithOptions:(id)arg2;
- (void)applicationDidCreate:(id)arg1;
- (id)rootControllerInApplication:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

