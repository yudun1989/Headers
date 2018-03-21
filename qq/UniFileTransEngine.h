//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <QQMainProject/CIMFileStorageSvcListDelegate-Protocol.h>
#import <QQMainProject/IEngineDispatchDelegate-Protocol.h>

@class NSMutableArray, NSMutableDictionary, NSString;

@interface UniFileTransEngine : NSObject <CIMFileStorageSvcListDelegate, IEngineDispatchDelegate>
{
    NSMutableArray *_fileTransferQueue;
    NSMutableArray *_observers;
    NSMutableDictionary *_resourceFileDic;
    int _latestWifiPicSvrRequestTime;
    int _carrierType;
    long long _lastBigDataReqUin;
}

+ (id)bufferForBigDataConfigurations;
+ (void)processBDHConfig:(const struct SubCmd0x501Rspbody_SrvAddrs *)arg1;
+ (id)GetInstance;
- (void)notifyError:(id)arg1;
- (void)didRecievedMsg:(CDStruct_7895f40e)arg1;
- (void)resolveBigDataConfigurations:(char *)arg1 dataLen:(int)arg2 push:(_Bool)arg3;
- (void)respBigDataConfigurations:(id)arg1;
- (int)requestBigDataConfigurations;
- (void)onChangeAccount;
- (void)onHandleAccountLogout;
- (void)onLoginSuccess;
- (id)convertIp:(unsigned int)arg1;
- (void)CIMFileStorageSvcList:(id)arg1 didRecievedMsg:(CDStruct_7895f40e)arg2;
- (void)CIMFileStorageSvcList_Fav:(struct FileStoragePushFSSvcList)arg1 resp:(struct PushReq)arg2;
- (void)CIMFileStorageSvcList_BigData:(struct FileStoragePushFSSvcList)arg1 resp:(struct PushReq)arg2;
- (void)CIMFileStorageSvcList_IpList:(struct FileStoragePushFSSvcList)arg1 resp:(struct PushReq)arg2;
- (void)onMSFNetworkApnStateNotification:(id)arg1;
- (void)onMSFNetworkStateNotification:(id)arg1;
- (void)actionPicServerListUpdated;
- (void)removeObserver:(id)arg1;
- (_Bool)addObserver:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

