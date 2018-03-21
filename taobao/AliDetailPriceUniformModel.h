//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AliDetailComponentModel.h"

@class AliDetailEntrancesItemModel, AliDetailNewBigPromotionModel, AliDetailPriceEntity, NSArray;
@protocol AliDetailPriceDescModel, AliDetailPriceEntity, AliDetailPriceTagModel;

@interface AliDetailPriceUniformModel : AliDetailComponentModel
{
    AliDetailPriceEntity *_price;
    AliDetailPriceEntity *_subPrice;
    NSArray<AliDetailPriceEntity> *_extraPrices;
    NSArray<AliDetailPriceTagModel> *_priceTag;
    AliDetailEntrancesItemModel *_entrance;
    NSArray<AliDetailPriceDescModel> *_extraPriceDescs;
    AliDetailPriceEntity *_sugPromPrice;
    AliDetailPriceEntity *_depositPrice;
    AliDetailNewBigPromotionModel *_bigPromotionNew;
}

@property(retain, nonatomic) AliDetailNewBigPromotionModel *bigPromotionNew; // @synthesize bigPromotionNew=_bigPromotionNew;
@property(retain, nonatomic) AliDetailPriceEntity *depositPrice; // @synthesize depositPrice=_depositPrice;
@property(retain, nonatomic) AliDetailPriceEntity *sugPromPrice; // @synthesize sugPromPrice=_sugPromPrice;
@property(retain, nonatomic) NSArray<AliDetailPriceDescModel> *extraPriceDescs; // @synthesize extraPriceDescs=_extraPriceDescs;
@property(retain, nonatomic) AliDetailEntrancesItemModel *entrance; // @synthesize entrance=_entrance;
@property(retain, nonatomic) NSArray<AliDetailPriceTagModel> *priceTag; // @synthesize priceTag=_priceTag;
@property(retain, nonatomic) NSArray<AliDetailPriceEntity> *extraPrices; // @synthesize extraPrices=_extraPrices;
@property(retain, nonatomic) AliDetailPriceEntity *subPrice; // @synthesize subPrice=_subPrice;
@property(retain, nonatomic) AliDetailPriceEntity *price; // @synthesize price=_price;
- (void).cxx_destruct;
- (void)parseDataFromDetailModel:(id)arg1;

@end

