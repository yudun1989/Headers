//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "AWECustomTransitionDelegate-Protocol.h"
#import "AWELiveAnchorStartLiveControllerDelegate-Protocol.h"
#import "AWELiveEntranceToolViewDelegate-Protocol.h"
#import "AWEStoryFilterViewControllerDelegate-Protocol.h"
#import "AWEStoryPublishControllerDelegate-Protocol.h"
#import "AWEStoryRecorderProgressViewDelegate-Protocol.h"
#import "BTDRouterViewControllerProtocol-Protocol.h"
#import "IESCameraDelegate-Protocol.h"

@class AWEBubble, AWEFeedTransition, AWEFilterModel, AWELiveAnchorStartLiveController, AWELiveAnchorViewController, AWELiveEntranceBaseView, AWELiveEntranceToolView, AWELiveEntranceTopToolView, AWELiveEntranceView, AWEStoryAuthorityView, AWEStoryBaseView, AWEStoryFilterViewController, AWEStoryPublishController, AWEStoryRecorderProgressView, AWEVideoPublishViewModel, CADisplayLink, HTSVideoData, IESCamera, NSArray, NSObject, NSString, UIButton, UIImageView, UILabel, UIView;
@protocol OS_dispatch_queue;

@interface AWEStoryRecorderController : UIViewController <AWECustomTransitionDelegate, IESCameraDelegate, AWEStoryPublishControllerDelegate, AWEStoryRecorderProgressViewDelegate, AWELiveAnchorStartLiveControllerDelegate, AWELiveEntranceToolViewDelegate, BTDRouterViewControllerProtocol, AWEStoryFilterViewControllerDelegate>
{
    AWEFeedTransition *_transition;
    NSObject<OS_dispatch_queue> *_cameraQueue;
    _Bool _previousKeepAlive;
    _Bool _hasBuildCamera;
    _Bool _hasShowStoryGuide;
    _Bool _isRecording;
    _Bool _exporting;
    _Bool _isFreshedCamera;
    _Bool _isResetedViewFrame;
    _Bool _liveMode;
    _Bool _canBeLivePodcast;
    _Bool _hasSetupCamera;
    _Bool _isShowingLongPressGuide;
    AWEVideoPublishViewModel *_publishModel;
    AWEFilterModel *_currentFilter;
    double _safeBottomHeight;
    UIImageView *_focusImageView;
    long long _removeActionVersion;
    IESCamera *_camera;
    HTSVideoData *_videoData;
    NSArray *_observers;
    AWEStoryFilterViewController *_filterController;
    double _beignTime;
    double _duration;
    CADisplayLink *_displayLink;
    UIView *_cameraView;
    UIImageView *_lastCaptureView;
    AWEStoryBaseView *_storyBaseView;
    AWELiveEntranceToolView *_toolView;
    AWELiveEntranceTopToolView *_topToolView;
    UIButton *_sendButton;
    UIImageView *_recordImageView;
    AWEStoryRecorderProgressView *_progressView;
    AWEStoryPublishController *_publishVc;
    AWEStoryAuthorityView *_authorityView;
    UILabel *_doubleClickHintLabel;
    AWEBubble *_tipBubble;
    AWELiveEntranceBaseView *_baseView;
    UIView *_topGradientView;
    UIView *_bottomGradientView;
    AWELiveEntranceView *_liveView;
    UIButton *_filterBtn;
    AWELiveAnchorStartLiveController *_liveStartController;
    AWELiveAnchorViewController *_anchorVC;
    double _bottomToolHeight;
    long long _liveEnterTimestamp;
}

