//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SSViewControllerBase.h"

#import "FRCommentRepostFooterCommentDelegate-Protocol.h"
#import "FRThreadFooterDiggDelegate-Protocol.h"
#import "FRThreadFooterRepostDelegate-Protocol.h"
#import "TTCommentDetailCellDelegate-Protocol.h"
#import "TTThreadFooterContainerViewControllerDelegate-Protocol.h"
#import "UIActionSheetDelegate-Protocol.h"
#import "UIViewControllerErrorHandler-Protocol.h"

@class FRCommentRepostFooterCommentManager, NSDictionary, NSString, SSThemedLabel, TTAlphaThemedButton, TTCommentRepostViewModel, TTFollowThemeButton, TTShareManager, TTThreadFooterContainerViewController, TTUGCBaseCellView, TTUGCDetailNavigationTitleView, TTUGCDetailToolbarView, UGCU13CellLayoutModel;

@interface TTCommentRepostDetailViewController : SSViewControllerBase <TTCommentDetailCellDelegate, UIActionSheetDelegate, UIViewControllerErrorHandler, TTThreadFooterContainerViewControllerDelegate, FRThreadFooterRepostDelegate, FRCommentRepostFooterCommentDelegate, FRThreadFooterDiggDelegate>
{
    _Bool _enterFromClickComment;
    _Bool _registeredKVO;
    _Bool _hasBegunPlaying;
    NSString *_commentRepostID;
    NSString *_categoryID;
    NSString *_messageID;
    NSString *_enter_from;
    NSDictionary *_log_pb;
    NSString *_group_id;
    NSString *_ruleID;
    NSString *_refer;
    NSString *_tab_index;
    long long _actionType;
    TTThreadFooterContainerViewController *_footerContainerController;
    TTCommentRepostViewModel *_viewModel;
    TTUGCBaseCellView *_detailHeaderView;
    UGCU13CellLayoutModel *_detailHeaderViewLayoutModel;
    TTUGCDetailToolbarView *_toolbarView;
    SSThemedLabel *_titleLabel;
    TTAlphaThemedButton *_rightBarButton;
    TTFollowThemeButton *_naviFollowButton;
    TTUGCDetailNavigationTitleView *_threadNavigationBarView;
    double _maxReadPct;
    TTShareManager *_shareManager;
    FRCommentRepostFooterCommentManager *_replyManager;
    double _firstLoadTime;
}

