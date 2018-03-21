//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "AppiraterDelegate-Protocol.h"
#import "TAGFunctionCallTagHandler-Protocol.h"

@class NSString;

@interface KSRemaindRateService : NSObject <AppiraterDelegate, TAGFunctionCallTagHandler>
{
}

+ (void)setup;
+ (id)sharedKSRemaindRateService;
- (void)setupAppirater;
- (void)appiraterDidOptToRemindLater:(id)arg1;
- (void)appiraterDidOptToRate:(id)arg1;
- (void)appiraterDidDeclineToRate:(id)arg1;
- (void)execute:(id)arg1 parameters:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

