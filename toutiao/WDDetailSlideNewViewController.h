//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SSViewControllerBase.h"

#import "TTCommentWriteManagerDelegate-Protocol.h"
#import "TTDetailViewController-Protocol.h"
#import "TTShareManagerDelegate-Protocol.h"
#import "TTUIViewControllerTrackProtocol-Protocol.h"
#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"
#import "UICollectionViewDelegateFlowLayout-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"
#import "UIViewControllerErrorHandler-Protocol.h"
#import "WDBottomToolViewDelegate-Protocol.h"
#import "WDDetailAnswerNewCellDelegate-Protocol.h"
#import "WDDetailModelDataSource-Protocol.h"
#import "WDDetailSlideHeaderViewDelegate-Protocol.h"
#import "WDDetailSlideHintViewDelegate-Protocol.h"
#import "WDDetailSlideNavigationViewDelegate-Protocol.h"

@class DetailActionRequestManager, NSArray, NSMutableArray, NSString, SSThemedView, TTBubbleView, TTCommentWriteView, TTIndicatorView, TTShareManager, TTViewWrapper, UIView, WDBottomToolView, WDCollectionView, WDDetailAnswerNewCell, WDDetailSlideHeaderView, WDDetailSlideHintView, WDDetailSlideNavigationView, WDDetailSlideViewModel, WDDetailSlideWhiteHeaderView, WDNewsHelpView;
@protocol TTDetailViewControllerDataSource, TTDetailViewControllerDelegate, WDDetailSlideHeaderViewProtocol;

@interface WDDetailSlideNewViewController : SSViewControllerBase <UIScrollViewDelegate, UICollectionViewDataSource, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout, TTDetailViewController, WDDetailSlideNavigationViewDelegate, TTShareManagerDelegate, WDDetailSlideHeaderViewDelegate, WDBottomToolViewDelegate, TTCommentWriteManagerDelegate, WDDetailAnswerNewCellDelegate, TTUIViewControllerTrackProtocol, UIViewControllerErrorHandler, WDDetailModelDataSource, WDDetailSlideHintViewDelegate>
{
    _Bool _backButtonTouched;
    _Bool _closeButtonTouched;
    _Bool _hiddenByDisplayImage;
    _Bool _isWriteCommentViewWillShow;
    _Bool _isHorScrolling;
    _Bool _isNextBtnMoving;
    _Bool _hasSetValue;
    _Bool _firstAnswerSuccess;
    _Bool _ListContentSuccess;
    _Bool _isListContentFetching;
    TTViewWrapper *_wrapperView;
    WDDetailSlideNavigationView *_customNavigation;
    SSThemedView *_fullBgView;
    SSThemedView *_topBgView;
    WDCollectionView *_collectionView;
    WDDetailAnswerNewCell *_currentAnswerCell;
    WDDetailSlideHeaderView<WDDetailSlideHeaderViewProtocol> *_blueHeaderView;
    WDDetailSlideWhiteHeaderView<WDDetailSlideHeaderViewProtocol> *_whiteHeaderView;
    WDBottomToolView *_toolbarView;
    TTCommentWriteView *_commentWriteView;
    TTBubbleView *_bubbleView;
    WDNewsHelpView *_sliderHelpView;
    TTIndicatorView *_enterFoldIndicator;
    WDDetailSlideHintView *_slideHintView;
    WDDetailSlideViewModel *_slideViewModel;
    DetailActionRequestManager *_actionManager;
    TTShareManager *_shareManager;
    NSMutableArray *_visibleIndexArray;
    long long _startIndex;
    long long _lastIndex;
    double _lastScrollWidth;
    double _lastStatusBarHeight;
}

