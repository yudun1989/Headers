//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIImageView.h>

@class CALayer;

@interface QQNetIndicator : UIImageView
{
    CALayer *_slider;
    _Bool _animating;
    _Bool _autoHide;
}

@property(nonatomic) _Bool autoHide; // @synthesize autoHide=_autoHide;
@property(readonly, nonatomic) _Bool animating; // @synthesize animating=_animating;
- (void)didMoveToWindow;
- (void)resumeAnimation;
- (void)stopAnimation;
- (void)reloadAppearance;
- (void)startAnimation;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

