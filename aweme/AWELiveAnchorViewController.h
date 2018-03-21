//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWELiveInteractViewController.h"

#import "AWELiveFilterViewControllerDelegate-Protocol.h"
#import "AWELiveRecordViewControllerDelegate-Protocol.h"
#import "AWEStickerPickerDelegate-Protocol.h"
#import "CAAnimationDelegate-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"

@class AWEFilterModel, AWELiveAnchorBottomView, AWELiveAnchorToolView, AWELiveDiggCollectionViewController, AWELiveFilterTipView, AWELiveFilterViewController, AWELiveRecordViewController, AWELiveSilenceListViewController, AWELiveSwitchFilterTipAnimator, NSString, TTHttpTask, UISwipeGestureRecognizer, UIViewController;
@protocol AWEStickerPicker;

@interface AWELiveAnchorViewController : AWELiveInteractViewController <AWEStickerPickerDelegate, AWELiveFilterViewControllerDelegate, UIGestureRecognizerDelegate, AWELiveRecordViewControllerDelegate, CAAnimationDelegate>
{
    _Bool _hasShownCountDown;
    _Bool _hasUpdateRoomStatePlay;
    _Bool _hasShowFinishView;
    AWELiveAnchorBottomView *_bottomView;
    AWELiveRecordViewController *_recordVC;
    AWEFilterModel *_currentFilter;
    AWELiveAnchorToolView *_bottomToolView;
    UIViewController<AWEStickerPicker> *_stickerVC;
    AWELiveFilterViewController *_filterVC;
    AWELiveFilterTipView *_filterTipView;
    AWELiveSilenceListViewController *_silenceListVC;
    AWELiveSwitchFilterTipAnimator *_filterTipAnimator;
    AWELiveDiggCollectionViewController *_diggVC;
    long long _heartBeatCount;
    long long _heartFailedTimestamp;
    UISwipeGestureRecognizer *_leftSwipeFilterGesture;
    UISwipeGestureRecognizer *_rightSwipeFilterGesture;
    TTHttpTask *_heartBeatTask;
}

@property(retain, nonatomic) TTHttpTask *heartBeatTask; // @synthesize heartBeatTask=_heartBeatTask;
@property(retain, nonatomic) UISwipeGestureRecognizer *rightSwipeFilterGesture; // @synthesize rightSwipeFilterGesture=_rightSwipeFilterGesture;
@property(retain, nonatomic) UISwipeGestureRecognizer *leftSwipeFilterGesture; // @synthesize leftSwipeFilterGesture=_leftSwipeFilterGesture;
@property(nonatomic) long long heartFailedTimestamp; // @synthesize heartFailedTimestamp=_heartFailedTimestamp;
@property(nonatomic) long long heartBeatCount; // @synthesize heartBeatCount=_heartBeatCount;
@property(nonatomic) _Bool hasShowFinishView; // @synthesize hasShowFinishView=_hasShowFinishView;
@property(retain, nonatomic) AWELiveDiggCollectionViewController *diggVC; // @synthesize diggVC=_diggVC;
@property(retain, nonatomic) AWELiveSwitchFilterTipAnimator *filterTipAnimator; // @synthesize filterTipAnimator=_filterTipAnimator;
@property(retain, nonatomic) AWELiveSilenceListViewController *silenceListVC; // @synthesize silenceListVC=_silenceListVC;
@property(retain, nonatomic) AWELiveFilterTipView *filterTipView; // @synthesize filterTipView=_filterTipView;
@property(retain, nonatomic) AWELiveFilterViewController *filterVC; // @synthesize filterVC=_filterVC;
@property(retain, nonatomic) UIViewController<AWEStickerPicker> *stickerVC; // @synthesize stickerVC=_stickerVC;
@property(retain, nonatomic) AWELiveAnchorToolView *bottomToolView; // @synthesize bottomToolView=_bottomToolView;
@property(retain, nonatomic) AWEFilterModel *currentFilter; // @synthesize currentFilter=_currentFilter;
@property(retain, nonatomic) AWELiveRecordViewController *recordVC; // @synthesize recordVC=_recordVC;
@property(retain, nonatomic) AWELiveAnchorBottomView *bottomView; // @synthesize bottomView=_bottomView;
- (void).cxx_destruct;
- (void)setShutdown:(_Bool)arg1;
- (void)layoutSubViewsFrame;
- (void)bindEvent;
- (void)setupUI;
- (void)showFilterGuideTip;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)configInteractionEnable:(_Bool)arg1;
- (void)forbidBtnClicked;
- (void)showCommentInput;
- (void)giftListPush;
- (void)shareRoom;
- (void)endVCCloseBtnClicked:(id)arg1;
- (void)handleSwipeFilterGesture:(id)arg1;
- (void)cameraSwitchBtnClicked:(id)arg1;
- (void)closeBtnClicked:(id)arg1;
- (void)maskViewTapped:(id)arg1;
- (void)closeToolPanel;
- (void)openToolPanel;
- (void)moreBtnClicked:(id)arg1;
- (void)filterBtnClicked:(id)arg1;
- (void)beautyBtnClicked:(id)arg1;
- (void)stickerBtnClicked:(id)arg1;
- (void)reachabilityDidChange:(id)arg1;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)applicationDidEnterBackground:(id)arg1;
- (void)applicationWillResignActive:(id)arg1;
- (void)liveStreamCauseFinish:(long long)arg1;
- (void)liveStreamDidPreview;
- (void)liveStreamDidConnect;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)applyFilter:(id)arg1 isPreviousToCurrent:(_Bool)arg2;
- (void)pickerDidFinish:(id)arg1;
- (void)applySticker:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)notifyStickerPresentComming;
- (void)didReceiveControlMessage:(id)arg1;
- (void)didReceiveRoomAlertMessage:(id)arg1;
- (void)didReceiveMessage:(id)arg1;
- (void)roomTimerTick;
- (void)startRoomTimer;
- (void)markRoomFinish;
- (void)uploadFinishForReason:(long long)arg1;
- (void)exitRoomForNotConnected;
- (void)showFinishView;
- (void)exitRoom;
- (void)configWithCamera:(id)arg1 preview:(id)arg2;
- (void)_startRecordRelation;
- (void)viewSafeAreaInsetsDidChange;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithRoom:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

