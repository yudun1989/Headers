//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBFaceBaseViewController.h"

#import "WBFaceCustomAlertViewDelegate-Protocol.h"
#import "WBFaceProgressOptionProtocol-Protocol.h"

@class NSString, UIImage, WBFaceAudioManager, WBFaceCustomAlertView, WBFaceDataResultModel, WBFaceStateManager;
@protocol WBFaceVerifyViewControllerDelegate;

@interface WBFaceBasicController : WBFaceBaseViewController <WBFaceCustomAlertViewDelegate, WBFaceProgressOptionProtocol>
{
    _Bool _isShownSuccessPage;
    _Bool _isShownFailurePage;
    _Bool _isUsingSourceImage;
    _Bool _isUsingHDImage;
    UIImage *_sourceImage;
    id <WBFaceVerifyViewControllerDelegate> _delegate;
    WBFaceCustomAlertView *_currentAlertView;
    WBFaceStateManager *_stateManager;
    WBFaceDataResultModel *_resultDataModel;
    NSString *_userDefaulKeyString;
    WBFaceAudioManager *_audioManager;
}

@property(retain, nonatomic) WBFaceAudioManager *audioManager; // @synthesize audioManager=_audioManager;
@property(copy, nonatomic) NSString *userDefaulKeyString; // @synthesize userDefaulKeyString=_userDefaulKeyString;
@property(retain, nonatomic) WBFaceDataResultModel *resultDataModel; // @synthesize resultDataModel=_resultDataModel;
@property(retain, nonatomic) WBFaceStateManager *stateManager; // @synthesize stateManager=_stateManager;
@property(retain, nonatomic) WBFaceCustomAlertView *currentAlertView; // @synthesize currentAlertView=_currentAlertView;
@property(nonatomic) __weak id <WBFaceVerifyViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIImage *sourceImage; // @synthesize sourceImage=_sourceImage;
@property(nonatomic) _Bool isUsingHDImage; // @synthesize isUsingHDImage=_isUsingHDImage;
@property(nonatomic) _Bool isUsingSourceImage; // @synthesize isUsingSourceImage=_isUsingSourceImage;
@property(nonatomic) _Bool isShownFailurePage; // @synthesize isShownFailurePage=_isShownFailurePage;
@property(nonatomic) _Bool isShownSuccessPage; // @synthesize isShownSuccessPage=_isShownSuccessPage;
- (void).cxx_destruct;
- (void)wbFaceVerifyViewControllerNeedToDismiss;
- (void)checkNetworkStatusAndPermission:(long long)arg1 successBlock:(CDUnknownBlockType)arg2 failureBlock:(CDUnknownBlockType)arg3;
- (void)progressViewControllerDidStartProgress:(id)arg1;
- (void)progressViewUserChooseCancel:(id)arg1;
- (void)customDialogButtonTouchUpInside:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)dealloc;
- (void)stateMachineDidChangeState:(id)arg1;
- (void)applicationDidEnterBackground;
- (void)setupNotifications;
- (void)setupUI;
- (void)leftBarButtonItemDidClick;
- (void)setupNavigationItem;
- (void)setupBaseStateMachine;
- (void)enterPreFaceVerifyView;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

