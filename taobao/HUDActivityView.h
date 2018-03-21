//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UIScrollViewDelegate-Protocol.h"

@class NSString, UIActivityIndicatorView, UIImageView, UILabel, UIScrollView;

@interface HUDActivityView : UIView <UIScrollViewDelegate>
{
    double indicatorWidth;
    double indicatorHeight;
    UIScrollView *scrollView;
    UIView *maskView;
    UIView *backView;
    UIActivityIndicatorView *activityView;
    UILabel *textLabel;
    UIImageView *imageView;
    _Bool needShowTip;
}

@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView;
@property(retain, nonatomic) UILabel *textLabel; // @synthesize textLabel;
@property(nonatomic) double indicatorHeight; // @synthesize indicatorHeight;
@property(nonatomic) double indicatorWidth; // @synthesize indicatorWidth;
- (void).cxx_destruct;
- (void)dealloc;
- (id)viewForZoomingInScrollView:(id)arg1;
- (void)animateToHide;
- (void)animateShowInView:(id)arg1 autoHideAfter:(float)arg2;
- (void)animateShowInView:(id)arg1;
- (void)resetView;
- (void)sizeToIndicator;
- (void)setIndicatorImage:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 showTip:(_Bool)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

