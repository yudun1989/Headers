//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CAMediaTimingFunction, CAShapeLayer;

@interface MMMaterialDesignSpinner : UIView
{
    _Bool _hidesWhenStopped;
    _Bool _isAnimating;
    CAShapeLayer *_progressLayer;
    CAMediaTimingFunction *_timingFunction;
}

@property(nonatomic) _Bool isAnimating; // @synthesize isAnimating=_isAnimating;
@property(retain, nonatomic) CAMediaTimingFunction *timingFunction; // @synthesize timingFunction=_timingFunction;
@property(nonatomic) _Bool hidesWhenStopped; // @synthesize hidesWhenStopped=_hidesWhenStopped;
- (void).cxx_destruct;
@property(nonatomic) double lineWidth;
@property(readonly, nonatomic) CAShapeLayer *progressLayer; // @synthesize progressLayer=_progressLayer;
- (void)updatePath;
- (void)stopAnimating;
- (void)startAnimating;
- (void)setAnimating:(_Bool)arg1;
- (void)resetAnimations;
- (void)tintColorDidChange;
- (void)layoutSubviews;
- (void)dealloc;
- (void)initialize;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

