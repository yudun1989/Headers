//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSString;

@interface QQWalletConfigManager : NSObject
{
    NSString *_uin;
    NSMutableDictionary *_completionBlockCache;
    NSMutableDictionary *_observerDic;
    int _refreshType;
    long long _seriesNo;
    int _refreshTime;
    double _lastReqTime;
    NSString *_commonMsg;
    NSMutableDictionary *_mConfig;
    NSMutableDictionary *_configMapCache;
    double _currentReqTime;
    NSMutableDictionary *_lastReqTimeDic;
    NSMutableDictionary *_refreshTimeDic;
    _Bool _isInstanceInit;
}

+ (id)shareManager;
- (void).cxx_destruct;
- (void)saveConfigToCache;
- (void)readConfigFromCache;
- (void)didReceivedActionCommand:(id)arg1;
- (void)handleWillEnterForegroundAction;
- (void)handleNetworkReconnectAction;
- (void)handleAccountLogoutAction;
- (void)handleChangeAccountAction;
- (void)removeCompletionBlockBySID:(int)arg1;
- (CDUnknownBlockType)getCompletionBlockBySID:(int)arg1;
- (void)setCompletionBlock:(CDUnknownBlockType)arg1 forSID:(int)arg2;
- (void)clearConfigMapCache;
- (void)updateConfigMapCacheForKey:(id)arg1 config:(id)arg2;
- (void)notifyUpdateConfig:(id)arg1 forKey:(id)arg2;
- (void)updateRefreshTime:(id)arg1;
- (void)updateLastReqTime:(id)arg1;
- (void)parseConfig:(id)arg1 seq:(int)arg2;
- (void)requestConfigWithReqType:(long long)arg1 params:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)requestAllConfigWait:(int)arg1;
- (void)requestAllConfig:(int)arg1;
- (void)requestConfigWhenLoginOrReconnect;
- (double)currentConfigTime;
- (long long)getCurrentSeriesNo;
- (_Bool)isTimeToReqValid:(long long)arg1;
- (void)requestConfigForBusiness:(long long)arg1 params:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)getConfigObject:(id)arg1 path:(id)arg2;
- (id)getConfigObject:(id)arg1 forClass:(Class)arg2;
- (id)getConfig:(id)arg1;
- (void)unregisterObserver:(id)arg1 forKey:(id)arg2;
- (void)registerObserver:(id)arg1 forKey:(id)arg2;
- (void)checkCurrentUinIfChanged;
- (void)resetManager;
- (void)initManager;
- (void)dealloc;
- (id)init;

@end

