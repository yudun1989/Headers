//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, SSThemedButton, SSThemedLabel, TTImageView, TTIndicatorContentView, TTWaitingView, UIImage;

@interface TTIndicatorView : UIView
{
    _Bool _showDismissButton;
    _Bool _autoDismiss;
    _Bool _isUserDismiss;
    long long _indicatorStyle;
    SSThemedLabel *_indicatorTextLabel;
    TTImageView *_indicatorImageView;
    TTWaitingView *_indicatorWaitingView;
    SSThemedButton *_dismissButton;
    TTIndicatorContentView *_contentView;
    UIView *_parentView;
    NSString *_indicatorText;
    UIImage *_indicatorImage;
    CDUnknownBlockType _dismissHandler;
    long long _supportMaxLine;
}

+ (id)_defaultParentView;
+ (void)dismissIndicators;
+ (void)showWithIndicatorStyle:(long long)arg1 indicatorText:(id)arg2 indicatorImage:(id)arg3 maxLine:(long long)arg4 autoDismiss:(_Bool)arg5 dismissHandler:(CDUnknownBlockType)arg6;
+ (void)showWithIndicatorStyle:(long long)arg1 indicatorText:(id)arg2 indicatorImage:(id)arg3 autoDismiss:(_Bool)arg4 dismissHandler:(CDUnknownBlockType)arg5;
@property(nonatomic) long long supportMaxLine; // @synthesize supportMaxLine=_supportMaxLine;
@property(nonatomic) _Bool isUserDismiss; // @synthesize isUserDismiss=_isUserDismiss;
@property(copy, nonatomic) CDUnknownBlockType dismissHandler; // @synthesize dismissHandler=_dismissHandler;
@property(copy, nonatomic) UIImage *indicatorImage; // @synthesize indicatorImage=_indicatorImage;
@property(copy, nonatomic) NSString *indicatorText; // @synthesize indicatorText=_indicatorText;
@property(retain, nonatomic) UIView *parentView; // @synthesize parentView=_parentView;
@property(retain, nonatomic) TTIndicatorContentView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) SSThemedButton *dismissButton; // @synthesize dismissButton=_dismissButton;
@property(retain, nonatomic) TTWaitingView *indicatorWaitingView; // @synthesize indicatorWaitingView=_indicatorWaitingView;
@property(retain, nonatomic) TTImageView *indicatorImageView; // @synthesize indicatorImageView=_indicatorImageView;
@property(retain, nonatomic) SSThemedLabel *indicatorTextLabel; // @synthesize indicatorTextLabel=_indicatorTextLabel;
@property(nonatomic) long long indicatorStyle; // @synthesize indicatorStyle=_indicatorStyle;
@property(nonatomic) _Bool autoDismiss; // @synthesize autoDismiss=_autoDismiss;
@property(nonatomic) _Bool showDismissButton; // @synthesize showDismissButton=_showDismissButton;
- (void).cxx_destruct;
- (void)_layoutIndicatorImageViewWithImage:(id)arg1;
- (void)_layoutIndicatorLabelWithText:(id)arg1;
- (_Bool)_needShowWaitingView;
- (void)updateIndicatorWithImage:(id)arg1;
- (void)updateIndicatorWithText:(id)arg1 shouldRemoveWaitingView:(_Bool)arg2;
- (void)_dismissAllCurrentIndicatorsOnParentView:(id)arg1 animated:(_Bool)arg2;
- (void)_dismissAllCurrentIndicators;
- (void)_dismissFromParentViewAnimated:(_Bool)arg1;
- (void)dismissFromParentView;
- (void)dismissByUser;
- (void)showFromParentView:(id)arg1;
- (void)layoutContentSubViewsOnIOS7;
- (void)makeRotationTransformOnIOS7;
- (void)layoutSubviews;
- (void)observeStatusBarOrientationChanged;
- (void)dealloc;
- (void)initSubViews;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithIndicatorStyle:(long long)arg1 indicatorText:(id)arg2 indicatorImage:(id)arg3 maxLine:(long long)arg4 dismissHandler:(CDUnknownBlockType)arg5;
- (id)initWithIndicatorStyle:(long long)arg1 indicatorText:(id)arg2 indicatorImage:(id)arg3 dismissHandler:(CDUnknownBlockType)arg4;

@end

