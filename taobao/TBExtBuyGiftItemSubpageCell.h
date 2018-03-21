//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class StyleKitContext, UIButton, UIImageView, UILabel;
@protocol TBExtBuyImageProtocol;

@interface TBExtBuyGiftItemSubpageCell : UITableViewCell
{
    UIButton *_selectionButton;
    UIImageView *_itemImageView;
    UILabel *_titleLabel;
    UIImageView *_logoImgView;
    UILabel *_descLabel;
    UILabel *_priceLabel;
    UILabel *_countLabel;
    id <TBExtBuyImageProtocol> _imageLoader;
    StyleKitContext *_styleKitContext;
}

@property(retain, nonatomic) StyleKitContext *styleKitContext; // @synthesize styleKitContext=_styleKitContext;
@property(retain, nonatomic) id <TBExtBuyImageProtocol> imageLoader; // @synthesize imageLoader=_imageLoader;
@property(retain, nonatomic) UILabel *countLabel; // @synthesize countLabel=_countLabel;
@property(retain, nonatomic) UILabel *priceLabel; // @synthesize priceLabel=_priceLabel;
@property(retain, nonatomic) UILabel *descLabel; // @synthesize descLabel=_descLabel;
@property(retain, nonatomic) UIImageView *logoImgView; // @synthesize logoImgView=_logoImgView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *itemImageView; // @synthesize itemImageView=_itemImageView;
@property(retain, nonatomic) UIButton *selectionButton; // @synthesize selectionButton=_selectionButton;
- (void).cxx_destruct;
- (void)bindCellData:(id)arg1;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
