//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DTViewController.h"

#import "PECollectCodeControllerDelegate-Protocol.h"
#import "PECollectMoneyStateCellDelegate-Protocol.h"
#import "PECollectSettingViewControllerDelegate-Protocol.h"
#import "PEMainCodeVCViewModelDelegate-Protocol.h"
#import "PromotionCenterDelegate-Protocol.h"
#import "UIActionSheetDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class APTableView, AUActionSheet, AUCustomNavigationBar, AUNoticeDialog, CADisplayLink, CDPSpaceObjectInfo, NSMutableArray, NSString, PECollectAnimationHelper, PECollectCodeController, PEFlipAnimationGroup, PEMainCodeVCViewModel, PETotalCollectMessage, UIButton, UIView, UIWebView;

@interface PEMainCodeViewController : DTViewController <PECollectSettingViewControllerDelegate, PECollectCodeControllerDelegate, PECollectMoneyStateCellDelegate, UIActionSheetDelegate, PEMainCodeVCViewModelDelegate, UITableViewDataSource, UITableViewDelegate, PromotionCenterDelegate>
{
    _Bool _inForground;
    _Bool _inDisappear;
    _Bool _totalAmountArrive;
    _Bool _collectQRCodeViewFrameFrozen;
    PECollectCodeController *_collectCodeController;
    PEMainCodeVCViewModel *_viewModel;
    PECollectAnimationHelper *_animationHelper;
    AUCustomNavigationBar *_naviView;
    AUActionSheet *_saveQRMenu;
    AUActionSheet *_moreMenu;
    UIView *_collectQRCodeView;
    APTableView *_formView;
    double _maskHeight;
    AUNoticeDialog *_alertViewScreenShot;
    UIButton *_recordBtn;
    PETotalCollectMessage *_totalCollect;
    NSString *_sessionId;
    NSMutableArray *_collectMsgAry;
    double _curBrightness;
    double _brightnessDelta;
    double _targetBrightness;
    CADisplayLink *_animationTrigger;
    UIView *_footerView;
    UIWebView *_bizWebview;
    CDPSpaceObjectInfo *_spaceObjInfo;
    PEFlipAnimationGroup *_flipAnimation;
}

