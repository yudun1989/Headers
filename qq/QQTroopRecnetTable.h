//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <QQMainProject/DBAccountChangedProtocol-Protocol.h>

@class NSString, QQTroopRecentTableOperation;

@interface QQTroopRecnetTable : NSObject <DBAccountChangedProtocol>
{
    QQTroopRecentTableOperation *_operation;
}

- (void)updateMessage:(id)arg1;
- (id)getRecentMsgWithGroupCodes:(id)arg1;
- (id)getRecentMsg:(unsigned long long)arg1;
- (id)getRecentMsg;
- (void)updateMessageReadStateAndExInfo:(id)arg1;
- (void)updateMessageExInfo:(id)arg1;
- (void)updateMessagePicUrlOfRichinfo:(id)arg1;
- (void)updateMessageRichinfo:(id)arg1;
- (void)updateRichStateWithGroupcode:(id)arg1 msgID:(long long)arg2 state:(int)arg3;
- (void)setMsgSendStateWithGroupcode:(id)arg1 msgID:(id)arg2 state:(int)arg3 errorCode:(int)arg4;
- (void)updateGroupMessageSeq:(long long)arg1 groupCode:(id)arg2 msgID:(long long)arg3;
- (void)insertMessage:(id)arg1;
- (void)deleteMsgWithGroupcode:(id)arg1;
- (void)deleteAllSync;
- (void)deleteAll;
- (void)onDBChanged:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

