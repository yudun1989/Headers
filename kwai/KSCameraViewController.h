//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "KSBaseViewController.h"

#import "GPUImageVideoCameraDelegate-Protocol.h"
#import "KSCameraWarmable-Protocol.h"
#import "KSCameraZoomControlDelegate-Protocol.h"
#import "KSMagicFaceComponentDelegate-Protocol.h"
#import "KSMagicFaceMaterialProviderDataSource-Protocol.h"

@class BFCancellationTokenSource, BFTask, FMFaceDeformFilter2, GPUImageFilter, GPUImageFilterPipeline, GPUImageOutput, GPUImageTransformFilter, GPUImageVideoCamera, GPUImageView, KSBeautySettingsViewModel, KSCameraCaptureView, KSCameraZoomControl, KSCropFilter, KSEvenlySpacedViewsContainer, KSFaceDetectionController, KSFaceDetectionRegistration, KSMagicFaceComponent, KSViewControllerPresenter, NSArray, NSLayoutConstraint, NSString, UIButton, UIImageView, UIView;
@protocol KSIntensityAdjustable><GPUImageInput;

@interface KSCameraViewController : KSBaseViewController <KSCameraWarmable, GPUImageVideoCameraDelegate, KSMagicFaceComponentDelegate, KSMagicFaceMaterialProviderDataSource, KSCameraZoomControlDelegate>
{
    _Bool _fineControlBeautyEnabled;
    _Bool _topViewsContainerHidden;
    _Bool _torchModeOn;
    _Bool _frontCamera;
    _Bool _beautifyOn;
    _Bool _bottomViewsHidden;
    KSEvenlySpacedViewsContainer *_topViewsContainer;
    GPUImageView *_previewView;
    UIView *_previewCoverView;
    UIButton *_closeButton;
    UIButton *_torchModeButton;
    UIButton *_switchCameraButton;
    UIButton *_beautifyButton;
    KSMagicFaceComponent *_magicFaceComponent;
    UIImageView *_focusImageView;
    KSCameraZoomControl *_cameraZoomControl;
    KSCameraCaptureView *_captureView;
    UIView *_bottomButtonsGradientBackgroundView;
    UIView *_bottomViewsContainerView;
    GPUImageVideoCamera *_camera;
    KSBeautySettingsViewModel *_beautyViewModel;
    double _outputAspectRatio;
    GPUImageFilter *_cameraOutputPort;
    KSCropFilter *_cropFilter;
    GPUImageFilterPipeline *_beautifyPipeline;
    GPUImageFilter *_pipelineOutputPort;
    KSFaceDetectionController *_faceDetectionController;
    UIView *_magicFaceComponentContainer;
    KSViewControllerPresenter *_beautyViewControllerPresenter;
    NSLayoutConstraint *_previewCoverViewAspectRatioConstraint;
    NSArray *_topViewsContainerShowConstraints;
    NSArray *_topViewsContainerHideConstraints;
    BFTask *_cameraWarmUpTask;
    BFCancellationTokenSource *_cameraWarmUpCancellationTokenSource;
    GPUImageFilterPipeline *_magicFacePipeline;
    GPUImageOutput<KSIntensityAdjustable><GPUImageInput> *_beautifyFilter;
    long long _focusScenario;
    KSFaceDetectionRegistration *_focusRegistration;
    KSFaceDetectionRegistration *_deformRegistration;
    KSFaceDetectionRegistration *_magicFaceRegistration;
    GPUImageTransformFilter *_beforeFilter;
    FMFaceDeformFilter2 *_deformFilter;
    GPUImageTransformFilter *_afterFilter;
}

