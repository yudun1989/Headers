//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <QQMainProject/IPacketSendResultHandler-Protocol.h>

@class NSString;

@interface QQNearbyAccostMsgSender : NSObject <IPacketSendResultHandler>
{
}

+ (id)sharedInstance;
- (_Bool)handleRecivedPacket:(char *)arg1 bufferLength:(int)arg2 sendingModel:(id)arg3;
- (void)notifyMsgSentResult:(id)arg1 result:(int)arg2;
- (int)sendPbPttMsg:(id)arg1 pttMsgInfo:(id)arg2;
- (int)SendPbImgMessage:(id)arg1 offlineImgInfo:(id)arg2 shareAppInfo:(id)arg3;
- (_Bool)sendMessage:(id)arg1 withEncoder:(id)arg2;
- (int)sendStructuredXmlMessage:(id)arg1;
- (_Bool)sendMessage:(id)arg1;
- (id)sendingModelForMsg:(id)arg1;
- (void)cacheSentMessage:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

