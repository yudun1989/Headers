//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QQViewController.h>

#import <QQMainProject/QQNavigationControllerEventDelegate-Protocol.h>
#import <QQMainProject/QQReadInJoyVideoFullScreenTopViewDelegate-Protocol.h>
#import <QQMainProject/UIGestureRecognizerDelegate-Protocol.h>

@class BarrageWebView, CAGradientLayer, FullScreenVideoStateView, ItemFullScreenVideoIndicator, ItemFullScreenVideoProgressIndicator, MPVolumeView, NSString, QQReadInJoyVideoFullScreenTopView, UIPanGestureRecognizer, UISlider, UIView;
@protocol QQReadInJoyFullVideoViewDelegate;

@interface QQReadInJoyVideoItemFullScreenViewController : QQViewController <QQReadInJoyVideoFullScreenTopViewDelegate, UIGestureRecognizerDelegate, QQNavigationControllerEventDelegate>
{
    _Bool _muted;
    _Bool _disableResponseStateViewDisappear;
    _Bool _portraitExit;
    int _volumeType;
    long long _enterOrientation;
    CDUnknownBlockType _completion;
    CDUnknownBlockType _disappearCompletion;
    BarrageWebView *_barrageWebview;
    UIView<QQReadInJoyFullVideoViewDelegate> *_delegateView;
    QQReadInJoyVideoFullScreenTopView *_topBar;
    UIView *_oldVideoViewParent;
    UIView *_videoView;
    unsigned long long _oldVideoViewIndex;
    FullScreenVideoStateView *_videoStateView;
    unsigned long long _oldVideoStateViewIndex;
    MPVolumeView *_mpVolumeView;
    UISlider *_volumeSlider;
    UIPanGestureRecognizer *_panGesture;
    ItemFullScreenVideoIndicator *_brightnessIndicator;
    ItemFullScreenVideoIndicator *_volumeIndicator;
    ItemFullScreenVideoProgressIndicator *_progressIndicator;
    CAGradientLayer *_topGradientLayer;
    CAGradientLayer *_leadingGradientLayer;
    CAGradientLayer *_trailingGradientLayer;
    struct CGRect _enterFrame;
    struct CGRect _oldVideoParentViewFrame;
    struct CGRect _oldVideoViewFrame;
}

+ (_Bool)checkVideoLanscape:(struct CGSize)arg1;
@property(retain, nonatomic) CAGradientLayer *trailingGradientLayer; // @synthesize trailingGradientLayer=_trailingGradientLayer;
@property(retain, nonatomic) CAGradientLayer *leadingGradientLayer; // @synthesize leadingGradientLayer=_leadingGradientLayer;
@property(retain, nonatomic) CAGradientLayer *topGradientLayer; // @synthesize topGradientLayer=_topGradientLayer;
@property(retain, nonatomic) ItemFullScreenVideoProgressIndicator *progressIndicator; // @synthesize progressIndicator=_progressIndicator;
@property(retain, nonatomic) ItemFullScreenVideoIndicator *volumeIndicator; // @synthesize volumeIndicator=_volumeIndicator;
@property(retain, nonatomic) ItemFullScreenVideoIndicator *brightnessIndicator; // @synthesize brightnessIndicator=_brightnessIndicator;
@property(retain, nonatomic) UIPanGestureRecognizer *panGesture; // @synthesize panGesture=_panGesture;
@property(retain, nonatomic) UISlider *volumeSlider; // @synthesize volumeSlider=_volumeSlider;
@property(retain, nonatomic) MPVolumeView *mpVolumeView; // @synthesize mpVolumeView=_mpVolumeView;
@property(nonatomic) _Bool portraitExit; // @synthesize portraitExit=_portraitExit;
@property(nonatomic) unsigned long long oldVideoStateViewIndex; // @synthesize oldVideoStateViewIndex=_oldVideoStateViewIndex;
@property(retain, nonatomic) FullScreenVideoStateView *videoStateView; // @synthesize videoStateView=_videoStateView;
@property(nonatomic) _Bool disableResponseStateViewDisappear; // @synthesize disableResponseStateViewDisappear=_disableResponseStateViewDisappear;
@property(nonatomic) unsigned long long oldVideoViewIndex; // @synthesize oldVideoViewIndex=_oldVideoViewIndex;
@property(nonatomic) struct CGRect oldVideoViewFrame; // @synthesize oldVideoViewFrame=_oldVideoViewFrame;
@property(retain, nonatomic) UIView *videoView; // @synthesize videoView=_videoView;
@property(retain, nonatomic) UIView *oldVideoViewParent; // @synthesize oldVideoViewParent=_oldVideoViewParent;
@property(nonatomic) struct CGRect oldVideoParentViewFrame; // @synthesize oldVideoParentViewFrame=_oldVideoParentViewFrame;
@property(retain, nonatomic) QQReadInJoyVideoFullScreenTopView *topBar; // @synthesize topBar=_topBar;
@property(retain, nonatomic) UIView<QQReadInJoyFullVideoViewDelegate> *delegateView; // @synthesize delegateView=_delegateView;
@property(retain, nonatomic) BarrageWebView *barrageWebview; // @synthesize barrageWebview=_barrageWebview;
@property(nonatomic) struct CGRect enterFrame; // @synthesize enterFrame=_enterFrame;
@property(nonatomic) _Bool muted; // @synthesize muted=_muted;
@property(nonatomic) int volumeType; // @synthesize volumeType=_volumeType;
@property(copy, nonatomic) CDUnknownBlockType disappearCompletion; // @synthesize disappearCompletion=_disappearCompletion;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(nonatomic) long long enterOrientation; // @synthesize enterOrientation=_enterOrientation;
- (void).cxx_destruct;
- (void)onBarrageButtonTap:(id)arg1;
- (void)updateBarrageButtonStatus;
- (void)onCloseButtonTap;
- (void)volumeValueDidChanged:(id)arg1;
- (void)volumeChanged:(id)arg1;
- (void)qqNavigationControllerDidPopViewController;
- (void)exitVC;
- (void)didRotate;
- (void)popViewControllerWithCompletion:(CDUnknownBlockType)arg1;
- (void)restoreVideoMode;
- (void)updateMuteButtonStatus;
- (void)videoStateViewDidReceiveDisappearNotification:(id)arg1;
- (void)viewWillRotation;
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (_Bool)prefersStatusBarHidden;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotate;
- (void)resetVideoVideoFrame:(struct CGRect)arg1;
- (void)setSubViewsFrame;
- (_Bool)isLandscapeVideoSize:(struct CGSize *)arg1;
- (void)willResignActive:(id)arg1;
- (void)onNetWorkChange:(id)arg1;
- (void)didBecomeActive:(id)arg1;
- (_Bool)isSupportRightDragToGoBack;
- (void)setDeviceOrientationPortrait:(_Bool)arg1;
- (void)rotateToPortraitWithCompletion:(CDUnknownBlockType)arg1;
- (void)fullScreenImpl;
- (void)rotateViewForfullScreen:(_Bool)arg1;
- (void)configVideoView;
- (void)configTopBar;
- (void)dismissIndicatorAnimated;
- (void)dismissIndicatorAnimated:(_Bool)arg1;
- (void)didPan:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)setupGestureRecognizer;
- (void)restoreVideoAndStateView;
- (void)initVideoAndStateViewInfo;
- (int)getCallTime;
- (void)autoDismissTopBar;
- (void)setTopBarHidden:(_Bool)arg1 animated:(_Bool)arg2;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithQQReadInJoyParentVideoView:(id)arg1 DeviceOrientation:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

