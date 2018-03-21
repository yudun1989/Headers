//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIControl.h>

@class CALayer, CAShapeLayer, CATextLayer, NSTimer;
@protocol KSCameraZoomControlDelegate;

@interface KSCameraZoomControl : UIControl
{
    id <KSCameraZoomControlDelegate> _delegate;
    double _value;
    long long _showState;
    CALayer *_currentScaleWrapLayer;
    CALayer *_maxScaleWrapLayer;
    CALayer *_minScaleWrapLayer;
    CALayer *_contentLayer;
    CAShapeLayer *_maskLayer;
    CALayer *_wheelLayer;
    CALayer *_wheelingTableLayer;
    CAShapeLayer *_wheelShapeLayer;
    CAShapeLayer *_currentScaleLayer;
    CATextLayer *_currentScaleTextLayer;
    CATextLayer *_maxScaleTextLayer;
    CATextLayer *_minScaleTextLayer;
    double _wheelRadius;
    double _currentWheelRadian;
    double _minZoomValue;
    double _maxZoomValue;
    NSTimer *_dismissTimer;
    struct CGPoint _wheelCenter;
}

@property(retain, nonatomic) NSTimer *dismissTimer; // @synthesize dismissTimer=_dismissTimer;
@property(nonatomic) double maxZoomValue; // @synthesize maxZoomValue=_maxZoomValue;
@property(nonatomic) double minZoomValue; // @synthesize minZoomValue=_minZoomValue;
@property(nonatomic) double currentWheelRadian; // @synthesize currentWheelRadian=_currentWheelRadian;
@property(nonatomic) double wheelRadius; // @synthesize wheelRadius=_wheelRadius;
@property(nonatomic) struct CGPoint wheelCenter; // @synthesize wheelCenter=_wheelCenter;
@property(retain, nonatomic) CATextLayer *minScaleTextLayer; // @synthesize minScaleTextLayer=_minScaleTextLayer;
@property(retain, nonatomic) CATextLayer *maxScaleTextLayer; // @synthesize maxScaleTextLayer=_maxScaleTextLayer;
@property(retain, nonatomic) CATextLayer *currentScaleTextLayer; // @synthesize currentScaleTextLayer=_currentScaleTextLayer;
@property(retain, nonatomic) CAShapeLayer *currentScaleLayer; // @synthesize currentScaleLayer=_currentScaleLayer;
@property(retain, nonatomic) CAShapeLayer *wheelShapeLayer; // @synthesize wheelShapeLayer=_wheelShapeLayer;
@property(retain, nonatomic) CALayer *wheelingTableLayer; // @synthesize wheelingTableLayer=_wheelingTableLayer;
@property(retain, nonatomic) CALayer *wheelLayer; // @synthesize wheelLayer=_wheelLayer;
@property(retain, nonatomic) CAShapeLayer *maskLayer; // @synthesize maskLayer=_maskLayer;
@property(retain, nonatomic) CALayer *contentLayer; // @synthesize contentLayer=_contentLayer;
@property(retain, nonatomic) CALayer *minScaleWrapLayer; // @synthesize minScaleWrapLayer=_minScaleWrapLayer;
@property(retain, nonatomic) CALayer *maxScaleWrapLayer; // @synthesize maxScaleWrapLayer=_maxScaleWrapLayer;
@property(retain, nonatomic) CALayer *currentScaleWrapLayer; // @synthesize currentScaleWrapLayer=_currentScaleWrapLayer;
@property(nonatomic) long long showState; // @synthesize showState=_showState;
@property(nonatomic) double value; // @synthesize value=_value;
@property(nonatomic) __weak id <KSCameraZoomControlDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (double)_radianWithValue:(double)arg1;
- (double)_valueWithRadian:(double)arg1;
- (id)_formatZoomTextWithValue:(double)arg1;
- (void)_dismiss:(_Bool)arg1;
- (void)_rescheduleDismiss;
- (void)dismissIfPresent;
- (void)popUpIfNeedWithAutoDismissAndCurrentZoomFactor:(double)arg1 andMaxZoomFactor:(double)arg2;
- (void)cancelTrackingWithEvent:(id)arg1;
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (_Bool)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (_Bool)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (id)_makeWrapLayerAndSetupTextLayer:(id)arg1 withZoomValue:(double)arg2;
- (void)_setupWheelLayerWithMaskCenter:(struct CGPoint)arg1 andMaskRadius:(double)arg2;
- (id)_makeCircleShapeLayerWithCenter:(struct CGPoint)arg1 radius:(double)arg2 fillColor:(id)arg3 strokeColor:(id)arg4 strokeWidth:(double)arg5;
- (void)_setupLayers;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (struct CGSize)intrinsicContentSize;
- (void)didMoveToSuperview;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

