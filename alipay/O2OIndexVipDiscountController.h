//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "O2OTemplateController.h"

#import "O2OCDPAdapterPromotionProtocol-Protocol.h"

@class NSString;

@interface O2OIndexVipDiscountController : O2OTemplateController <O2OCDPAdapterPromotionProtocol>
{
    _Bool _hasNew;
}

+ (void)setNewFlag:(_Bool)arg1 cityCode:(id)arg2;
- (void)promotionDataDidFinishLoading:(id)arg1 spaceCode:(id)arg2;
- (void)vipDiscountClick;
- (_Bool)obtainNewFlag;
- (void)setNewFlag:(_Bool)arg1;
- (void)initNewData;
- (void)dealloc;
- (id)initialState;
- (id)state;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

