//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CAGradientLayer, NSString, UIButton, UIImageView, UILabel;

@interface _TTA_WapBottomBarView_ : UIView
{
    _Bool _checkboxSelected;
    long long _platformType;
    NSString *_snsText;
    UIImageView *_bgImageView;
    UILabel *_sendSNSLabel;
    UIButton *_checkBoxButton;
    CAGradientLayer *_bottomGradientLayer;
    double _additionalSafeInsetBottom;
}

@property(nonatomic) double additionalSafeInsetBottom; // @synthesize additionalSafeInsetBottom=_additionalSafeInsetBottom;
@property(retain, nonatomic) CAGradientLayer *bottomGradientLayer; // @synthesize bottomGradientLayer=_bottomGradientLayer;
@property(retain, nonatomic) UIButton *checkBoxButton; // @synthesize checkBoxButton=_checkBoxButton;
@property(retain, nonatomic) UILabel *sendSNSLabel; // @synthesize sendSNSLabel=_sendSNSLabel;
@property(retain, nonatomic) UIImageView *bgImageView; // @synthesize bgImageView=_bgImageView;
@property(copy, nonatomic) NSString *snsText; // @synthesize snsText=_snsText;
@property(nonatomic) long long platformType; // @synthesize platformType=_platformType;
@property(nonatomic) _Bool checkboxSelected; // @synthesize checkboxSelected=_checkboxSelected;
- (void).cxx_destruct;
- (void)actionDidTapCheckboxButton:(id)arg1;
- (void)layoutSubviews;
- (void)__tta_wapCustomInit__;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

