//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface QQGroupBaseInfoPbProxy : NSObject
{
}

+ (id)shareInstance;
- (id)parseGroupTagBuffer:(char *)arg1 len:(int)arg2;
- (id)parseGroupFaceWallListBuffer:(char *)arg1 len:(int)arg2;
- (_Bool)parseGroupAdminMaxNumBuffer:(char *)arg1 len:(int)arg2 ret:(int *)arg3 errMsg:(basic_string_075b6133 *)arg4 adminMaxNum:(unsigned int *)arg5;
- (_Bool)parseGroupHistoricalMsgInfoBuffer:(char *)arg1 len:(int)arg2 ret:(int *)arg3 errMsg:(basic_string_075b6133 *)arg4 joinGroupTime:(unsigned int *)arg5 historicalMsgMaxSeq:(unsigned int *)arg6 joinGroupMaxSeq:(unsigned int *)arg7 groupCode:(unsigned long long *)arg8;
- (id)parseWifiChatGroupNoticeBuffer:(char *)arg1 len:(int)arg2;
- (id)parseWifiChatGroupInfoBuffer:(char *)arg1 len:(int)arg2;
- (id)parseGroupInfoBuffer:(char *)arg1 len:(int)arg2;
- (_Bool)parseGroupJoinAdminQuestionBuffer:(char *)arg1 len:(int)arg2 ret:(int *)arg3 errMsg:(basic_string_075b6133 *)arg4 question:(basic_string_075b6133 *)arg5 answer:(basic_string_075b6133 *)arg6 groupOpt:(int *)arg7;
- (_Bool)parseGroupJoinAdminQuestionBuffer:(char *)arg1 len:(int)arg2 ret:(int *)arg3 errMsg:(basic_string_075b6133 *)arg4 question:(basic_string_075b6133 *)arg5 groupOpt:(int *)arg6;
- (id)getGroupBaseInfoOIDBSSOPKG:(unsigned long long)arg1 command:(unsigned int)arg2 serviceType:(unsigned int)arg3 subcmd:(unsigned int)arg4;
- (id)getGroupBaseInfoBuffer:(unsigned long long)arg1 subcmd:(unsigned int)arg2 serviceType:(unsigned int)arg3;

@end

