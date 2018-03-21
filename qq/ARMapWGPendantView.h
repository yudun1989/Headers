//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <QQMainProject/CAAnimationDelegate-Protocol.h>

@class CAAnimationGroup, NSMutableArray, NSString, UIImageView;
@protocol ARMapWGPendantViewDelegate;

@interface ARMapWGPendantView : UIView <CAAnimationDelegate>
{
    int _ropeHeight;
    UIImageView *_bagImgV;
    UIImageView *_lightImgV;
    UIImageView *_hongbaoTipsImgV;
    struct CGRect _ropeFrame;
    struct CGRect _hongbFrame;
    CAAnimationGroup *_animationGroup;
    NSMutableArray *_emitterList;
    _Bool _show;
    _Bool _clickedEnable;
    _Bool _scrollViewDraging;
    _Bool _lightImgHidden;
    _Bool _tipsImgHidden;
    id <ARMapWGPendantViewDelegate> _delegate;
    CDUnknownBlockType _fladeDownCompleteBlock;
    CDUnknownBlockType _fladeUpCompleteBlock;
    UIImageView *_ropeView;
}

@property(retain, nonatomic) UIImageView *ropeView; // @synthesize ropeView=_ropeView;
@property(nonatomic) _Bool tipsImgHidden; // @synthesize tipsImgHidden=_tipsImgHidden;
@property(nonatomic) _Bool lightImgHidden; // @synthesize lightImgHidden=_lightImgHidden;
@property(nonatomic) _Bool scrollViewDraging; // @synthesize scrollViewDraging=_scrollViewDraging;
@property(nonatomic) _Bool clickedEnable; // @synthesize clickedEnable=_clickedEnable;
@property(nonatomic) _Bool show; // @synthesize show=_show;
@property(copy, nonatomic) CDUnknownBlockType fladeUpCompleteBlock; // @synthesize fladeUpCompleteBlock=_fladeUpCompleteBlock;
@property(copy, nonatomic) CDUnknownBlockType fladeDownCompleteBlock; // @synthesize fladeDownCompleteBlock=_fladeDownCompleteBlock;
@property(nonatomic) id <ARMapWGPendantViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)stopThrowFlowerAnimation;
- (void)startThrowFlowerAnimation;
- (_Bool)isAnimating;
- (void)setCloseRopeView;
- (void)setOpenRopeView;
- (void)setupThrowFlower;
- (id)throwFlowerLayer;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)animationDidStart:(id)arg1;
- (void)fladeUp;
- (void)fladeDown;
- (void)updateWithLogoImage:(id)arg1;
- (void)addToView:(id)arg1;
- (void)updateBagImage:(id)arg1;
- (void)update:(int)arg1;
- (void)sizeToFit;
- (void)layoutSubviews;
- (void)setup;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

