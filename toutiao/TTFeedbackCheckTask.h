//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TTStartupTask.h"

#import "UIApplicationDelegate-Protocol.h"

@class NSString, UIWindow;

@interface TTFeedbackCheckTask : TTStartupTask <UIApplicationDelegate>
{
}

+ (void)addFeedbackLaunchCheck;
- (void)applicationDidBecomeActive:(id)arg1;
- (_Bool)isResident;
- (id)taskIdentifier;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(retain, nonatomic) UIWindow *window;

@end

