//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "KSKeyboardBarViewController.h"

#import "KSFeedKeyboardBarDelegate-Protocol.h"
#import "KSLiveComponentContainer-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"

@class KSAudioLiveBackgroundView, KSBroadcastViewController, KSComboTapGestureRecognizer, KSFeedKeyboardBar, KSLiveAdminActionComponent, KSLiveAdminViewModel, KSLiveBarrageViewController, KSLiveChatViewController, KSLiveCommentComboViewController, KSLiveCommentListViewController, KSLiveEffectController, KSLiveGPUSceneViewController, KSLiveGiftBoothViewController, KSLiveGiftPaintDisplayViewController, KSLiveHeartsEmitterCell, KSLiveKeyboardBar, KSLiveNavigationComponent, KSLivePromptManager, KSLiveQuizComponent, KSLiveReportComponent, KSLiveShareComponent, KSLiveWidgetComponent, KSPopoverViewController, KSRedPacketBoothsViewController, KSShowViewController, KSUTaskMetaData, NSLayoutConstraint, NSMutableArray, NSObject, NSString, UIButton, UIView;
@protocol KSLiveChatManager;

@interface KSLiveUserViewController : KSKeyboardBarViewController <KSFeedKeyboardBarDelegate, KSLiveComponentContainer, UIGestureRecognizerDelegate>
{
    KSLiveCommentListViewController *_commentListViewController;
    NSLayoutConstraint *_commentWidthConstraint;
    KSLiveGiftBoothViewController *_boothViewController;
    KSLiveGiftPaintDisplayViewController *_paintGiftDisplayViewController;
    KSComboTapGestureRecognizer *_likeTapGestureRecognizer;
    UIView *_topShadowView;
    UIView *_actionView;
    UIView *_audioIconView;
    KSAudioLiveBackgroundView *_audioBackgroundView;
    UIButton *_commentButton;
    NSLayoutConstraint *_commentButtonWidthConstraint;
    KSLiveGPUSceneViewController *_GPUSceneDirector;
    NSLayoutConstraint *_commentHeightConstraint;
    _Bool _inTransition;
    _Bool _networkTipShowing;
    _Bool _commentTaskMetaDataShouldReport;
    int _likeCount;
    long long _maxCommentLength;
    NSMutableArray *components;
    KSLiveAdminViewModel *_adminViewModel;
    double _fullScreenTotalTime;
    KSLiveBarrageViewController *_liveBarrageViewController;
    KSBroadcastViewController *_broadcastViewController;
    NSString *_fromString;
    KSLiveChatViewController *_chatViewController;
    NSObject<KSLiveChatManager> *_chatManager;
    KSShowViewController *_currentShowViewController;
    KSPopoverViewController *_currentPopoverViewController;
    NSLayoutConstraint *_commentListBottomConstraint;
    KSLiveEffectController *_effectController;
    KSLiveCommentComboViewController *_commentComboViewController;
    KSLiveKeyboardBar *_commentBar;
    KSFeedKeyboardBar *_pasteCommentBar;
    KSLiveHeartsEmitterCell *_myLikeCell;
    KSLiveHeartsEmitterCell *_otherLikeCell;
    NSMutableArray *_tapLikeHeartsQueue;
    KSUTaskMetaData *_sendCommentTaskMetaData;
    KSLivePromptManager *_promptManager;
    id _redPacketsDidResetObserver;
    KSLiveNavigationComponent *_navComponent;
    KSLiveWidgetComponent *_widgetComponent;
    KSLiveShareComponent *_shareComponent;
    KSLiveReportComponent *_reportComponent;
    KSLiveAdminActionComponent *_adminActionComponent;
    NSString *_chatManagerConnectionStateObservingToken;
    NSString *_chatManagerCoreCommunicatorActiveObservingToken;
}

