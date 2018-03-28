//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDate, NSMutableDictionary;

@interface TTWebviewAntiHijackServerConfig : NSObject
{
    _Bool _isEnabled;
    _Bool _isProcessing;
    unsigned long long _refreshInterval;
    NSDate *_lastGetBlackListTime;
    NSMutableDictionary *_blackListDic;
    NSDate *_lastSendFeedbackLogTime;
}

+ (id)cache_;
+ (id)sharedTTWebviewAntiHijackServerConfig;
@property(retain, nonatomic) NSDate *lastSendFeedbackLogTime; // @synthesize lastSendFeedbackLogTime=_lastSendFeedbackLogTime;
@property(retain) NSMutableDictionary *blackListDic; // @synthesize blackListDic=_blackListDic;
@property _Bool isProcessing; // @synthesize isProcessing=_isProcessing;
@property(retain) NSDate *lastGetBlackListTime; // @synthesize lastGetBlackListTime=_lastGetBlackListTime;
@property unsigned long long refreshInterval; // @synthesize refreshInterval=_refreshInterval;
@property _Bool isEnabled; // @synthesize isEnabled=_isEnabled;
- (void).cxx_destruct;
- (void)sendFeedbackLogAsync_:(id)arg1 path:(id)arg2 requestURL:(id)arg3;
- (void)tryGetBlackListAsync_;
- (void)onAppDidBecomeActive_:(id)arg1;
- (void)removeObservers_;
- (void)addObservers_;
- (_Bool)isInBlackList:(id)arg1;
- (void)updateServerConfig:(id)arg1;
- (void)dealloc;
- (id)init;

@end

