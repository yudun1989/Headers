//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "RCTEventEmitter.h"

@interface RCTStatusBarManager : RCTEventEmitter
{
}

+ (id)__rct_export__1303;
+ (id)__rct_export__1192;
+ (id)__rct_export__1071;
+ (id)__rct_export__990;
+ (void)load;
+ (id)moduleName;
- (void)setNetworkActivityIndicatorVisible:(_Bool)arg1;
- (void)setHidden:(_Bool)arg1 withAnimation:(long long)arg2;
- (void)setStyle:(long long)arg1 animated:(_Bool)arg2;
- (void)getHeight:(CDUnknownBlockType)arg1;
- (void)applicationWillChangeStatusBarFrame:(id)arg1;
- (void)applicationDidChangeStatusBarFrame:(id)arg1;
- (void)emitEvent:(id)arg1 forNotification:(id)arg2;
- (id)methodQueue;
- (void)stopObserving;
- (void)startObserving;
- (id)supportedEvents;

@end

