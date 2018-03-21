//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class AMapSMCalloutBackgroundView, NSString, UIButton, UILabel;
@protocol AMapSMCalloutViewDelegate;

@interface AMapSMCalloutView : UIView
{
    _Bool _popupCancelled;
    id <AMapSMCalloutViewDelegate> _delegate;
    NSString *_title;
    NSString *_subtitle;
    UIView *_leftAccessoryView;
    UIView *_rightAccessoryView;
    unsigned long long _permittedArrowDirection;
    unsigned long long _currentArrowDirection;
    AMapSMCalloutBackgroundView *_backgroundView;
    UIView *_titleView;
    UIView *_subtitleView;
    UIView *_contentView;
    long long _presentAnimation;
    long long _dismissAnimation;
    UIButton *_containerView;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    struct CGPoint _calloutOffset;
    struct UIEdgeInsets _constrainedInsets;
}

+ (id)platformCalloutView;
@property(nonatomic) _Bool popupCancelled; // @synthesize popupCancelled=_popupCancelled;
@property(retain, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIButton *containerView; // @synthesize containerView=_containerView;
@property(nonatomic) long long dismissAnimation; // @synthesize dismissAnimation=_dismissAnimation;
@property(nonatomic) long long presentAnimation; // @synthesize presentAnimation=_presentAnimation;
@property(nonatomic) struct CGPoint calloutOffset; // @synthesize calloutOffset=_calloutOffset;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) UIView *subtitleView; // @synthesize subtitleView=_subtitleView;
@property(retain, nonatomic) UIView *titleView; // @synthesize titleView=_titleView;
@property(retain, nonatomic) AMapSMCalloutBackgroundView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(nonatomic) struct UIEdgeInsets constrainedInsets; // @synthesize constrainedInsets=_constrainedInsets;
@property(nonatomic) unsigned long long currentArrowDirection; // @synthesize currentArrowDirection=_currentArrowDirection;
@property(nonatomic) unsigned long long permittedArrowDirection; // @synthesize permittedArrowDirection=_permittedArrowDirection;
@property(retain, nonatomic) UIView *rightAccessoryView; // @synthesize rightAccessoryView=_rightAccessoryView;
@property(retain, nonatomic) UIView *leftAccessoryView; // @synthesize leftAccessoryView=_leftAccessoryView;
@property(copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) id <AMapSMCalloutViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)animationWithType:(long long)arg1 presenting:(_Bool)arg2;
- (void)removeFromParent;
- (void)dismissCalloutAnimated:(_Bool)arg1;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)animationDidStart:(id)arg1;
- (void)presentCalloutFromRect:(struct CGRect)arg1 inLayer:(id)arg2 ofView:(id)arg3 constrainedToLayer:(id)arg4 animated:(_Bool)arg5;
- (void)presentCalloutFromRect:(struct CGRect)arg1 inLayer:(id)arg2 constrainedToLayer:(id)arg3 animated:(_Bool)arg4;
- (void)presentCalloutFromRect:(struct CGRect)arg1 inView:(id)arg2 constrainedToView:(id)arg3 animated:(_Bool)arg4;
- (struct CGSize)offsetToContainRect:(struct CGRect)arg1 inRect:(struct CGRect)arg2;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (double)calloutContainerHeight;
- (double)calloutHeight;
- (double)innerContentMarginRight;
- (double)innerContentMarginLeft;
- (double)rightAccessoryHorizontalMargin;
- (double)rightAccessoryVerticalMargin;
- (double)leftAccessoryHorizontalMargin;
- (double)leftAccessoryVerticalMargin;
- (void)rebuildSubviews;
- (id)defaultBackgroundView;
- (id)subtitleViewOrDefault;
- (id)titleViewOrDefault;
- (void)calloutClicked;
- (void)unhighlightIfNecessary;
- (void)highlightIfNecessary;
- (_Bool)supportsHighlighting;
- (id)initWithFrame:(struct CGRect)arg1;

@end

