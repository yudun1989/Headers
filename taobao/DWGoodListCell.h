//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class DWContext, DWGoodListItemModel, UIButton, UIImageView, UILabel;

@interface DWGoodListCell : UICollectionViewCell
{
    long long _type;
    UIImageView *_itemImg;
    UIImageView *_promotionIcon;
    UILabel *_titleLabel;
    UILabel *_priceTag;
    UIButton *_cartBtn;
    DWGoodListItemModel *_item;
    DWContext *_context;
}

@property(nonatomic) __weak DWContext *context; // @synthesize context=_context;
@property(retain, nonatomic) DWGoodListItemModel *item; // @synthesize item=_item;
@property(retain, nonatomic) UIButton *cartBtn; // @synthesize cartBtn=_cartBtn;
@property(retain, nonatomic) UILabel *priceTag; // @synthesize priceTag=_priceTag;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *promotionIcon; // @synthesize promotionIcon=_promotionIcon;
@property(retain, nonatomic) UIImageView *itemImg; // @synthesize itemImg=_itemImg;
@property(nonatomic) long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (void)add2Cart:(id)arg1;
- (void)setData:(id)arg1 withContext:(id)arg2;
- (void)setUpPortraitFullScreenConstraints;
- (void)setUpFullScreenConstraints;
- (void)setUpNormalConstraints;
- (void)jumpToDetail;
- (void)setUpUI;
- (void)setViewMode:(long long)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

