//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SSThemedView.h"

@class SSThemedImageView, SSThemedLabel;
@protocol WDDetailSlideHintViewDelegate;

@interface WDDetailSlideHintView : SSThemedView
{
    _Bool _isDismissing;
    id <WDDetailSlideHintViewDelegate> _delegate;
    SSThemedView *_containerView;
    SSThemedImageView *_arrowImageView;
    SSThemedImageView *_handImageView;
    SSThemedLabel *_slideHintLabel;
    SSThemedView *_transparentView;
}

@property(nonatomic) _Bool isDismissing; // @synthesize isDismissing=_isDismissing;
@property(retain, nonatomic) SSThemedView *transparentView; // @synthesize transparentView=_transparentView;
@property(retain, nonatomic) SSThemedLabel *slideHintLabel; // @synthesize slideHintLabel=_slideHintLabel;
@property(retain, nonatomic) SSThemedImageView *handImageView; // @synthesize handImageView=_handImageView;
@property(retain, nonatomic) SSThemedImageView *arrowImageView; // @synthesize arrowImageView=_arrowImageView;
@property(retain, nonatomic) SSThemedView *containerView; // @synthesize containerView=_containerView;
@property(nonatomic) __weak id <WDDetailSlideHintViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)animateHandOpicityWithFadeOut:(_Bool)arg1;
- (void)animateHandHorizontallyWithFadeOut:(_Bool)arg1;
- (void)notifyDelegate;
- (void)dismissSelf;
- (void)dismissSelfIfAuto:(id)arg1;
- (void)commitTranslation:(struct CGPoint)arg1;
- (void)panGestureTrigger:(id)arg1;
- (void)tapGestureTrigger;
- (void)startAnimation;
- (void)addGestureRecognizer;
- (void)adjustSubviewsPosition;
- (void)addSubviews;
- (void)setSlideHintViewIfNeeded;
- (id)initWithFrame:(struct CGRect)arg1;

@end

