//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class ARMapWGYunBGView, UIImageView, UILabel;

@interface ARMapWGMessageBackgroundView : UIView
{
    _Bool _isAnimating;
    int _currentStatus;
    int _currentUIStatus;
    UIImageView *_maskView;
    UILabel *_tipsLabel;
    CDUnknownBlockType _endAnimationBlock;
    CDUnknownBlockType _midAnimationBlock;
    ARMapWGYunBGView *_yunBgView;
    UIImageView *_mapBgImgV;
    UIImageView *_godImgV;
    double _godImgVTargetTop;
}

@property(nonatomic) int currentUIStatus; // @synthesize currentUIStatus=_currentUIStatus;
@property(nonatomic) int currentStatus; // @synthesize currentStatus=_currentStatus;
@property(nonatomic) double godImgVTargetTop; // @synthesize godImgVTargetTop=_godImgVTargetTop;
@property(retain, nonatomic) UIImageView *godImgV; // @synthesize godImgV=_godImgV;
@property(retain, nonatomic) UIImageView *mapBgImgV; // @synthesize mapBgImgV=_mapBgImgV;
@property(retain, nonatomic) ARMapWGYunBGView *yunBgView; // @synthesize yunBgView=_yunBgView;
@property(copy, nonatomic) CDUnknownBlockType midAnimationBlock; // @synthesize midAnimationBlock=_midAnimationBlock;
@property(copy, nonatomic) CDUnknownBlockType endAnimationBlock; // @synthesize endAnimationBlock=_endAnimationBlock;
@property(retain, nonatomic) UILabel *tipsLabel; // @synthesize tipsLabel=_tipsLabel;
@property(retain, nonatomic) UIImageView *maskView; // @synthesize maskView=_maskView;
@property(nonatomic) _Bool isAnimating; // @synthesize isAnimating=_isAnimating;
- (void).cxx_destruct;
- (void)testAnimation:(_Bool)arg1 height:(double)arg2;
- (void)autoFreshWithScrollView:(id)arg1 height:(double)arg2 SuperView:(id)arg3;
- (void)autoBouncesWithScrollView:(id)arg1 SuperView:(id)arg2;
- (void)stopFireAnimatian;
- (void)setMaskViewImage:(id)arg1;
- (void)startFinalFireAnimation;
- (void)startOnFireAnimation;
- (void)transitionAnimation;
- (void)updateTableViewOffset:(struct CGPoint)arg1 scrollview:(id)arg2 isAnimate:(_Bool)arg3;
- (void)resizeGodImageWithStatus:(int)arg1 isResourceReady:(_Bool)arg2;
- (void)resizeGodImageWithStatus:(int)arg1;
- (void)resizeMapBgWithResourceReady:(_Bool)arg1;
- (void)resizeMapBgWithStatus:(int)arg1;
- (void)refreshWithStatus:(int)arg1;
- (double)godImageHeight;
- (id)initWithFrame:(struct CGRect)arg1;

@end

