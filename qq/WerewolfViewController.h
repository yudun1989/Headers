//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QQHalfScreenHotChatViewController.h>

#import <QQMainProject/GSRequestCallBackDelegate-Protocol.h>
#import <QQMainProject/UIGestureRecognizerDelegate-Protocol.h>
#import <QQMainProject/WerewolfWebViewDelegate-Protocol.h>

@class HotChatExitRequest, HotChatMgrExitRequest, NSDictionary, NSString, UIView, WerewolfRNDownloadView, WerewolfWebViewController;

@interface WerewolfViewController : QQHalfScreenHotChatViewController <GSRequestCallBackDelegate, WerewolfWebViewDelegate, UIGestureRecognizerDelegate>
{
    _Bool _isLoadNotiCenter;
    _Bool _isAnotherGame;
    WerewolfWebViewController *_playWebVc;
    WerewolfRNDownloadView *_loadingView;
    HotChatExitRequest *_exitRequest;
    HotChatMgrExitRequest *_mgrExitRequest;
    WerewolfWebViewController *_werewolfWebVC;
    UIView *_coverView;
    NSDictionary *_configDic;
}

+ (id)getWerewolfBid;
@property(retain, nonatomic) NSDictionary *configDic; // @synthesize configDic=_configDic;
@property(nonatomic) _Bool isAnotherGame; // @synthesize isAnotherGame=_isAnotherGame;
@property(retain, nonatomic) UIView *coverView; // @synthesize coverView=_coverView;
@property(retain, nonatomic) WerewolfWebViewController *werewolfWebVC; // @synthesize werewolfWebVC=_werewolfWebVC;
@property(retain, nonatomic) HotChatMgrExitRequest *mgrExitRequest; // @synthesize mgrExitRequest=_mgrExitRequest;
@property(retain, nonatomic) HotChatExitRequest *exitRequest; // @synthesize exitRequest=_exitRequest;
@property(retain, nonatomic) WerewolfRNDownloadView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) WerewolfWebViewController *playWebVc; // @synthesize playWebVc=_playWebVc;
- (void).cxx_destruct;
- (void)closeWerewolfWebView;
- (void)handleSingleTap:(id)arg1;
- (void)addWerewolfWebView:(id)arg1;
- (void)callWerewolfRNGift:(id)arg1;
- (void)onEvtSessionEvent:(id)arg1;
- (void)showRoomFloate:(id)arg1;
- (void)changePlayerRecvAudioPermission:(id)arg1;
- (void)changeSpeakPermission:(id)arg1;
- (void)changePlayerState:(id)arg1;
- (void)changeRoomHalfHeight:(double)arg1;
- (void)stopSpeakAnimate;
- (void)startSpeakAnimate;
- (void)stateBridge:(id)arg1;
- (void)leftButtonClick:(id)arg1;
- (void)setTReactView:(id)arg1 bridge:(id)arg2 groupCode:(unsigned long long)arg3;
- (void)sendRNWithDic:(id)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (_Bool)isSupportRightDragToGoBack;
- (void)pushHotChatToSettingViewController;
- (void)headIconTouch:(id)arg1;
- (void)akPackgerDownloadedHandler:(id)arg1;
- (void)popToRootViewController;
- (void)ActionGotoQWerewolfGameRoom;
- (void)requestDidFailed:(id)arg1 userInfo:(id)arg2;
- (void)requestDidSucceed:(id)arg1 userInfo:(id)arg2;
- (void)exitWifiChatGroup;
- (void)showRightClick:(id)arg1;
- (void)rightButtonClick;
- (void)updateRightItems;
- (void)handleDoubleTap:(id)arg1;
- (void)resetCustomTitleView;
- (void)viewDidLoad;
- (void)dealloc;
- (void)updateNotiCenter;
- (void)createGameWebView;
- (id)initWithHotChatModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

