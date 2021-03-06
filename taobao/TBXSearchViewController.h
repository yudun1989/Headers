//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBViewController.h"

#import "DWPlayerLifecycleProtocol-Protocol.h"
#import "TBSearchInputDelegate-Protocol.h"
#import "TBSearchSideDoorViewControllerDelegate-Protocol.h"
#import "TBXSearchBaseViewControllerDelegate-Protocol.h"
#import "TBXSearchCommonSearchDoorViewControllerDelegate-Protocol.h"
#import "TBXSearchHeaderViewDelegate-Protocol.h"
#import "TBXSearchTabContentComponentDelegate-Protocol.h"
#import "TBXSearchTabControlDelegate-Protocol.h"
#import "TBXSearchViewModelDelegate-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"
#import "UITextFieldDelegate-Protocol.h"

@class DWInstance, NSDate, NSDictionary, NSMutableDictionary, NSString, TBBarButtonItem, TBModelStatusHandler, TBScrollViewCompensator, TBSearchInput, TBXSearchBaseViewController, TBXSearchFullOnesearchViewComponent, TBXSearchHeaderView, TBXSearchLoadingView, TBXSearchTabContentComponent, TBXSearchViewModel, UIView;

@interface TBXSearchViewController : TBViewController <TBSearchInputDelegate, UITextFieldDelegate, TBXSearchViewModelDelegate, TBXSearchBaseViewControllerDelegate, TBXSearchTabControlDelegate, TBXSearchHeaderViewDelegate, UIScrollViewDelegate, DWPlayerLifecycleProtocol, TBSearchSideDoorViewControllerDelegate, UIGestureRecognizerDelegate, TBXSearchCommonSearchDoorViewControllerDelegate, TBXSearchTabContentComponentDelegate>
{
    _Bool _appMonitorStatus;
    _Bool _navibarHasDone;
    _Bool _webviewScrollViewAnimate;
    _Bool _isShownDouble11View;
    _Bool _searchBarAnimationEnabled;
    _Bool _dontCloseKeyborad;
    TBXSearchViewModel *_viewModel;
    TBSearchInput *_searchBar;
    TBBarButtonItem *_sBar;
    NSMutableDictionary *_tabVCDic;
    TBXSearchHeaderView *_headerView;
    TBXSearchBaseViewController *_currentVC;
    TBXSearchLoadingView *_loadingView;
    TBXSearchFullOnesearchViewComponent *_fullOnesearchViewComponent;
    TBScrollViewCompensator *_scrollViewCompensator;
    NSDate *_beginTime;
    double _navibarOrigTop;
    double _scrollViewAnimate;
    DWInstance *_dwInstance;
    NSDictionary *_currentVideoInfo;
    TBModelStatusHandler *_double11FailStatusHandler;
    NSDictionary *_urlQuery;
    UIView *_commonSearchSrpView;
    TBXSearchTabContentComponent *_tabContentComponent;
}

