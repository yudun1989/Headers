//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SPProfileCardViewController.h"

#import "BEEMultiStyleCellDelegate-Protocol.h"
#import "CPopMenuManagerDelegate-Protocol.h"
#import "SCProfileSettingControllerDelegate-Protocol.h"
#import "SPICardContainer-Protocol.h"
#import "UIActionSheetDelegate-Protocol.h"

@class APActivityIndicatorView, APContactInfo, APGroupInfo, APNewFindContactMsg, APShareServiceCardControl, ASPhotoPickerController, BEEPopMenuView, CPopMenuManager, CSPublishFeed, DTRpcAsyncCaller, GetUserHomeFeedListPBResp, NSArray, NSDate, NSDictionary, NSException, NSMutableArray, NSMutableDictionary, NSNumber, NSString, SCBigHeadView, SCBubbleView, SPBasicInfoRowsModel, SPProfileInfo, SPProfileSettingDataManager, SPProfileTransmit, UIButton, UIImageView, UILabel, UIView;

@interface SPProfileViewController : SPProfileCardViewController <SPICardContainer, SCProfileSettingControllerDelegate, UIActionSheetDelegate, BEEMultiStyleCellDelegate, CPopMenuManagerDelegate>
{
    _Bool _hasMoreFeeds;
    _Bool _hadAddOther;
    _Bool _feedsRpcReturned;
    _Bool _refreshOnReleaseFinger;
    _Bool _refreshWhileScrolledToTop;
    _Bool _isUserLoggedOff;
    _Bool _needUpdatePrimaryInfoUI;
    _Bool _needUpdateBasicInfoUI;
    _Bool _needUpdateSetRemarksUI;
    _Bool _needUpdateMyActivityUI;
    _Bool _needUpdateVariableCards;
    _Bool _needUpdateFeedsUI;
    _Bool _needUpdateSendActivityUI;
    _Bool _isBackFromZhiMa;
    _Bool _isFirstTimeViewWillAppear;
    _Bool _isFirstTimeViewDidAppear;
    _Bool _isFeedsDisplayed;
    _Bool _isRPCFeedsLoadingOrRendering;
    _Bool _viewHasAppear;
    _Bool _forceHideAvatarTip;
    _Bool _flag_isMovingFromParentController;
    NSString *_userId;
    NSString *_loginId;
    NSString *_source;
    NSDictionary *_bizNickName;
    APGroupInfo *_groupInfo;
    NSString *_displayNameInGroup;
    NSDictionary *_launchOptions;
    NSString *_sourceId;
    NSString *_sessionId;
    NSMutableDictionary *_visibleCards;
    NSMutableDictionary *_cardCachePool;
    UIView *_containerView;
    NSDictionary *_containerContextData;
    APContactInfo *_contactInfo;
    SPProfileInfo *_profileInfo;
    NSArray *_findContactMsgArr;
    APNewFindContactMsg *_findContactMsg;
    NSMutableArray *_feeds;
    NSMutableArray *_failedFeeds;
    NSString *_whichNameUsedForDisplay;
    SPBasicInfoRowsModel *_basicInfoRows;
    SPBasicInfoRowsModel *_accountDetailRows;
    NSMutableArray *_actionsArr;
    SCBigHeadView *_bigHeadView;
    DTRpcAsyncCaller *_addFriendRpc;
    DTRpcAsyncCaller *_profileRpc;
    DTRpcAsyncCaller *_feedsRpc;
    GetUserHomeFeedListPBResp *_feedsRawResult;
    NSException *_profileRpcException;
    NSException *_feedsRpcException;
    APActivityIndicatorView *_indicatorView;
    NSNumber *_alertTipShowStatus;
    CSPublishFeed *_feedPublisher;
    ASPhotoPickerController *_photoPicker;
    SPProfileSettingDataManager *_settingMamager;
    UIView *_navBarView;
    UIImageView *_navBarBg;
    UIView *_navBarBtmLine;
    UILabel *_navTitle;
    UIButton *_leftNavBarBtn;
    UIButton *_settingsBarBtn;
    UIButton *_sendMsgBarBtn;
    UIButton *_sendPrivateMsgBarBtn;
    BEEPopMenuView *_myPopMenuView;
    CPopMenuManager *_popMenuManager;
    NSDictionary *_iconFromLocal;
    UIImageView *_scalableBgView;
    SCBubbleView *_alertHintView;
    UIView *_alertFatherView;
    NSDictionary *_bizCardsDefine;
    long long _prevStatusBarStyle;
    NSNumber *_feedsGettingStatus_localCache;
    NSNumber *_feedsGettingStatus_rpc;
    NSDate *_feedsUpdateTime_localCache;
    NSNumber *_feedsCellVisibleStatus;
    SPProfileTransmit *_transmission;
    APShareServiceCardControl *_cardCtrl;
}

