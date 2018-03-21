//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class TBLiveStarAnimation, UILabel;

@interface TBLiveLikeAnimationView : UIView
{
    _Bool _likeLabelHidden;
    UILabel *_likeLabel;
    TBLiveStarAnimation *_starAnimationView;
    double _animationHeight;
    double _animationBottomMargin;
}

+ (id)animationViewWithFrame:(struct CGRect)arg1 bottomMargin:(double)arg2;
+ (id)likeViewWithAnimationHeight:(double)arg1;
@property(nonatomic) double animationBottomMargin; // @synthesize animationBottomMargin=_animationBottomMargin;
@property(nonatomic) _Bool likeLabelHidden; // @synthesize likeLabelHidden=_likeLabelHidden;
@property(nonatomic) double animationHeight; // @synthesize animationHeight=_animationHeight;
@property(retain, nonatomic) TBLiveStarAnimation *starAnimationView; // @synthesize starAnimationView=_starAnimationView;
@property(retain, nonatomic) UILabel *likeLabel; // @synthesize likeLabel=_likeLabel;
- (void).cxx_destruct;
- (void)startLikeAnimation;
- (void)setupSubviews;
- (void)setFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 hiddenLikeLabel:(_Bool)arg2 bottomMargin:(double)arg3;

@end

