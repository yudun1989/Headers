//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class APButton, EWAgreementLabel, UIButton, UIImageView;

@interface EWAgreementPopupView : UIView
{
    CDUnknownBlockType _doAgreeCallback;
    UIView *_mainView;
    UIImageView *_backgroundImageView;
    APButton *_agreeButton;
    UIView *_agreementLabelView;
    EWAgreementLabel *_ewAgreementLabel;
    EWAgreementLabel *_sesameAgreementLabel;
    UIButton *_closeButton;
}

@property(retain, nonatomic) UIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) EWAgreementLabel *sesameAgreementLabel; // @synthesize sesameAgreementLabel=_sesameAgreementLabel;
@property(retain, nonatomic) EWAgreementLabel *ewAgreementLabel; // @synthesize ewAgreementLabel=_ewAgreementLabel;
@property(retain, nonatomic) UIView *agreementLabelView; // @synthesize agreementLabelView=_agreementLabelView;
@property(retain, nonatomic) APButton *agreeButton; // @synthesize agreeButton=_agreeButton;
@property(retain, nonatomic) UIImageView *backgroundImageView; // @synthesize backgroundImageView=_backgroundImageView;
@property(retain, nonatomic) UIView *mainView; // @synthesize mainView=_mainView;
@property(copy, nonatomic) CDUnknownBlockType doAgreeCallback; // @synthesize doAgreeCallback=_doAgreeCallback;
- (void).cxx_destruct;
- (void)hide;
- (void)show;
- (void)pressAgreeedBtn;
- (void)tapMainView;
- (void)pressSesameAgreementBtn;
- (void)pressEwAgreementBtn;
- (void)addView;
- (double)popViewHeight;
- (double)popViewWidth;
- (id)init;
- (void)dealloc;

@end

