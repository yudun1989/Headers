//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface QQGroupBulletinMsgProxy : NSObject
{
}

+ (id)sharedInstance;
- (id)getMessageContent:(struct CPBMessageDecoder *)arg1;
- (id)parse0x580Response:(id)arg1 result:(BOOL)arg2;
- (id)create0x580Request:(unsigned int)arg1;
- (id)getDefaultTitle:(id)arg1;
- (id)formatTime:(id)arg1;
- (id)escapeXmlString:(id)arg1;
- (id)createXmlFrom852MsgDataDic:(id)arg1 feedId:(id)arg2 groupCode:(unsigned int)arg3 date:(id)arg4 feedType:(int)arg5;
- (id)parse0x852_48Response:(id)arg1;
- (id)parse0x852Response:(id)arg1;
- (id)create0x852_48Request:(long long)arg1 uin:(long long)arg2 auth:(id)arg3 feedType:(unsigned short)arg4;
- (id)create0x852Request:(id)arg1 groupCode:(unsigned int)arg2 auth:(id)arg3;

@end

