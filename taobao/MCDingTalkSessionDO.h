//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDate, NSString;
@protocol TBIMMessageAdapter;

@interface MCDingTalkSessionDO : NSObject
{
    _Bool _isDelete;
    _Bool _isRemind;
    NSString *_sessionId;
    long long _unreadChatMessageCount;
    id <TBIMMessageAdapter> _lastMessage;
    NSString *_lastmsgContent;
    NSString *_draft;
    NSDate *_lastMessageDate;
    NSString *_summary;
    long long _tag;
}

@property(nonatomic) _Bool isRemind; // @synthesize isRemind=_isRemind;
@property(nonatomic) long long tag; // @synthesize tag=_tag;
@property(nonatomic) _Bool isDelete; // @synthesize isDelete=_isDelete;
@property(copy, nonatomic) NSString *summary; // @synthesize summary=_summary;
@property(copy, nonatomic) NSDate *lastMessageDate; // @synthesize lastMessageDate=_lastMessageDate;
@property(copy, nonatomic) NSString *draft; // @synthesize draft=_draft;
@property(copy, nonatomic) NSString *lastmsgContent; // @synthesize lastmsgContent=_lastmsgContent;
@property(retain, nonatomic) id <TBIMMessageAdapter> lastMessage; // @synthesize lastMessage=_lastMessage;
@property(nonatomic) long long unreadChatMessageCount; // @synthesize unreadChatMessageCount=_unreadChatMessageCount;
@property(copy, nonatomic) NSString *sessionId; // @synthesize sessionId=_sessionId;
- (void).cxx_destruct;

@end

