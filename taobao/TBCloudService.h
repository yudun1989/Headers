//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "TRDPushServiceProtocal-Protocol.h"

@class NSDictionary, NSString, NSTimer, TRDPushService, TRDPutTaskStrategy;
@protocol TBCloudServiceProtocol;

@interface TBCloudService : NSObject <TRDPushServiceProtocal>
{
    _Bool _bPushServiceVaild;
    _Bool _bUserMtopService;
    id <TBCloudServiceProtocol> _delegate;
    NSString *_appVersion;
    TRDPushService *_pushService;
    NSTimer *_commandTimer;
    NSDictionary *_deviceInfo;
    TRDPutTaskStrategy *_pushTaskStrategy;
    double _endTime;
}

@property(nonatomic) _Bool bUserMtopService; // @synthesize bUserMtopService=_bUserMtopService;
@property(nonatomic) double endTime; // @synthesize endTime=_endTime;
@property(retain, nonatomic) TRDPutTaskStrategy *pushTaskStrategy; // @synthesize pushTaskStrategy=_pushTaskStrategy;
@property(retain, nonatomic) NSDictionary *deviceInfo; // @synthesize deviceInfo=_deviceInfo;
@property(retain, nonatomic) NSTimer *commandTimer; // @synthesize commandTimer=_commandTimer;
@property(retain, nonatomic) TRDPushService *pushService; // @synthesize pushService=_pushService;
@property(retain, nonatomic) NSString *appVersion; // @synthesize appVersion=_appVersion;
@property(nonatomic) _Bool bPushServiceVaild; // @synthesize bPushServiceVaild=_bPushServiceVaild;
@property(nonatomic) __weak id <TBCloudServiceProtocol> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)createMtopServer:(id)arg1;
- (void)sendMessageByMtop:(id)arg1;
- (void)sendMessageByLongLink:(id)arg1;
- (void)sendMessage:(id)arg1;
- (void)getRemotePutTask;
- (_Bool)parseTraceStatus:(id)arg1;
- (void)sendGetTask;
- (void)timerFireMethod:(id)arg1;
- (void)getRemoteTraceStatus;
- (void)pushCommand:(id)arg1 andTask:(id)arg2;
- (void)delayToGetMtopTask;
- (void)setContentWithInfo:(id)arg1 andMtopService:(_Bool)arg2;
- (void)listener;
- (id)init;
- (void)clearTraceStatus;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

