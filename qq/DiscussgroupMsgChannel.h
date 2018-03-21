//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <QQMainProject/IEngineDispatchDelegate-Protocol.h>

@class NSString, QQDiscussgroupMsgHandler;

@interface DiscussgroupMsgChannel : NSObject <IEngineDispatchDelegate>
{
    QQDiscussgroupMsgHandler *_discussgroupMsgHandler;
}

+ (id)getInstance;
@property(readonly, nonatomic) QQDiscussgroupMsgHandler *discussgroupMsgHandler; // @synthesize discussgroupMsgHandler=_discussgroupMsgHandler;
- (id)parseOnlinePush:(struct PbPushMsg *)arg1;
- (_Bool)handleRoamMsg:(struct PbGetDiscussMsgResp *)arg1 seqId:(int)arg2 cmd:(const char *)arg3;
- (_Bool)handleRegisterOfflineMsg:(const struct SvcPbResponsePullDisMsgProxy *)arg1 seqId:(int)arg2 cmd:(const char *)arg3 contextData:(id)arg4;
- (_Bool)handleOnlinePush:(struct PbPushMsg *)arg1 seqId:(int)arg2 cmd:(const char *)arg3;
- (void)didRecievedMsg:(CDStruct_7895f40e)arg1;
- (id)parseRoamMsgs:(struct PbGetDiscussMsgResp *)arg1;
- (void)notifyError:(id)arg1;
- (void)dealloc;
- (void)doInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

