//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TTFeedPopupView.h"

@class SSThemedButton, UIImageView, UIView;
@protocol WDNeedMeToAnswerPopupViewDelegate;

@interface WDNeedMeToAnswerPopupView : TTFeedPopupView
{
    unsigned long long _selectedKeywordsCount;
    id <WDNeedMeToAnswerPopupViewDelegate> _delegate;
    UIView *_arrowBgView;
    UIView *_contentBgView;
    UIImageView *_arrowImageView;
    SSThemedButton *_dislikeBtn;
}

+ (void)disable;
+ (void)enable;
+ (void)dismissIfVisible;
@property(retain, nonatomic) SSThemedButton *dislikeBtn; // @synthesize dislikeBtn=_dislikeBtn;
@property(retain, nonatomic) UIImageView *arrowImageView; // @synthesize arrowImageView=_arrowImageView;
@property(retain, nonatomic) UIView *contentBgView; // @synthesize contentBgView=_contentBgView;
@property(retain, nonatomic) UIView *arrowBgView; // @synthesize arrowBgView=_arrowBgView;
@property(nonatomic) __weak id <WDNeedMeToAnswerPopupViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)rootViewWillTransitionToSize:(id)arg1;
- (double)dislikeButtonImageTitleSpacing;
- (double)dislikeButtonGapX;
- (double)fontSizeForDislikeButton;
- (double)dislikeButtonHeight;
- (double)dislikeButtonWidth;
- (void)dismiss:(_Bool)arg1;
- (double)arrowOffsetY;
- (double)buttonRightPadding;
- (double)buttonGapX;
- (double)fontSizeForButton;
- (double)buttonHeight;
- (double)buttonWidth;
- (double)fontSizeForSubTitleLabel;
- (double)fontSizeForTitleLabel;
- (double)heightForTitleBar;
- (double)bottomPadding;
- (double)leftPadding;
- (void)showDislikeButton:(_Bool)arg1 atPoint:(struct CGPoint)arg2;
- (void)showAtPoint:(struct CGPoint)arg1 fromView:(id)arg2;
- (void)themeChanged:(id)arg1;
- (void)clickMask;
- (void)okBtnClicked:(id)arg1;
- (void)viewWillDisappear;
- (void)refreshUI;
- (void)refreshArrowUI;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

@end

