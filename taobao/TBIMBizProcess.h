//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "MKTBizProcess-Protocol.h"

@class NSString;

@interface TBIMBizProcess : NSObject <MKTBizProcess>
{
}

- (void)chatNavItemDataWithGroupInfo:(id)arg1 groupUser:(id)arg2 completeBlock:(CDUnknownBlockType)arg3;
- (void)requestNoticeBarWithGroupInfo:(id)arg1 groupUser:(id)arg2 completBlock:(CDUnknownBlockType)arg3;
- (void)addPeopleProcessWithGroupInfo:(id)arg1;
- (void)checkJoinConditionProcessWithGroupInfo:(id)arg1 userList:(id)arg2 compleBlock:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

