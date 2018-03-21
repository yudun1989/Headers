//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "AWEPreviewable-Protocol.h"
#import "AWEReferenceTrackable-Protocol.h"
#import "AWESegmentControlProtocol-Protocol.h"
#import "AWEUserMessage-Protocol.h"
#import "AWEVideosCollectionViewAnimationDelegate-Protocol.h"
#import "BTDRouterViewControllerProtocol-Protocol.h"
#import "UISearchBarDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"
#import "UIViewControllerPreviewingDelegate-Protocol.h"

@class AWECompleteInfoTipView, AWEDiscoverBannerManager, AWEDiscoverBannerView, AWEDiscoverDataController, AWEDiscoverSearchBarView, AWERecommendPersonDataController, AWESearchBar, AWESearchHistoryViewController, AWESegmentControl, NSMutableArray, NSString, UIButton, UITableView, UIView;

@interface AWEDiscoverViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, UIViewControllerPreviewingDelegate, AWEVideosCollectionViewAnimationDelegate, AWEPreviewable, UISearchBarDelegate, AWESegmentControlProtocol, BTDRouterViewControllerProtocol, AWEReferenceTrackable, AWEUserMessage>
{
    _Bool _hasSearchHistory;
    _Bool _alreadyHandleUpScroll;
    _Bool _alreadyHandleAddButtonDismiss;
    _Bool _inHandleRefreshAnimation;
    UIView *_topMaskView;
    AWEDiscoverSearchBarView *_searchBarView;
    AWEDiscoverBannerView *_bannerView;
    UITableView *_tableView;
    AWEDiscoverBannerManager *_bannerManager;
    AWEDiscoverDataController *_dataController;
    AWERecommendPersonDataController *_recommendController;
    UIView *_placeHolderheaderView;
    UIButton *_searchButton;
    AWESearchBar *_searchBar;
    AWESearchHistoryViewController *_searchHistoryViewController;
    UIView *_headerView;
    UIView *_findMoreView;
    AWESegmentControl *_segmentedControl;
    NSMutableArray *_childControllers;
    double _lastOffsetY;
    long long _finishCount;
    AWECompleteInfoTipView *_completeInfoTipView;
}

+ (void)load;
@property(retain, nonatomic) AWECompleteInfoTipView *completeInfoTipView; // @synthesize completeInfoTipView=_completeInfoTipView;
@property(nonatomic) long long finishCount; // @synthesize finishCount=_finishCount;
@property(nonatomic) _Bool inHandleRefreshAnimation; // @synthesize inHandleRefreshAnimation=_inHandleRefreshAnimation;
@property(nonatomic) _Bool alreadyHandleAddButtonDismiss; // @synthesize alreadyHandleAddButtonDismiss=_alreadyHandleAddButtonDismiss;
@property(nonatomic) _Bool alreadyHandleUpScroll; // @synthesize alreadyHandleUpScroll=_alreadyHandleUpScroll;
@property(nonatomic) double lastOffsetY; // @synthesize lastOffsetY=_lastOffsetY;
@property(retain, nonatomic) NSMutableArray *childControllers; // @synthesize childControllers=_childControllers;
@property(retain, nonatomic) AWESegmentControl *segmentedControl; // @synthesize segmentedControl=_segmentedControl;
@property(retain, nonatomic) UIView *findMoreView; // @synthesize findMoreView=_findMoreView;
@property(retain, nonatomic) UIView *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) AWESearchHistoryViewController *searchHistoryViewController; // @synthesize searchHistoryViewController=_searchHistoryViewController;
@property(nonatomic) _Bool hasSearchHistory; // @synthesize hasSearchHistory=_hasSearchHistory;
@property(retain, nonatomic) AWESearchBar *searchBar; // @synthesize searchBar=_searchBar;
@property(retain, nonatomic) UIButton *searchButton; // @synthesize searchButton=_searchButton;
@property(retain, nonatomic) UIView *placeHolderheaderView; // @synthesize placeHolderheaderView=_placeHolderheaderView;
@property(retain, nonatomic) AWERecommendPersonDataController *recommendController; // @synthesize recommendController=_recommendController;
@property(retain, nonatomic) AWEDiscoverDataController *dataController; // @synthesize dataController=_dataController;
@property(retain, nonatomic) AWEDiscoverBannerManager *bannerManager; // @synthesize bannerManager=_bannerManager;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) AWEDiscoverBannerView *bannerView; // @synthesize bannerView=_bannerView;
@property(retain, nonatomic) AWEDiscoverSearchBarView *searchBarView; // @synthesize searchBarView=_searchBarView;
@property(retain, nonatomic) UIView *topMaskView; // @synthesize topMaskView=_topMaskView;
- (void).cxx_destruct;
- (_Bool)showRecommend;
- (id)referString;
- (_Bool)searchBarShouldBeginEditing:(id)arg1;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (void)searchBarSearchButtonClicked:(id)arg1;
- (void)segmentControlTapped:(id)arg1 index:(long long)arg2;
- (void)excuteSearchWithKeyWord:(id)arg1 animated:(_Bool)arg2;
- (void)clearButtonTapped;
- (void)cancelButtonTapped;
- (struct CGRect)previewingSourceRectForView:(id)arg1 atPoint:(struct CGPoint)arg2;
- (id)previewingViewControllerForView:(id)arg1 atPoint:(struct CGPoint)arg2;
- (id)transitionViewForOffset:(long long)arg1;
- (double)bannerViewHeight;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)handleCompleteInfoTipView;
- (void)configureSearchView;
- (void)_setupUI;
- (void)updateHeaderView:(_Bool)arg1 shouldReloadData:(_Bool)arg2;
- (void)viewWillLayoutSubviews;
- (void)removeTipView;
- (void)enterProfileEditPage;
- (void)enterBindPhonePage;
- (void)addButtonClicked:(id)arg1;
- (void)handleDeleteAllRecommendPerson:(id)arg1;
- (void)didFinishLogin;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)_reloadTableView;
- (void)_loadMoreData;
- (void)_fetchListDataWithCompletion:(CDUnknownBlockType)arg1;
- (void)_fetchListData;
- (void)_fetchRecommendData:(CDUnknownBlockType)arg1;
- (void)_fetchBannerData;
- (void)refreshRecommendData;
- (_Bool)prefersStatusBarHidden;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithRouterParamDict:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

