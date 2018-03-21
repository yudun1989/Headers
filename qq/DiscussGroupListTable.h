//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <QQMainProject/DBAccountChangedProtocol-Protocol.h>

@class DiscussGroupListTableOperation, NSString;

@interface DiscussGroupListTable : NSObject <DBAccountChangedProtocol>
{
    DiscussGroupListTableOperation *_dbOperation;
}

- (void).cxx_destruct;
- (void)onDBChanged:(id)arg1;
- (void)deleteDiscussGroups:(id)arg1;
- (void)deleteDiscussGroup:(unsigned long long)arg1;
- (void)replaceDiscussGroupInfos:(id)arg1;
- (void)replaceDiscussGroupInfo:(id)arg1;
- (void)updateDiscussGroupInfos:(id)arg1;
- (void)updateDiscussGroupInfo:(id)arg1;
- (void)refillWithDiscussGroupInfos:(id)arg1;
- (id)loadDiscussGroupInfo:(unsigned long long)arg1;
- (id)loadDiscussGroupList;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

