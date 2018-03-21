//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray, NSNotification;
@protocol OS_dispatch_queue;

@interface DFSplashMgr : NSObject
{
    NSNotification *currentNotification;
    NSMutableArray *cAdPages;
    NSObject<OS_dispatch_queue> *splashQueue;
}

+ (id)sharedSplashMgr;
- (void).cxx_destruct;
- (void)updateStartupPage:(id)arg1;
- (void)addStartupPage:(id)arg1;
- (void)checkImagefile:(id)arg1;
- (void)syncStartupPage;
- (void)deleteStartupPage:(id)arg1;
- (void)updateCacheTime:(id)arg1;
- (void)dealloc;
- (void)refreshNewStartpage;
- (void)updateSpaceInfo:(id)arg1;
- (void)deleteSpaceInfo:(id)arg1;
- (_Bool)checkTimeInterval;
- (void)checkStartPage;
- (void)longLinkNotifyWithBizId:(id)arg1;
- (void)handleSplashOP:(id)arg1;
- (id)init;

@end

