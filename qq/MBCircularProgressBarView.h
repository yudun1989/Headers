//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIColor;

@interface MBCircularProgressBarView : UIView
{
    double _progressRotationAngle;
}

+ (Class)layerClass;
@property(nonatomic) double progressRotationAngle; // @synthesize progressRotationAngle=_progressRotationAngle;
- (id)progressLayer;
- (int)safeCapType:(long long)arg1;
@property(retain, nonatomic) UIColor *progressColor;
@property(nonatomic) double progressLineWidth;
@property(nonatomic) double progressAngle;
@property(nonatomic) double emptyLineWidth;
@property(retain, nonatomic) UIColor *progressStrokeColor;
@property(nonatomic) double value;
- (void)initView:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;

@end

