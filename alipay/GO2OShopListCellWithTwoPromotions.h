//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GO2OShopListCellWithOnePromotion.h"

@class GO2OShopListPromotionView;

@interface GO2OShopListCellWithTwoPromotions : GO2OShopListCellWithOnePromotion
{
    GO2OShopListPromotionView *_promotionView2;
}

+ (double)calHeightWithShopListItem:(id)arg1 inTableView:(id)arg2;
@property(retain, nonatomic) GO2OShopListPromotionView *promotionView2; // @synthesize promotionView2=_promotionView2;
- (void).cxx_destruct;
- (void)configureCellWithShopListItem:(id)arg1 loadResource:(_Bool)arg2;
- (void)initCell;

@end

