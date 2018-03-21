//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, UIButton, UIImage, UIImageView, UILabel;
@protocol NearbyEditToolBarDelegate;

@interface NearbyEditToolBar : UIView
{
    id <NearbyEditToolBarDelegate> _delegate;
    NSString *_tips;
    UIImage *_icon;
    UIButton *_editBtn;
    UIView *_separateLine;
    UILabel *_tipsLabel;
    UIImageView *_iconImageV;
}

@property(retain, nonatomic) UIImageView *iconImageV; // @synthesize iconImageV=_iconImageV;
@property(retain, nonatomic) UILabel *tipsLabel; // @synthesize tipsLabel=_tipsLabel;
@property(retain, nonatomic) UIView *separateLine; // @synthesize separateLine=_separateLine;
@property(retain, nonatomic) UIButton *editBtn; // @synthesize editBtn=_editBtn;
@property(retain, nonatomic, setter=setIcon:) UIImage *icon; // @synthesize icon=_icon;
@property(copy, nonatomic, setter=setTips:) NSString *tips; // @synthesize tips=_tips;
@property(nonatomic) __weak id <NearbyEditToolBarDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)resize;
- (void)editAction:(id)arg1;
- (void)loadViews;
- (void)layoutSubviews;
- (void)reloadAppearance;
- (id)initWithStandardSize;

@end

