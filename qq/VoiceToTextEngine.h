//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <QQMainProject/IEngineDispatchDelegate-Protocol.h>

@class NSMutableArray, NSString, VoiceToTextPack, VoiceToTextUnPack;
@protocol VoiceToTextDelegate;

@interface VoiceToTextEngine : NSObject <IEngineDispatchDelegate>
{
    NSMutableArray *_sendQueue;
    NSMutableArray *_resendQueue;
    NSMutableArray *_timeoutQueue;
    VoiceToTextPack *_pack;
    VoiceToTextUnPack *_unPack;
    Class _originalClass;
    id <VoiceToTextDelegate> _delegate;
}

+ (id)getInstance;
@property(nonatomic) __weak id <VoiceToTextDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)responsePushVoiceToTextResult:(const void *)arg1 DataLen:(int)arg2;
- (void)notifyError:(id)arg1;
- (void)didRecievedMsg:(CDStruct_7895f40e)arg1;
- (_Bool)sendUnC2CVoiceToTextReq:(id)arg1;
- (_Bool)sendC2CVoiceToTextReq:(id)arg1;
- (void)timeOutFired:(id)arg1;
- (void)resendVoiceToTextReq:(id)arg1 OldSeesionid:(unsigned long long)arg2;
- (void)removeLocalQueue:(unsigned long long)arg1;
- (void)addOutModel:(id)arg1;
- (void)removeOutModel:(unsigned long long)arg1;
- (void)removeResenModel:(unsigned long long)arg1;
- (void)removeSendModel:(unsigned long long)arg1;
- (void)processForReSend:(unsigned long long)arg1 NewModel:(id)arg2;
- (void)replaceSendModel:(id)arg1;
- (id)getOutTimerModel:(unsigned long long)arg1;
- (unsigned long long)getSessionidByTimer:(id)arg1;
- (unsigned long long)getSessionIDBySSOSeq:(int)arg1;
- (id)getMessageModelInSendQueueBySSOSeq:(unsigned long long)arg1;
- (id)getMessageModelInSendQueue:(unsigned long long)arg1;
- (id)getResendModel:(unsigned long long)arg1;
- (id)getSendModelInSendQueue:(unsigned long long)arg1;
- (_Bool)isExistInSendQueue:(id)arg1;
- (unsigned long long)getSessionid;
- (int)getPTTLength:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

