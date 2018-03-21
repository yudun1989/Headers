//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray, NSRecursiveLock;

@interface QZAccountManager : NSObject
{
    NSMutableArray *_observers;
    NSRecursiveLock *_lock;
}

+ (id)instance;
- (void).cxx_destruct;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)onAccountLogout;
- (void)onAccountLogin;
- (id)init;

@end

