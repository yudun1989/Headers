//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <QQMainProject/IContentUpdateServiceInternal-Protocol.h>

@class NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

@interface ContentUpdateService : NSObject <IContentUpdateServiceInternal>
{
    NSMutableDictionary *_delegatDic;
    NSObject<OS_dispatch_queue> *_requesContentQueue;
}

+ (int)businessTypeByAppId:(unsigned int)arg1;
+ (id)GetInstance;
- (void).cxx_destruct;
- (void)dealloc;
- (void)updateVersion:(int)arg1 name:(id)arg2 version:(unsigned int)arg3;
- (_Bool)updateContentSuccess:(int)arg1 name:(id)arg2 hasVersion:(_Bool)arg3 version:(unsigned int)arg4 forAllLoginUser:(_Bool)arg5;
- (void)updateSource:(id)arg1;
- (void)notifyDelegates:(id)arg1;
- (void)onRequestContentUpdateSuccess:(id)arg1;
- (void)onRequestContentUpdateFailed:(id)arg1;
- (void)contentUpdate;
- (void)handleFileUpdate:(id)arg1;
- (void)contentUpdate:(int)arg1;
- (id)getReqContentQueue;
- (id)getExtend:(int)arg1 name:(id)arg2;
- (unsigned int)getNewVersion:(int)arg1 name:(id)arg2;
- (unsigned int)getVersion:(int)arg1 name:(id)arg2;
- (_Bool)isItemRenew:(int)arg1 name:(id)arg2;
- (_Bool)needShowRedFlag:(int)arg1 name:(id)arg2;
- (_Bool)needUpdateByAppid:(int)arg1 name:(id)arg2;
- (void)addContentItemByAppid:(int)arg1 name:(id)arg2 version:(unsigned int)arg3 forAllLoginUser:(_Bool)arg4;
- (_Bool)hasVersion:(int)arg1 name:(id)arg2;
- (void)addContentItemByAppid:(int)arg1 name:(id)arg2 forAllLoginUser:(_Bool)arg3;
- (void)setDelegate:(id)arg1 appid:(int)arg2;
- (void)preRegisteAlwaysUpdateRequestionDelegate;
- (void)preRegisteUpdateRequestionDelegate;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