@property(nonatomic) double lastStatusBarHeight; // @synthesize lastStatusBarHeight=_lastStatusBarHeight;
@property(nonatomic) _Bool isListContentFetching; // @synthesize isListContentFetching=_isListContentFetching;
@property(nonatomic) _Bool ListContentSuccess; // @synthesize ListContentSuccess=_ListContentSuccess;
@property(nonatomic) _Bool firstAnswerSuccess; // @synthesize firstAnswerSuccess=_firstAnswerSuccess;
@property(nonatomic) double lastScrollWidth; // @synthesize lastScrollWidth=_lastScrollWidth;
@property(nonatomic) long long lastIndex; // @synthesize lastIndex=_lastIndex;
@property(nonatomic) long long startIndex; // @synthesize startIndex=_startIndex;
@property(nonatomic) _Bool hasSetValue; // @synthesize hasSetValue=_hasSetValue;
@property(nonatomic) _Bool isNextBtnMoving; // @synthesize isNextBtnMoving=_isNextBtnMoving;
@property(nonatomic) _Bool isHorScrolling; // @synthesize isHorScrolling=_isHorScrolling;
@property(retain, nonatomic) NSMutableArray *visibleIndexArray; // @synthesize visibleIndexArray=_visibleIndexArray;
@property(retain, nonatomic) TTShareManager *shareManager; // @synthesize shareManager=_shareManager;
@property(retain, nonatomic) DetailActionRequestManager *actionManager; // @synthesize actionManager=_actionManager;
@property(retain, nonatomic) WDDetailSlideViewModel *slideViewModel; // @synthesize slideViewModel=_slideViewModel;
@property(retain, nonatomic) WDDetailSlideHintView *slideHintView; // @synthesize slideHintView=_slideHintView;
@property(retain, nonatomic) TTIndicatorView *enterFoldIndicator; // @synthesize enterFoldIndicator=_enterFoldIndicator;
@property(retain, nonatomic) WDNewsHelpView *sliderHelpView; // @synthesize sliderHelpView=_sliderHelpView;
@property(retain, nonatomic) TTBubbleView *bubbleView; // @synthesize bubbleView=_bubbleView;
@property(retain, nonatomic) TTCommentWriteView *commentWriteView; // @synthesize commentWriteView=_commentWriteView;
@property(retain, nonatomic) WDBottomToolView *toolbarView; // @synthesize toolbarView=_toolbarView;
@property(retain, nonatomic) WDDetailSlideWhiteHeaderView<WDDetailSlideHeaderViewProtocol> *whiteHeaderView; // @synthesize whiteHeaderView=_whiteHeaderView;
@property(retain, nonatomic) WDDetailSlideHeaderView<WDDetailSlideHeaderViewProtocol> *blueHeaderView; // @synthesize blueHeaderView=_blueHeaderView;
@property(retain, nonatomic) WDDetailAnswerNewCell *currentAnswerCell; // @synthesize currentAnswerCell=_currentAnswerCell;
@property(retain, nonatomic) WDCollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) SSThemedView *topBgView; // @synthesize topBgView=_topBgView;
@property(retain, nonatomic) SSThemedView *fullBgView; // @synthesize fullBgView=_fullBgView;
@property(retain, nonatomic) WDDetailSlideNavigationView *customNavigation; // @synthesize customNavigation=_customNavigation;
@property(retain, nonatomic) TTViewWrapper *wrapperView; // @synthesize wrapperView=_wrapperView;
- (void).cxx_destruct;
- (_Bool)needReturn;
- (id)headerView;
- (void)p_sendDetailLogicTrackWithLabel:(id)arg1;
- (void)p_sendDetailDeallocTrack;
- (struct CGRect)p_frameForToolBarViewIsStatusHeightChanged:(_Bool)arg1;
- (struct CGRect)p_frameForFullScrollView;
- (struct CGRect)p_frameForHeaderView;
- (struct CGRect)p_frameForTopBgView;
- (double)DetailGetToolbarHeight;
- (struct CGRect)p_frameForFullBgView;
- (struct CGRect)p_frameForNavigationViewIsStatusHeightChanged:(_Bool)arg1;
- (void)p_buildToolbarView;
- (void)p_buildCollectionView;
- (void)p_buildHeaderView;
- (void)p_buildTopBgView;
- (void)p_buildContentViews;
- (void)p_buildCustomNavigationView;
- (void)p_showEnterFoldAnswerAlertIfNeededWithIndex:(long long)arg1;
- (void)p_showEnterFoldAnswerAlert;
- (void)p_removeIndicatorPolicyView;
- (void)p_showIndicatorPolicyView;
- (void)p_showSlideHelperView;
- (void)p_changeTitleShowState:(_Bool)arg1;
- (void)p_refreshBottomViewDataWithTargetModel:(id)arg1;
- (void)p_loadListContentFirstTime:(_Bool)arg1;
- (void)p_loadFirstAnswerContent;
- (void)p_loadListContentSuccess;
- (void)p_setDetailViewBars;
- (void)refreshSubViewFrameIfNeeded;
- (void)appDidBecomeActiveNotification;
- (void)statusbarFrameDidChangeNotification;
- (void)boardWillHideNotification:(id)arg1;
- (void)themeChanged:(id)arg1;
- (double)stayPageTimeInterValForDetailView:(id)arg1;
- (void)p_showWriteCommentViewWithCondtions:(id)arg1 switchToEmojiInput:(_Bool)arg2;
- (void)p_willOpenWriteCommentViewWithReservedText:(id)arg1 switchToEmojiInput:(_Bool)arg2;
- (void)commentView:(id)arg1 sucessWithCommentWriteManager:(id)arg2 responsedData:(id)arg3;
- (void)commentView:(id)arg1 cancelledWithCommentWriteManager:(id)arg2;
- (void)wdDetailSlideHintViewWillDismiss;
- (void)wdDetailSlideHintViewSlideTrigger;
- (void)resetNextBtnMovingValue;
- (void)p_tryNextAnswer;
- (void)bottomView:(id)arg1 emojiButtonClicked:(id)arg2;
- (void)bottomView:(id)arg1 nextButtonClicked:(id)arg2;
- (void)bottomView:(id)arg1 diggButtonClicked:(id)arg2;
- (void)bottomView:(id)arg1 commentButtonClicked:(id)arg2;
- (void)bottomView:(id)arg1 writeButtonClicked:(id)arg2;
- (void)wdDetailSlideHeaderViewShowAllAnswers;
- (void)wdDetailSlideNaviViewTitleButtonTapped;
- (void)wdDetailSlideNaviViewMoreButtonTapped;
- (void)wdDetailSlideNaviViewBackButtonTapped;
- (void)shareManager:(id)arg1 completedWith:(id)arg2 sharePanel:(id)arg3 error:(id)arg4 desc:(id)arg5;
- (void)shareManager:(id)arg1 clickedWith:(id)arg2 sharePanel:(id)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForFooterInSection:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)addOneIndexPathToVisibleIndexArrayWithValue:(id)arg1;
- (_Bool)judgeOneIndexPathIsExistInVisibleIndexArrayWithValue:(id)arg1;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)p_stopScrollFinallyWithScrollView:(id)arg1 isForce:(_Bool)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)wd_commentViewController:(id)arg1 didSelectWithInfo:(id)arg2;
- (void)wd_detailAnswerNewCellWriteCommentWithCondition:(id)arg1;
- (void)wd_detailAnswerNewCellWriteCommentWithReservedText:(id)arg1;
- (void)wd_detailAnswerNewCellDidScrollWithContentOffsetY:(double)arg1 index:(long long)arg2;
- (void)wd_detailAnswerNewCellDidScroll:(id)arg1 index:(long long)arg2;
- (void)wd_detailAnswerNewCellAfterFetchContentSuccessFirstTime:(_Bool)arg1;
- (void)wd_detailAnswerNewCellShowIndicatorPolicyView;
- (void)wd_detailAnswerNewCellShowSlideHelperView;
- (void)wd_detailAnswerNewCellAfterDeleteAnswer;
- (void)refreshData;
- (_Bool)tt_hasValidateData;
- (void)trackStartedByAppWillEnterForground;
- (void)trackEndedByAppWillEnterBackground;
- (void)viewDidLayoutSubviews;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithRouteParamObj:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(nonatomic) __weak id <TTDetailViewControllerDataSource> dataSource;
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) __weak id <TTDetailViewControllerDelegate> delegate;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) UIView *leftBarButton;
@property(retain, nonatomic) NSArray *rightBarButtons;
@property(nonatomic) _Bool shouldShowNavigationBar;
@property(readonly) Class superclass;

@end

