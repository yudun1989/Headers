//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CABasicAnimation, CAKeyframeAnimation, CALayer, UIImageView;

@interface TTRedpackIntroRotationView : UIView
{
    UIImageView *_backgroundImageView;
    CALayer *_rotationLayer;
    CALayer *_imageLayer;
    CAKeyframeAnimation *_imageAnimation;
    CABasicAnimation *_rotationAnimation;
}

@property(retain, nonatomic) CABasicAnimation *rotationAnimation; // @synthesize rotationAnimation=_rotationAnimation;
@property(retain, nonatomic) CAKeyframeAnimation *imageAnimation; // @synthesize imageAnimation=_imageAnimation;
@property(retain, nonatomic) CALayer *imageLayer; // @synthesize imageLayer=_imageLayer;
@property(retain, nonatomic) CALayer *rotationLayer; // @synthesize rotationLayer=_rotationLayer;
@property(retain, nonatomic) UIImageView *backgroundImageView; // @synthesize backgroundImageView=_backgroundImageView;
- (void).cxx_destruct;
- (id)animationImagesArray;
- (void)stopAnimation;
- (void)startAnimation;
- (id)initWithFrame:(struct CGRect)arg1;

@end

