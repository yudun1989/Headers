//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "CAAnimationDelegate-Protocol.h"

@class CAGradientLayer, CALayer, CAShapeLayer, KSImageRightButton, KSLiveGiftToolsBarStarPool, NSString, NSTimer, UIButton, UIControl, UIImageView, UILabel;
@protocol KSLiveGiftToolsBarDelegate;

@interface KSLiveGiftToolsBar : UIView <CAAnimationDelegate>
{
    _Bool _inCombo;
    _Bool _needExtendFlikcerDuration;
    _Bool _timerIsFiredByStoppingCombo;
    _Bool _hasMovedToMainWindow;
    _Bool _inTransition;
    _Bool _isChangingToCircleButton;
    UIButton *_payButton;
    UILabel *_coinLabel;
    UIImageView *_coinImageView;
    UIButton *_sendButton;
    UILabel *_sendLabel;
    UILabel *_comboSendLabel;
    CDUnknownBlockType _tapPayButtonBlock;
    CDUnknownBlockType _tapNumberButtonBlock;
    CDUnknownBlockType _comboActiveAnimation;
    CDUnknownBlockType _comboDeactiveAnimation;
    CDUnknownBlockType _sendButtonInContainerVCDidHide;
    double _sendFlickerInterval;
    double _extendedFlickerDuration;
    double _normalFlickerDuration;
    CDUnknownBlockType _canSend;
    CDUnknownBlockType _sendBlock;
    id <KSLiveGiftToolsBarDelegate> _delegate;
    UIControl *_expandChargeButton;
    NSTimer *_flickerTimer;
    CAShapeLayer *_progressLayer;
    CAGradientLayer *_gradientLayer;
    CALayer *_apertureLayer;
    KSLiveGiftToolsBarStarPool *_starPool;
    KSImageRightButton *_numberButton;
}

@property(retain, nonatomic) KSImageRightButton *numberButton; // @synthesize numberButton=_numberButton;
@property(retain, nonatomic) KSLiveGiftToolsBarStarPool *starPool; // @synthesize starPool=_starPool;
@property(nonatomic) _Bool isChangingToCircleButton; // @synthesize isChangingToCircleButton=_isChangingToCircleButton;
@property(nonatomic) _Bool inTransition; // @synthesize inTransition=_inTransition;
@property(retain, nonatomic) CALayer *apertureLayer; // @synthesize apertureLayer=_apertureLayer;
@property(retain, nonatomic) CAGradientLayer *gradientLayer; // @synthesize gradientLayer=_gradientLayer;
@property(retain, nonatomic) CAShapeLayer *progressLayer; // @synthesize progressLayer=_progressLayer;
@property(nonatomic) _Bool hasMovedToMainWindow; // @synthesize hasMovedToMainWindow=_hasMovedToMainWindow;
@property(nonatomic) _Bool timerIsFiredByStoppingCombo; // @synthesize timerIsFiredByStoppingCombo=_timerIsFiredByStoppingCombo;
@property(nonatomic) _Bool needExtendFlikcerDuration; // @synthesize needExtendFlikcerDuration=_needExtendFlikcerDuration;
@property(retain, nonatomic) NSTimer *flickerTimer; // @synthesize flickerTimer=_flickerTimer;
@property(retain, nonatomic) UIControl *expandChargeButton; // @synthesize expandChargeButton=_expandChargeButton;
@property(nonatomic) __weak id <KSLiveGiftToolsBarDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) CDUnknownBlockType sendBlock; // @synthesize sendBlock=_sendBlock;
@property(copy, nonatomic) CDUnknownBlockType canSend; // @synthesize canSend=_canSend;
@property(nonatomic) double normalFlickerDuration; // @synthesize normalFlickerDuration=_normalFlickerDuration;
@property(nonatomic) double extendedFlickerDuration; // @synthesize extendedFlickerDuration=_extendedFlickerDuration;
@property(nonatomic) double sendFlickerInterval; // @synthesize sendFlickerInterval=_sendFlickerInterval;
@property(copy, nonatomic) CDUnknownBlockType sendButtonInContainerVCDidHide; // @synthesize sendButtonInContainerVCDidHide=_sendButtonInContainerVCDidHide;
@property(copy, nonatomic) CDUnknownBlockType comboDeactiveAnimation; // @synthesize comboDeactiveAnimation=_comboDeactiveAnimation;
@property(copy, nonatomic) CDUnknownBlockType comboActiveAnimation; // @synthesize comboActiveAnimation=_comboActiveAnimation;
@property(nonatomic) _Bool inCombo; // @synthesize inCombo=_inCombo;
@property(copy, nonatomic) CDUnknownBlockType tapNumberButtonBlock; // @synthesize tapNumberButtonBlock=_tapNumberButtonBlock;
@property(copy, nonatomic) CDUnknownBlockType tapPayButtonBlock; // @synthesize tapPayButtonBlock=_tapPayButtonBlock;
@property(retain, nonatomic) UILabel *comboSendLabel; // @synthesize comboSendLabel=_comboSendLabel;
@property(retain, nonatomic) UILabel *sendLabel; // @synthesize sendLabel=_sendLabel;
@property(retain, nonatomic) UIButton *sendButton; // @synthesize sendButton=_sendButton;
@property(retain, nonatomic) UIImageView *coinImageView; // @synthesize coinImageView=_coinImageView;
@property(retain, nonatomic) UILabel *coinLabel; // @synthesize coinLabel=_coinLabel;
@property(retain, nonatomic) UIButton *payButton; // @synthesize payButton=_payButton;
- (void).cxx_destruct;
- (void)resetProgressWithTotalInterval:(double)arg1;
- (void)useRectangleButton;
- (void)useCircleButton;
- (struct CGRect)circleButtonBounds;
- (void)addFlickerAnimation;
- (void)flickerSendButtonWithInterval:(double)arg1;
- (void)flickerSendButton;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)timerFired:(id)arg1;
- (id)vibrateAnimationToLayer:(id)arg1;
- (void)didTapSendButton:(id)arg1;
- (void)didTapDownSendButton:(id)arg1;
- (void)didTapPayButton:(id)arg1;
- (void)didTapNumberButton:(id)arg1;
- (void)hideSendButtonIfNeeded;
- (_Bool)isPoint:(struct CGPoint)arg1 inViewInsideSendButton:(id)arg2;
- (void)updateNumberButton:(_Bool)arg1;
- (void)setCurrentGiftNumber:(long long)arg1;
- (void)moveSendButtonToContainerVC:(id)arg1;
- (void)resumeComboStateWithFlickerInterval:(double)arg1;
- (void)clearFlickerDurationExtendInfo;
- (void)extendFlickerDuration;
- (void)stopCombo;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)layoutSubviews;
- (void)drawButtonCorner;
- (void)setFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

