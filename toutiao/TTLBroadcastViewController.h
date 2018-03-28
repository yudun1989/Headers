//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "TTLBroadCastBeautifyLevelViewDelegate-Protocol.h"
#import "TTLBroadcastFilterOptionViewDelegate-Protocol.h"
#import "TTLBroadcastFinishViewControllerDelegate-Protocol.h"
#import "TTLBroadcastFunctionViewDelegate-Protocol.h"
#import "TTLBroadcastRecordingViewDelegate-Protocol.h"
#import "TTLMessageListener-Protocol.h"
#import "TTLMessageViewControllerDelegate-Protocol.h"
#import "UIAlertViewDelegate-Protocol.h"
#import "UINavigationControllerDelegate-Protocol.h"

@class NSDictionary, NSString, TTLBroadcastFinishViewController, TTLBroadcastInteractionView, TTLBroadcastRecordingView, TTLCreateRoomService, TTLGiftPresentViewController, TTLMessageViewController, TTLRecordLoadingView, TTLRoomModel, TTLRoomStatsService, TTLStickerDispatcher, UIImageView, UILabel, UIView;

@interface TTLBroadcastViewController : UIViewController <TTLMessageListener, TTLBroadcastFunctionViewDelegate, TTLBroadCastBeautifyLevelViewDelegate, TTLBroadcastFilterOptionViewDelegate, TTLBroadcastFinishViewControllerDelegate, TTLBroadcastRecordingViewDelegate, TTLMessageViewControllerDelegate, UIAlertViewDelegate, UINavigationControllerDelegate>
{
    _Bool _hasShownCountDown;
    _Bool _statusBarHidden;
    _Bool _liveFinished;
    unsigned long long _initialBeautyType;
    unsigned long long _initialBeautyLevel;
    unsigned long long _initialCameraPosition;
    NSString *_coverURI;
    NSDictionary *_extraInfo;
    TTLCreateRoomService *_createRoomService;
    TTLRoomStatsService *_statsRoomService;
    TTLBroadcastRecordingView *_recordingView;
    TTLBroadcastInteractionView *_interactionView;
    TTLRoomModel *_roomModel;
    TTLMessageViewController *_messageVC;
    TTLGiftPresentViewController *_giftVC;
    TTLBroadcastFinishViewController *_finishVC;
    TTLStickerDispatcher *_stickerDispatcher;
    TTLRecordLoadingView *_loadingView;
    UILabel *_filterHintLabel;
    UIImageView *_bgImageView;
    UIView *_swipeGuide;
    UIImageView *_swipeArrow;
}

@property(nonatomic) _Bool liveFinished; // @synthesize liveFinished=_liveFinished;
@property(nonatomic) _Bool statusBarHidden; // @synthesize statusBarHidden=_statusBarHidden;
@property(nonatomic) _Bool hasShownCountDown; // @synthesize hasShownCountDown=_hasShownCountDown;
@property(retain, nonatomic) UIImageView *swipeArrow; // @synthesize swipeArrow=_swipeArrow;
@property(retain, nonatomic) UIView *swipeGuide; // @synthesize swipeGuide=_swipeGuide;
@property(retain, nonatomic) UIImageView *bgImageView; // @synthesize bgImageView=_bgImageView;
@property(retain, nonatomic) UILabel *filterHintLabel; // @synthesize filterHintLabel=_filterHintLabel;
@property(retain, nonatomic) TTLRecordLoadingView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) TTLStickerDispatcher *stickerDispatcher; // @synthesize stickerDispatcher=_stickerDispatcher;
@property(retain, nonatomic) TTLBroadcastFinishViewController *finishVC; // @synthesize finishVC=_finishVC;
@property(retain, nonatomic) TTLGiftPresentViewController *giftVC; // @synthesize giftVC=_giftVC;
@property(retain, nonatomic) TTLMessageViewController *messageVC; // @synthesize messageVC=_messageVC;
@property(retain, nonatomic) TTLRoomModel *roomModel; // @synthesize roomModel=_roomModel;
@property(retain, nonatomic) TTLBroadcastInteractionView *interactionView; // @synthesize interactionView=_interactionView;
@property(retain, nonatomic) TTLBroadcastRecordingView *recordingView; // @synthesize recordingView=_recordingView;
@property(retain, nonatomic) TTLRoomStatsService *statsRoomService; // @synthesize statsRoomService=_statsRoomService;
@property(retain, nonatomic) TTLCreateRoomService *createRoomService; // @synthesize createRoomService=_createRoomService;
@property(retain, nonatomic) NSDictionary *extraInfo; // @synthesize extraInfo=_extraInfo;
@property(retain, nonatomic) NSString *coverURI; // @synthesize coverURI=_coverURI;
@property(nonatomic) unsigned long long initialCameraPosition; // @synthesize initialCameraPosition=_initialCameraPosition;
@property(nonatomic) unsigned long long initialBeautyLevel; // @synthesize initialBeautyLevel=_initialBeautyLevel;
@property(nonatomic) unsigned long long initialBeautyType; // @synthesize initialBeautyType=_initialBeautyType;
- (void).cxx_destruct;
- (_Bool)shouldAutorotate;
- (unsigned long long)supportedInterfaceOrientations;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)TTLMessageViewController:(id)arg1 didClickUserName:(id)arg2;
- (void)broadCastFinishViewWillDisappear;
- (void)filterOptionView:(id)arg1 didSelectFilter:(long long)arg2;
- (void)beautifyLevelViewDidClickButtonAtIndex:(long long)arg1;
- (void)navigationController:(id)arg1 didShowViewController:(id)arg2 animated:(_Bool)arg3;
- (void)functionViewDidClickShareButton;
- (void)functionViewDidClickFilterButton;
- (void)functionViewDidClickBeautifyButton;
- (void)functionViewDidClickReverseButton;
- (void)recordingViewWillEndPlay:(id)arg1 errorMessage:(id)arg2;
- (void)recordingViewDidStartToPlay:(id)arg1;
- (void)recordingView:(id)arg1 updateLiveNetworkCondition:(unsigned long long)arg2;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)reachabilityDidChanged:(id)arg1;
- (void)receiveKeyBoardWillHideNotification:(id)arg1;
- (void)receiveKeyboardWillShowNotificaiton:(id)arg1;
- (void)addBlurEffect:(id)arg1;
- (void)dismissSelf;
- (void)showSwipeGuide;
- (void)showFilterHintLable:(id)arg1;
- (void)didSwipe:(id)arg1;
- (_Bool)requrieMessageMonitor;
- (void)_handleSocialMessage:(id)arg1;
- (void)handleControlMsgs:(id)arg1;
- (void)handleGiftMsgs:(id)arg1;
- (void)handleRoomVerifyMsgs:(id)arg1;
- (void)updateRoomMemberCount:(id)arg1;
- (void)didReceiveMessage:(id)arg1;
- (void)stopBroadcast;
- (void)xgzButtonClicked:(id)arg1;
- (void)closeButtonClicked:(id)arg1;
- (void)viewSafeAreaInsetsDidChange;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)buildView;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithRoomModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
