//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "KLPushDelegate-Protocol.h"
#import "XFMessageReceiverProtocol-Protocol.h"

@class NSString;
@protocol KCMessageReceiverDelegate, OS_dispatch_queue;

@interface KCMessageReceiver : NSObject <KLPushDelegate, XFMessageReceiverProtocol>
{
    id <KCMessageReceiverDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_linkCallbackQueue;
    NSObject<OS_dispatch_queue> *_reveiveQueue;
    unsigned long long _maxReceiveQueueSize;
    unsigned long long _reveiveQueueSize;
}

@property unsigned long long reveiveQueueSize; // @synthesize reveiveQueueSize=_reveiveQueueSize;
@property(nonatomic) unsigned long long maxReceiveQueueSize; // @synthesize maxReceiveQueueSize=_maxReceiveQueueSize;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *reveiveQueue; // @synthesize reveiveQueue=_reveiveQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *linkCallbackQueue; // @synthesize linkCallbackQueue=_linkCallbackQueue;
@property(nonatomic) __weak id <KCMessageReceiverDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)removeMessagesFromServer:(id)arg1 threadID:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)messagesFromPB:(id)arg1 threadID:(id)arg2;
- (void)pullOldMessageForThread:(id)arg1 startSeq:(long long)arg2 endSeq:(long long)arg3 countLimit:(unsigned long long)arg4 completion:(CDUnknownBlockType)arg5;
- (id)pullOldRequestFromThreadID:(id)arg1 startSeq:(long long)arg2 endSeq:(long long)arg3 countLimit:(unsigned long long)arg4;
- (id)callbackQueue;
- (void)_didRecvPacket:(id)arg1;
- (_Bool)didRecvPacket:(id)arg1;
- (_Bool)shouldRecvPacket:(id)arg1;
- (void)logout;
- (void)login;
- (id)messageDeleteCommand;
- (int)targetType;
- (id)messageFromPBMessage:(id)arg1 threadID:(id)arg2;
- (id)messagePullOldCommand;
- (id)messagePushCommand;
- (void)customInit;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

