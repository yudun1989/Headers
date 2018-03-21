//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <QQMainProject/DBAccountChangedProtocol-Protocol.h>
#import <QQMainProject/IQQDBOperationBase-Protocol.h>

@class NSString;

@interface QQTmpMessageTable : NSObject <DBAccountChangedProtocol, IQQDBOperationBase>
{
}

- (unsigned long long)getTableSign;
- (id)getTmpMsgSrc:(id)arg1;
- (int)getTmpMsgSrcType:(id)arg1;
- (void)deleteTmpMsgSrcRecordWithUin:(id)arg1;
- (void)insertTmpMsgSrcRecordWithUin:(id)arg1 type:(int)arg2 src:(id)arg3;
- (void)onDBChanged:(id)arg1;
- (id)init;
- (id)getTmpMsgSrc:(id)arg1 inDb:(id)arg2;
- (int)getTmpMsgSrcType:(id)arg1 inDb:(id)arg2;
- (void)deleteTmpMsgSrcRecordWithUin:(id)arg1 inDb:(id)arg2;
- (void)insertTmpMsgSrcRecordWithUin:(id)arg1 type:(int)arg2 src:(id)arg3 inDb:(id)arg4;
- (void)updateTableInDb:(id)arg1;
- (void)createTableInDb:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

