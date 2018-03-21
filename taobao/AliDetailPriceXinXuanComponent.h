//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AliDetailComponent.h"

@class AliDetailPriceLabel, AliDetailPriceXinXuanViewModel, UILabel;

@interface AliDetailPriceXinXuanComponent : AliDetailComponent
{
    AliDetailPriceXinXuanViewModel *_priceModel;
    AliDetailPriceLabel *_mainPriceLabel;
    AliDetailPriceLabel *_subPriceLabel;
    UILabel *_sellCountLabel;
}

+ (id)getPriceStyle:(int)arg1;
+ (double)componentHeightForObj:(id)arg1 preferredWidth:(double)arg2;
@property(retain, nonatomic) UILabel *sellCountLabel; // @synthesize sellCountLabel=_sellCountLabel;
@property(retain, nonatomic) AliDetailPriceLabel *subPriceLabel; // @synthesize subPriceLabel=_subPriceLabel;
@property(retain, nonatomic) AliDetailPriceLabel *mainPriceLabel; // @synthesize mainPriceLabel=_mainPriceLabel;
@property(nonatomic) __weak AliDetailPriceXinXuanViewModel *priceModel; // @synthesize priceModel=_priceModel;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)createPriceViewModel:(id)arg1 style:(int)arg2;
- (void)setObject:(id)arg1;

@end

