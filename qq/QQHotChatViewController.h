//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QQGroupChatViewController.h>

#import <QQMainProject/ActionSheetDataDelegate-Protocol.h>
#import <QQMainProject/AvatarServiceDelegate-Protocol.h>
#import <QQMainProject/HotChatWidgetDelegate-Protocol.h>
#import <QQMainProject/PreviewSecretPictureViewControllerDelegate-Protocol.h>
#import <QQMainProject/QQGroupRobotKeywordManagerDelegate-Protocol.h>
#import <QQMainProject/QQGroupRobotKeywordViewDelegate-Protocol.h>
#import <QQMainProject/SpriteMatchBannerViewDelegate-Protocol.h>
#import <QQMainProject/UIActionSheetDelegate-Protocol.h>

@class FlashPictureCacheMsgHandler, HotChatNoticeView, NSString, NSTimer, QQAIOMsgModel, QQGroupRobotKeywordManager, QQHotChatModel, QQWebShareActionSheet, UIImageView;

@interface QQHotChatViewController : QQGroupChatViewController <PreviewSecretPictureViewControllerDelegate, UIActionSheetDelegate, AvatarServiceDelegate, ActionSheetDataDelegate, SpriteMatchBannerViewDelegate, QQGroupRobotKeywordManagerDelegate, QQGroupRobotKeywordViewDelegate, HotChatWidgetDelegate>
{
    _Bool _isCreateRoomSuccess;
    _Bool _removeTopMargin;
    _Bool _firstLoad;
    _Bool _shouldHideNoticeWhenCreaterFirstEnter;
    _Bool _receivedNoticePush;
    _Bool _needShowNotice;
    _Bool _kickActionSheetShowing;
    _Bool _recvSelfKickNotify;
    _Bool _hasSendMsgFailForKick;
    QQGroupRobotKeywordManager *_robotKeywordManager;
    QQHotChatModel *_wifiPOIInfoModel;
    FlashPictureCacheMsgHandler *_flashPictureCacheMsgHandler;
    HotChatNoticeView *_hotChatNoticeViewNew;
    NSTimer *_noticeCheckTimer;
    QQAIOMsgModel *_needKickUserModel;
    QQWebShareActionSheet *_shareSheet;
    NSString *_ownerNick;
    NSString *_ownerAvatarUrl;
    long long _memberListType;
    UIImageView *_spriteMatchBannerArrowImageView;
}

