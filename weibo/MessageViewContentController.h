//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBTableViewController.h"

#import "MFMailComposeViewControllerDelegate-Protocol.h"
#import "MFMessageComposeViewControllerDelegate-Protocol.h"
#import "PRLMTableViewWrapperDelegate-Protocol.h"
#import "UINavigationControllerDelegate-Protocol.h"
#import "UIWebViewDelegate-Protocol.h"
#import "WBFeedPageTimeRecordProtocol-Protocol.h"
#import "WBNavigationCommonTitleViewDelegate-Protocol.h"
#import "WBStatusBusinessViewControllerDelegate-Protocol.h"
#import "WBTimeLineLongStatusRequestStateViewDelegate-Protocol.h"
#import "WBTimelineContentViewDelegate-Protocol.h"
#import "WBTimelineTrendContentViewDelegate-Protocol.h"

@class NSDate, NSDictionary, NSMutableArray, NSMutableDictionary, NSNumber, NSString, UIActivityIndicatorView, UIBarButtonItem, UIView, WBBulletinCommentListViewController, WBCommentListViewController, WBContact, WBContactEngine, WBContentAdHintBoard, WBContentPlaceHolderView, WBDetailStatusContentView, WBLikeUserListViewController, WBMessageViewContentLikeButton, WBNavigationCommonTitleView, WBPRLMTableViewWrapper, WBPendingCommentListViewController, WBRepostListViewController, WBStatus, WBStatusBusinessSegmentedControl, WBStatusHeaderNoPayQuestionTitleView, WBTimelinePageInfo, WBTimelineRecommandProductsView, WBTimelineTrendContainerView, WBTimelineTrendContentView;

@interface MessageViewContentController : WBTableViewController <WBTimelineTrendContentViewDelegate, MFMailComposeViewControllerDelegate, UIWebViewDelegate, MFMessageComposeViewControllerDelegate, UINavigationControllerDelegate, WBStatusBusinessViewControllerDelegate, PRLMTableViewWrapperDelegate, WBTimelineContentViewDelegate, WBTimeLineLongStatusRequestStateViewDelegate, WBNavigationCommonTitleViewDelegate, WBFeedPageTimeRecordProtocol>
{
    UIView *contentView;
    WBStatusBusinessSegmentedControl *segmentedControl;
    WBRepostListViewController *repostListViewController;
    WBCommentListViewController *commentListViewController;
    WBLikeUserListViewController *likeUserListViewController;
    WBBulletinCommentListViewController *bCommentListViewController;
    WBPendingCommentListViewController *pCommentListViewController;
    NSMutableArray *cachedTableViewOffsets;
    NSMutableArray *cachedNavigationBarOffsets;
    WBStatus *status;
    WBStatus *originalStatus;
    long long selectedTabIndex;
    _Bool fromFavoriteListView;
    _Bool refreshStatus;
    NSMutableDictionary *imagesLinks;
    NSMutableArray *connectionsDelegates;
    UIBarButtonItem *_loadingButton;
    UIActivityIndicatorView *_loadingIndic;
    _Bool _delItem;
    _Bool isIphone;
    UIView *headerBarView;
    UIView *footerToolbar;
    _Bool isHavNum;
    _Bool loadingCRNum;
    _Bool loadingStatusMid;
    WBContentAdHintBoard *bottomContentAdHintBoard;
    _Bool retweetCountDidChange;
    _Bool commentCountDidChange;
    _Bool pendingCommentCountDidChange;
    _Bool likeCountDidChange;
    WBTimelinePageInfo *pageInfo;
    _Bool isBlockShowStatusContent;
    NSString *topStatusID;
    _Bool isDispMeIfNeed;
    WBContact *selectedContact;
    WBPRLMTableViewWrapper *prlmWrapper;
    WBMessageViewContentLikeButton *likeButton;
    WBDetailStatusContentView *statusView;
    _Bool hasLoadedStatusExtend;
    _Bool isLoadingFavorite;
    WBTimelineTrendContentView *cardBubbleView;
    _Bool needDefaultView;
    WBContactEngine *contactEngine;
    _Bool allowComment;
    _Bool allowMediaComment;
    WBTimelineTrendContainerView *timelineTrendView;
    WBTimelineRecommandProductsView *recommandProductView;
    NSDate *startDate;
    _Bool needScrollToTab;
    _Bool needScrollToProducts;
    _Bool comeFromProductsMore;
    _Bool lastHasPendingCommentTag;
    NSString *anchorID;
    _Bool isLoadCommonComment;
    NSNumber *anchorCommentId;
    NSString *commentExt;
    _Bool needRefreshLargePicPage;
    _Bool disableLongtextCache;
    NSMutableDictionary *longtextExtParam;
    NSString *noPayQuestionTitle;
    WBStatusHeaderNoPayQuestionTitleView *noPayQuestionTitleView;
    _Bool userDragToRefresh;
    int _commentPrivilege;
    NSString *_strUrl;
    WBContentPlaceHolderView *_contentDefaultView;
    NSString *_retweetDesForWeixin;
    NSDictionary *_productsDic;
    WBNavigationCommonTitleView *_followTitleView;
    double _avatarViewOriginY;
    NSString *_packageKey;
    NSString *_hbshareType;
}

