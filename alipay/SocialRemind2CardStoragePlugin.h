//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SocialPlugin-Protocol.h"

@class NSString;

@interface SocialRemind2CardStoragePlugin : NSObject <SocialPlugin>
{
}

- (void)updateCommentCardTemplateData:(id)arg1 payload:(id)arg2 optionCount:(id)arg3;
- (void)updatePraiseCardTemplateData:(id)arg1 payload:(id)arg2 optionCount:(id)arg3;
- (_Bool)updateCardWithOptionSyncPayload:(id)arg1 optionCount:(id)arg2;
- (_Bool)updateCardWithPraiseSyncPayload:(id)arg1 optionCount:(id)arg2;
- (void)updateCardTemplateData:(id)arg1 rewardDic:(id)arg2;
- (_Bool)updateCardWithORewardSyncPayload:(id)arg1 optionCount:(id)arg2;
- (_Bool)canHandle:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