+ (_Bool)requiresSmoothAutoFocus;
+ (void)_initializeFocusConfigurationForDevice:(id)arg1;
+ (void)_resetFocusConfigurationForDevice:(id)arg1;
@property(retain, nonatomic) GPUImageTransformFilter *afterFilter; // @synthesize afterFilter=_afterFilter;
@property(retain, nonatomic) FMFaceDeformFilter2 *deformFilter; // @synthesize deformFilter=_deformFilter;
@property(retain, nonatomic) GPUImageTransformFilter *beforeFilter; // @synthesize beforeFilter=_beforeFilter;
@property(retain, nonatomic) KSFaceDetectionRegistration *magicFaceRegistration; // @synthesize magicFaceRegistration=_magicFaceRegistration;
@property(retain, nonatomic) KSFaceDetectionRegistration *deformRegistration; // @synthesize deformRegistration=_deformRegistration;
@property(retain, nonatomic) KSFaceDetectionRegistration *focusRegistration; // @synthesize focusRegistration=_focusRegistration;
@property(nonatomic) long long focusScenario; // @synthesize focusScenario=_focusScenario;
@property(retain, nonatomic) GPUImageOutput<KSIntensityAdjustable><GPUImageInput> *beautifyFilter; // @synthesize beautifyFilter=_beautifyFilter;
@property(retain, nonatomic) GPUImageFilterPipeline *magicFacePipeline; // @synthesize magicFacePipeline=_magicFacePipeline;
@property(retain, nonatomic) BFCancellationTokenSource *cameraWarmUpCancellationTokenSource; // @synthesize cameraWarmUpCancellationTokenSource=_cameraWarmUpCancellationTokenSource;
@property(retain, nonatomic) BFTask *cameraWarmUpTask; // @synthesize cameraWarmUpTask=_cameraWarmUpTask;
@property(retain, nonatomic) NSArray *topViewsContainerHideConstraints; // @synthesize topViewsContainerHideConstraints=_topViewsContainerHideConstraints;
@property(retain, nonatomic) NSArray *topViewsContainerShowConstraints; // @synthesize topViewsContainerShowConstraints=_topViewsContainerShowConstraints;
@property(retain, nonatomic) NSLayoutConstraint *previewCoverViewAspectRatioConstraint; // @synthesize previewCoverViewAspectRatioConstraint=_previewCoverViewAspectRatioConstraint;
@property(nonatomic) _Bool bottomViewsHidden; // @synthesize bottomViewsHidden=_bottomViewsHidden;
@property(retain, nonatomic) KSViewControllerPresenter *beautyViewControllerPresenter; // @synthesize beautyViewControllerPresenter=_beautyViewControllerPresenter;
@property(readonly, nonatomic) UIView *magicFaceComponentContainer; // @synthesize magicFaceComponentContainer=_magicFaceComponentContainer;
@property(nonatomic) _Bool beautifyOn; // @synthesize beautifyOn=_beautifyOn;
@property(nonatomic) _Bool frontCamera; // @synthesize frontCamera=_frontCamera;
@property(nonatomic) _Bool torchModeOn; // @synthesize torchModeOn=_torchModeOn;
@property(readonly, nonatomic) _Bool topViewsContainerHidden; // @synthesize topViewsContainerHidden=_topViewsContainerHidden;
@property(retain, nonatomic) KSFaceDetectionController *faceDetectionController; // @synthesize faceDetectionController=_faceDetectionController;
@property(retain, nonatomic) GPUImageFilter *pipelineOutputPort; // @synthesize pipelineOutputPort=_pipelineOutputPort;
@property(retain, nonatomic) GPUImageFilterPipeline *beautifyPipeline; // @synthesize beautifyPipeline=_beautifyPipeline;
@property(retain, nonatomic) KSCropFilter *cropFilter; // @synthesize cropFilter=_cropFilter;
@property(retain, nonatomic) GPUImageFilter *cameraOutputPort; // @synthesize cameraOutputPort=_cameraOutputPort;
@property(nonatomic) double outputAspectRatio; // @synthesize outputAspectRatio=_outputAspectRatio;
@property(readonly, nonatomic) KSBeautySettingsViewModel *beautyViewModel; // @synthesize beautyViewModel=_beautyViewModel;
@property(readonly, nonatomic) _Bool fineControlBeautyEnabled; // @synthesize fineControlBeautyEnabled=_fineControlBeautyEnabled;
@property(retain, nonatomic) GPUImageVideoCamera *camera; // @synthesize camera=_camera;
- (void).cxx_destruct;
- (void)logAction:(id)arg1 detail:(id)arg2;
- (void)willOutputDepthData:(id)arg1 timestamp:(CDStruct_1b6d18a9)arg2;
- (void)willOutputSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;
- (void)cameraDidStop;
- (void)cameraDidStart;
- (void)_stopObservingCameraTorchlightStateChange:(id)arg1;
- (void)_startObservingCameraTorchlightStateChangeIfNeeded:(id)arg1;
- (void)cameraDidLoad;
- (void)loadCamera;
@property(readonly, nonatomic) NSArray *requiredMediaTypes;
@property(readonly, nonatomic) NSArray *requiredPermissions;
- (id)_cameraPermissionRequestTask;
- (void)cancelWarmingUpCamera;
- (void)warmUpCamera;
- (_Bool)supportsCustomBeautify;
- (CDStruct_1b6d18a9)timeOfCurrentPlayingMusicWithProvider:(id)arg1;
- (id)beatsOfCurrentPlayingMusicWithProvider:(id)arg1;
- (id)magicFaceContainerView;
- (struct CGSize)screenSize;
- (long long)getCurrentCameraPosition;
- (_Bool)shouldMirrorWithProvider:(id)arg1;
- (float)videoFieldOfViewWithProvider:(id)arg1;
- (void)stopDepthCollectionIfNeed;
- (void)startDepthCollectionIfNeed;
- (id)presentingViewControllerForBottomViews;
- (void)magicFaceComponentWillDismissMagicFaceList:(id)arg1;
- (void)magicFaceComponent:(id)arg1 didSelectMagicFace:(id)arg2 isHandleCameraOrientation:(_Bool)arg3;
- (void)magicFaceComponent:(id)arg1 didSelectMagicFace:(id)arg2;
- (void)magicFaceComponentWillPresentMagicFaceList:(id)arg1;
- (id)loadMagicFacePickModel;
- (id)magicFacePickModelForMagicFaceComponent:(id)arg1;
- (struct CGPoint)convertPoint:(struct CGPoint)arg1 fromView:(id)arg2 toCoordinateOfOriginalVideoFrameByMagicFaceComponent:(id)arg3;
- (id)viewForDisplayingSupplementaryViewsByMagicFaceComponent:(id)arg1;
- (id)presentingViewControllerForMagicFacePickViewControllerByMagicFaceComponent:(id)arg1;
@property(readonly, nonatomic) KSMagicFaceComponent *magicFaceComponent; // @synthesize magicFaceComponent=_magicFaceComponent;
- (void)processFacesForMagicFace:(id)arg1;
- (_Bool)needUpdateFocusRegistration;
- (void)_updateMagicFaceRegistration;
- (void)_updateFocusRegistration;
- (void)_updateDeformRegistration;
- (void)setNeedsDeformFaceDetectionUpdate;
- (void)zoomControlWillAutoDismiss:(id)arg1;
- (void)_adjustFocusBasedOnFaceFeatures:(id)arg1;
- (void)_cameraSubjectAreaDidChange:(id)arg1;
- (_Bool)_focusAtPoint:(struct CGPoint)arg1;
- (void)_focusAtContentViewPoint:(struct CGPoint)arg1;
- (void)_drawAutoFocusFrameAtPoint:(struct CGPoint)arg1;
- (void)_drawAutoFocusFrameAtCenter;
- (void)_drawFocusFrameAtPoint:(struct CGPoint)arg1;
- (struct CGPoint)_convertToPointOfInterestFromViewCoordinates:(struct CGPoint)arg1;
- (void)_updateInputCameraZoomFactor:(double)arg1;
- (void)updateCameraPosition:(_Bool)arg1;
- (void)updateCameraTorchMode:(_Bool)arg1;
- (void)updateBeautifyButtonHiddenStatus;
- (_Bool)shouldShowBeautifyButton;
- (void)updateBeautifyOption:(_Bool)arg1;
- (id)createBeautifyFilter;
- (void)setUpMainFilters;
- (void)setUpFilters;
- (void)popUpCameraZoomControlIfNeedWithCurrentZoomFactor:(double)arg1;
- (void)didChangeCameraZoomFactor:(id)arg1;
- (void)didPinchContent:(id)arg1;
- (void)didSwipeUpContent:(id)arg1;
- (void)didClickCameraSwitchButton:(id)arg1;
- (void)willDismissBeautyViewController;
- (void)dismissBeautyViewController;
- (void)willPresentBeautyViewController;
- (void)presentBeautyViewController;
- (void)didClickBeautifyButton:(id)arg1;
- (void)didClickTorchModeSwitchButton:(id)arg1;
- (void)didClickCloseButton:(id)arg1;
- (void)didTapContent:(id)arg1;
@property(readonly, nonatomic) UIView *bottomButtonsGradientBackgroundView; // @synthesize bottomButtonsGradientBackgroundView=_bottomButtonsGradientBackgroundView;
@property(readonly, nonatomic) UIView *bottomViewsContainerView; // @synthesize bottomViewsContainerView=_bottomViewsContainerView;
@property(readonly, nonatomic) KSCameraZoomControl *cameraZoomControl; // @synthesize cameraZoomControl=_cameraZoomControl;
@property(readonly, nonatomic) KSCameraCaptureView *captureView; // @synthesize captureView=_captureView;
@property(readonly, nonatomic) UIImageView *focusImageView; // @synthesize focusImageView=_focusImageView;
@property(readonly, nonatomic) UIButton *beautifyButton; // @synthesize beautifyButton=_beautifyButton;
@property(readonly, nonatomic) UIButton *switchCameraButton; // @synthesize switchCameraButton=_switchCameraButton;
@property(readonly, nonatomic) UIButton *torchModeButton; // @synthesize torchModeButton=_torchModeButton;
@property(readonly, nonatomic) UIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(readonly, nonatomic) UIView *previewCoverView; // @synthesize previewCoverView=_previewCoverView;
@property(readonly, nonatomic) GPUImageView *previewView; // @synthesize previewView=_previewView;
- (void)setTopViewsContainerHidden:(_Bool)arg1 animated:(_Bool)arg2;
@property(readonly, nonatomic) KSEvenlySpacedViewsContainer *topViewsContainer; // @synthesize topViewsContainer=_topViewsContainer;
- (id)createInitialTopViews;
- (void)insertView:(id)arg1 toTopViewsContainerAtIndex:(unsigned long long)arg2 animated:(_Bool)arg3;
- (void)setUpTopViews;
- (void)dealloc;
- (id)createRoundedBlurContainerViewWithSize:(struct CGSize)arg1 normalBackgroundAlpha:(double)arg2 highlightBackgroundAlpha:(double)arg3 forButton:(id)arg4 inView:(id)arg5;
- (void)viewDidLoad;
- (id)initWithFineControlBeautyEnabled:(_Bool)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

