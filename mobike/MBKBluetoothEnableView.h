//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "MBKControlCenterViewDelegate-Protocol.h"
#import "POPAnimationDelegate-Protocol.h"

@class MBKControlCenterView, NSString, POPBasicAnimation, POPSpringAnimation, UIImageView, UILabel;

@interface MBKBluetoothEnableView : UIView <POPAnimationDelegate, MBKControlCenterViewDelegate>
{
    UIImageView *_bgdView;
    UIImageView *_phoneView;
    UIView *_screenView;
    MBKControlCenterView *_controlCenterView;
    UILabel *_titleLabel;
    UILabel *_messageLabel;
    POPSpringAnimation *_springInAnimation;
    POPBasicAnimation *_springOutAnimation;
    POPBasicAnimation *_showAnimation;
    POPBasicAnimation *_dismissAnimation;
}

@property(retain, nonatomic) POPBasicAnimation *dismissAnimation; // @synthesize dismissAnimation=_dismissAnimation;
@property(retain, nonatomic) POPBasicAnimation *showAnimation; // @synthesize showAnimation=_showAnimation;
@property(retain, nonatomic) POPBasicAnimation *springOutAnimation; // @synthesize springOutAnimation=_springOutAnimation;
@property(retain, nonatomic) POPSpringAnimation *springInAnimation; // @synthesize springInAnimation=_springInAnimation;
@property(retain, nonatomic) UILabel *messageLabel; // @synthesize messageLabel=_messageLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) MBKControlCenterView *controlCenterView; // @synthesize controlCenterView=_controlCenterView;
@property(retain, nonatomic) UIView *screenView; // @synthesize screenView=_screenView;
@property(retain, nonatomic) UIImageView *phoneView; // @synthesize phoneView=_phoneView;
@property(retain, nonatomic) UIImageView *bgdView; // @synthesize bgdView=_bgdView;
- (void).cxx_destruct;
- (void)dismissControlCenterView;
- (void)pop_animationDidReachToValue:(id)arg1;
- (double)scaleHeight:(double)arg1;
- (double)scaleWidth:(double)arg1;
- (void)stopAnimation;
- (void)startAnimation;
- (void)remove;
- (void)showInView:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

