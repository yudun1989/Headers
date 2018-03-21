//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewHeaderFooterView.h>

@class StyleKitContext, UIImageView, UILabel, UIView;
@protocol TBExtBuyImageProtocol;

@interface TBExtBuyInstallmentSectionHeaderView : UITableViewHeaderFooterView
{
    UIImageView *_shopIconView;
    UILabel *_shopNameLabel;
    UILabel *_priceTitleLabel;
    UILabel *_priceLabel;
    UILabel *_poundageTitleLabel;
    UILabel *_poundageLabel;
    UIView *_line;
    StyleKitContext *_styleKitContext;
    id <TBExtBuyImageProtocol> _imageLoader;
}

@property(retain, nonatomic) id <TBExtBuyImageProtocol> imageLoader; // @synthesize imageLoader=_imageLoader;
@property(retain, nonatomic) StyleKitContext *styleKitContext; // @synthesize styleKitContext=_styleKitContext;
@property(retain, nonatomic) UIView *line; // @synthesize line=_line;
@property(retain, nonatomic) UILabel *poundageLabel; // @synthesize poundageLabel=_poundageLabel;
@property(retain, nonatomic) UILabel *poundageTitleLabel; // @synthesize poundageTitleLabel=_poundageTitleLabel;
@property(retain, nonatomic) UILabel *priceLabel; // @synthesize priceLabel=_priceLabel;
@property(retain, nonatomic) UILabel *priceTitleLabel; // @synthesize priceTitleLabel=_priceTitleLabel;
@property(retain, nonatomic) UILabel *shopNameLabel; // @synthesize shopNameLabel=_shopNameLabel;
@property(retain, nonatomic) UIImageView *shopIconView; // @synthesize shopIconView=_shopIconView;
- (void).cxx_destruct;
- (void)reloadWithPicker:(id)arg1 selectedNum:(id)arg2;
- (void)layoutSubviews;
- (id)initWithReuseIdentifier:(id)arg1;

@end

