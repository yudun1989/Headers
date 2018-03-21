//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@interface MunionExtManager : NSObject
{
    NSMutableDictionary *_extModelDic;
    NSMutableDictionary *_successBlockDic;
    NSMutableDictionary *_failBlockDic;
}

+ (id)shareInstance;
@property(retain, nonatomic) NSMutableDictionary *failBlockDic; // @synthesize failBlockDic=_failBlockDic;
@property(retain, nonatomic) NSMutableDictionary *successBlockDic; // @synthesize successBlockDic=_successBlockDic;
@property(retain, nonatomic) NSMutableDictionary *extModelDic; // @synthesize extModelDic=_extModelDic;
- (void).cxx_destruct;
- (void)zuanzanCallBackNameSpace:(id)arg1 data:(id)arg2 caller:(id)arg3;
- (void)sdkResolveCacheImageErrorUT;
- (void)triggerMunionReqDataErrUT;
- (void)triggerMunionReqDataUT:(id)arg1 pids:(id)arg2 userDic:(id)arg3 isForce:(_Bool)arg4;
- (void)getMunionDataUT:(id)arg1;
- (void)sdkInitIsCalledUT:(id)arg1 pids:(id)arg2;
- (void)timeOfLoadCache:(long long)arg1 nameSpace:(id)arg2;
- (id)analiseMemoryDataToCacheData:(id)arg1;
- (void)replaceDataAndSaveToCacheOnGlobalQ:(id)arg1 fileName:(id)arg2;
- (void)replaceCpmCacheAndSave:(id)arg1 nameSpace:(id)arg2;
- (id)analiseCacheDataToMemoryData:(id)arg1;
- (void)loadFileCacheByName:(id)arg1 adType:(int)arg2;
- (void)loadFileCache:(id)arg1 adType:(int)arg2;
- (id)getExtModelByNameSpace:(id)arg1;
- (void)setUserDic:(id)arg1 nameSpace:(id)arg2 onSuccessBlock:(CDUnknownBlockType)arg3 onFailBlock:(CDUnknownBlockType)arg4;
- (id)resolveCpmData:(id)arg1;
- (void)callFailBlock:(id)arg1 nameSpace:(id)arg2;
- (void)callDelegateAfterGetNewADData:(id)arg1 nameSpace:(id)arg2;
- (void)clearMemDataAndCache:(id)arg1;
- (void)callDelegateAfterGetNewADDataOnMainThread:(id)arg1 nameSpace:(id)arg2;
- (void)sendCpmRequest:(long long)arg1 nameSpace:(id)arg2 userDic:(id)arg3;
- (id)getCpmUserDic:(id)arg1 pids:(id)arg2;
- (_Bool)isPidsModifyed:(id)arg1 nameSpace:(id)arg2;
- (long long)getCpmForceTrigerType:(id)arg1 pids:(id)arg2;
- (long long)getForceTrigerType:(int)arg1 nameSpace:(id)arg2 pids:(id)arg3;
- (void)triggerMuionRequestByAdType:(int)arg1 nameSpace:(id)arg2 pids:(id)arg3 userDic:(id)arg4 isForce:(_Bool)arg5;
- (void)triggerMuionRequestByAdType:(int)arg1 nameSpace:(id)arg2 pids:(id)arg3;
- (id)getMunionDataByadType:(int)arg1 nameSpace:(id)arg2;
- (void)munionCpmInitRequest:(id)arg1 pids:(id)arg2;
- (void)munionInitRequest:(int)arg1 nameSpace:(id)arg2 pids:(id)arg3;
- (void)setAsyncMuionParm:(id)arg1 adType:(int)arg2 nameSpace:(id)arg3 pids:(id)arg4 onSuccessBlock:(CDUnknownBlockType)arg5 onFailBlock:(CDUnknownBlockType)arg6;
- (void)setAsyncMuionParm:(id)arg1 adType:(int)arg2 nameSpace:(id)arg3 pids:(id)arg4 callBackBlock:(CDUnknownBlockType)arg5;
- (id)init;

@end

