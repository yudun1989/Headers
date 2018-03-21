//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QQGroupFileOperation.h>

#import <QQMainProject/QQGroupFileOIDBRespondDelegate-Protocol.h>

@class NSString, QQGroupFileForwardTask, QQGroupFileOIDBRequest;

@interface QQGroupFileForwardOperation : QQGroupFileOperation <QQGroupFileOIDBRespondDelegate>
{
    int _sendFeedFailCount;
    QQGroupFileOIDBRequest *_forwardRequest;
    QQGroupFileOIDBRequest *_sendFeedRequest;
    QQGroupFileForwardTask *_forwardTask;
}

@property(retain, nonatomic) QQGroupFileForwardTask *forwardTask; // @synthesize forwardTask=_forwardTask;
@property(retain, nonatomic) QQGroupFileOIDBRequest *sendFeedRequest; // @synthesize sendFeedRequest=_sendFeedRequest;
@property(retain, nonatomic) QQGroupFileOIDBRequest *forwardRequest; // @synthesize forwardRequest=_forwardRequest;
- (void).cxx_destruct;
- (void)dealloc;
- (void)finishOperation;
- (void)cancel;
- (void)receiveC2COrDiscussCopyToGroupDoneNotification:(id)arg1;
- (void)groupFileOIDBRequest:(id)arg1 didFailWithError:(id)arg2;
- (void)groupFileOIDBRequest:(id)arg1 didReceivedRespond:(id)arg2;
- (void)start;
- (id)initWithTask:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

