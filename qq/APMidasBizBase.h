//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray;

@interface APMidasBizBase : NSObject
{
    int saveType;
    NSMutableArray *_reqs;
    _Bool requestToChangekey;
    _Bool changeKeyJustNow;
    _Bool needChangeKey;
}

- (void).cxx_destruct;
- (void)onUpdateKeyNetworkError:(long long)arg1 offerId:(id)arg2 openId:(id)arg3;
- (void)onKeyUpdateError:(long long)arg1 message:(id)arg2 offerId:(id)arg3 openId:(id)arg4;
- (void)onUpdateSecKey:(id)arg1 payKey:(id)arg2 keyTime:(id)arg3 offerId:(id)arg4 openId:(id)arg5;
- (_Bool)onHttpResp:(id)arg1;
- (id)startReq:(id)arg1 paramsContructor:(id)arg2 netErr:(CDUnknownBlockType)arg3 err:(CDUnknownBlockType)arg4 succ:(CDUnknownBlockType)arg5 completion:(CDUnknownBlockType)arg6 needKey:(_Bool)arg7;
- (void)pushReq:(id)arg1;
- (void)resume;
- (long long)currChannel;
- (void)dealloc;
- (id)init;

@end

