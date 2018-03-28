//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TTVideoService.h"

@class NSMutableArray, TTVideoFollowApi, TTVideoUnfollowApi;

@interface TTVideoUserInfoService : TTVideoService
{
    NSMutableArray *_items;
    TTVideoFollowApi *_followApi;
    TTVideoUnfollowApi *_unfollowApi;
}

@property(retain, nonatomic) TTVideoUnfollowApi *unfollowApi; // @synthesize unfollowApi=_unfollowApi;
@property(retain, nonatomic) TTVideoFollowApi *followApi; // @synthesize followApi=_followApi;
- (void).cxx_destruct;
- (void)onServiceClearData;
- (_Bool)onServiceMemoryWarning;
- (void)onServiceTerminate;
- (void)onAppWillBecomeActive;
- (void)onAppWillResignActive;
- (void)onServiceEnterForeground;
- (void)onServiceEnterBackground;
- (void)onServiceInit;
- (void)updateFollow:(_Bool)arg1 userId:(long long)arg2;
- (void)addUserInfo:(id)arg1;
- (void)updateUserInfo:(id)arg1;
- (void)unfollowUser:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)followUser:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end