+ (void)load;
@property(nonatomic) _Bool isShowingLongPressGuide; // @synthesize isShowingLongPressGuide=_isShowingLongPressGuide;
@property(nonatomic) _Bool hasSetupCamera; // @synthesize hasSetupCamera=_hasSetupCamera;
@property(nonatomic) long long liveEnterTimestamp; // @synthesize liveEnterTimestamp=_liveEnterTimestamp;
@property(nonatomic) double bottomToolHeight; // @synthesize bottomToolHeight=_bottomToolHeight;
@property(nonatomic) _Bool canBeLivePodcast; // @synthesize canBeLivePodcast=_canBeLivePodcast;
@property(retain, nonatomic) AWELiveAnchorViewController *anchorVC; // @synthesize anchorVC=_anchorVC;
@property(retain, nonatomic) AWELiveAnchorStartLiveController *liveStartController; // @synthesize liveStartController=_liveStartController;
@property(nonatomic) _Bool liveMode; // @synthesize liveMode=_liveMode;
@property(retain, nonatomic) UIButton *filterBtn; // @synthesize filterBtn=_filterBtn;
@property(retain, nonatomic) AWELiveEntranceView *liveView; // @synthesize liveView=_liveView;
@property(retain, nonatomic) UIView *bottomGradientView; // @synthesize bottomGradientView=_bottomGradientView;
@property(retain, nonatomic) UIView *topGradientView; // @synthesize topGradientView=_topGradientView;
@property(retain, nonatomic) AWELiveEntranceBaseView *baseView; // @synthesize baseView=_baseView;
@property(retain, nonatomic) AWEBubble *tipBubble; // @synthesize tipBubble=_tipBubble;
@property(retain, nonatomic) UILabel *doubleClickHintLabel; // @synthesize doubleClickHintLabel=_doubleClickHintLabel;
@property(retain, nonatomic) AWEStoryAuthorityView *authorityView; // @synthesize authorityView=_authorityView;
@property(nonatomic) __weak AWEStoryPublishController *publishVc; // @synthesize publishVc=_publishVc;
@property(retain, nonatomic) AWEStoryRecorderProgressView *progressView; // @synthesize progressView=_progressView;
@property(retain, nonatomic) UIImageView *recordImageView; // @synthesize recordImageView=_recordImageView;
@property(retain, nonatomic) UIButton *sendButton; // @synthesize sendButton=_sendButton;
@property(retain, nonatomic) AWELiveEntranceTopToolView *topToolView; // @synthesize topToolView=_topToolView;
@property(retain, nonatomic) AWELiveEntranceToolView *toolView; // @synthesize toolView=_toolView;
@property(retain, nonatomic) AWEStoryBaseView *storyBaseView; // @synthesize storyBaseView=_storyBaseView;
@property(nonatomic) _Bool isResetedViewFrame; // @synthesize isResetedViewFrame=_isResetedViewFrame;
@property(nonatomic) _Bool isFreshedCamera; // @synthesize isFreshedCamera=_isFreshedCamera;
@property(retain, nonatomic) UIImageView *lastCaptureView; // @synthesize lastCaptureView=_lastCaptureView;
@property(retain, nonatomic) UIView *cameraView; // @synthesize cameraView=_cameraView;
@property(nonatomic, getter=isExporting) _Bool exporting; // @synthesize exporting=_exporting;
@property(retain, nonatomic) CADisplayLink *displayLink; // @synthesize displayLink=_displayLink;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(nonatomic) _Bool isRecording; // @synthesize isRecording=_isRecording;
@property(nonatomic) _Bool hasShowStoryGuide; // @synthesize hasShowStoryGuide=_hasShowStoryGuide;
@property(nonatomic) _Bool hasBuildCamera; // @synthesize hasBuildCamera=_hasBuildCamera;
@property(nonatomic) double beignTime; // @synthesize beignTime=_beignTime;
@property(retain, nonatomic) AWEStoryFilterViewController *filterController; // @synthesize filterController=_filterController;
@property(nonatomic) _Bool previousKeepAlive; // @synthesize previousKeepAlive=_previousKeepAlive;
@property(retain, nonatomic) NSArray *observers; // @synthesize observers=_observers;
@property(retain, nonatomic) HTSVideoData *videoData; // @synthesize videoData=_videoData;
@property(retain, nonatomic) IESCamera *camera; // @synthesize camera=_camera;
@property(nonatomic) long long removeActionVersion; // @synthesize removeActionVersion=_removeActionVersion;
@property(retain, nonatomic) UIImageView *focusImageView; // @synthesize focusImageView=_focusImageView;
@property(nonatomic) double safeBottomHeight; // @synthesize safeBottomHeight=_safeBottomHeight;
@property(retain, nonatomic) AWEFilterModel *currentFilter; // @synthesize currentFilter=_currentFilter;
@property(retain, nonatomic) AWEVideoPublishViewModel *publishModel; // @synthesize publishModel=_publishModel;
- (void).cxx_destruct;
- (_Bool)applyFilter:(id)arg1;
@property(nonatomic) _Bool defaultBeauty;
- (void)didClickedSend;
- (void)viewSafeAreaInsetsDidChange;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithRouterParamDict:(id)arg1;
- (id)init;
- (void)dealloc;
- (void)didFinishGestureTransition:(id)arg1;
- (void)didChangeGestureTransition:(id)arg1;
- (void)didStartGestureTransition:(id)arg1;
- (_Bool)shouldStartGestureTransition:(id)arg1;
- (_Bool)prefersNavigationBarHidden;
- (_Bool)prefersStatusBarHidden;
- (void)awe_buildLastCaptureView;
- (void)awe_setLastCaptureImage;
- (void)_hideForFilter:(_Bool)arg1;
- (void)awe_buildGradientView;
- (void)awe_hideFilterBtn:(_Bool)arg1;
- (void)awe_clickTorchSwitchBtn:(id)arg1;
- (void)awe_clickStartLiveBtn:(id)arg1;
- (void)awe_clickSwapCameraBtn:(id)arg1;
- (void)awe_clickBackBtn:(id)arg1;
- (void)awe_clickFilterBtn:(id)arg1;
- (void)awe_addObservers;
- (void)awe_dismissAnimated:(_Bool)arg1;
- (void)awe_setFilterAndPreviousStatus;
- (id)awe_liveToolArray;
- (void)awe_resetViewsFrame:(double)arg1;
- (void)awe_buildFilterBtnInView:(id)arg1 withFrame:(struct CGRect)arg2;
- (void)awe_buildRecordBtn;
- (void)awe_buildToolView;
- (void)awe_buildLiveView;
- (void)awe_buildContainerView;
- (void)awe_setAudioSessionCategory;
- (void)awe_addSubviews;
- (void)awe_init;
- (void)awe_dealloc;
- (void)camera:(id)arg1 willFocusAtPoint:(struct CGPoint)arg2;
- (void)camera:(id)arg1 didPauseVideoRecordingWithError:(id)arg2;
- (void)camera:(id)arg1 didStartVideoRecordingWithError:(id)arg2;
- (void)camera:(id)arg1 didStartVideoCaptureWithError:(id)arg2;
- (void)camera:(id)arg1 didStopVideoCaptureWithError:(id)arg2;
- (void)cameraDidFailedAuthAudioCapture:(id)arg1;
- (void)cameraDidFailedAuthVideoCapture:(id)arg1;
- (void)_jumpToSetting;
- (void)_showStoryGuideViewIfNeeded;
- (void)_freshCamera;
- (long long)_defaultPosition;
- (void)_torchButtonFadedHidden;
- (void)_torchButtonFadedShow;
- (void)_setDefaultPosition:(long long)arg1;
- (void)_dismissDoubleClickHint;
- (void)_didDoubleTap:(id)arg1;
- (void)_addDoubleClickSwithCamera;
- (void)_buildCamera;
- (void)_buildCameraProgressIfNeeded;
- (void)_buildCameraProgress;
- (void)clickSwapCameraBtn;
- (void)showDoubleClickSwapCameraIfNeededWithPrgress:(double)arg1;
- (void)cameraEnablePreview;
- (void)stopCameraCapture;
- (void)startCameraCapture;
- (void)checkDeviceAuthority;
- (void)animaitonDidEnd:(id)arg1;
- (void)animationChange:(id)arg1;
- (void)animaitonDidBegin:(id)arg1;
- (_Bool)animaitonShouldBegin:(id)arg1;
- (void)publishVcDidClickedCancel:(id)arg1;
- (void)_showLongPressGuide;
- (void)_recoveryRecordImageView;
- (void)_cameraPauseRecord;
- (void)_pauseRecord:(id)arg1;
- (void)_increaseTime:(id)arg1;
- (void)_stopTimer;
- (void)_startTimerWithSpeed:(double)arg1;
- (void)_cameraStartRecord;
- (void)_startRecord;
- (void)_biggerRecordImageView;
- (double)_selectedSpeed;
- (void)_hideForRecord:(_Bool)arg1;
- (void)_buildPublishModel;
- (void)appendVideoFragmentInfo;
- (void)recordFailure;
- (void)recordFinishWithAnimation:(_Bool)arg1;
- (void)setProgress:(double)arg1;
- (void)resetPublishView;
- (void)buildPublishViewController;
- (void)didSelectItemAtIndex:(long long)arg1;
- (void)didCreateLiveRoom:(id)arg1;
- (void)setLiveShareText;
- (void)setLiveTitleText;
- (void)setLiveSubviewsFrame;
- (void)setLiveRoomUI;
- (void)startLive;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