@property(retain, nonatomic) NSString *chatManagerCoreCommunicatorActiveObservingToken; // @synthesize chatManagerCoreCommunicatorActiveObservingToken=_chatManagerCoreCommunicatorActiveObservingToken;
@property(retain, nonatomic) NSString *chatManagerConnectionStateObservingToken; // @synthesize chatManagerConnectionStateObservingToken=_chatManagerConnectionStateObservingToken;
@property(retain, nonatomic) KSLiveAdminActionComponent *adminActionComponent; // @synthesize adminActionComponent=_adminActionComponent;
@property(retain, nonatomic) KSLiveReportComponent *reportComponent; // @synthesize reportComponent=_reportComponent;
@property(retain, nonatomic) KSLiveShareComponent *shareComponent; // @synthesize shareComponent=_shareComponent;
@property(retain, nonatomic) KSLiveWidgetComponent *widgetComponent; // @synthesize widgetComponent=_widgetComponent;
@property(retain, nonatomic) KSLiveNavigationComponent *navComponent; // @synthesize navComponent=_navComponent;
@property(retain, nonatomic) id redPacketsDidResetObserver; // @synthesize redPacketsDidResetObserver=_redPacketsDidResetObserver;
@property(retain, nonatomic) KSLivePromptManager *promptManager; // @synthesize promptManager=_promptManager;
@property(nonatomic) _Bool commentTaskMetaDataShouldReport; // @synthesize commentTaskMetaDataShouldReport=_commentTaskMetaDataShouldReport;
@property(retain, nonatomic) KSUTaskMetaData *sendCommentTaskMetaData; // @synthesize sendCommentTaskMetaData=_sendCommentTaskMetaData;
@property(retain, nonatomic) NSMutableArray *tapLikeHeartsQueue; // @synthesize tapLikeHeartsQueue=_tapLikeHeartsQueue;
@property(nonatomic) _Bool networkTipShowing; // @synthesize networkTipShowing=_networkTipShowing;
@property(retain, nonatomic) KSLiveHeartsEmitterCell *otherLikeCell; // @synthesize otherLikeCell=_otherLikeCell;
@property(retain, nonatomic) KSLiveHeartsEmitterCell *myLikeCell; // @synthesize myLikeCell=_myLikeCell;
@property(retain, nonatomic) KSFeedKeyboardBar *pasteCommentBar; // @synthesize pasteCommentBar=_pasteCommentBar;
@property(retain, nonatomic) KSLiveKeyboardBar *commentBar; // @synthesize commentBar=_commentBar;
@property(retain, nonatomic) UIButton *commentButton; // @synthesize commentButton=_commentButton;
@property(retain, nonatomic) KSAudioLiveBackgroundView *audioBackgroundView; // @synthesize audioBackgroundView=_audioBackgroundView;
@property(retain, nonatomic) UIView *audioIconView; // @synthesize audioIconView=_audioIconView;
@property(retain, nonatomic) KSLiveCommentComboViewController *commentComboViewController; // @synthesize commentComboViewController=_commentComboViewController;
@property(retain, nonatomic) KSLiveEffectController *effectController; // @synthesize effectController=_effectController;
@property(retain, nonatomic) KSLiveGiftPaintDisplayViewController *paintGiftDisplayViewController; // @synthesize paintGiftDisplayViewController=_paintGiftDisplayViewController;
@property(retain, nonatomic) KSLiveGiftBoothViewController *boothViewController; // @synthesize boothViewController=_boothViewController;
@property(retain, nonatomic) NSLayoutConstraint *commentListBottomConstraint; // @synthesize commentListBottomConstraint=_commentListBottomConstraint;
@property(retain, nonatomic) KSLiveCommentListViewController *commentListViewController; // @synthesize commentListViewController=_commentListViewController;
@property(nonatomic) __weak KSPopoverViewController *currentPopoverViewController; // @synthesize currentPopoverViewController=_currentPopoverViewController;
@property(nonatomic) __weak KSShowViewController *currentShowViewController; // @synthesize currentShowViewController=_currentShowViewController;
@property(retain, nonatomic) NSObject<KSLiveChatManager> *chatManager; // @synthesize chatManager=_chatManager;
@property(retain, nonatomic) KSLiveChatViewController *chatViewController; // @synthesize chatViewController=_chatViewController;
@property(retain, nonatomic) NSString *fromString; // @synthesize fromString=_fromString;
@property(retain, nonatomic) KSBroadcastViewController *broadcastViewController; // @synthesize broadcastViewController=_broadcastViewController;
@property(retain, nonatomic) KSLiveBarrageViewController *liveBarrageViewController; // @synthesize liveBarrageViewController=_liveBarrageViewController;
@property(nonatomic) _Bool inTransition; // @synthesize inTransition=_inTransition;
@property(nonatomic) int likeCount; // @synthesize likeCount=_likeCount;
@property(nonatomic) double fullScreenTotalTime; // @synthesize fullScreenTotalTime=_fullScreenTotalTime;
@property(retain, nonatomic) UIView *actionView; // @synthesize actionView=_actionView;
@property(retain, nonatomic) KSLiveAdminViewModel *adminViewModel; // @synthesize adminViewModel=_adminViewModel;
@property(retain, nonatomic) NSMutableArray *components; // @synthesize components;
- (void).cxx_destruct;
- (id)anchor;
- (void)showUserDetailWithUserInfo:(id)arg1 source:(unsigned long long)arg2;
- (long long)viewHierarchyIndexForComponent:(id)arg1;
- (id)layoutReferViewForComponent:(id)arg1;
- (id)containerViewControllerForComponent:(id)arg1;
- (id)containerViewForComponent:(id)arg1;
@property(readonly, nonatomic) KSLiveQuizComponent *quizComponent;
- (void)addComponent:(id)arg1;
- (void)loadComponents;
- (void)withUserAvailable:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)didShowFreeTrafficView;
- (void)setUpSendCommentTaskMetaData:(id)arg1;
- (void)ks_showViewController:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (_Bool)shouldReceiveLikeTouch:(id)arg1;
- (id)ks_followRefer;
- (void)keyboardBar:(id)arg1 changingHeight:(double)arg2;
- (void)textViewDidChange:(id)arg1;
- (_Bool)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (_Bool)keyboardBar:(id)arg1 shouldReturn:(id)arg2;
@property(readonly, nonatomic) long long maxCommentLength; // @synthesize maxCommentLength=_maxCommentLength;
- (id)subViewToShowToastIn;
- (_Bool)ks_showNavigationAlert:(id)arg1 type:(unsigned long long)arg2 duration:(id)arg3;
- (_Bool)keyboardIsHidden;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (_Bool)textViewShouldBeginEditing:(id)arg1;
- (long long)preferredStatusBarStyle;
- (_Bool)prefersStatusBarHidden;
- (id)viewModel;
- (void)didClickComment:(id)arg1;
- (void)didClickClose:(id)arg1;
- (void)didClickLike:(id)arg1;
- (void)didTapAnchorHead:(id)arg1;
- (void)didSelectMessage:(id)arg1 sourceType:(unsigned long long)arg2 recoSource:(int)arg3;
- (void)didLongPressMessage:(id)arg1;
- (void)didSelectMessage:(id)arg1;
- (void)showFreeTrafficView;
- (void)visitLiveRoomWithBroadcastMessage:(id)arg1 withCompletionSignal:(CDUnknownBlockType)arg2;
- (void)showCommentCombo:(_Bool)arg1;
- (void)showLiveBarrage:(_Bool)arg1 showCommentList:(_Bool)arg2;
- (void)showLiveBarrage:(_Bool)arg1;
- (void)didSelectAudience:(id)arg1;
- (id)effectPipeline;
@property(readonly, nonatomic) KSLiveGPUSceneViewController *GPUSceneDirector; // @dynamic GPUSceneDirector;
- (void)updatePasteCommentBarContentText:(id)arg1;
- (_Bool)isShowingPasteCommentBar;
- (void)showPasteCommentBar;
- (void)hidePasteCommentBar;
- (id)createEmmitterCell;
- (id)commentKeyboardBar;
- (void)setupActionView;
- (void)showToastNotice;
- (void)showAlertNotice;
- (void)showToast:(id)arg1;
- (double)actionButtonDimension;
- (void)updateCommentListWidth;
- (void)updateCommentListHeight;
- (double)commentListWidth;
- (double)commentListHeight;
- (void)_updateChatRendererRectIfNeeded;
- (void)appendHearts:(long long)arg1 toCell:(id)arg2;
- (void)updateEmitterPosition;
- (struct CGPoint)emitterPosition;
- (void)viewDidLayoutSubviews;
- (void)didReceiveMemoryWarning;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)dealloc;
- (void)_atSomeBodyWithUser:(id)arg1;
- (void)_showSettingViewControllerWithProfile:(id)arg1;
- (void)_kickOutUser:(id)arg1 withSilent:(_Bool)arg2;
- (id)blockItemWithUser:(id)arg1 withHisAdminType:(short)arg2;
- (id)kickoutItemWithUser:(id)arg1;
- (short)adminType;
- (id)anchor;
- (void)chatWithUser:(id)arg1 adminType:(short)arg2;
- (void)checkUserProductFrom:(id)arg1 feed:(id)arg2;
- (void)showFollowingForUser:(id)arg1;
- (void)showFollowersForUser:(id)arg1;
- (void)showUserProfile:(id)arg1 source:(int)arg2;
- (id)moreActionsForUser:(id)arg1 adminType:(short)arg2;
- (void)showMoreActionForUser:(id)arg1 adminType:(short)arg2 completion:(CDUnknownBlockType)arg3;
- (void)showUserDetail:(id)arg1 profile:(id)arg2 adminType:(short)arg3 sourceType:(unsigned long long)arg4 recoSource:(int)arg5;
- (void)refreshWallet;
@property(readonly, nonatomic) KSRedPacketBoothsViewController *redPacketBooths;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

