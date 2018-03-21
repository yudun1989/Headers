//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImageView;

@interface AREScanIndicatorView : UIView
{
    unsigned long long _animationType;
    UIImageView *_blueOuterView;
    UIImageView *_whiteCircleView;
    UIImageView *_whiteCircleViewDup;
    UIImageView *_redCircleView;
    UIImageView *_redCircleView2;
    UIView *_scanningView;
    UIImageView *_scanningImageView;
}

@property(retain, nonatomic) UIImageView *scanningImageView; // @synthesize scanningImageView=_scanningImageView;
@property(retain, nonatomic) UIView *scanningView; // @synthesize scanningView=_scanningView;
@property(retain, nonatomic) UIImageView *redCircleView2; // @synthesize redCircleView2=_redCircleView2;
@property(retain, nonatomic) UIImageView *redCircleView; // @synthesize redCircleView=_redCircleView;
@property(retain, nonatomic) UIImageView *whiteCircleViewDup; // @synthesize whiteCircleViewDup=_whiteCircleViewDup;
@property(retain, nonatomic) UIImageView *whiteCircleView; // @synthesize whiteCircleView=_whiteCircleView;
@property(retain, nonatomic) UIImageView *blueOuterView; // @synthesize blueOuterView=_blueOuterView;
@property(nonatomic) unsigned long long animationType; // @synthesize animationType=_animationType;
- (void).cxx_destruct;
- (void)outerLoopAnimation;
- (void)startConfirmAnimation;
- (void)startFinishAnimation;
- (void)startLockAnimation;
- (void)startScanningAnimation;
- (void)startWillScanAnimation;
- (void)startScanAnimation;
- (void)startWaitingScanAnimation;
- (void)defaultScanAnimation;
- (void)hidesAllViews;
- (void)resetAllAnimations;
- (void)setupViews;
- (void)layoutSubviews;
- (void)willMoveToSuperview:(id)arg1;
- (struct CGSize)intrinsicContentSize;
- (void)resumeAnimations;
- (void)registerNotifications;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

