//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "RCTEventEmitter.h"

@class NSString;

@interface RCTAppState : RCTEventEmitter
{
    NSString *_lastKnownState;
}

+ (id)__rct_export__1180;
+ (void)load;
+ (id)moduleName;
- (void).cxx_destruct;
- (void)getCurrentAppState:(CDUnknownBlockType)arg1 error:(CDUnknownBlockType)arg2;
- (void)handleAppStateDidChange:(id)arg1;
- (void)handleMemoryWarning;
- (void)stopObserving;
- (void)startObserving;
- (id)supportedEvents;
- (id)constantsToExport;
- (id)methodQueue;

@end

