//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface QQSharpVoipMsgPbProxy : NSObject
{
}

+ (id)parseCancelVoipCallBackRsp:(id)arg1;
+ (id)genCancelVoipCallBackReq:(id)arg1 peerPhoneInfo:(id)arg2 callBackID:(id)arg3 fromUin:(id)arg4 freeTrail:(_Bool)arg5;
+ (id)parseVoipTypeRsp:(id)arg1;
+ (id)genVoipTypeReqAVCSInfoModel:(unsigned long long)arg1 callPolicy:(long long)arg2 fromPhoneInfo:(id)arg3 formUin:(id)arg4 toPhoneInfo:(id)arg5 toUin:(id)arg6 freeTrail:(_Bool)arg7;

@end

