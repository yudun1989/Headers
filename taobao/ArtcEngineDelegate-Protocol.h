//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class ARTCEngineKitStatsInfo, NSDictionary, NSString;

@protocol ArtcEngineDelegate <NSObject>
- (void)onFirstRemoteVideoFrame:(int)arg1 height:(int)arg2 time:(int)arg3;
- (void)onConnectionLost;
- (void)onConnectionInterrupted;
- (void)onError:(int)arg1 code:(int)arg2 errorMsg:(NSString *)arg3;
- (void)onLeaveChannel;
- (void)onUserLeftChannel:(NSString *)arg1 leftReason:(int)arg2;
- (void)onUserJoinedChannel:(NSString *)arg1;
- (void)onChannelIdUpdated:(NSString *)arg1;
- (void)onRejoinChannelSuccess:(NSString *)arg1;
- (void)onJoinChannelSuccess:(NSString *)arg1 time:(int)arg2;
- (void)onCreateChannelSuccess:(NSString *)arg1;
- (void)onInitializeSuccess;

@optional
- (NSString *)onGetNetworkType;
- (void)onSendingSignalingMessage:(NSString *)arg1 param:(NSDictionary *)arg2 onSuccess:(void (^)(NSDictionary *))arg3 onError:(void (^)(NSDictionary *, NSError *))arg4;
- (void)onAudioFrameProcess:(_Bool)arg1 audio10ms:(short *)arg2 length:(unsigned long long)arg3 samplingFreq:(int)arg4 isStereo:(_Bool)arg5;
- (void)onChannelUserList:(NSDictionary *)arg1;
- (void)onVideoFrameCaptured:(void *)arg1 rotation:(int)arg2;
- (void)onChannelClosed:(NSString *)arg1 reason:(NSString *)arg2 reasonId:(int)arg3;
- (void)onCancelCall:(NSString *)arg1 remoteUserID:(NSString *)arg2;
- (void)onKick:(NSString *)arg1 remoteUserID:(NSString *)arg2;
- (void)onAnswered:(NSString *)arg1 callID:(NSString *)arg2 userID:(NSString *)arg3 result:(int)arg4 role:(int)arg5;
- (void)onAnswer:(NSString *)arg1 callID:(NSString *)arg2 result:(int)arg3 resultMsg:(NSString *)arg4;
- (void)onCallTimeout:(NSString *)arg1 userID:(NSString *)arg2;
- (void)onInvited:(NSString *)arg1 userID:(NSString *)arg2 result:(_Bool)arg3;
- (void)onInvite:(NSString *)arg1 callID:(NSString *)arg2 userID:(NSString *)arg3 result:(int)arg4 resultMsg:(NSString *)arg5;
- (void)onCalled:(NSString *)arg1 callID:(NSString *)arg2 userID:(NSString *)arg3 result:(_Bool)arg4 role:(int)arg5;
- (void)onCall:(NSString *)arg1 callID:(NSString *)arg2 userID:(NSString *)arg3 result:(int)arg4 resultMsg:(NSString *)arg5;
- (void)onLastmileQuality:(int)arg1;
- (void)onArtcStats:(ARTCEngineKitStatsInfo *)arg1;
- (void)onArtcMsg:(NSString *)arg1 level:(int)arg2;
@end

