//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray, NSMutableDictionary, NSString, QQLockDictionary, QQWalletGestureServiceManager;

@interface QQWalletPreloadTaskManager : NSObject
{
    int _retryCount;
    _Bool _isWaiting;
    NSString *_uin;
    _Bool _isCfgUpdate;
    NSMutableArray *_flowCtrResources;
    QQLockDictionary *_currFlowCtrResource;
    QQLockDictionary *_flowCtrResInfo;
    QQLockDictionary *_delayFlowCtrQueue;
    double _uinTimestamp;
    QQLockDictionary *_resReportDic;
    QQWalletGestureServiceManager *_svrMgr;
    NSMutableDictionary *_downloadSpeedMap;
}

+ (id)createUnzipPathWithMD5:(id)arg1 url:(id)arg2;
+ (id)sharedManager;
@property(retain, nonatomic) NSMutableDictionary *downloadSpeedMap; // @synthesize downloadSpeedMap=_downloadSpeedMap;
@property(retain, nonatomic) QQWalletGestureServiceManager *svrMgr; // @synthesize svrMgr=_svrMgr;
- (void).cxx_destruct;
- (void)reportDownloadProgerssForResource:(id)arg1 speed:(id)arg2 success:(_Bool)arg3;
- (void)recordSpeedForResource:(id)arg1 totalBytes:(long long)arg2;
- (void)updateInfoAfterDownloadResource:(id)arg1;
- (_Bool)isValidTimeToReport:(id)arg1 result:(_Bool)arg2;
- (void)reportResource:(id)arg1 downloadResult:(_Bool)arg2;
- (void)didDownloadFailResource:(id)arg1 session:(id)arg2 error:(id)arg3;
- (void)didDownloadSuccessResource:(id)arg1 session:(id)arg2;
- (_Bool)isFreeStorageEnough;
- (void)printLog_Event:(id)arg1;
- (void)addResourcesToDownloadProcess:(id)arg1;
- (void)sendFlowControlResourceToServer:(id)arg1;
- (void)handleFlowControlResources;
- (void)addResourcesToFlowControlProcess:(id)arg1;
- (void)addResourcesToDelayProcess:(id)arg1;
- (void)sendModuleIdsToServerWithBackControlResources:(id)arg1;
- (void)addResourcesToBackControlProcess:(id)arg1;
- (void)filtrateResources:(id)arg1 byModuleIds:(id)arg2;
- (void)writeFlowControlResourceDownloadInfo;
- (id)readFlowControlResourceDownloadInfo;
- (id)getFlowControlInfoFilePath;
- (id)getFlowControlRetryKey:(id)arg1;
- (id)shouldDownloadModuleIdKey;
- (void)resourceConfigHasUpdated;
- (void)removeBackControlResources;
- (void)handlePreloadTaskResources:(id)arg1;
- (id)init;

@end

