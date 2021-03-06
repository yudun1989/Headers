//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TTXiguaLiveRecommendBaseCell.h"

@class LOTAnimationView, NSDictionary, SSThemedLabel, TTAsyncCornerImageView, TTVerifyIconImageView, TTXiguaLiveLivingAnimationView, TTXiguaLiveModel, UITapGestureRecognizer;

@interface TTXiguaLiveRecommendNoPicSingleCell : TTXiguaLiveRecommendBaseCell
{
    _Bool _showVerifyIcon;
    NSDictionary *_extraDict;
    TTAsyncCornerImageView *_avatarImageView;
    SSThemedLabel *_nameLabel;
    TTVerifyIconImageView *_veriImageView;
    SSThemedLabel *_subTitleLabel;
    LOTAnimationView *_avatarRoundView;
    TTXiguaLiveLivingAnimationView *_animationView;
    TTXiguaLiveModel *_model;
    UITapGestureRecognizer *_tapGestureRecognizer;
}

@property(retain, nonatomic) UITapGestureRecognizer *tapGestureRecognizer; // @synthesize tapGestureRecognizer=_tapGestureRecognizer;
@property(retain, nonatomic) TTXiguaLiveModel *model; // @synthesize model=_model;
@property(nonatomic) _Bool showVerifyIcon; // @synthesize showVerifyIcon=_showVerifyIcon;
@property(retain, nonatomic) TTXiguaLiveLivingAnimationView *animationView; // @synthesize animationView=_animationView;
@property(retain, nonatomic) LOTAnimationView *avatarRoundView; // @synthesize avatarRoundView=_avatarRoundView;
@property(retain, nonatomic) SSThemedLabel *subTitleLabel; // @synthesize subTitleLabel=_subTitleLabel;
@property(retain, nonatomic) TTVerifyIconImageView *veriImageView; // @synthesize veriImageView=_veriImageView;
@property(retain, nonatomic) SSThemedLabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) TTAsyncCornerImageView *avatarImageView; // @synthesize avatarImageView=_avatarImageView;
@property(copy, nonatomic) NSDictionary *extraDict; // @synthesize extraDict=_extraDict;
- (void).cxx_destruct;
- (void)addKVO;
- (void)onClickCell;
- (void)avatarClick:(id)arg1;
- (void)tryStopAnimation;
- (void)tryBeginAnimation;
- (void)configWithModel:(id)arg1;
- (void)layoutSubviews;
- (void)themeChanged:(id)arg1;
- (void)refreshLayerUI;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

@end

