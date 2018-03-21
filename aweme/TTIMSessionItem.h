//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString, TTIMChatMessage;

@interface TTIMSessionItem : NSObject <NSCopying>
{
    _Bool _isSessionDeleted;
    int _level;
    int _permission;
    int _groupType;
    int _status;
    int _stick;
    int _noDisturb;
    NSString *_sessionId;
    NSString *_sessionName;
    NSString *_sessionRealName;
    NSString *_sessionPortrait;
    NSString *_sessionDescription;
    long long _owner;
    long long _creator;
    NSString *_notice;
    NSString *_managers;
    long long _createTime;
    long long _modifyTime;
    NSString *_ext;
    long long _lastReadClientMsgId;
    long long _lastMsgTime;
    long long _sessionShortId;
    long long _unreadCount;
    TTIMChatMessage *_lastVisibleMsg;
    long long _lastSvrMsgId;
}

@property(nonatomic) long long lastSvrMsgId; // @synthesize lastSvrMsgId=_lastSvrMsgId;
@property(retain, nonatomic) TTIMChatMessage *lastVisibleMsg; // @synthesize lastVisibleMsg=_lastVisibleMsg;
@property(nonatomic) long long unreadCount; // @synthesize unreadCount=_unreadCount;
@property(nonatomic) int noDisturb; // @synthesize noDisturb=_noDisturb;
@property(nonatomic) int stick; // @synthesize stick=_stick;
@property(nonatomic) long long sessionShortId; // @synthesize sessionShortId=_sessionShortId;
@property(nonatomic) long long lastMsgTime; // @synthesize lastMsgTime=_lastMsgTime;
@property(nonatomic) long long lastReadClientMsgId; // @synthesize lastReadClientMsgId=_lastReadClientMsgId;
@property(nonatomic) _Bool isSessionDeleted; // @synthesize isSessionDeleted=_isSessionDeleted;
@property(copy, nonatomic) NSString *ext; // @synthesize ext=_ext;
@property(nonatomic) int status; // @synthesize status=_status;
@property(nonatomic) long long modifyTime; // @synthesize modifyTime=_modifyTime;
@property(nonatomic) long long createTime; // @synthesize createTime=_createTime;
@property(copy, nonatomic) NSString *managers; // @synthesize managers=_managers;
@property(copy, nonatomic) NSString *notice; // @synthesize notice=_notice;
@property(nonatomic) int groupType; // @synthesize groupType=_groupType;
@property(nonatomic) int permission; // @synthesize permission=_permission;
@property(nonatomic) long long creator; // @synthesize creator=_creator;
@property(nonatomic) long long owner; // @synthesize owner=_owner;
@property(nonatomic) int level; // @synthesize level=_level;
@property(copy, nonatomic) NSString *sessionDescription; // @synthesize sessionDescription=_sessionDescription;
@property(copy, nonatomic) NSString *sessionPortrait; // @synthesize sessionPortrait=_sessionPortrait;
@property(copy, nonatomic) NSString *sessionRealName; // @synthesize sessionRealName=_sessionRealName;
@property(copy, nonatomic) NSString *sessionName; // @synthesize sessionName=_sessionName;
@property(copy, nonatomic) NSString *sessionId; // @synthesize sessionId=_sessionId;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithSessionId:(id)arg1;

@end

