//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface FAOnlineFileSigHandler : NSObject
{
}

+ (id)getInstance;
- (_Bool)DecodeRequestFileInfoForHummer:(id)arg1 fileSize:(unsigned long long *)arg2 fileName:(id *)arg3;
- (id)parseLongConnCancelMsgInternal:(basic_string_075b6133 *)arg1 peerUin:(unsigned long long)arg2 msgTime:(unsigned long long)arg3;
- (id)parseLongConnAcceptMsgInternal:(basic_string_075b6133 *)arg1 peerUin:(unsigned long long)arg2 msgTime:(unsigned long long)arg3;
- (id)parseLongConnRequestMsgInternal:(const Msg_f948e9b8 *)arg1;
- (id)handleOnlineFileSigFromMasterSlave:(struct SlaveMasterMsg *)arg1 msgTime:(unsigned long long)arg2;
- (id)handleOfflineFileNotifyForPreviousOnlineRequest:(const Msg_f948e9b8 *)arg1 fileInfo:(const struct NotOnlineFile *)arg2;
- (id)handleOnlineFileSigFromC2C:(const Msg_f948e9b8 *)arg1;
- (id)handleOnlineFileProgressNotifyMsg:(struct CPBMessageDecoder *)arg1 peerUin:(unsigned long long)arg2 msgTime:(unsigned long long)arg3;
- (id)handlePCSaveWeiYunNotifyMsg:(struct CPBMessageDecoder *)arg1 peerUin:(unsigned long long)arg2 msgTime:(unsigned long long)arg3;
- (unsigned long long)getPeerUinFromSlaveMasterMsg:(struct SlaveMasterMsg *)arg1;
- (unsigned long long)getPeerUinFromC2CMsg:(const Msg_f948e9b8 *)arg1;
- (id)init;

@end

