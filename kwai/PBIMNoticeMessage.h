//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString, PBBasicI18nCopyWriting, PBIMNoticeMessage_NoticeNewFriend;

@interface PBIMNoticeMessage : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasI18NCopyWriting; // @dynamic hasI18NCopyWriting;
@property(retain, nonatomic) PBBasicI18nCopyWriting *i18NCopyWriting; // @dynamic i18NCopyWriting;
@property(copy, nonatomic) NSString *msg; // @dynamic msg;
@property(retain, nonatomic) PBIMNoticeMessage_NoticeNewFriend *noticeNewFriend; // @dynamic noticeNewFriend;
@property(readonly, nonatomic) int noticeOneOfCase; // @dynamic noticeOneOfCase;

@end

