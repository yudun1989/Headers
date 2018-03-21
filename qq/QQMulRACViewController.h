//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QQMulAVChatBaseViewController.h>

#import <QQMainProject/QQAVChatControlBarDelegate-Protocol.h>
#import <QQMainProject/QQAVMaskAddFriendViewDelegate-Protocol.h>
#import <QQMainProject/QQAVTipsViewDelegate-Protocol.h>
#import <QQMainProject/QQCollectionViewDataSource-Protocol.h>
#import <QQMainProject/QQCollectionViewDelegate-Protocol.h>
#import <QQMainProject/QQMulRacMemberSelectorViewControllerDelegate-Protocol.h>
#import <QQMainProject/QUIAlertViewDelegate-Protocol.h>

@class NSMutableArray, NSMutableDictionary, NSString, NSTimer, QQAVChatControlBar, QQAVNoticeView, QQAVTipsView, QQCollectionView, QUIAlertView, TUDotIndicator, UIImageView, UILabel, UIView;

@interface QQMulRACViewController : QQMulAVChatBaseViewController <QQAVMaskAddFriendViewDelegate, QQAVChatControlBarDelegate, QQAVTipsViewDelegate, QUIAlertViewDelegate, QQCollectionViewDataSource, QQCollectionViewDelegate, QQMulRacMemberSelectorViewControllerDelegate>
{
    struct GroupAudioChatEngine *_engine;
    NSMutableDictionary *_members;
    NSMutableArray *_memUinArray;
    UIView *_viewBackground;
    UIImageView *_imageview;
    QQAVNoticeView *_vNotice;
    QQAVChatControlBar *_vChatControllBar;
    QQCollectionView *_memberCollectionView;
    UILabel *_vToptic;
    UILabel *_vTitle;
    QQAVTipsView *_vDuration;
    TUDotIndicator *_vWaitingDots;
    NSTimer *_timerNetDetect;
    NSTimer *_noticeBarTimer;
    double ypos;
    NSString *_topic;
    _Bool _ismask;
    long long _relationID;
    int _businessType;
    int _chatState;
    _Bool _isOnBackGround;
    _Bool _isAudioInterrupt;
    NSTimer *_netChaneTimer;
    int _curNetType;
    _Bool _isChangingNet;
    _Bool _isNetChaneSuc;
    _Bool _isTraeStarted;
    _Bool _isOutChatting;
    _Bool _isOnQuitting;
    _Bool _isMatching;
    _Bool _isReMatching;
    _Bool _hasFriend;
    _Bool _isScreanRetained;
    _Bool _isRequestSelfHeadAndNick;
    int _isPreSpeakerState;
    QUIAlertView *_reportAlertView;
    QUIAlertView *_beKickOffView;
    NSTimer *_reportAlertTimer;
    QUIAlertView *_matchAlertView;
    QUIAlertView *_networkAlertView;
    unsigned long long _remainTime;
    _Bool _isReportedViewBeDismiss;
    unsigned long long _masterUin;
    _Bool _isInFront;
    unsigned long long _enounterCallType;
}

- (void)onTipsViewShowTime:(id)arg1;
- (void)onTipsViewShowTips:(id)arg1;
- (void)resetEncounterType:(unsigned long long)arg1;
- (void)clearTips:(int)arg1;
- (void)setTips:(id)arg1 withPriority:(int)arg2 withShowTime:(int)arg3;
- (void)removeMessageFromNoticeBar;
- (void)addMessageToNoticeBar:(id)arg1 withShowTime:(int)arg2;
- (void)onKickOffBtnClicked:(id)arg1;
- (void)onAddFriendBtnClicked:(id)arg1;
- (void)onReportBtnClicked:(id)arg1;
- (void)onSendFlowerClicked:(id)arg1;
- (void)dismissSelectViewController:(id)arg1;
- (void)viewController:(id)arg1 memberSelected:(unsigned long long)arg2;
- (id)removeSelfFromMemberArray:(id)arg1;
- (void)refreshMemberSelect;
- (void)onSendFlowerAction;
- (void)onReturnAction;
- (void)forceSuspend;
- (void)onBeKickOffAction;
- (void)onToggleCameraAction;
- (void)onCloseAction;
- (void)onCameraAction;
- (void)onRematch;
- (void)onMuteAction;
- (void)onDisableMuteAction;
- (void)onSpeakerAction;
- (void)AVControlbuttonPressed:(id)arg1;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2;
- (_Bool)isFullScreenChatting;
- (int)getChatState;
- (int)getRelationType;
- (int)getBusinessType;
- (unsigned long long)getRelationID;
- (_Bool)getIsSpeakerState;
- (_Bool)getIsMicState;
- (void)onEvtRelationChanged:(id)arg1;
- (void)didRecvFriendRefused:(id)arg1;
- (void)onEvtFriendDeleted:(id)arg1;
- (id)getFormatedRemainTime:(unsigned long long)arg1;
- (void)onReportedTimer:(id)arg1;
- (void)onEvtRandomIsMaskChanged:(id)arg1;
- (void)onEvtRandomChatBeReported:(id)arg1;
- (void)onEvtUserProfile:(id)arg1;
- (void)onEvtUserSimpleInfo:(id)arg1;
- (void)onEvtUserInfoFromRac:(id)arg1;
- (void)onEvtSessionEvent:(id)arg1;
- (void)onEvtRandomReportRoomUsers:(id)arg1;
- (void)onEvtRandomOtherBeKicked:(id)arg1;
- (void)onEvtRandomMasterChanged:(id)arg1;
- (void)onEvtMatchResult:(id)arg1;
- (void)groupAudioInterruptionEnd;
- (void)groupAudioInterruptionStart;
- (void)handleNetState;
- (void)NetChangeSuc;
- (void)onNetChangeEnd;
- (void)onEvtNetChangeSuc:(id)arg1;
- (void)onEvtNetChangeStart:(id)arg1;
- (void)onEvtEnterFrontGround:(id)arg1;
- (void)onEvtEnterBackGround:(id)arg1;
- (void)onEvtPluggInHeadset:(id)arg1;
- (void)onEvtUnPluggingHeadset:(id)arg1;
- (void)checkProximityMonitoringEnabled;
- (void)clearProximityMonitoring;
- (void)onEvtSensorStateChange:(id)arg1;
- (void)onEvtAudioInterruption:(id)arg1;
- (void)onEvtStatusBarFrameChanged:(id)arg1;
- (void)switchSpeakerButtonStyle:(float)arg1;
- (void)switchSpeakerButtonStyleOnMain:(id)arg1;
- (void)unInitNofification;
- (void)installNormalNotifications;
- (void)installKeyNotifications;
- (void)onNotificationAny:(id)arg1;
- (void)addObserver:(id)arg1 selector:(SEL)arg2 name:(id)arg3 object:(id)arg4;
- (void)addToStage:(id)arg1;
- (void)closeSession;
- (void)startSession;
- (void)showWindow:(id)arg1 withAnimationType:(int)arg2;
- (void)dealloc;
- (long long)preferredInterfaceOrientationForPresentation;
- (_Bool)shouldAutorotate;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)unInitInterface;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (_Bool)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (long long)numberOfItemInCollectionView:(id)arg1;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)setCollectionViewLayout;
- (void)initMemberCollectionView;
- (void)viewDidLoad;
- (id)initWithTopic:(id)arg1 ismask:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

