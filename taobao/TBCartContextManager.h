//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSString;

@interface TBCartContextManager : NSObject
{
    _Bool _orangeOpened;
    NSMutableDictionary *_contextDict;
    NSString *_clientName;
    NSString *_divisionCode;
}

+ (id)totalDiscountTitle;
+ (void)setTotalDiscountTitle:(id)arg1;
+ (void)setProcessorDelegate:(id)arg1;
+ (void)recalculateCheck:(id)arg1;
+ (void)setLastDataMd5:(id)arg1 client:(id)arg2;
+ (id)lastDataMd5:(id)arg1;
+ (_Bool)isClearCacheEnabled:(id)arg1;
+ (void)rollbackData:(id)arg1;
+ (id)feature;
+ (id)excludes;
+ (id)pageMeta;
+ (unsigned long long)checkSubmitType:(id *)arg1 nativeHost:(id *)arg2 items:(id)arg3;
+ (id)groupCommitData;
+ (_Bool)isNeedGroupCommit;
+ (id)checkSubmitRules;
+ (id)buyItemIds:(id)arg1;
+ (id)buyCartIds:(id)arg1;
+ (id)coudanShopIds:(id)arg1;
+ (id)coudanItemIds:(id)arg1;
+ (_Bool)isUpgradeSettlement;
+ (_Bool)isSettlementAlone;
+ (_Bool)isPreLoadOpen;
+ (long long)totalCount;
+ (long long)maxSubmitSize;
+ (id)controlWithClientName:(id)arg1;
+ (id)control;
+ (_Bool)isEndPage;
+ (id)outputs;
+ (_Bool)isManaging;
+ (_Bool)isEditing;
+ (void)manageCart:(_Bool)arg1 withClient:(id)arg2;
+ (void)manageCart:(_Bool)arg1;
+ (void)editCart:(_Bool)arg1 withClient:(id)arg2;
+ (void)editCart:(_Bool)arg1;
+ (void)checkAll:(_Bool)arg1 withClient:(id)arg2;
+ (void)checkAll:(_Bool)arg1;
+ (_Bool)isCheckAll;
+ (void)checkCart:(id)arg1 withChecked:(_Bool)arg2;
+ (_Bool)needSendCheckRequest;
+ (long long)maxCheckCount;
+ (_Bool)clientTotalPrice;
+ (_Bool)forceReload;
+ (_Bool)isAsyncCheck;
+ (_Bool)isRemoteCheck;
+ (id)allItems;
+ (id)validItems;
+ (id)canClearInvalidItems;
+ (id)invalidItems;
+ (id)selectedWarmItems;
+ (id)selectedItems;
+ (_Bool)hasCheckedComponent:(id)arg1;
+ (id)generateRequestParamData:(id)arg1;
+ (id)generalPromotionFoldingBar:(id)arg1;
+ (id)generateRequestSubmitData:(id)arg1 needAllCheckedComponents:(_Bool)arg2 needCheckedGroups:(_Bool)arg3;
+ (id)generateRequestFeatureData;
+ (id)dataMd5String:(id)arg1;
+ (long long)currentPage;
+ (_Bool)isGzip;
+ (void)free;
+ (void)calculateTotalPrice;
+ (void)setCalculateOrangeOpen:(_Bool)arg1;
+ (void)cleanDynamicCal;
+ (void)calculateFooterData;
+ (void)parseResponse:(id)arg1 withClient:(id)arg2 isFirst:(_Bool)arg3;
+ (CDUnknownBlockType)succssBlockWithAction:(unsigned long long)arg1 withClient:(id)arg2;
+ (void)registerSuccessBlock:(CDUnknownBlockType)arg1 withAction:(unsigned long long)arg2;
+ (CDUnknownBlockType)failedBlockWithAction:(unsigned long long)arg1 withClient:(id)arg2;
+ (void)registerFailedBlock:(CDUnknownBlockType)arg1 withAction:(unsigned long long)arg2;
+ (id)currentDivision;
+ (void)switchDivision:(id)arg1;
+ (_Bool)isTsmClient;
+ (id)currentClient;
+ (void)switchClient:(id)arg1;
+ (_Bool)secondPageUsePost;
+ (void)switchSecondPageUsePost:(_Bool)arg1;
+ (_Bool)sdkMosaEnable;
+ (void)switchSDKMsoaEnable:(_Bool)arg1;
+ (_Bool)cacheEnabled;
+ (void)switchCache:(_Bool)arg1;
+ (id)contextWithName:(id)arg1;
+ (id)sharedInstance;
@property(nonatomic) _Bool orangeOpened; // @synthesize orangeOpened=_orangeOpened;
@property(retain, nonatomic) NSString *divisionCode; // @synthesize divisionCode=_divisionCode;
@property(retain, nonatomic) NSString *clientName; // @synthesize clientName=_clientName;
@property(retain, nonatomic) NSMutableDictionary *contextDict; // @synthesize contextDict=_contextDict;
- (void).cxx_destruct;
- (id)init;

@end