@property(retain, nonatomic) PEFlipAnimationGroup *flipAnimation; // @synthesize flipAnimation=_flipAnimation;
@property(retain, nonatomic) CDPSpaceObjectInfo *spaceObjInfo; // @synthesize spaceObjInfo=_spaceObjInfo;
@property(retain, nonatomic) UIWebView *bizWebview; // @synthesize bizWebview=_bizWebview;
@property(retain, nonatomic) UIView *footerView; // @synthesize footerView=_footerView;
@property(retain, nonatomic) CADisplayLink *animationTrigger; // @synthesize animationTrigger=_animationTrigger;
@property(nonatomic) double targetBrightness; // @synthesize targetBrightness=_targetBrightness;
@property(nonatomic) double brightnessDelta; // @synthesize brightnessDelta=_brightnessDelta;
@property(nonatomic) double curBrightness; // @synthesize curBrightness=_curBrightness;
@property(retain, nonatomic) NSMutableArray *collectMsgAry; // @synthesize collectMsgAry=_collectMsgAry;
@property(retain, nonatomic) NSString *sessionId; // @synthesize sessionId=_sessionId;
@property(retain, nonatomic) PETotalCollectMessage *totalCollect; // @synthesize totalCollect=_totalCollect;
@property(retain, nonatomic) UIButton *recordBtn; // @synthesize recordBtn=_recordBtn;
@property(retain, nonatomic) AUNoticeDialog *alertViewScreenShot; // @synthesize alertViewScreenShot=_alertViewScreenShot;
@property(nonatomic) double maskHeight; // @synthesize maskHeight=_maskHeight;
@property(nonatomic) _Bool collectQRCodeViewFrameFrozen; // @synthesize collectQRCodeViewFrameFrozen=_collectQRCodeViewFrameFrozen;
@property(nonatomic) _Bool totalAmountArrive; // @synthesize totalAmountArrive=_totalAmountArrive;
@property(nonatomic) _Bool inDisappear; // @synthesize inDisappear=_inDisappear;
@property(nonatomic) _Bool inForground; // @synthesize inForground=_inForground;
@property(retain, nonatomic) APTableView *formView; // @synthesize formView=_formView;
@property(retain, nonatomic) UIView *collectQRCodeView; // @synthesize collectQRCodeView=_collectQRCodeView;
@property(retain, nonatomic) AUActionSheet *moreMenu; // @synthesize moreMenu=_moreMenu;
@property(retain, nonatomic) AUActionSheet *saveQRMenu; // @synthesize saveQRMenu=_saveQRMenu;
@property(retain, nonatomic) AUCustomNavigationBar *naviView; // @synthesize naviView=_naviView;
@property(retain, nonatomic) PECollectAnimationHelper *animationHelper; // @synthesize animationHelper=_animationHelper;
@property(retain, nonatomic) PEMainCodeVCViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) PECollectCodeController *collectCodeController; // @synthesize collectCodeController=_collectCodeController;
- (void).cxx_destruct;
- (id)mAnimationHelper;
- (id)getTotalAmountCollect;
- (id)getSaveMenu;
- (id)getVCViewModel;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)buildFormView;
- (id)mCollectMessageAry;
- (void)updateFormViewAtIndex:(long long)arg1 isInsert:(_Bool)arg2;
- (void)updateCollectFormViewWithUpdateIdx:(long long)arg1 collectMessage:(id)arg2;
- (void)viewModel:(id)arg1 newMessagesArrive:(id)arg2;
- (void)viewModel:(id)arg1 newMessageArrive:(id)arg2;
- (void)viewModel:(id)arg1 sessionCreated:(id)arg2;
- (void)stateCellProfileTapped:(id)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)onRecordButtonClicked:(id)arg1;
- (void)collectCodeControllerDidClickSaveImage:(id)arg1;
- (void)updateFooterHeight;
- (void)updateFooter;
- (void)collectCodeControllerDidQRCodeViewFrameChanged:(id)arg1;
- (void)collectCodeControllerDidSaveCodeView:(id)arg1 error:(id)arg2;
- (void)collectCodeControllerDidClearAmount:(id)arg1;
- (void)collectCodeControllerDidFinishSetAmount:(id)arg1;
- (void)collectCodeControllerDidStartSetAmount:(id)arg1;
- (void)settingViewController:(id)arg1 finishWithAmount:(id)arg2 memo:(id)arg3 codeId:(id)arg4 qrCodeUrl:(id)arg5 offlineQrCodeUrl:(id)arg6;
- (void)backFromSettingViewController:(id)arg1;
- (void)detectOrientation;
- (long long)customStatusBarStytle;
- (id)customNavigationBar;
- (_Bool)autohideNavigationBar;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)onLongGestureReconized:(id)arg1;
- (void)findRecevier;
- (void)showMoreActionSheet;
- (void)saveQrCodeToAlbum;
- (void)alipayDidTakeScreenShot;
- (void)alipayDidBecomeActive;
- (void)alipayWillResignActive;
- (void)alipayWillEnterForeground;
- (void)alipayEnterBackground;
- (void)clearPromotion;
- (void)onBizWebRenderFinished:(id)arg1;
- (void)loadBizWebviewWithUrl:(id)arg1;
- (void)promotionDataDidFinishLoading:(id)arg1;
- (void)observePromotion;
- (void)buildCodeView;
- (void)buildNavigationBar;
- (void)initMe;
- (void)changeScreenBrightnessSlowly;
- (void)changeBrightnessTo;
- (void)viewWillDestroy;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

