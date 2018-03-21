//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "KSCameraViewController.h"

#import "AVAudioPlayerDelegate-Protocol.h"
#import "GPUImageVideoCameraDelegate-Protocol.h"
#import "KSPostComponent-Protocol.h"
#import "KSRecordingManagerDelegate-Protocol.h"
#import "KSVideoRecordActionsControllerDelegate-Protocol.h"

@class AVAudioPlayer, AVPlayer, FMResource, GPUImageFilter, GPUImageFilterPipeline, GPUImageNormalBlendFilter, GPUImageUIElement, KSBubbleAlertView, KSCaptureDeviceLowLightDetector, KSEvenlySpacedViewsContainer, KSExtensionButton, KSLyricsLineTimestampController, KSMagicFace, KSMagicFaceResource, KSMotionManager, KSMusicItem, KSMusicResourceManager, KSPaintMagicFaceViewController, KSPoi, KSRecordingManager, KSRoundedCornerSlider, KSSwapFacePhotosViewController, KSUTaskMetaData, KSUnhittableView, KSVideoRecordActionsController, KSVideoRecordFrameStat, KSVideoRecordSizeConfiguration, NSArray, NSLayoutConstraint, NSMutableArray, NSMutableDictionary, NSString, NSTimer, THLabel, UIButton, UIImageView, UILabel, UIView;
@protocol KSVideoRecordingSoundtrack;

@interface KSVideoRecordViewController : KSCameraViewController <GPUImageVideoCameraDelegate, AVAudioPlayerDelegate, KSVideoRecordActionsControllerDelegate, KSRecordingManagerDelegate, KSPostComponent>
{
    _Bool _uapLog;
    _Bool _forceOpenMusicTag;
    _Bool _forceOpenMagicFaceTag;
    _Bool _active;
    _Bool _cameraOutputFrameEverArrived;
    _Bool _needSetupDefaultMagicFace;
    _Bool _starting;
    _Bool _cameraActive;
    _Bool _showDebugInfo;
    _Bool _isLastMagicResImitationShow;
    int _videoLengthType;
    float _frameRate;
    double _videoLength;
    NSString *_currentPageURL;
    KSPoi *_defaultPoi;
    NSString *_initalCaption;
    KSMusicItem *_defaultMusic;
    KSMagicFace *_defaultMagicFace;
    KSCaptureDeviceLowLightDetector *_lowLightDetector;
    KSMotionManager *_motionManager;
    NSMutableDictionary *_showLyrics;
    NSMutableArray *_snapshotViews;
    UIView *_currentVisibleSnapshotView;
    NSArray *_availableRateList;
    KSRoundedCornerSlider *_recordingRateSlider;
    KSExtensionButton *_lyricsButton;
    KSExtensionButton *_beatsButton;
    THLabel *_musicNameLabel;
    NSLayoutConstraint *_musicNameLabelTopConstraint;
    UIImageView *_emojiDot;
    UIButton *_musicButton;
    UIView *_musicButtonContainer;
    UIButton *_deleteButton;
    UIButton *_finishButton;
    UIView *_finishButtonContainer;
    KSLyricsLineTimestampController *_lyricsTimestampController;
    NSTimer *_lyricsMusicSyncTimer;
    unsigned long long _currentLyricsIndex;
    KSMusicResourceManager *_musicResourceManager;
    AVPlayer *_musicPlayer;
    AVAudioPlayer *_trialMusicPlayer;
    NSTimer *_trialLyricsTimer;
    double _fastforwardRate;
    UIView *_lyricsBlendContainerView;
    UILabel *_lyricsBlendLabel;
    GPUImageUIElement *_lyricsElement;
    GPUImageNormalBlendFilter *_lyricsBlendFilter;
    double _originalVideoLength;
    GPUImageFilter *_writerPort;
    GPUImageFilterPipeline *_writerFilterPipeline;
    KSMagicFaceResource *_defaultMagicFaceResource;
    KSVideoRecordSizeConfiguration *_sizeConfig;
    KSPaintMagicFaceViewController *_paintMagicFaceViewController;
    KSSwapFacePhotosViewController *_swapFacePhotosViewController;
    unsigned long long _backgroundRecordID;
    KSRecordingManager *_recordingManager;
    double _exportStartTime;
    KSVideoRecordActionsController *_actionsViewController;
    long long _audioCategoryIndex;
    long long _audioModeIndex;
    long long _audioSampleRateIndex;
    KSVideoRecordFrameStat *_recordFrameStat;
    id <KSVideoRecordingSoundtrack> _currentSoundtrack;
    UILabel *_debugInfoLabel;
    NSString *_originalVideoPath;
    NSString *_depthVideoPath;
    UIButton *_lowLightBoostButton;
    UIButton *_toggleRateSliderButton;
    KSUnhittableView *_rotatedCanvas;
    NSLayoutConstraint *_rotatedCanvasWidthConstraint;
    NSLayoutConstraint *_rotatedCanvasHeightConstraint;
    KSEvenlySpacedViewsContainer *_musicFunctionalityButtonsContainer;
    long long _lastOrientation;
    NSMutableArray *_magicFaces;
    NSMutableArray *_magicFacePackages;
    KSBubbleAlertView *_magicFacesSwitchTipsBubble;
    KSUTaskMetaData *_recordTaskMeta;
    KSMagicFaceResource *_firstMagicFaceResourceWhileRecording;
    FMResource *_firstFMResourceWhileRecording;
    long long _numberOfFramesWithFaceDetectedInCurrentRecordingSession;
    long long _numberOfFramesInCurrentRecordingSession;
}