+ (id)classNameWillCreateWithOpenUrlLink:(id)arg1 inAppParas:(id)arg2;
@property(retain, nonatomic) NSString *hbshareType; // @synthesize hbshareType=_hbshareType;
@property(retain, nonatomic) NSString *packageKey; // @synthesize packageKey=_packageKey;
@property(nonatomic) double avatarViewOriginY; // @synthesize avatarViewOriginY=_avatarViewOriginY;
@property(retain, nonatomic) WBNavigationCommonTitleView *followTitleView; // @synthesize followTitleView=_followTitleView;
@property(retain, nonatomic) NSDictionary *productsDic; // @synthesize productsDic=_productsDic;
@property(retain, nonatomic) NSString *retweetDesForWeixin; // @synthesize retweetDesForWeixin=_retweetDesForWeixin;
@property(retain, nonatomic) WBContentPlaceHolderView *contentDefaultView; // @synthesize contentDefaultView=_contentDefaultView;
@property(nonatomic) int commentPrivilege; // @synthesize commentPrivilege=_commentPrivilege;
@property(retain, nonatomic) NSString *strUrl; // @synthesize strUrl=_strUrl;
@property(readonly, retain, nonatomic) WBStatus *status; // @synthesize status;
@property _Bool userDragToRefresh; // @synthesize userDragToRefresh;
@property(retain, nonatomic) WBContact *selectedContact; // @synthesize selectedContact;
@property(nonatomic) _Bool fromFavoriteListView; // @synthesize fromFavoriteListView;
- (void).cxx_destruct;
- (void)scrollScreenshotWithBeginOffset:(struct CGPoint)arg1 withTargetView:(id)arg2 WithCompletionHandler:(CDUnknownBlockType)arg3;
- (id)shareTextForSnapshot;
- (id)qrTextForSnapshot;
- (_Bool)needsTitleBarWhenPeeking;
- (void)viewDidPopFromPeeking;
- (void)configStatusViewWidth:(struct CGSize)arg1;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)contactRecentPickerViewController:(id)arg1 shareToPrivateMessageWithUserTarget:(id)arg2;
- (void)configUserActivity;
- (void)setupNoPayQuestionTitleViewByQuestionTitle:(id)arg1;
- (void)removeTimelineTrendContainerView;
- (void)setupTimelinTrendViewWithTrend:(id)arg1;
- (void)didClickedCommonButton:(id)arg1 inView:(id)arg2;
- (void)didSelectedProduct:(id)arg1 inView:(id)arg2;
- (void)didPressExpandButton:(id)arg1;
- (void)updateProductsView;
- (void)setupRecommandProductViewWith:(id)arg1;
- (void)mailComposeController:(id)arg1 didFinishWithResult:(long long)arg2 error:(id)arg3;
- (_Bool)didSelectPicture:(id)arg1 inTimelineImageContentView:(id)arg2;
- (void)handledCommonButtonClicked:(id)arg1;
- (void)commonButtonActionDidFinishedNotification:(id)arg1;
- (void)trendContentView:(id)arg1 didSelectedPageCard:(id)arg2 fullPageCard:(id)arg3;
- (void)removeBubbleView;
- (void)setupBubbleViewWithCard:(id)arg1;
- (_Bool)setupExtendView;
- (void)middleContentViewSubviewsIfNeed;
- (void)contentViewSizeDidChange:(id)arg1;
- (void)commentPermissonSettingNotification:(id)arg1;
- (void)handleTimelineTrendItemDidRemoveNotification:(id)arg1;
- (_Bool)timelineItemDidSentOut:(id)arg1 event:(int)arg2;
- (void)handleWBQueueJobFinishedNotification:(id)arg1;
- (_Bool)shouldDisableSentStateInStatusBarWithEvent:(int)arg1;
- (void)followContactPostRequestCompletedNotification:(id)arg1;
- (void)likeStatePostRequestCompletedNotification:(id)arg1;
- (void)likeStateDidChangeNotification:(id)arg1;
- (void)showLoadError:(id)arg1 error:(id)arg2;
- (void)configPrlmWrapper;
- (void)configHasMoreData:(id)arg1;
- (void)controller:(id)arg1 hasItemCountChangedTo:(unsigned long long)arg2;
- (id)viewForHeaderInController:(id)arg1;
- (double)heightForHeaderInController:(id)arg1;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2;
- (void)atPersonSearchViewController:(id)arg1 didSelectContact:(id)arg2;
- (void)setViewControllerState:(unsigned long long)arg1;
- (void)actionPrivateMail;
- (void)popFavoriteToast;
- (void)messageComposeViewController:(id)arg1 didFinishWithResult:(long long)arg2;
- (void)setSelectedTabIndex:(long long)arg1;
- (void)actionMessage;
- (id)getShareText;
- (void)actionCopylink;
- (void)actionCommentSortChange:(id)arg1;
- (void)actionMail;
- (void)actionCopy;
- (void)actionCommentPermission;
- (void)actionPopularizeWitpFP:(id)arg1;
- (void)segmentedControlSelectionDoubleTapped:(id)arg1;
- (void)segmentedControlSelectionValueChanged:(id)arg1;
- (void)shareToWeibo:(id)arg1;
- (id)getImgaeFromView:(id)arg1;
- (void)otherItemAction:(id)arg1;
- (id)likedStatisticsWithParameters:(id)arg1;
- (void)comfirmTopStatus;
- (void)setTopStatus:(id)arg1;
- (void)favItemAction:(_Bool)arg1;
- (void)replayItemAction:(id)arg1;
- (void)shareItemAction:(id)arg1;
- (void)commentItemAction:(id)arg1;
- (id)extraParamsForItemClick;
- (void)delItemAction:(id)arg1;
- (void)avatarPendantItemAction:(id)arg1;
- (void)cardBgItemAction:(id)arg1;
- (void)refresh:(id)arg1;
- (void)didPressLongStatusReloadButton:(id)arg1;
- (void)setStateOfLongStatusRequestStateView:(id)arg1 byLongStatus:(id)arg2;
- (id)recordItemOfTimeRecorder;
- (id)timeRecordIdentifier;
- (_Bool)didPressResponder:(id)arg1 ofType:(unsigned long long)arg2 andCommonID:(id)arg3 inView:(id)arg4 userInfo:(id)arg5;
- (void)didPressUserScreenNameLabel:(id)arg1 inView:(id)arg2;
- (id)extraButtonActionTypesInView:(id)arg1;
- (void)copyRetweetedStatusText;
- (void)copyStatusText;
- (void)showRecommendUserAlertWithInfo:(id)arg1;
- (unsigned long long)indexOfTabViewController:(id)arg1;
- (id)previousSelectedTabViewController;
- (id)currentSelectedTabViewController;
- (id)tabViewControllerAtIndex:(long long)arg1;
- (void)setupRightBarButtonItem;
- (void)initGoHomeButton;
- (void)likeItemAction:(id)arg1;
- (void)resetToolbar;
- (void)resetNavigationBarCommonTitleView;
- (void)didDeletePendingComment;
- (void)didDeleteRepost;
- (void)didDeleteComment;
- (void)configUserRelation:(long long)arg1;
- (void)getCrNum;
- (void)contentAdHintBoardscrollDragging:(_Bool)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)navigationItemDidChange:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (id)buildFakeFollowButtonForNavigationTitleViewRightButton;
- (void)titleViewClickLeftIcon:(id)arg1;
- (void)titleViewClickTitle:(id)arg1;
- (void)_showProfileIfNeeded;
- (id)titleViewDataSource;
- (id)followButtonExtraActionParams;
- (id)titleViewRightButton:(id)arg1;
- (id)titleViewLeftIcon:(id)arg1;
- (id)titleViewTitle:(id)arg1;
- (void)processViewTimeLogging;
- (void)dealWithDisappear;
- (void)dealWithAppear;
- (void)dealWithCardLog;
- (void)didTriggerLoadMoreInWrapper:(id)arg1;
- (void)didTriggerPullRefreshInWrapper:(id)arg1;
- (void)didReceiveMemoryWarning;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidUnload;
- (void)dismissPresent;
- (void)addDefaultLeftBarWhenPresented;
- (void)refreshHeaderView;
- (void)updatePageInfoWithPlayCountNumber:(unsigned long long)arg1;
- (void)refreshStatus;
- (_Bool)presentHelperView;
- (void)viewWillLayoutSubviews;
- (void)configSubviewsFrame;
- (void)configSubviewsFrame:(_Bool)arg1;
- (void)viewDidLoad;
- (void)setTopStatusID:(id)arg1;
- (void)setSegmentedControlItemHidden:(_Bool)arg1;
- (_Bool)retweetable;
- (void)setupSegmentedControl;
- (id)getCustomedTitleText;
- (id)initWithOpenUrlLink:(id)arg1 inAppParas:(struct NSMutableDictionary *)arg2;
- (id)generateWithOpenUrlLink:(id)arg1 inAppParas:(struct NSMutableDictionary *)arg2;
- (void)updateTheBlogToPrivacy:(id)arg1;
- (_Bool)canBecomeFirstResponder;
- (void)didBecomeActive;
- (void)enterBackGround;
- (id)currentStatus;
- (id)initWithStatus:(id)arg1 refreshStatus:(_Bool)arg2 selectedTabIndex:(long long)arg3 needScrollToTab:(_Bool)arg4 params:(id)arg5;
- (id)initWithStatus:(id)arg1 refreshStatus:(_Bool)arg2 selectedTabIndex:(long long)arg3 needScrollToTab:(_Bool)arg4;
- (id)initWithStatus:(id)arg1 refreshStatus:(_Bool)arg2 selectedTabIndex:(long long)arg3;
- (id)initWithStatus:(id)arg1 refreshStatus:(_Bool)arg2;
- (id)initWithStatus:(id)arg1;
- (void)currentAccountDidChangeNotification:(id)arg1;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

