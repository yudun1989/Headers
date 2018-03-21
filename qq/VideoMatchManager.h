//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class QQWeakProxy, VideoHeartBeatRequest, VideoMatchRequest;

@interface VideoMatchManager : NSObject
{
    QQWeakProxy *_weakProxy;
    VideoMatchRequest *_matchRequest;
    VideoHeartBeatRequest *_sendHeartRequest;
    VideoMatchRequest *_getMatchRequesterRequest;
    int _currentReMatchType;
}

+ (void)parseMsgType0x210SubMsgType0xe4:(const void *)arg1 DataLen:(int)arg2 subMsgType:(unsigned int)arg3 subMsgSeq:(unsigned int)arg4;
+ (id)exitVideoMatchManager;
- (void)dealloc;
- (void)clearHeartBeatRequest;
- (void)didRecvResult:(id)arg1 SvrNumber:(unsigned int)arg2 svrType:(unsigned int)arg3;
- (id)applyErrorType:(unsigned long long)arg1 pkgResult:(unsigned int)arg2 ToUserInfo:(id)arg3;
- (void)_innerStartVideoMatch:(long long)arg1:(long long)arg2 svrType:(int)arg3 filterArr:(id)arg4;
- (void)getMatchVideoRequestor;
- (void)SendHeartBeatWithStatus:(int)arg1;
- (void)exitMatchVideoChater:(int)arg1;
- (void)reMatchVideoChater:(id)arg1 Type:(int)arg2;
- (void)startMatchVideoChater:(id)arg1;
- (_Bool)isVideoChaterMatchLoading;
- (void)setDelegate:(id)arg1;
- (id)initWithDelegate:(id)arg1;
- (id)init;

@end

