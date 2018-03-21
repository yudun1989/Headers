//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSMutableSet;

@interface MPUnificationSentinel : NSObject
{
    _Bool _lastShowNetworkActivityIndicator;
    NSMutableSet *_blockedNetworkActivityIndicatorTags;
    NSMutableDictionary *_dataNetworkActivityIndicator;
    _Bool _lastDisableAutoLockScreen;
    NSMutableSet *_blockedAutoLockScreenTags;
    NSMutableDictionary *_dataAutoLockScreen;
}

+ (id)sharedSentinel;
- (void).cxx_destruct;
- (void)logDisableAutoLockScreenWarning;
- (void)filterDisableAutoLockScreenOperation;
- (void)disableAutoLockScreen:(_Bool)arg1 tag:(id)arg2;
- (id)computeErrorTagForAutoLockScreen;
- (void)countAutoLockScreen:(_Bool)arg1 tag:(id)arg2;
- (void)logNetworkActivityIndicatorWarning;
- (void)filterNetworkActivityIndicatorOperation;
- (void)showNetworkActivityIndicator:(_Bool)arg1 tag:(id)arg2;
- (id)computeErrorTagForNetworkActivityIndicator;
- (void)countNetworkActivityIndicator:(_Bool)arg1 tag:(id)arg2;
- (id)init;

@end