+ (_Bool)_deviceIsGoodEnoughForStabilization;
+ (_Bool)requiresSmoothAutoFocus;
@property(nonatomic) long long numberOfFramesInCurrentRecordingSession; // @synthesize numberOfFramesInCurrentRecordingSession=_numberOfFramesInCurrentRecordingSession;
@property(nonatomic) long long numberOfFramesWithFaceDetectedInCurrentRecordingSession; // @synthesize numberOfFramesWithFaceDetectedInCurrentRecordingSession=_numberOfFramesWithFaceDetectedInCurrentRecordingSession;
@property(retain, nonatomic) FMResource *firstFMResourceWhileRecording; // @synthesize firstFMResourceWhileRecording=_firstFMResourceWhileRecording;
@property(retain, nonatomic) KSMagicFaceResource *firstMagicFaceResourceWhileRecording; // @synthesize firstMagicFaceResourceWhileRecording=_firstMagicFaceResourceWhileRecording;
@property(retain, nonatomic) KSUTaskMetaData *recordTaskMeta; // @synthesize recordTaskMeta=_recordTaskMeta;
@property(nonatomic) __weak KSBubbleAlertView *magicFacesSwitchTipsBubble; // @synthesize magicFacesSwitchTipsBubble=_magicFacesSwitchTipsBubble;
@property(retain, nonatomic) NSMutableArray *magicFacePackages; // @synthesize magicFacePackages=_magicFacePackages;
@property(retain, nonatomic) NSMutableArray *magicFaces; // @synthesize magicFaces=_magicFaces;
@property(nonatomic) long long lastOrientation; // @synthesize lastOrientation=_lastOrientation;
@property(retain, nonatomic) KSEvenlySpacedViewsContainer *musicFunctionalityButtonsContainer; // @synthesize musicFunctionalityButtonsContainer=_musicFunctionalityButtonsContainer;
@property(retain, nonatomic) NSLayoutConstraint *rotatedCanvasHeightConstraint; // @synthesize rotatedCanvasHeightConstraint=_rotatedCanvasHeightConstraint;
@property(retain, nonatomic) NSLayoutConstraint *rotatedCanvasWidthConstraint; // @synthesize rotatedCanvasWidthConstraint=_rotatedCanvasWidthConstraint;
@property(retain, nonatomic) KSUnhittableView *rotatedCanvas; // @synthesize rotatedCanvas=_rotatedCanvas;
@property(nonatomic) _Bool isLastMagicResImitationShow; // @synthesize isLastMagicResImitationShow=_isLastMagicResImitationShow;
@property(retain, nonatomic) UIButton *toggleRateSliderButton; // @synthesize toggleRateSliderButton=_toggleRateSliderButton;
@property(retain, nonatomic) UIButton *lowLightBoostButton; // @synthesize lowLightBoostButton=_lowLightBoostButton;
@property(retain, nonatomic) NSString *depthVideoPath; // @synthesize depthVideoPath=_depthVideoPath;
@property(retain, nonatomic) NSString *originalVideoPath; // @synthesize originalVideoPath=_originalVideoPath;
@property(retain, nonatomic) UILabel *debugInfoLabel; // @synthesize debugInfoLabel=_debugInfoLabel;
@property(nonatomic) _Bool showDebugInfo; // @synthesize showDebugInfo=_showDebugInfo;
@property(retain, nonatomic) id <KSVideoRecordingSoundtrack> currentSoundtrack; // @synthesize currentSoundtrack=_currentSoundtrack;
@property(retain) KSVideoRecordFrameStat *recordFrameStat; // @synthesize recordFrameStat=_recordFrameStat;
@property(nonatomic) long long audioSampleRateIndex; // @synthesize audioSampleRateIndex=_audioSampleRateIndex;
@property(nonatomic) long long audioModeIndex; // @synthesize audioModeIndex=_audioModeIndex;
@property(nonatomic) long long audioCategoryIndex; // @synthesize audioCategoryIndex=_audioCategoryIndex;
@property(retain, nonatomic) KSVideoRecordActionsController *actionsViewController; // @synthesize actionsViewController=_actionsViewController;
@property(nonatomic) double exportStartTime; // @synthesize exportStartTime=_exportStartTime;
@property(retain, nonatomic) KSRecordingManager *recordingManager; // @synthesize recordingManager=_recordingManager;
@property _Bool cameraActive; // @synthesize cameraActive=_cameraActive;
@property(nonatomic) unsigned long long backgroundRecordID; // @synthesize backgroundRecordID=_backgroundRecordID;
@property(retain, nonatomic) KSSwapFacePhotosViewController *swapFacePhotosViewController; // @synthesize swapFacePhotosViewController=_swapFacePhotosViewController;
@property(retain, nonatomic) KSPaintMagicFaceViewController *paintMagicFaceViewController; // @synthesize paintMagicFaceViewController=_paintMagicFaceViewController;
@property(retain, nonatomic) KSVideoRecordSizeConfiguration *sizeConfig; // @synthesize sizeConfig=_sizeConfig;
@property(nonatomic) float frameRate; // @synthesize frameRate=_frameRate;
@property(retain, nonatomic) KSMagicFaceResource *defaultMagicFaceResource; // @synthesize defaultMagicFaceResource=_defaultMagicFaceResource;
@property(retain, nonatomic) GPUImageFilterPipeline *writerFilterPipeline; // @synthesize writerFilterPipeline=_writerFilterPipeline;
@property(retain, nonatomic) GPUImageFilter *writerPort; // @synthesize writerPort=_writerPort;
@property(nonatomic) double originalVideoLength; // @synthesize originalVideoLength=_originalVideoLength;
@property(retain, nonatomic) GPUImageNormalBlendFilter *lyricsBlendFilter; // @synthesize lyricsBlendFilter=_lyricsBlendFilter;
@property(retain, nonatomic) GPUImageUIElement *lyricsElement; // @synthesize lyricsElement=_lyricsElement;
@property(retain, nonatomic) UILabel *lyricsBlendLabel; // @synthesize lyricsBlendLabel=_lyricsBlendLabel;
@property(retain, nonatomic) UIView *lyricsBlendContainerView; // @synthesize lyricsBlendContainerView=_lyricsBlendContainerView;
@property(nonatomic) double fastforwardRate; // @synthesize fastforwardRate=_fastforwardRate;
@property(retain, nonatomic) NSTimer *trialLyricsTimer; // @synthesize trialLyricsTimer=_trialLyricsTimer;
@property(retain, nonatomic) AVAudioPlayer *trialMusicPlayer; // @synthesize trialMusicPlayer=_trialMusicPlayer;
@property(retain, nonatomic) AVPlayer *musicPlayer; // @synthesize musicPlayer=_musicPlayer;
@property(retain, nonatomic) KSMusicResourceManager *musicResourceManager; // @synthesize musicResourceManager=_musicResourceManager;
@property(nonatomic) unsigned long long currentLyricsIndex; // @synthesize currentLyricsIndex=_currentLyricsIndex;
@property(retain, nonatomic) NSTimer *lyricsMusicSyncTimer; // @synthesize lyricsMusicSyncTimer=_lyricsMusicSyncTimer;
@property(retain, nonatomic) KSLyricsLineTimestampController *lyricsTimestampController; // @synthesize lyricsTimestampController=_lyricsTimestampController;
@property(readonly, nonatomic) UIView *finishButtonContainer; // @synthesize finishButtonContainer=_finishButtonContainer;
@property(readonly, nonatomic) UIButton *finishButton; // @synthesize finishButton=_finishButton;
@property(readonly, nonatomic) UIButton *deleteButton; // @synthesize deleteButton=_deleteButton;
@property(readonly, nonatomic) UIView *musicButtonContainer; // @synthesize musicButtonContainer=_musicButtonContainer;
@property(readonly, nonatomic) UIButton *musicButton; // @synthesize musicButton=_musicButton;
@property(readonly, nonatomic) UIImageView *emojiDot; // @synthesize emojiDot=_emojiDot;
@property(retain, nonatomic) NSLayoutConstraint *musicNameLabelTopConstraint; // @synthesize musicNameLabelTopConstraint=_musicNameLabelTopConstraint;
@property(retain, nonatomic) THLabel *musicNameLabel; // @synthesize musicNameLabel=_musicNameLabel;
@property(retain, nonatomic) KSExtensionButton *beatsButton; // @synthesize beatsButton=_beatsButton;
@property(retain, nonatomic) KSExtensionButton *lyricsButton; // @synthesize lyricsButton=_lyricsButton;
@property(retain, nonatomic) KSRoundedCornerSlider *recordingRateSlider; // @synthesize recordingRateSlider=_recordingRateSlider;
@property(readonly, nonatomic) NSArray *availableRateList; // @synthesize availableRateList=_availableRateList;
@property(retain, nonatomic) UIView *currentVisibleSnapshotView; // @synthesize currentVisibleSnapshotView=_currentVisibleSnapshotView;
@property(retain, nonatomic) NSMutableArray *snapshotViews; // @synthesize snapshotViews=_snapshotViews;
@property(retain, nonatomic) NSMutableDictionary *showLyrics; // @synthesize showLyrics=_showLyrics;
@property(nonatomic) _Bool starting; // @synthesize starting=_starting;
@property(retain, nonatomic) KSMotionManager *motionManager; // @synthesize motionManager=_motionManager;
@property(nonatomic) _Bool needSetupDefaultMagicFace; // @synthesize needSetupDefaultMagicFace=_needSetupDefaultMagicFace;
@property(nonatomic) _Bool cameraOutputFrameEverArrived; // @synthesize cameraOutputFrameEverArrived=_cameraOutputFrameEverArrived;
@property(retain, nonatomic) KSCaptureDeviceLowLightDetector *lowLightDetector; // @synthesize lowLightDetector=_lowLightDetector;
@property(nonatomic) _Bool active; // @synthesize active=_active;
@property(nonatomic) _Bool forceOpenMagicFaceTag; // @synthesize forceOpenMagicFaceTag=_forceOpenMagicFaceTag;
@property(retain, nonatomic) KSMagicFace *defaultMagicFace; // @synthesize defaultMagicFace=_defaultMagicFace;
@property(nonatomic) _Bool forceOpenMusicTag; // @synthesize forceOpenMusicTag=_forceOpenMusicTag;
@property(retain, nonatomic) KSMusicItem *defaultMusic; // @synthesize defaultMusic=_defaultMusic;
@property(retain, nonatomic) NSString *initalCaption; // @synthesize initalCaption=_initalCaption;
@property(retain, nonatomic) KSPoi *defaultPoi; // @synthesize defaultPoi=_defaultPoi;
@property(retain, nonatomic) NSString *currentPageURL; // @synthesize currentPageURL=_currentPageURL;
@property(nonatomic) double videoLength; // @synthesize videoLength=_videoLength;
@property(nonatomic) int videoLengthType; // @synthesize videoLengthType=_videoLengthType;
- (void).cxx_destruct;
- (id)ksuShowMetaData;
- (void)logAction:(id)arg1 detail:(id)arg2;
- (_Bool)_standardStabilizationAvaliable:(id)arg1;
- (void)_tryTurnOffStandardStabilization:(id)arg1;
- (void)_tryTurnOnStandardStabilization:(id)arg1;
- (void)hideSwapFacePhotos;
- (void)showSwapFacePhotos;
- (void)hidePaintMagicFace;
- (void)showPaintMagicFace;
- (void)willOutputAudioSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;
- (void)updateTopBar;
- (void)updateBottomBarAnimated:(_Bool)arg1;
- (void)updateBottomBar;
- (_Bool)hasHeadset;
- (void)invalidBackgroundTask;
- (void)hideEmoji;
- (void)logVideoFrameStatWithStatus:(long long)arg1;
- (void)handleTrialLyricsMusicSyncTimer;
- (void)audioPlayerDidFinishPlaying:(id)arg1 successfully:(_Bool)arg2;
- (void)resetSliderToNormalRate;
- (void)updateMusicUI;
- (void)_updateMusicFunctionalityButtonsContainerWithOrientation:(long long)arg1;
- (void)updateMusicConfigButtonsVisible;
- (void)handleLyricsMusicSyncTimerWithTime:(CDStruct_1b6d18a9)arg1;
- (void)updateLyricsUI;
- (void)setUpDefaultMagicFaceIfNeeded;
- (_Bool)shouldShowLyrics;
- (id)createBeautifyFilter;
- (void)updateLowLightDetectorForDevice:(id)arg1 isFront:(_Bool)arg2;
- (_Bool)shouldShowLowLightBoostButton;
- (void)popUpCameraZoomControlIfNeedWithCurrentZoomFactor:(double)arg1;
- (void)zoomControlWillAutoDismiss:(id)arg1;
- (void)updateRateSliderVisibleStatusAnimated:(_Bool)arg1;
- (_Bool)shouldRateSliderBeVisible;
- (void)resetRecord;
- (void)rotateConfigViewsWithOrientation:(long long)arg1;
- (void)_rotateCanvasWithOrientation:(long long)arg1;
- (void)showHiddenFeatureAlertIfNeeded;
- (void)updateVideoDuration;
- (void)updateLyricsBlendWithOrientation:(long long)arg1;
- (void)setupSubviews;
- (id)toolButtonWithImage:(id)arg1 highlightImage:(id)arg2 disableImage:(id)arg3 preferedSize:(struct CGSize)arg4 action:(SEL)arg5;
- (void)handleRecordingManagerStatusChangeFrom:(long long)arg1 to:(long long)arg2;
- (void)oldSegmentDiscarded;
- (void)newSegmentInserted;
- (void)addObserversForSizeChanges;
- (void)_rotateViewsIfNeeded;
- (_Bool)_shouldEnableBeatsEffect;
- (void)_updateBeats;
- (CDStruct_1b6d18a9)timeOfCurrentPlayingMusicWithProvider:(id)arg1;
- (id)beatsOfCurrentPlayingMusicWithProvider:(id)arg1;
- (_Bool)_depthDataAvailable;
- (_Bool)shouldCaptureDepthVideo;
- (_Bool)shouldCaptureOriginalVideo;
- (id)captureVideoKey;
- (void)willOutputSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (long long)deviceOrientationForVideoRecordActionsController:(id)arg1;
- (struct CGSize)videoSizeForVideoRecordActionsController:(id)arg1;
- (id)videoOutputPathForVideoRecordActionsController:(id)arg1;
- (void)prepareForCapturingFromVideoRecordActionsController:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)needCountDownAnimationForVideoRecordActionsController:(id)arg1;
- (id)backgroundMusicPathForVideoRecordActionsController:(id)arg1;
- (void)processFacesForMagicFace:(id)arg1;
- (void)updateRateSliderButtonHiddenStatus;
- (void)stopDepthCollectionIfNeed;
- (void)startDepthCollectionIfNeed;
- (void)magicFaceComponentWillDismissMagicFaceList:(id)arg1;
- (void)magicFaceComponent:(id)arg1 didSelectMagicFace:(id)arg2;
- (void)magicFaceComponentWillPresentMagicFaceList:(id)arg1;
- (void)setBottomViewsHidden:(_Bool)arg1;
- (id)loadMagicFacePickModel;
- (id)presentingViewControllerForBottomViews;
- (void)didClickVideo:(id)arg1;
- (void)didClickMusic;
- (void)didClickCloseButton:(id)arg1;
- (void)didChangeRecordingRate:(id)arg1;
- (void)didClickBeats:(id)arg1;
- (void)didClickLyrics:(id)arg1;
- (void)didClickBeautifyButton:(id)arg1;
- (void)didClickLowLightBoost:(id)arg1;
- (void)didClickCameraSwitchButton:(id)arg1;
- (void)didToggleRateSlider:(id)arg1;
- (void)didReceiveAudioSessionRouteChanged:(id)arg1;
- (void)didReceiveDidBecomeActive:(id)arg1;
- (void)didReceiveWillResignActive:(id)arg1;
- (void)prepareComponentPermissions;
- (_Bool)disablePageGestureRecognizerShouldBegin:(id)arg1;
- (void)resumePreviewing;
- (void)pausePreviewing;
- (void)pauseRecording;
- (void)recordingManager:(id)arg1 willStartRecordingSessionAtSampleTime:(CDStruct_1b6d18a9)arg2;
- (void)cameraDidStop;
- (void)cameraDidStart;
- (void)cameraDidLoad;
- (id)requiredMediaTypes;
- (id)requiredPermissions;
- (void)loadCamera;
- (long long)preferredBottomBarStyle;
- (id)createInitialTopViews;
- (_Bool)prefersStatusBarHidden;
- (void)viewDidLayoutSubviews;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)setUpFilters;
- (id)initWithFineControlBeautyEnabled:(_Bool)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) struct UIEdgeInsets ks_additionalSafeAreaInsetsForBelowIOS11;
@property(readonly) Class superclass;

@end