@property(retain, nonatomic) TBXSearchTabContentComponent *tabContentComponent; // @synthesize tabContentComponent=_tabContentComponent;
@property(nonatomic) _Bool dontCloseKeyborad; // @synthesize dontCloseKeyborad=_dontCloseKeyborad;
@property(retain, nonatomic) UIView *commonSearchSrpView; // @synthesize commonSearchSrpView=_commonSearchSrpView;
@property(retain, nonatomic) NSDictionary *urlQuery; // @synthesize urlQuery=_urlQuery;
@property(nonatomic) _Bool searchBarAnimationEnabled; // @synthesize searchBarAnimationEnabled=_searchBarAnimationEnabled;
@property(retain, nonatomic) TBModelStatusHandler *double11FailStatusHandler; // @synthesize double11FailStatusHandler=_double11FailStatusHandler;
@property(nonatomic) _Bool isShownDouble11View; // @synthesize isShownDouble11View=_isShownDouble11View;
@property(retain, nonatomic) NSDictionary *currentVideoInfo; // @synthesize currentVideoInfo=_currentVideoInfo;
@property(retain, nonatomic) DWInstance *dwInstance; // @synthesize dwInstance=_dwInstance;
@property(nonatomic) _Bool webviewScrollViewAnimate; // @synthesize webviewScrollViewAnimate=_webviewScrollViewAnimate;
@property(nonatomic) double scrollViewAnimate; // @synthesize scrollViewAnimate=_scrollViewAnimate;
@property(nonatomic) _Bool navibarHasDone; // @synthesize navibarHasDone=_navibarHasDone;
@property(nonatomic) double navibarOrigTop; // @synthesize navibarOrigTop=_navibarOrigTop;
@property(nonatomic) _Bool appMonitorStatus; // @synthesize appMonitorStatus=_appMonitorStatus;
@property(retain, nonatomic) NSDate *beginTime; // @synthesize beginTime=_beginTime;
@property(retain, nonatomic) TBScrollViewCompensator *scrollViewCompensator; // @synthesize scrollViewCompensator=_scrollViewCompensator;
@property(retain, nonatomic) TBXSearchFullOnesearchViewComponent *fullOnesearchViewComponent; // @synthesize fullOnesearchViewComponent=_fullOnesearchViewComponent;
@property(retain, nonatomic) TBXSearchLoadingView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) TBXSearchBaseViewController *currentVC; // @synthesize currentVC=_currentVC;
@property(retain, nonatomic) TBXSearchHeaderView *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) NSMutableDictionary *tabVCDic; // @synthesize tabVCDic=_tabVCDic;
@property(retain, nonatomic) TBBarButtonItem *sBar; // @synthesize sBar=_sBar;
@property(retain, nonatomic) TBSearchInput *searchBar; // @synthesize searchBar=_searchBar;
@property(retain, nonatomic) TBXSearchViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void).cxx_destruct;
- (void)showNavibarAndHeaderView;
- (void)tabContentDidScroll:(id)arg1 positionRatio:(double)arg2;
- (void)tabContentDidEndSlidingWithIndex:(long long)arg1 ScrollView:(id)arg2;
- (void)tabContentScrollViewWillBeginDragging:(id)arg1;
- (void)tabContentWhenOutterControlCreateChildVC:(id)arg1;
- (void)tabContentWhenVCEnter:(id)arg1 newCreate:(_Bool)arg2;
- (void)tabContentWhenVCLeave:(id)arg1;
- (void)setFestivalNavibar;
- (_Bool)tbfestival_isFestivalEnable;
- (void)changeStatusBarWithStyle:(long long)arg1;
- (long long)getSearchCurrentStatusBarStyle;
- (void)gv;
- (_Bool)hasDouble11View;
- (_Bool)showDouble11ErrorView:(id)arg1 InView:(id)arg2 Frame:(struct CGRect)arg3;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotate;
- (void)removeVideo;
- (void)onVideoClose;
- (_Bool)videoIsPlaying:(id)arg1;
- (id)getDWInteractiveInfoWithDict:(id)arg1;
- (id)getDWVideoInfoWithDict:(id)arg1;
- (void)playVideo:(id)arg1;
- (void)webViewContact;
- (void)webViewExpand;
- (void)contact;
- (void)expand;
- (void)scrollToTop;
- (void)showTbNavibar:(_Bool)arg1;
- (void)childViewWillBeginScroll:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)resetSomeStatus;
- (void)searchAgaignForH5Jsbridge;
- (void)reloadForH5jSbridge;
- (void)commitAppMonitorLog;
- (void)registryAppMonitor;
- (void)initAppMonitor;
- (id)pageUserInfo;
- (void)showChiTuLogoWhenReady;
- (void)chiTuRun;
- (void)fireDataToSmartPiece:(id)arg1 delay:(double)arg2;
- (void)searchFailed:(id)arg1 Error:(id)arg2;
- (void)searchSuccess:(id)arg1;
- (void)searchStart:(id)arg1;
- (void)voiceSearchWithKeyword:(id)arg1 Params:(id)arg2 vc:(id)arg3;
- (void)searchWithKeyword:(id)arg1 Params:(id)arg2;
- (void)layoutWithHeaderViewHeightWhenCompleted:(double)arg1;
- (void)activeCommonSrpSearch;
- (void)createMainSrpSearchDoor;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (_Bool)textFieldShouldBeginEditing:(id)arg1;
- (void)onesearchChangeHeight:(double)arg1 enableAnchor:(_Bool)arg2;
- (void)showPhotoSearch;
- (_Bool)navBarHidden;
- (void)hideHeader:(_Bool)arg1;
- (void)voiceSearchWithKeyWord:(id)arg1 AndSearchParams:(id)arg2;
- (void)searchWithMoreParams:(id)arg1;
- (void)searchWithKeyWord:(id)arg1 AndType:(id)arg2 AndSearchParams:(id)arg3;
- (void)showDouble11View:(id)arg1 InViewController:(id)arg2;
- (void)showChildVC:(id)arg1;
- (void)loadDataFailed:(id)arg1;
- (id)findSmartPieceVC;
- (void)dataLoaded;
- (void)startLoading;
- (void)stopLoading;
- (void)removeDouble11View;
- (void)startScrollTab:(id)arg1;
- (void)clickTabItem:(id)arg1;
- (void)updateH5TabAndSwitch:(id)arg1 appendParams:(id)arg2;
- (void)doSearchBarAnimation;
- (void)addSearchBusinessViewToNav;
- (void)layoutBottomLine;
- (void)shareAction;
- (void)configNavBar;
- (id)getH5UtPageName;
- (void)updatePageNameAndArgs;
- (void)didReceiveMemoryWarning;
- (void)viewDidLayoutSubviews;
- (void)viewWillLayoutSubviews;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppearAtFirstTime;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (_Bool)loadSearchChannel:(id)arg1;
- (void)dealloc;
- (id)initWithNavigatorURL:(id)arg1 query:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