@property(retain, nonatomic) UIImageView *spriteMatchBannerArrowImageView; // @synthesize spriteMatchBannerArrowImageView=_spriteMatchBannerArrowImageView;
@property(nonatomic) _Bool hasSendMsgFailForKick; // @synthesize hasSendMsgFailForKick=_hasSendMsgFailForKick;
@property(nonatomic) _Bool recvSelfKickNotify; // @synthesize recvSelfKickNotify=_recvSelfKickNotify;
@property(nonatomic) long long memberListType; // @synthesize memberListType=_memberListType;
@property(retain, nonatomic) NSString *ownerAvatarUrl; // @synthesize ownerAvatarUrl=_ownerAvatarUrl;
@property(retain, nonatomic) NSString *ownerNick; // @synthesize ownerNick=_ownerNick;
@property(retain, nonatomic) QQWebShareActionSheet *shareSheet; // @synthesize shareSheet=_shareSheet;
@property(retain, nonatomic) QQAIOMsgModel *needKickUserModel; // @synthesize needKickUserModel=_needKickUserModel;
@property(nonatomic) _Bool kickActionSheetShowing; // @synthesize kickActionSheetShowing=_kickActionSheetShowing;
@property(retain, nonatomic) NSTimer *noticeCheckTimer; // @synthesize noticeCheckTimer=_noticeCheckTimer;
@property(nonatomic) _Bool needShowNotice; // @synthesize needShowNotice=_needShowNotice;
@property(nonatomic) _Bool receivedNoticePush; // @synthesize receivedNoticePush=_receivedNoticePush;
@property(retain, nonatomic) HotChatNoticeView *hotChatNoticeViewNew; // @synthesize hotChatNoticeViewNew=_hotChatNoticeViewNew;
@property(nonatomic) _Bool shouldHideNoticeWhenCreaterFirstEnter; // @synthesize shouldHideNoticeWhenCreaterFirstEnter=_shouldHideNoticeWhenCreaterFirstEnter;
@property(retain, nonatomic) FlashPictureCacheMsgHandler *flashPictureCacheMsgHandler; // @synthesize flashPictureCacheMsgHandler=_flashPictureCacheMsgHandler;
@property(nonatomic) _Bool firstLoad; // @synthesize firstLoad=_firstLoad;
@property(nonatomic) _Bool removeTopMargin; // @synthesize removeTopMargin=_removeTopMargin;
@property(nonatomic) _Bool isCreateRoomSuccess; // @synthesize isCreateRoomSuccess=_isCreateRoomSuccess;
@property(retain, nonatomic) QQHotChatModel *wifiPOIInfoModel; // @synthesize wifiPOIInfoModel=_wifiPOIInfoModel;
@property(retain, nonatomic) QQGroupRobotKeywordManager *robotKeywordManager; // @synthesize robotKeywordManager=_robotKeywordManager;
- (void).cxx_destruct;
- (void)didClickFastMatchGame;
- (void)onCMShowGameClose:(id)arg1;
- (void)onCMShowGamePackUp:(id)arg1;
- (void)checkNeedStartSpriteGameMatch:(_Bool)arg1;
- (void)spriteMatchBannerFoldBtnPressed;
- (void)requestSpriteGameUserInfo;
- (void)registerHotChatAIOTimeReporter;
- (void)onHotchatMemberListDidSelect:(id)arg1;
- (void)pushHotChatMemViewController:(id)arg1 selectedLocation:(long long)arg2;
- (void)textViewDidChangeForAt:(id)arg1;
- (void)textViewDidChange:(id)arg1;
- (void)pushHotChatToSettingViewController;
- (void)insertTopSpaceWithHeight:(double)arg1;
- (_Bool)isSupportFullScreenLayout;
- (struct UIEdgeInsets)defaultScrollViewContentInset;
- (void)adjustNotifyControl;
- (_Bool)isPTTHotChat;
- (void)updateRightItems;
- (double)getTitleViewWidth;
- (void)refreshRecentList;
- (void)handleSpriteDataLoadFinished:(id)arg1;
- (void)onSendMsgFailForKick:(id)arg1;
- (void)onUserKickedWifiChat:(id)arg1;
- (void)onSelfKickedWifiChat:(id)arg1;
- (void)onUserExitedWifiChat:(id)arg1;
- (void)onNewUserJoinedWifiChat:(id)arg1;
- (void)onApplicationBecomeActive:(id)arg1;
- (void)didLoadImage:(id)arg1 identity:(id)arg2 type:(int)arg3 size:(int)arg4 shape:(int)arg5 avatarInfo:(id)arg6;
- (void)showShareActionSheet;
- (void)webShare;
- (id)shareTitleWithItem:(int)arg1;
- (void)reportWebShareWithItem:(int)arg1;
- (id)getDataForShareItem:(id)arg1 onThisItem:(int)arg2;
- (id)getDataForConfig:(id)arg1;
- (id)saveTips:(id)arg1;
- (id)messageModelWithTips:(id)arg1;
- (void)showTips:(id)arg1 duplicatedEnable:(_Bool)arg2;
- (void)show24HoursMessagesTipIfNeeded;
- (void)showJoinTips;
- (void)showUserKickedTips:(id)arg1;
- (void)showUserExitedTips:(id)arg1;
- (void)showUserJoinedTips:(id)arg1;
- (id)convertNoticeModel:(id)arg1;
- (void)fetchNewConfigNotification:(id)arg1;
- (void)updateAIONoticeNotification:(id)arg1;
- (void)onPushNoticeNotification:(id)arg1;
- (void)updateNoticeModelToQQHotChatModel:(id)arg1;
- (void)onGetNoticeNotificationForOffice:(id)arg1;
- (void)showHotChatNoticeViewIfNeed:(id)arg1;
- (void)showHotChatNoticeView:(id)arg1;
- (void)configNoticeCheck;
- (void)requestGroupNotice;
- (void)checkNoticeCenter;
- (void)actionDeliverGift:(id)arg1;
- (void)showRobotKeywordPanel;
- (void)actionInputbarRobotPanel:(id)arg1;
- (void)onMemberSelected:(id)arg1;
- (void)groupGiftSelectionViewDidSelect;
- (void)enterSendFlowersList;
- (void)enterFlowerShopWithUin:(id)arg1 groupCode:(id)arg2;
- (void)enterFlowerShopWithUin:(id)arg1;
- (void)buttonClick:(id)arg1 atIndex:(int)arg2;
- (void)previewSecretPictureViewController:(id)arg1 didPreviewedSecretPictureWithCell:(id)arg2;
- (void)didTouchSecretPictureEventNew:(id)arg1;
- (void)doSelectFlashPicture:(id)arg1;
- (void)showCharmAlertView;
- (void)actionAlbumForFlashPicture:(id)arg1;
- (void)stopSavingAnimation;
- (void)startSavingAnimation;
- (void)actionInputbarSpriteGame:(id)arg1;
- (void)setupInputbarItems;
- (void)didTouchRichKeyBorad:(id)arg1 withControl:(id)arg2 forEvent:(id)arg3;
- (void)setupRichAIOKeypadEntries;
- (int)getTopWidgetOffset;
- (void)dissmissKeyboard;
- (void)onWidgetHeightChanged:(double)arg1;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)didPressReturnKey;
- (void)willChangeInputbarStatus:(unsigned long long)arg1;
- (void)QQBaseChatMessageDidGetAllOffLineTroopMessage:(id)arg1;
- (void)didSelectSystemNotificationCell:(id)arg1;
- (void)QQAIOShareMessageCellDidAction:(id)arg1 aioModel:(id)arg2;
- (void)showKeyboardForVoice:(id)arg1;
- (_Bool)canDeleteOther:(id)arg1;
- (void)showKeyboard:(id)arg1;
- (void)groupRankLabelTouch:(id)arg1 clkUin:(id)arg2 clkNick:(id)arg3 isDeliverGiftFlag:(_Bool)arg4 source:(id)arg5;
- (void)headIconTouch:(id)arg1;
- (void)leftButtonClick:(id)arg1;
- (void)resetCustomTitleView;
- (void)resetViewControllerTitle;
- (_Bool)isSupportRightDragToGoBack;
- (_Bool)isHotChat;
- (void)initNotification;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)showFastSendImagePopoverIfNeeded;
- (void)appendMessage:(id)arg1 shouldReloadData:(_Bool)arg2 shouldScrollToEndWithAnimation:(_Bool)arg3;
- (void)viewDidLoad;
- (void)loadView;
- (void)recieveGroupRobotKeywords:(id)arg1 robotUIN:(unsigned long long)arg2;
- (void)sendGroupRobotKeywordToServer:(id)arg1;
- (void)sendGroupRobotKeyword:(id)arg1 needFlag:(_Bool)arg2;
- (void)dealloc;
- (id)initWithHotChatModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

