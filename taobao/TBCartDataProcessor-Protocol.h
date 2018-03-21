//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSDictionary, NSError, NSMutableDictionary, NSString, TBCartSettlementGroupsInfoModel;
@protocol TBCartControlComponent, TBCartDataComponent, TBCartExcludesComponent, TBCartFeatureComponent, TBCartHierarchyComponent, TBCartPageMetaComponent, TBCartProcessorMockProtocol;

@protocol TBCartDataProcessor <NSObject>
- (NSString *)totalDiscountTitle;
- (void)setTotalDiscountTitle:(NSString *)arg1;
- (void)setProcessorDelegate:(id <TBCartProcessorMockProtocol>)arg1;
- (id <TBCartProcessorMockProtocol>)processorDelegate;
- (void)recalculateCheck;
- (_Bool)isManaging;
- (_Bool)isEditing;
- (void)setLastDataMd5:(NSString *)arg1;
- (NSString *)lastDataMd5;
- (void)checkAll:(_Bool)arg1;
- (void)checkCart:(id <TBCartDataComponent>)arg1 withChecked:(_Bool)arg2;
- (void)cleanDynamicCal;
- (void)calculateTotalPrice;
- (void)calculateFooterData;
- (void)rollbackData;
- (NSDictionary *)checkSubmitType:(NSArray *)arg1;
- (TBCartSettlementGroupsInfoModel *)groupCommitData:(NSArray *)arg1;
- (NSError *)checkItemExcludes:(NSArray *)arg1;
- (NSArray *)buyItemIds:(NSArray *)arg1;
- (NSArray *)buyCartIds:(NSArray *)arg1;
- (NSArray *)coudanShopIds:(NSArray *)arg1;
- (NSArray *)coudanItemIds:(NSArray *)arg1;
- (void)free;
- (NSArray *)allItems;
- (id <TBCartDataComponent>)outputs;
- (id <TBCartControlComponent>)control;
- (id <TBCartExcludesComponent>)excludes;
- (id <TBCartFeatureComponent>)feature;
- (id <TBCartPageMetaComponent>)pageMeta;
- (id <TBCartHierarchyComponent>)hierarchy;
- (void)parseNextResponse:(NSMutableDictionary *)arg1;
- (void)parseFirstResponse:(NSMutableDictionary *)arg1;
@end

