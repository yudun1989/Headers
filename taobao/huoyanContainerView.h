//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UILabel, huoyanBridgeViewController, huoyanOverlayView;

@interface huoyanContainerView : UIView
{
    huoyanBridgeViewController *_huoyan;
    huoyanOverlayView *_overlayView;
    UIView *_cameraApertureTextView;
    UILabel *_cameraApertureLabel;
}

@property(retain, nonatomic) UILabel *cameraApertureLabel; // @synthesize cameraApertureLabel=_cameraApertureLabel;
@property(retain, nonatomic) UIView *cameraApertureTextView; // @synthesize cameraApertureTextView=_cameraApertureTextView;
@property(retain, nonatomic) huoyanOverlayView *overlayView; // @synthesize overlayView=_overlayView;
@property(nonatomic) __weak huoyanBridgeViewController *huoyan; // @synthesize huoyan=_huoyan;
- (void).cxx_destruct;
- (void)clearCameraApertureTextView;
- (void)hideCameraApertureTextView;
- (void)showCameraApertureTextView;
- (void)viewWillDisappear;
- (void)stopScanAnimation;
- (void)startScanAnimation;
- (void)setup;
- (void)setupOverlayView;
- (id)initWithFrame:(struct CGRect)arg1 huoyanViewController:(id)arg2;

@end

