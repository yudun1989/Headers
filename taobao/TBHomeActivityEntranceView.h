//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIImageView.h>

@class CMMotionManager, NSArray, NSString;

@interface TBHomeActivityEntranceView : UIImageView
{
    _Bool _needResetViews;
    _Bool _zoomOrangeSwitch;
    _Bool _motionOrangeSwitch;
    _Bool _animServerSwitch;
    NSArray *_sourceImageUrlArray;
    NSString *_enableAnimation;
    NSArray *_imageUrlArray;
    CMMotionManager *_motionManager;
    UIImageView *_firstAnimView;
    UIImageView *_secondAnimView;
    UIImageView *_thirdAnimView;
    UIImageView *_entranceView;
    double _nowOffsetY;
    double _bottomOffsetY;
    double _rotationY;
}

@property(nonatomic) _Bool animServerSwitch; // @synthesize animServerSwitch=_animServerSwitch;
@property(nonatomic) _Bool motionOrangeSwitch; // @synthesize motionOrangeSwitch=_motionOrangeSwitch;
@property(nonatomic) _Bool zoomOrangeSwitch; // @synthesize zoomOrangeSwitch=_zoomOrangeSwitch;
@property(nonatomic) double rotationY; // @synthesize rotationY=_rotationY;
@property(nonatomic) double bottomOffsetY; // @synthesize bottomOffsetY=_bottomOffsetY;
@property(nonatomic) double nowOffsetY; // @synthesize nowOffsetY=_nowOffsetY;
@property(nonatomic) _Bool needResetViews; // @synthesize needResetViews=_needResetViews;
@property(retain, nonatomic) UIImageView *entranceView; // @synthesize entranceView=_entranceView;
@property(retain, nonatomic) UIImageView *thirdAnimView; // @synthesize thirdAnimView=_thirdAnimView;
@property(retain, nonatomic) UIImageView *secondAnimView; // @synthesize secondAnimView=_secondAnimView;
@property(retain, nonatomic) UIImageView *firstAnimView; // @synthesize firstAnimView=_firstAnimView;
@property(retain, nonatomic) CMMotionManager *motionManager; // @synthesize motionManager=_motionManager;
@property(retain, nonatomic) NSArray *imageUrlArray; // @synthesize imageUrlArray=_imageUrlArray;
@property(retain, nonatomic) NSString *enableAnimation; // @synthesize enableAnimation=_enableAnimation;
@property(retain, nonatomic) NSArray *sourceImageUrlArray; // @synthesize sourceImageUrlArray=_sourceImageUrlArray;
- (void).cxx_destruct;
- (void)resetAnimView:(id *)arg1 imageUrl:(id)arg2;
- (void)resetAnimViewsWithImageUrlArray:(id)arg1;
- (void)layoutSubviews;
- (void)resetImageUrlArrayWithSourceArray:(id)arg1;
- (void)resetFrame:(struct CGRect)arg1 inView:(id)arg2;
- (void)updateZoomAnimation;
- (void)updateZoomAnimationWithBottomOffsetY:(double)arg1 scrollOffsetY:(double)arg2;
- (void)moveCenterXWithRotationY:(double)arg1 scale:(double)arg2 inView:(id)arg3;
- (void)updateMotionAnimation;
- (void)updateMotionAnimationWithRoationRateY:(double)arg1;
- (void)updateAnimationWithoutParam;
- (void)updateAnimationWithBottomOffsetY:(double)arg1 scrollOffsetY:(double)arg2 rotationRateY:(double)arg3;
- (void)updateAnimationWithRoationRateY:(double)arg1;
- (void)updateAnimationWithScrollOffsetY:(double)arg1;
- (void)updateAnimationWithBottomOffsetY:(double)arg1;
- (void)dealloc;
- (void)didEnterBackground:(id)arg1;
- (void)willEnterForeground:(id)arg1;
- (void)stopMotionAnimationUpdate;
- (void)startMotionAnimationUpdate;
- (void)willMoveToWindow:(id)arg1;
- (void)requestOrangeSwitch;
- (id)init;

@end

