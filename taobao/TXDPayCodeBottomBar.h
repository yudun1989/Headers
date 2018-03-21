//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CAGradientLayer, NSString, UIButton, UIImageView, UILabel;

@interface TXDPayCodeBottomBar : UIView
{
    NSString *_title;
    NSString *_detail;
    NSString *_tips;
    NSString *_actionUrl;
    UIImageView *_txdIcon;
    UILabel *_titleLabel;
    UILabel *_detailLabel;
    UILabel *_tipsLabel;
    UIImageView *_tipsBgView;
    UIView *_tipsView;
    UIButton *_actionButton;
    CAGradientLayer *_gradientLayer;
}

@property(retain, nonatomic) CAGradientLayer *gradientLayer; // @synthesize gradientLayer=_gradientLayer;
@property(retain, nonatomic) UIButton *actionButton; // @synthesize actionButton=_actionButton;
@property(retain, nonatomic) UIView *tipsView; // @synthesize tipsView=_tipsView;
@property(retain, nonatomic) UIImageView *tipsBgView; // @synthesize tipsBgView=_tipsBgView;
@property(retain, nonatomic) UILabel *tipsLabel; // @synthesize tipsLabel=_tipsLabel;
@property(retain, nonatomic) UILabel *detailLabel; // @synthesize detailLabel=_detailLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *txdIcon; // @synthesize txdIcon=_txdIcon;
@property(retain, nonatomic) NSString *actionUrl; // @synthesize actionUrl=_actionUrl;
@property(retain, nonatomic) NSString *tips; // @synthesize tips=_tips;
@property(retain, nonatomic) NSString *detail; // @synthesize detail=_detail;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (void)doAction:(id)arg1;
- (void)dismissTipsView;
- (void)layoutTipsView;
- (void)setupViews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

