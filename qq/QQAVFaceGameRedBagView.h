//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <QQMainProject/QQAVRichTextViewDelagate-Protocol.h>

@class CAGradientLayer, NSString, UIImageView, UILabel;

@interface QQAVFaceGameRedBagView : UIView <QQAVRichTextViewDelagate>
{
    UIImageView *_redBagView;
    UIImageView *_lingtBgView;
    UIImageView *_ribbonView;
    UIImageView *_count1View;
    UIImageView *_count2View;
    UIImageView *_count3View;
    UIImageView *_goView;
    UILabel *_loadingLabel;
    UIView *_loadingView;
    UIView *_porgressView;
    CAGradientLayer *_bgLayer;
    CDUnknownBlockType _showBlock;
    CDUnknownBlockType _countBlock;
    _Bool _isAnimate;
    _Bool _isPause;
    int _type;
}

@property(nonatomic) _Bool isPause; // @synthesize isPause=_isPause;
@property(nonatomic) int type; // @synthesize type=_type;
- (void)stopProgress;
- (void)startProgress;
- (void)selectIndex:(long long)arg1;
- (void)countGo;
- (void)countNum:(int)arg1;
- (void)ribbonFadeIn;
- (void)redBagAndRibbonFadeOutWithCount;
- (void)redBagAndRibbonFadeOut;
- (void)redBagAndLightFadeIn;
- (void)runSpinAnimationOnView:(id)arg1 duration:(double)arg2 rotation:(double)arg3;
- (void)stopAnimation;
- (void)countDown:(CDUnknownBlockType)arg1;
- (void)show:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

