//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "O2OCommonSyncManager.h"

@class O2OMerchantMessageDB;

@interface O2OSyncManager : O2OCommonSyncManager
{
    long long _index;
    O2OMerchantMessageDB *_messageDB;
}

+ (_Bool)removeMerchantISVSyncObserver:(id)arg1;
+ (_Bool)addMerchantISVSyncObserver:(id)arg1;
+ (void)removeMyOrderSyncObserver:(id)arg1;
+ (void)addMyOrderSyncObserver:(id)arg1;
+ (_Bool)isEqualMyQuestionSyncKey:(id)arg1;
+ (_Bool)isEqualPurchaseOrderSynKey:(id)arg1;
+ (_Bool)isEqualMyOrderSyncKey:(id)arg1;
+ (void)removeKabaoRedSyncObserver:(id)arg1;
+ (void)addKabaoRedSyncObserver:(id)arg1;
+ (_Bool)isEqualKabaoRedSyncKey:(id)arg1;
+ (void)removeCommentMessageSyncObserver:(id)arg1;
+ (void)addCommentMessageSyncObserver:(id)arg1;
+ (_Bool)isEqualCommentMessageSyncKey:(id)arg1;
+ (id)sharedInstance;
@property(retain, nonatomic) O2OMerchantMessageDB *messageDB; // @synthesize messageDB=_messageDB;
- (void).cxx_destruct;
- (void)updateKoubeiMenuBadges:(id)arg1 syncCode:(id)arg2;
- (void)syncMessageDidLoad:(id)arg1 syncCode:(id)arg2;
- (void)parseCommentMessages:(id)arg1 syncCode:(id)arg2;
- (void)syncMessage:(id)arg1;
- (void)mockSyncMessage:(id)arg1;
- (void)mockSync;
- (void)stop;
- (void)start;

@end

