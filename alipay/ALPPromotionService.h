//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class DTRpcAsyncCaller;

@interface ALPPromotionService : NSObject
{
    _Bool _appIsStartAlive;
    DTRpcAsyncCaller *_requestRpcAsyncCaller;
}

@property(nonatomic) _Bool appIsStartAlive; // @synthesize appIsStartAlive=_appIsStartAlive;
@property(retain, nonatomic) DTRpcAsyncCaller *requestRpcAsyncCaller; // @synthesize requestRpcAsyncCaller=_requestRpcAsyncCaller;
- (void).cxx_destruct;
- (void)getCDPSpaceData;
- (void)dataSourceInitFinishNotification;
- (void)logout:(id)arg1;
- (void)loginSuccess:(id)arg1;
- (void)appStartAlive:(id)arg1;
- (void)appEnterBackground:(id)arg1;
- (void)appBecomeActive:(id)arg1;
- (void)startPromotionBiz;
- (void)addNotifications;
- (void)willDestroy;
- (void)start;

@end

