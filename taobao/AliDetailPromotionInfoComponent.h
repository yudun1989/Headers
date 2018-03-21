//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AliDetailComponent.h"

@class AliDetailPromotionInfoModel, NSMutableArray, UIImageView, UILabel;

@interface AliDetailPromotionInfoComponent : AliDetailComponent
{
    AliDetailPromotionInfoModel *_promotionInfoModel;
    UILabel *_moreLabel;
    NSMutableArray *_iconLabels;
    NSMutableArray *_descLabels;
    UIImageView *_backgroundIV;
}

+ (double)getFloatValueFromStyle:(id)arg1 property:(id)arg2 defaultValue:(double)arg3;
+ (double)componentHeightForObj:(id)arg1 preferredWidth:(double)arg2;
@property(retain, nonatomic) UIImageView *backgroundIV; // @synthesize backgroundIV=_backgroundIV;
@property(retain, nonatomic) NSMutableArray *descLabels; // @synthesize descLabels=_descLabels;
@property(retain, nonatomic) NSMutableArray *iconLabels; // @synthesize iconLabels=_iconLabels;
@property(retain, nonatomic) UILabel *moreLabel; // @synthesize moreLabel=_moreLabel;
@property(retain, nonatomic) AliDetailPromotionInfoModel *promotionInfoModel; // @synthesize promotionInfoModel=_promotionInfoModel;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)render;
- (void)applyStyle;
- (void)promotionClicked:(id)arg1;
- (void)setObject:(id)arg1;

@end