+ (void)load;
@property(nonatomic) double firstLoadTime; // @synthesize firstLoadTime=_firstLoadTime;
@property(nonatomic) _Bool hasBegunPlaying; // @synthesize hasBegunPlaying=_hasBegunPlaying;
@property(retain, nonatomic) FRCommentRepostFooterCommentManager *replyManager; // @synthesize replyManager=_replyManager;
@property(retain, nonatomic) TTShareManager *shareManager; // @synthesize shareManager=_shareManager;
@property(nonatomic) _Bool registeredKVO; // @synthesize registeredKVO=_registeredKVO;
@property(nonatomic) double maxReadPct; // @synthesize maxReadPct=_maxReadPct;
@property(retain, nonatomic) TTUGCDetailNavigationTitleView *threadNavigationBarView; // @synthesize threadNavigationBarView=_threadNavigationBarView;
@property(retain, nonatomic) TTFollowThemeButton *naviFollowButton; // @synthesize naviFollowButton=_naviFollowButton;
@property(retain, nonatomic) TTAlphaThemedButton *rightBarButton; // @synthesize rightBarButton=_rightBarButton;
@property(retain, nonatomic) SSThemedLabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) TTUGCDetailToolbarView *toolbarView; // @synthesize toolbarView=_toolbarView;
@property(retain, nonatomic) UGCU13CellLayoutModel *detailHeaderViewLayoutModel; // @synthesize detailHeaderViewLayoutModel=_detailHeaderViewLayoutModel;
@property(retain, nonatomic) TTUGCBaseCellView *detailHeaderView; // @synthesize detailHeaderView=_detailHeaderView;
@property(retain, nonatomic) TTCommentRepostViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) TTThreadFooterContainerViewController *footerContainerController; // @synthesize footerContainerController=_footerContainerController;
@property(nonatomic) _Bool enterFromClickComment; // @synthesize enterFromClickComment=_enterFromClickComment;
@property(nonatomic) long long actionType; // @synthesize actionType=_actionType;
@property(copy, nonatomic) NSString *tab_index; // @synthesize tab_index=_tab_index;
@property(copy, nonatomic) NSString *refer; // @synthesize refer=_refer;
@property(copy, nonatomic) NSString *ruleID; // @synthesize ruleID=_ruleID;
@property(copy, nonatomic) NSString *group_id; // @synthesize group_id=_group_id;
@property(copy, nonatomic) NSDictionary *log_pb; // @synthesize log_pb=_log_pb;
@property(copy, nonatomic) NSString *enter_from; // @synthesize enter_from=_enter_from;
@property(copy, nonatomic) NSString *messageID; // @synthesize messageID=_messageID;
@property(copy, nonatomic) NSString *categoryID; // @synthesize categoryID=_categoryID;
@property(copy, nonatomic) NSString *commentRepostID; // @synthesize commentRepostID=_commentRepostID;
- (void).cxx_destruct;
- (id)commentTrackDictionary;
- (void)p_sendCommentWriteTrack;
- (id)commonV3TrackExtra;
- (void)trackWithEventV3:(id)arg1 extraDictionary:(id)arg2 isDoubleTrack:(_Bool)arg3;
- (void)trackWithEvent:(id)arg1 label:(id)arg2 value:(id)arg3 ext_value:(id)arg4 extraDictionary:(id)arg5;
- (id)stayPageDictionary:(double)arg1;
- (void)sendCurrentPageStayTime:(double)arg1;
- (void)trySendCurrentPageStayTime;
- (void)trackStartedByAppWillEnterForground;
- (void)trackEndedByAppWillEnterBackground;
- (void)fr_diggManager:(id)arg1 emptyViewTappedType:(long long)arg2;
- (id)fr_diggManagerTrackDic:(id)arg1;
- (void)fr_diggManager:(id)arg1 scrollWithOffset:(struct CGPoint)arg2;
- (void)fr_diggManagerScrollToDiggRegion:(id)arg1;
- (long long)fr_diggManagerOriginDiggCount:(id)arg1;
- (void)fr_diggManager:(id)arg1 avatarTappedWithDiggUsertModel:(id)arg2;
- (void)fr_repostManager:(id)arg1 scrollWithOffset:(struct CGPoint)arg2;
- (void)fr_repostManagerScrollToRepostRect:(id)arg1;
- (void)fr_repostManager:(id)arg1 emptyViewTappedType:(long long)arg2;
- (void)fr_repostManager:(id)arg1 contentTappedWithRepostModel:(id)arg2;
- (void)fr_repostManager:(id)arg1 avatarTappedWithRepostModel:(id)arg2;
- (id)commentRepostFooterCommentManagerTrackDictionary:(id)arg1;
- (void)commentRepostFooterCommentManager:(id)arg1 replyButtonClickedWithModel:(id)arg2;
- (void)commentRepostFooterCommentManager:(id)arg1 scrollWithOffset:(struct CGPoint)arg2;
- (id)FR_containerHeaderView;
- (void)emptyViewBtnAction;
- (void)refreshData;
- (_Bool)tt_hasValidateData;
- (void)followActionFinishActionType:(int)arg1 error:(id)arg2 result:(id)arg3;
- (void)p_diggButtonPressed:(unsigned long long)arg1;
- (void)p_shareButtonPressed:(id)arg1;
- (void)p_commentButtonClicked:(id)arg1;
- (void)p_enterProfileWithUserID:(id)arg1 withFromePage:(id)arg2;
- (void)p_replyCommentWithModel:(id)arg1 switchToEmojiInput:(_Bool)arg2;
- (void)p_loadMore;
- (void)refreshFansNumberFollowed:(_Bool)arg1;
- (void)moreButtonClicked;
- (void)afterCommentOrForwardScroll;
- (void)forceStopVideo;
- (void)checkAndStopVideo;
- (void)firstEnterTryPlayVideo;
- (_Bool)videoDataOK;
- (_Bool)isVideoPlayerPlaceOK;
- (_Bool)isCommentRepostVideoDetail;
- (void)p_handleCommentViewDidScroll:(struct CGPoint)arg1;
- (struct CGRect)p_frameForToolBar;
- (double)p_maxWidthForDetailView;
- (id)generateBarButtonWithImageName:(id)arg1;
- (void)buildToolBarView;
- (void)buildFooterContainerView;
- (void)refreshDetailHeaderView;
- (void)buildNaviFollowButon;
- (void)buildNavigationView;
- (void)deleteCommentRepostNotification:(id)arg1;
- (void)fontChanged:(id)arg1;
- (void)addKVO;
- (void)themeChanged:(id)arg1;
- (id)userModel;
- (id)commentRepostModel;
- (id)commentRepostDetailModel;
- (void)viewDidLayoutSubviews;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithRouteParamObj:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

