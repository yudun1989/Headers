//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, NSTimer, TBLiveStarAnimation, UIButton, UILabel;

@interface TBLiveFeedCellBottomLikeView : UIView
{
    _Bool _enableLikeAnimation;
    double _animationHeight;
    NSString *_scene;
    UIButton *_likeButton;
    UILabel *_likeCountLabel;
    TBLiveStarAnimation *_starAnimationView;
    NSTimer *_timer;
}

@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(retain, nonatomic) TBLiveStarAnimation *starAnimationView; // @synthesize starAnimationView=_starAnimationView;
@property(retain, nonatomic) UILabel *likeCountLabel; // @synthesize likeCountLabel=_likeCountLabel;
@property(retain, nonatomic) UIButton *likeButton; // @synthesize likeButton=_likeButton;
@property(copy, nonatomic) NSString *scene; // @synthesize scene=_scene;
@property(nonatomic) _Bool enableLikeAnimation; // @synthesize enableLikeAnimation=_enableLikeAnimation;
@property(nonatomic) double animationHeight; // @synthesize animationHeight=_animationHeight;
- (void).cxx_destruct;
- (void)startLikeAnimation;
- (void)setCountLabelColor:(id)arg1;
- (void)updateLikeCount:(id)arg1;
- (void)setupSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 animationHeight:(double)arg2 scene:(id)arg3 enableLikeAnimation:(_Bool)arg4;
- (id)initWithFrame:(struct CGRect)arg1 animationHeight:(double)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