@property(nonatomic) _Bool flag_isMovingFromParentController; // @synthesize flag_isMovingFromParentController=_flag_isMovingFromParentController;
@property(nonatomic) _Bool forceHideAvatarTip; // @synthesize forceHideAvatarTip=_forceHideAvatarTip;
@property(retain, nonatomic) APShareServiceCardControl *cardCtrl; // @synthesize cardCtrl=_cardCtrl;
@property(nonatomic) _Bool viewHasAppear; // @synthesize viewHasAppear=_viewHasAppear;
@property(retain, nonatomic) SPProfileTransmit *transmission; // @synthesize transmission=_transmission;
@property(retain, nonatomic) NSNumber *feedsCellVisibleStatus; // @synthesize feedsCellVisibleStatus=_feedsCellVisibleStatus;
@property(nonatomic) _Bool isRPCFeedsLoadingOrRendering; // @synthesize isRPCFeedsLoadingOrRendering=_isRPCFeedsLoadingOrRendering;
@property(retain, nonatomic) NSDate *feedsUpdateTime_localCache; // @synthesize feedsUpdateTime_localCache=_feedsUpdateTime_localCache;
@property(retain, nonatomic) NSNumber *feedsGettingStatus_rpc; // @synthesize feedsGettingStatus_rpc=_feedsGettingStatus_rpc;
@property(retain, nonatomic) NSNumber *feedsGettingStatus_localCache; // @synthesize feedsGettingStatus_localCache=_feedsGettingStatus_localCache;
@property(nonatomic) long long prevStatusBarStyle; // @synthesize prevStatusBarStyle=_prevStatusBarStyle;
@property(retain, nonatomic) NSDictionary *bizCardsDefine; // @synthesize bizCardsDefine=_bizCardsDefine;
@property(retain, nonatomic) UIView *alertFatherView; // @synthesize alertFatherView=_alertFatherView;
@property(retain, nonatomic) SCBubbleView *alertHintView; // @synthesize alertHintView=_alertHintView;
@property(retain, nonatomic) UIImageView *scalableBgView; // @synthesize scalableBgView=_scalableBgView;
@property(nonatomic) _Bool isFeedsDisplayed; // @synthesize isFeedsDisplayed=_isFeedsDisplayed;
@property(nonatomic) _Bool isFirstTimeViewDidAppear; // @synthesize isFirstTimeViewDidAppear=_isFirstTimeViewDidAppear;
@property(nonatomic) _Bool isFirstTimeViewWillAppear; // @synthesize isFirstTimeViewWillAppear=_isFirstTimeViewWillAppear;
@property(retain, nonatomic) NSDictionary *iconFromLocal; // @synthesize iconFromLocal=_iconFromLocal;
@property(retain, nonatomic) CPopMenuManager *popMenuManager; // @synthesize popMenuManager=_popMenuManager;
@property(retain, nonatomic) BEEPopMenuView *myPopMenuView; // @synthesize myPopMenuView=_myPopMenuView;
@property(retain, nonatomic) UIButton *sendPrivateMsgBarBtn; // @synthesize sendPrivateMsgBarBtn=_sendPrivateMsgBarBtn;
@property(retain, nonatomic) UIButton *sendMsgBarBtn; // @synthesize sendMsgBarBtn=_sendMsgBarBtn;
@property(retain, nonatomic) UIButton *settingsBarBtn; // @synthesize settingsBarBtn=_settingsBarBtn;
@property(retain, nonatomic) UIButton *leftNavBarBtn; // @synthesize leftNavBarBtn=_leftNavBarBtn;
@property(retain, nonatomic) UILabel *navTitle; // @synthesize navTitle=_navTitle;
@property(retain, nonatomic) UIView *navBarBtmLine; // @synthesize navBarBtmLine=_navBarBtmLine;
@property(retain, nonatomic) UIImageView *navBarBg; // @synthesize navBarBg=_navBarBg;
@property(retain, nonatomic) UIView *navBarView; // @synthesize navBarView=_navBarView;
@property(nonatomic) _Bool isBackFromZhiMa; // @synthesize isBackFromZhiMa=_isBackFromZhiMa;
@property(retain, nonatomic) SPProfileSettingDataManager *settingMamager; // @synthesize settingMamager=_settingMamager;
@property(retain, nonatomic) ASPhotoPickerController *photoPicker; // @synthesize photoPicker=_photoPicker;
@property(retain, nonatomic) CSPublishFeed *feedPublisher; // @synthesize feedPublisher=_feedPublisher;
@property(nonatomic) _Bool needUpdateSendActivityUI; // @synthesize needUpdateSendActivityUI=_needUpdateSendActivityUI;
@property(nonatomic) _Bool needUpdateFeedsUI; // @synthesize needUpdateFeedsUI=_needUpdateFeedsUI;
@property(nonatomic) _Bool needUpdateVariableCards; // @synthesize needUpdateVariableCards=_needUpdateVariableCards;
@property(nonatomic) _Bool needUpdateMyActivityUI; // @synthesize needUpdateMyActivityUI=_needUpdateMyActivityUI;
@property(nonatomic) _Bool needUpdateSetRemarksUI; // @synthesize needUpdateSetRemarksUI=_needUpdateSetRemarksUI;
@property(nonatomic) _Bool needUpdateBasicInfoUI; // @synthesize needUpdateBasicInfoUI=_needUpdateBasicInfoUI;
@property(nonatomic) _Bool needUpdatePrimaryInfoUI; // @synthesize needUpdatePrimaryInfoUI=_needUpdatePrimaryInfoUI;
@property(nonatomic) _Bool isUserLoggedOff; // @synthesize isUserLoggedOff=_isUserLoggedOff;
@property(retain, nonatomic) NSNumber *alertTipShowStatus; // @synthesize alertTipShowStatus=_alertTipShowStatus;
@property(nonatomic) _Bool refreshWhileScrolledToTop; // @synthesize refreshWhileScrolledToTop=_refreshWhileScrolledToTop;
@property(nonatomic) _Bool refreshOnReleaseFinger; // @synthesize refreshOnReleaseFinger=_refreshOnReleaseFinger;
@property(retain, nonatomic) APActivityIndicatorView *indicatorView; // @synthesize indicatorView=_indicatorView;
@property(retain, nonatomic) NSException *feedsRpcException; // @synthesize feedsRpcException=_feedsRpcException;
@property(retain, nonatomic) NSException *profileRpcException; // @synthesize profileRpcException=_profileRpcException;
@property(nonatomic) _Bool feedsRpcReturned; // @synthesize feedsRpcReturned=_feedsRpcReturned;
@property(retain, nonatomic) GetUserHomeFeedListPBResp *feedsRawResult; // @synthesize feedsRawResult=_feedsRawResult;
@property(retain, nonatomic) DTRpcAsyncCaller *feedsRpc; // @synthesize feedsRpc=_feedsRpc;
@property(retain, nonatomic) DTRpcAsyncCaller *profileRpc; // @synthesize profileRpc=_profileRpc;
@property(retain, nonatomic) DTRpcAsyncCaller *addFriendRpc; // @synthesize addFriendRpc=_addFriendRpc;
@property(retain, nonatomic) SCBigHeadView *bigHeadView; // @synthesize bigHeadView=_bigHeadView;
@property(retain, nonatomic) NSMutableArray *actionsArr; // @synthesize actionsArr=_actionsArr;
@property(retain, nonatomic) SPBasicInfoRowsModel *accountDetailRows; // @synthesize accountDetailRows=_accountDetailRows;
@property(retain, nonatomic) SPBasicInfoRowsModel *basicInfoRows; // @synthesize basicInfoRows=_basicInfoRows;
@property(retain, nonatomic) NSString *whichNameUsedForDisplay; // @synthesize whichNameUsedForDisplay=_whichNameUsedForDisplay;
@property(nonatomic) _Bool hadAddOther; // @synthesize hadAddOther=_hadAddOther;
@property(nonatomic) _Bool hasMoreFeeds; // @synthesize hasMoreFeeds=_hasMoreFeeds;
@property(retain, nonatomic) NSMutableArray *failedFeeds; // @synthesize failedFeeds=_failedFeeds;
@property(retain, nonatomic) NSMutableArray *feeds; // @synthesize feeds=_feeds;
@property(retain, nonatomic) APNewFindContactMsg *findContactMsg; // @synthesize findContactMsg=_findContactMsg;
@property(retain, nonatomic) NSArray *findContactMsgArr; // @synthesize findContactMsgArr=_findContactMsgArr;
@property(retain, nonatomic) SPProfileInfo *profileInfo; // @synthesize profileInfo=_profileInfo;
@property(retain, nonatomic) APContactInfo *contactInfo; // @synthesize contactInfo=_contactInfo;
@property(retain, nonatomic) NSDictionary *containerContextData; // @synthesize containerContextData=_containerContextData;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) NSMutableDictionary *cardCachePool; // @synthesize cardCachePool=_cardCachePool;
@property(retain, nonatomic) NSMutableDictionary *visibleCards; // @synthesize visibleCards=_visibleCards;
@property(retain, nonatomic) NSString *sessionId; // @synthesize sessionId=_sessionId;
@property(retain, nonatomic) NSString *sourceId; // @synthesize sourceId=_sourceId;
@property(retain, nonatomic) NSDictionary *launchOptions; // @synthesize launchOptions=_launchOptions;
@property(retain, nonatomic) NSString *displayNameInGroup; // @synthesize displayNameInGroup=_displayNameInGroup;
@property(retain, nonatomic) APGroupInfo *groupInfo; // @synthesize groupInfo=_groupInfo;
@property(retain, nonatomic) NSDictionary *bizNickName; // @synthesize bizNickName=_bizNickName;
@property(retain, nonatomic) NSString *source; // @synthesize source=_source;
@property(retain, nonatomic) NSString *loginId; // @synthesize loginId=_loginId;
@property(retain, nonatomic) NSString *userId; // @synthesize userId=_userId;
- (void).cxx_destruct;
- (void)updateManager:(id)arg1 finishUpdateCards:(id)arg2 param:(id)arg3;
- (void)updateManager:(id)arg1 updatingCard:(id)arg2 param:(id)arg3;
- (_Bool)enableCardUpdateManager;
- (id)pageType;
- (void)accessibilityDidClickPopMenu:(id)arg1;
- (void)showShareCtrl;
- (void)hideShareCtrl;
- (void)queryProfileInfoWithIndicatorType:(int)arg1 swallowException:(_Bool)arg2;
- (_Bool)didPushToSuperHandler:(id)arg1;
- (void)didClickAttributeLabel:(id)arg1 OnLink:(id)arg2;
- (_Bool)handleNativeEvent:(id)arg1 target:(id)arg2;
- (void)addMonitorPointWith:(id)arg1 seed:(id)arg2 ucId:(id)arg3 extParams:(id)arg4;
- (void)SCProfileSettingControllerContactInfoDidUpdated:(id)arg1;
- (id)make361ErrorViewWith:(id)arg1;
- (id)makeLogOffErrorView;
- (id)makeRightBarItemCustomButtonWith:(id)arg1 highlightImg:(id)arg2 action:(SEL)arg3;
- (void)deleteFriendActionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)onCheckStrangerReply:(id)arg1;
- (void)onConfirmAddFriend:(id)arg1;
- (void)onCheckFriendRequest:(id)arg1;
- (void)onPrivateMsg:(id)arg1;
- (void)onFeedsNotify:(id)arg1;
- (void)onZhiMaWith:(id)arg1;
- (void)onDoDeleteFriend;
- (void)onDeleteFriend:(id)arg1;
- (void)onPrimaryStrangerSet:(id)arg1;
- (void)onPrimaryFriendSet:(id)arg1;
- (void)onPrimaryTransfer:(id)arg1;
- (void)onPrimarySendActivity:(id)arg1;
- (void)handleAddFriendNotification:(id)arg1;
- (void)handleAddFriendIsSuccess:(_Bool)arg1 statusCode:(int)arg2 errorMessage:(id)arg3 rawRpcResult:(id)arg4 extraInfo:(id)arg5;
- (void)onPrimaryAddFriend:(id)arg1;
- (void)onManageMySelf:(id)arg1;
- (void)onSetting:(id)arg1;
- (void)onActivityList:(id)arg1;
- (void)resetSendButton;
- (void)resetSendPrivateMsgButton;
- (void)resetSendMsgButton;
- (void)onSendPrivateMsg:(id)arg1;
- (void)onSendMsg:(id)arg1;
- (void)onSetNickName:(id)arg1;
- (void)onSetSignature:(id)arg1;
- (void)onPrimaryHeadTapped:(id)arg1;
- (void)hideAvatarRemind;
- (void)handleSendHeadImageTipMessageToStranger;
- (void)remindFriendSetAvatar;
- (void)onBgTapped:(id)arg1;
- (void)setupEventHandler;
- (void)onGroupInfoNotify:(id)arg1;
- (void)onContactNotify:(id)arg1;
- (void)onCircleListChanged;
- (void)onProfileNeedUdpate:(id)arg1;
- (void)onRealNamedNotify:(id)arg1;
- (void)onLoadMoreFeeds:(id)arg1;
- (void)loadMoreCard:(id)arg1 andExt:(id)arg2;
- (void)onPullToRefresh;
- (void)onFindContactMsgNotify:(id)arg1;
- (void)onIgnoreAddFriendRequest:(id)arg1;
- (void)onFeedPopMenu:(id)arg1 sender:(id)arg2;
- (void)onProgressViewDidEndAnimating;
- (void)back;
- (void)updateWithFeeds:(id)arg1;
- (void)justUpdateFeeds:(id)arg1;
- (void)deleteFeedFromDB:(id)arg1;
- (void)deleteUserCard:(id)arg1;
- (id)getFailedFeeds;
- (void)dealFail:(id)arg1;
- (void)dealRPCSuccess:(id)arg1 data:(id)arg2;
- (void)refreshSendingWithClientCardId:(id)arg1 status:(long long)arg2;
- (void)sendingStatusChanged:(id)arg1;
- (id)makePopUpViewAtPoint:(struct CGPoint)arg1 bizName:(id)arg2;
- (void)DidClickCellView:(id)arg1 ForRowAtIndexpath:(id)arg2 cellView:(id)arg3;
- (void)onBizCardMenuExpand:(id)arg1;
- (void)onSyncUpDeleteCardNotify:(id)arg1;
- (void)syncUpDelFeed:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)onLinkWith:(id)arg1;
- (void)onRejectCard:(id)arg1;
- (void)onDeleteCard:(id)arg1;
- (void)onReportCard:(id)arg1;
- (void)popMenuManager:(id)arg1 didSelectAtIndex:(unsigned long long)arg2 withPopMenuItem:(id)arg3;
- (void)showPopMenuInView:(id)arg1 atPoint:(struct CGPoint)arg2 withDatasource:(id)arg3;
- (id)getIconFromLocal:(id)arg1;
- (id)getMenuDatasource:(id)arg1;
- (double)scalableBgBottomY;
- (double)getBgVisibleHeight;
- (double)getTableViewEdgeInsetTop;
- (id)getMonitorUserType;
- (_Bool)showAsEnterprise;
- (id)getDisplayedNameInPrimaryView;
- (_Bool)isExceedFeedsCountLimit;
- (void)handleHideIndicatorType:(int)arg1 view:(id)arg2;
- (void)handleShowIndicatorType:(int)arg1 view:(id)arg2;
- (void)tryToCheckSourceValue;
- (void)onDismissAlert:(id)arg1;
- (void)updateAlertHintViewPosition;
- (id)makeAlertViewAtPoint:(struct CGPoint)arg1;
- (void)tryToShowPrivacySetUserPrompt;
- (_Bool)isGroupStranger;
- (_Bool)isSelfProfile;
- (id)keyForCard:(id)arg1;
- (_Bool)isPublicForDict:(id)arg1;
- (id)privacySwitchSettingForCard:(id)arg1;
- (id)bizCardWithBizKey:(id)arg1;
- (id)myActivityCard;
- (id)sendActivityCard;
- (id)setRemarksCard;
- (id)noFeedsCard;
- (id)basicInfoCard;
- (id)primaryInfoCard;
- (void)addCardToCardCachePool:(id)arg1;
- (id)getCachedCardMatchTag:(long long)arg1;
- (void)setNeedReloadAllCards;
- (void)removeCardFromContainer:(id)arg1;
- (void)addCardToContainer:(id)arg1;
- (void)relayoutCards;
- (id)makeCardFor:(id)arg1;
- (void)updateLoadMoreFooterView;
- (void)updateFooterOnNextRunloop;
- (void)updateFeedsUIWithAction:(int)arg1 deletedCard:(id)arg2 loadCallback:(CDUnknownBlockType)arg3;
- (void)updateNoFeedsCard;
- (void)updateCardWith:(id)arg1 bizData:(id)arg2;
- (void)updateVariableCards;
- (void)updateSendActivityCard;
- (void)updateSetRemarksCard;
- (void)updateMyActivityUICard;
- (void)updateBasicInfoCard;
- (void)updatePrimaryInfoCard;
- (void)updateUI;
- (void)setNeedUpdateContainer;
- (void)setNeedReloadContextData;
- (id)buildCardDataForNoFeeds;
- (id)buildCardDataWith:(id)arg1 bizData:(id)arg2;
- (id)buildCardDataForBasicInfo;
- (id)buildCardDataForPrimaryInfo;
- (void)justUpdateProfileUI;
- (void)reloadAll;
- (id)makeEntryWithTarget:(id)arg1 action:(SEL)arg2 event:(id)arg3;
- (void)triggerContainerEvent:(id)arg1;
- (void)removeEventEntry:(id)arg1;
- (void)addEventEntry:(id)arg1;
- (id)getCardWithTag:(long long)arg1;
- (void)removeTarget:(id)arg1 action:(SEL)arg2 forEvent:(id)arg3;
- (void)addTarget:(id)arg1 action:(SEL)arg2 forEvent:(id)arg3;
- (_Bool)isEventSupported:(id)arg1;
- (id)getSupportedEvents;
- (void)reloadCard:(id)arg1;
- (void)relayout;
- (id)getContext;
- (id)getViewController;
- (id)rpcGetOtherProfileAsync:(int)arg1 swallowException:(_Bool)arg2 completeCallback:(CDUnknownBlockType)arg3;
- (id)rpcGetSelfProfileAsync:(int)arg1 swallowException:(_Bool)arg2 completeCallback:(CDUnknownBlockType)arg3;
- (id)rpcGetProfileInfoAsync:(int)arg1;
- (void)handleRPCFeeds:(id)arg1 lastFeedId:(id)arg2 rawResult:(id)arg3;
- (id)rpcGetFeedsAsync:(int)arg1 lastFeedId:(id)arg2 swallowException:(_Bool)arg3 completeCallback:(CDUnknownBlockType)arg4;
- (void)rpcGetProfileAndFeedsAsyncWith:(int)arg1 swallowProfileException:(_Bool)arg2 swallowFeedsException:(_Bool)arg3 profileCompleteCallback:(CDUnknownBlockType)arg4 feedCompleteCallback:(CDUnknownBlockType)arg5;
- (void)justQueryProfileInfoWithIndicatorType:(int)arg1 swallowException:(_Bool)arg2;
- (void)justLoadProfileWithIndicatorType:(int)arg1 swallowProfileException:(_Bool)arg2 profileCompleteCallback:(CDUnknownBlockType)arg3;
- (void)prepareLocalCachedDataSync:(id *)arg1 outProfileInfo:(id *)arg2;
- (id)makeContactInfoFromAPNewFindContactMsg:(id)arg1;
- (void)loadCachedFeeds;
- (void)prepareLocalCachedDataSync;
- (void)reloadWith:(id)arg1;
- (void)onResumeWith:(id)arg1;
- (id)getFriendUserId;
- (void)stopAnimating;
- (void)updateNavBar:(_Bool)arg1;
- (void)scrollViewDidScrollToTop:(id)arg1;
- (_Bool)scrollViewShouldScrollToTop:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)viewWillDestroy;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)prepareFeedsList;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (_Bool)autohideNavigationBar;
- (id)buildNavRightButtonWithIcon:(id)arg1 title:(id)arg2 action:(SEL)arg3;
- (id)sendPrivateMsgBarButton;
- (id)sendMsgBarButton;
- (id)settingsBarButton;
- (id)getSPMID;
- (void)buildSendPrivateMsgBarItem;
- (void)buildNavBarView;
- (void)viewDidLoad;
- (void)addRealNameIdentifyNotificationObserver;
- (void)addGroupInfoNotificationObserver;
- (void)dealloc;
- (void)commonInit;
- (id)initWithContact:(id)arg1 nickInGroup:(id)arg2 groupInfo:(id)arg3;
- (id)initWithContact:(id)arg1;
- (id)initWithUserId:(id)arg1 loginId:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

