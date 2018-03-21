//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QQViewController.h>

#import <QQMainProject/FTSCustomSearchBarDelegate-Protocol.h>
#import <QQMainProject/FTSNoResultsProtocol-Protocol.h>
#import <QQMainProject/UITableViewDataSource-Protocol.h>
#import <QQMainProject/UITableViewDelegate-Protocol.h>

@class FTSBaseSearchCondition, FTSCustomSearchBar, FTSGroupResultsTabViewController, FTSNoResultView, NSLock, NSMutableArray, NSString, QQDynamicSearchTableFootLoadingView, UITableView;

@interface FTSResultMoreBaseViewController : QQViewController <FTSNoResultsProtocol, FTSCustomSearchBarDelegate, UITableViewDataSource, UITableViewDelegate>
{
    unsigned long long _uiStyle;
    FTSBaseSearchCondition *_searchCondition;
    long long _originStatusBarStyle;
    _Bool _originBottomBarHidden;
    int _keywordSearchFrequency;
    _Bool _isPushEnter;
    _Bool _firstDontShowKeyboard;
    _Bool _showSearchBar;
    _Bool _isFTSEngineConstructBySelf;
    UITableView *_tableView;
    NSMutableArray *_dataSource;
    NSLock *_dataSourceLock;
    FTSCustomSearchBar *_ftsContainerSearchBar;
    QQDynamicSearchTableFootLoadingView *_footLoadingView;
    FTSGroupResultsTabViewController *_ftsGroupResultsTabViewController;
    FTSNoResultView *_noResultView;
}

+ (id)viewControllerWithSearchCondition:(id)arg1;
@property(retain, nonatomic) FTSNoResultView *noResultView; // @synthesize noResultView=_noResultView;
@property(nonatomic) unsigned long long uiStyle; // @synthesize uiStyle=_uiStyle;
@property(nonatomic) _Bool isFTSEngineConstructBySelf; // @synthesize isFTSEngineConstructBySelf=_isFTSEngineConstructBySelf;
@property(nonatomic) __weak FTSGroupResultsTabViewController *ftsGroupResultsTabViewController; // @synthesize ftsGroupResultsTabViewController=_ftsGroupResultsTabViewController;
@property(retain, nonatomic) QQDynamicSearchTableFootLoadingView *footLoadingView; // @synthesize footLoadingView=_footLoadingView;
@property(nonatomic) _Bool showSearchBar; // @synthesize showSearchBar=_showSearchBar;
@property(retain, nonatomic) FTSCustomSearchBar *ftsContainerSearchBar; // @synthesize ftsContainerSearchBar=_ftsContainerSearchBar;
@property(retain, nonatomic) NSLock *dataSourceLock; // @synthesize dataSourceLock=_dataSourceLock;
@property(retain) NSMutableArray *dataSource; // @synthesize dataSource=_dataSource;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) FTSBaseSearchCondition *searchCondition; // @synthesize searchCondition=_searchCondition;
- (void).cxx_destruct;
- (int)_getOperateEnter;
- (void)_ftsDataReportMoreResultsSuccs;
- (void)_ftsDataReportMoreResultsClick:(id)arg1;
- (void)_ftsDataReportAtWhichPage;
- (void)_ftsDataReportCancelActionFromMorePage;
- (void)dismissSearchBarFirstResponder;
- (void)onDidScrollNoResults;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableViewHeightForCellAtIndexPath:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)separatorLayerInHeight:(double)arg1 OffsetX:(double)arg2 color:(id)arg3;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellAddBottomView:(id)arg2 AtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)ftsCustomSearchBarReturnButtonClicked:(id)arg1;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (_Bool)searchBar:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (_Bool)searchBarShouldBeginEditing:(id)arg1;
- (void)searchBarCancelButtonClicked:(id)arg1;
- (void)clearDataSource;
- (id)titleForSearchType;
- (void)stopLoadingAnimation;
- (void)startLoadingAnimation;
- (void)setNoResultviewHiddenValue:(_Bool)arg1;
- (void)showNoResultViewWithWording:(id)arg1 highLightWord:(id)arg2 keywordRange:(struct _NSRange)arg3;
- (void)addNoResultView;
- (void)addRefeshView;
- (void)addTableView;
- (void)keyboardWillShow:(id)arg1;
- (void)initializeFTSCustomSearchBar;
- (void)viewDidLoad;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)dealloc;
- (id)initWithSearchCondition:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

