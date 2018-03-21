//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <QQMainProject/NSCoding-Protocol.h>

@class NSArray, NSString;

@interface C2CRoamMessageInfo : NSObject <NSCoding>
{
    NSString *_uin;
    long long _messageRandom;
    int _messageSeq;
    int _lastTime;
    _Bool _isComplete;
    int _state;
    int _faultTime;
    int _msgID;
    int _requestCount;
    _Bool _isFromOldTable;
    int _ssoSeq;
    _Bool _exception;
    int _loadCount;
    NSArray *_msgsBeforeFaultTime;
    NSArray *_largeMsgIdList;
    int _xo;
}

@property(retain, nonatomic) NSArray *largeMsgIdList; // @synthesize largeMsgIdList=_largeMsgIdList;
@property(retain, nonatomic) NSArray *msgsBeforeFaultTime; // @synthesize msgsBeforeFaultTime=_msgsBeforeFaultTime;
@property(nonatomic) int loadCount; // @synthesize loadCount=_loadCount;
@property(nonatomic) _Bool exception; // @synthesize exception=_exception;
@property(nonatomic) int ssoSeq; // @synthesize ssoSeq=_ssoSeq;
@property(nonatomic) _Bool isFromOldTable; // @synthesize isFromOldTable=_isFromOldTable;
@property(nonatomic) int requestCount; // @synthesize requestCount=_requestCount;
@property(nonatomic) int msgID; // @synthesize msgID=_msgID;
@property(nonatomic) int faultTime; // @synthesize faultTime=_faultTime;
@property(nonatomic) int state; // @synthesize state=_state;
@property(nonatomic) int lastTime; // @synthesize lastTime=_lastTime;
@property(nonatomic) _Bool isComplete; // @synthesize isComplete=_isComplete;
@property(nonatomic) int messageSeq; // @synthesize messageSeq=_messageSeq;
@property(nonatomic) long long messageRandom; // @synthesize messageRandom=_messageRandom;
@property(retain, nonatomic) NSString *uin; // @synthesize uin=_uin;
- (id)description;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)init:(id)arg1 messageRandom:(int)arg2 lastTime:(int)arg3 faultTime:(int)arg4 isComplete:(_Bool)arg5 state:(int)arg6;

@end

