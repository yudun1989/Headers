//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QQMsgRecallBase.h>

#import <QQMainProject/QQGroupFileOIDBRespondDelegate-Protocol.h>

@class NSMutableDictionary, NSString, QQGroupFileOIDBRequest;

@interface QQMsgRecallGroupFile : QQMsgRecallBase <QQGroupFileOIDBRespondDelegate>
{
    NSMutableDictionary *_recallQueue;
    QQGroupFileOIDBRequest *_deleteFileRequest;
}

@property(retain, nonatomic) QQGroupFileOIDBRequest *deleteFileRequest; // @synthesize deleteFileRequest=_deleteFileRequest;
- (void).cxx_destruct;
- (void)groupFileOIDBRequest:(id)arg1 didFailWithError:(id)arg2;
- (void)groupFileOIDBRequest:(id)arg1 didReceivedRespond:(id)arg2;
- (void)onReceiveRecallGroupFile:(id)arg1;
- (_Bool)deleteFileWithFileInfo:(id)arg1;
- (void)doFileRecallOperation:(id)arg1;
- (_Bool)doRecallOperationPre:(id)arg1;
- (void)doRecallOperation:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

