//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class SSThemedLabel, TTRealnameAuthCameraBottomView, TTRealnameAuthCameraTopView, UIImageView;
@protocol CameraButtonTouchDelegate;

@interface TTRealnameAuthCameraView : UIView
{
    id <CameraButtonTouchDelegate> _delegate;
    UIImageView *_overlayView;
    TTRealnameAuthCameraTopView *_topView;
    TTRealnameAuthCameraBottomView *_bottomView;
    UIView *_toastView;
    SSThemedLabel *_tipLabel;
}

@property(retain, nonatomic) SSThemedLabel *tipLabel; // @synthesize tipLabel=_tipLabel;
@property(retain, nonatomic) UIView *toastView; // @synthesize toastView=_toastView;
@property(retain, nonatomic) TTRealnameAuthCameraBottomView *bottomView; // @synthesize bottomView=_bottomView;
@property(retain, nonatomic) TTRealnameAuthCameraTopView *topView; // @synthesize topView=_topView;
@property(retain, nonatomic) UIImageView *overlayView; // @synthesize overlayView=_overlayView;
@property(nonatomic) __weak id <CameraButtonTouchDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)flipButtonTouched:(id)arg1;
- (void)flashButtonTouched:(id)arg1;
- (void)dismissButtonTouched:(id)arg1;
- (void)captureButtonTouched:(id)arg1;
- (void)setupCameraPersonView;
- (void)setupCameraCardViewIsForeground:(_Bool)arg1;
- (void)setupCameraViewWithModel:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

