//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBStoryViewController.h"

#import "UIGestureRecognizerDelegate-Protocol.h"
#import "WBArSessionStateListener-Protocol.h"
#import "WBArViewManagerDelegate-Protocol.h"
#import "WBStoryCameraManagerStateListener-Protocol.h"
#import "WBStoryViewManagerDelegate-Protocol.h"

@class NSString, UIPanGestureRecognizer, UIView, UIVisualEffectView, WBArViewManager, WBStoryPublishLogger, WBStoryViewManager;
@protocol WBStoryCaptureViewControllerDelegate, WBStoryCaptureViewManager;

@interface WBStoryCaptureViewController : WBStoryViewController <WBStoryViewManagerDelegate, WBArViewManagerDelegate, WBStoryCameraManagerStateListener, WBArSessionStateListener, UIGestureRecognizerDelegate>
{
    _Bool _panToDismiss;
    _Bool _needsOpenMusicList;
    _Bool _showStatusBarWhenViewWillDisappear;
    unsigned long long _cameraMode;
    id <WBStoryCaptureViewControllerDelegate> _delegate;
    unsigned long long _businessType;
    unsigned long long _captureMode;
    WBStoryPublishLogger *_logger;
    NSString *_defaultMusicID;
    NSString *_defaultSenseArMaterial;
    NSString *_defaultWeiboArMaterial;
    UIView *_animationHeader;
    UIView *_animationFooter;
    WBArViewManager *_arViewManager;
    WBStoryViewManager *_storyViewManager;
    id <WBStoryCaptureViewManager> _currentViewManager;
    UIView *_transitionBackgroundView;
    UIVisualEffectView *_transitionCoverView;
    UIPanGestureRecognizer *_dismissGestrure;
}

@property(retain, nonatomic) UIPanGestureRecognizer *dismissGestrure; // @synthesize dismissGestrure=_dismissGestrure;
@property(retain, nonatomic) UIVisualEffectView *transitionCoverView; // @synthesize transitionCoverView=_transitionCoverView;
@property(nonatomic) __weak UIView *transitionBackgroundView; // @synthesize transitionBackgroundView=_transitionBackgroundView;
@property(nonatomic) __weak id <WBStoryCaptureViewManager> currentViewManager; // @synthesize currentViewManager=_currentViewManager;
@property(retain, nonatomic) WBStoryViewManager *storyViewManager; // @synthesize storyViewManager=_storyViewManager;
@property(retain, nonatomic) WBArViewManager *arViewManager; // @synthesize arViewManager=_arViewManager;
@property(nonatomic) _Bool showStatusBarWhenViewWillDisappear; // @synthesize showStatusBarWhenViewWillDisappear=_showStatusBarWhenViewWillDisappear;
@property(retain, nonatomic) UIView *animationFooter; // @synthesize animationFooter=_animationFooter;
@property(retain, nonatomic) UIView *animationHeader; // @synthesize animationHeader=_animationHeader;
@property(retain, nonatomic) NSString *defaultWeiboArMaterial; // @synthesize defaultWeiboArMaterial=_defaultWeiboArMaterial;
@property(retain, nonatomic) NSString *defaultSenseArMaterial; // @synthesize defaultSenseArMaterial=_defaultSenseArMaterial;
@property(retain, nonatomic) NSString *defaultMusicID; // @synthesize defaultMusicID=_defaultMusicID;
@property(nonatomic) _Bool needsOpenMusicList; // @synthesize needsOpenMusicList=_needsOpenMusicList;
@property(nonatomic) _Bool panToDismiss; // @synthesize panToDismiss=_panToDismiss;
@property(nonatomic) __weak WBStoryPublishLogger *logger; // @synthesize logger=_logger;
@property(nonatomic) unsigned long long captureMode; // @synthesize captureMode=_captureMode;
@property(nonatomic) unsigned long long businessType; // @synthesize businessType=_businessType;
@property(nonatomic) __weak id <WBStoryCaptureViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) unsigned long long cameraMode; // @synthesize cameraMode=_cameraMode;
- (void).cxx_destruct;
- (void)setupCaptureLogForMediaCache:(id)arg1;
- (void)doViewDidAppearLog;
- (_Bool)isPageViewDurationLogEnable;
- (id)analysisParameters;
- (id)uiCode;
- (_Bool)panToNavigation;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)handlePanGesture:(id)arg1;
- (void)arSeesion:(id)arg1 didTransitionFromState:(unsigned long long)arg2 toState:(unsigned long long)arg3;
- (void)arSeesion:(id)arg1 didFailWithError:(id)arg2;
- (void)cameraManager:(id)arg1 didTransitionFromState:(unsigned long long)arg2 toState:(unsigned long long)arg3;
- (void)arViewManager:(id)arg1 didFinishWithMediaCache:(id)arg2;
- (void)arViewManager:(id)arg1 didPressCloseButton:(id)arg2;
- (void)storyViewManager:(id)arg1 didFinishWithMediaCache:(id)arg2;
- (void)storyViewManager:(id)arg1 didPressWeiboArButton:(id)arg2;
- (void)storyViewManager:(id)arg1 didPressBackButton:(id)arg2;
- (id)footerForTransition;
- (id)headerForTransition;
- (void)startTransitionAnimation;
- (void)setupTransitionView;
- (void)transferToArMode;
- (void)transferToNomalMode;
- (void)didEndTransfer;
- (void)prepareToTransfer;
- (void)updateCaptureMode;
- (void)setupArViewManager;
- (void)setupStoryViewMananger;
- (void)showNewCameraModeGuideIfNeeded;
- (unsigned long long)preferredScreenEdgesDeferringSystemGestures;
- (void)reset;
- (void)hideStatusBar;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

