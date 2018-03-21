//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSMutableArray, NSMutableString, NSString, UIButton, UILabel;

@interface TBBuyBottomBar : UIView
{
    _Bool _isSubmit;
    UILabel *_summaryLabel;
    UILabel *_priceLabel;
    UILabel *_priceDescLabel;
    UIButton *_submitButton;
    UIView *_line;
    UIButton *_familyBuyButton;
    NSMutableArray *_elements;
    NSString *_summaryText;
    NSMutableString *_voiceOverStr;
}

@property(nonatomic) _Bool isSubmit; // @synthesize isSubmit=_isSubmit;
@property(retain, nonatomic) NSMutableString *voiceOverStr; // @synthesize voiceOverStr=_voiceOverStr;
@property(retain, nonatomic) NSString *summaryText; // @synthesize summaryText=_summaryText;
@property(retain, nonatomic) NSMutableArray *elements; // @synthesize elements=_elements;
@property(retain, nonatomic) UIButton *familyBuyButton; // @synthesize familyBuyButton=_familyBuyButton;
@property(retain, nonatomic) UIView *line; // @synthesize line=_line;
@property(retain, nonatomic) UIButton *submitButton; // @synthesize submitButton=_submitButton;
@property(retain, nonatomic) UILabel *priceDescLabel; // @synthesize priceDescLabel=_priceDescLabel;
@property(retain, nonatomic) UILabel *priceLabel; // @synthesize priceLabel=_priceLabel;
@property(retain, nonatomic) UILabel *summaryLabel; // @synthesize summaryLabel=_summaryLabel;
- (void).cxx_destruct;
- (void)reloadSubmitOrderModel:(id)arg1;
- (id)getPriceStr:(id)arg1;
- (void)reloadRealPayModel:(id)arg1 withSubmitOrderModel:(id)arg2;
- (_Bool)accessibilityActivate;
- (void)reloadDataWithRealPayModel:(id)arg1 submitOrderModel:(id)arg2;
- (void)reloadDataWithFamilyBuyModel:(id)arg1;
- (void)reloadDataWithRealPayModel:(id)arg1 submitOrderModel:(id)arg2 familyPayModel:(id)arg3;
- (void)layoutSubviews;
- (void)comfirmFail;
- (void)configAccessibility;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

@end

