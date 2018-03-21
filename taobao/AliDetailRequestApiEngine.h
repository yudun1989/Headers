//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray;

@interface AliDetailRequestApiEngine : NSObject
{
    NSMutableArray *_array;
}

+ (id)getConsumerServiceIds:(id)arg1;
+ (id)transferToMtopApi:(id)arg1;
+ (id)createMtopServer:(id)arg1;
+ (id)createMtopExtRequest:(id)arg1;
+ (id)getAllApiUnits;
+ (id)sharedInstance;
@property(retain, nonatomic) NSMutableArray *array; // @synthesize array=_array;
- (void).cxx_destruct;
- (id)getProductDynserviceTemplateApi:(id)arg1 params:(id)arg2;
- (id)getSharePresentUrlApi:(id)arg1 params:(id)arg2;
- (id)getIsvCustomApi:(id)arg1 params:(id)arg2;
- (id)getBundleItemCApi:(id)arg1 params:(id)arg2;
- (id)getBundleItemApi:(id)arg1 params:(id)arg2;
- (id)getEndorsementApi:(id)arg1 params:(id)arg2;
- (id)getSearchItemRatesApi:(id)arg1 params:(id)arg2;
- (id)getContractPhonePreUsePhoneApi:(id)arg1 params:(id)arg2;
- (id)getContractPhoneGetPhoneListApi:(id)arg1 params:(id)arg2;
- (id)getComboApi:(id)arg1 params:(id)arg2;
- (id)getO2OApi:(id)arg1 params:(id)arg2;
- (id)getRecommendChaoShiApi:(id)arg1 params:(id)arg2;
- (id)getTimelimitActivityChaoShiApi:(id)arg1 params:(id)arg2;
- (id)getHotActivityChaoShiApi:(id)arg1 params:(id)arg2;
- (id)getGetCouponItemApi:(id)arg1 params:(id)arg2;
- (id)getGetCouponListApi:(id)arg1 params:(id)arg2;
- (id)getTmallGetCouponItemApi:(id)arg1 params:(id)arg2;
- (id)getTmallGetCouponListApi:(id)arg1 params:(id)arg2;
- (id)getAddCartRecommendApi:(id)arg1 params:(id)arg2;
- (id)getSaveMySizeApi:(id)arg1 params:(id)arg2;
- (id)getSizeChartApi:(id)arg1 params:(id)arg2;
- (id)getConsumerProtectionInfoApi:(id)arg1 params:(id)arg2;
- (id)getCancelFavoriteApi:(id)arg1 params:(id)arg2;
- (id)getAddFavoriteApi:(id)arg1 params:(id)arg2;
- (id)getMainInterfaceApi:(id)arg1 params:(id)arg2;
- (id)getProductDetailTemplateApi:(id)arg1 params:(id)arg2;
- (id)getJoinJHSApi:(id)arg1 params:(id)arg2;
- (id)getAddJHSTipApi:(id)arg1 params:(id)arg2;
- (id)getAreaListApi:(id)arg1 params:(id)arg2;
- (id)getCSCartItemAmountsApi:(id)arg1 params:(id)arg2;
- (id)apiTypeToApiName:(int)arg1;
- (SEL)getApiUnitProducer:(id)arg1;
- (id)getMtopExtRequest:(int)arg1 detailModel:(id)arg2 params:(id)arg3;
- (id)getMtopServer:(int)arg1 detailModel:(id)arg2 params:(id)arg3;
- (id)getApiUnit:(int)arg1 detailModel:(id)arg2 params:(id)arg3;

@end

