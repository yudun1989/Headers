//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/FTSGroupResultsBaseViewController.h>

#import <QQMainProject/FTSAssociationalWordsViewDelegate-Protocol.h>
#import <QQMainProject/FTSDataManagerProtocol-Protocol.h>

@class FTSDataManager, FTSSearchEngine, FTSSmartSearchView, NSArray, NSMutableArray, NSString;

@interface FTSSmartSearchViewController : FTSGroupResultsBaseViewController <FTSDataManagerProtocol, FTSAssociationalWordsViewDelegate>
{
    FTSSearchEngine *_ftsSearchEngine;
    FTSDataManager *_ftsDataManager;
    long long _currentState;
    long long _lastState;
    NSMutableArray *_ftsMArrRegisterAll;
    NSMutableArray *_ftsMArrRegisterHandled;
    _Bool _ftsReStartEngine;
    int _rdmKeywordSearchFrequency;
    long long _searchFlag;
    unsigned int _localSearchResultCount;
    FTSSmartSearchView *_smartSearchView;
    long long _maxTotalResultCount;
    long long _maxRelationResultCount;
    long long _maxMessageResultCount;
    long long _maxFunctionResultCount;
    _Bool _dontSearchLocal;
    _Bool _dontShowReturnButton;
    long long _ftsFliter;
    NSString *_lastNetSearchKeyWord;
    NSString *_ftsLastSearchKeyword;
    NSArray *_searchedResultArray;
}

+ (id)_searchTextAdapterZhEnHandle:(id)arg1;
@property(retain, nonatomic) NSArray *searchedResultArray; // @synthesize searchedResultArray=_searchedResultArray;
@property(copy, nonatomic) NSString *ftsLastSearchKeyword; // @synthesize ftsLastSearchKeyword=_ftsLastSearchKeyword;
@property(copy, nonatomic) NSString *lastNetSearchKeyWord; // @synthesize lastNetSearchKeyWord=_lastNetSearchKeyWord;
@property(nonatomic) _Bool dontShowReturnButton; // @synthesize dontShowReturnButton=_dontShowReturnButton;
@property(nonatomic) _Bool dontSearchLocal; // @synthesize dontSearchLocal=_dontSearchLocal;
@property(nonatomic) long long ftsFliter; // @synthesize ftsFliter=_ftsFliter;
- (void)setSearchFlagState:(long long)arg1 boolState:(_Bool)arg2;
- (_Bool)isSearchFlagYES:(long long)arg1;
- (void)clearGroupResultsTable;
- (void)clearLastSearchWord;
- (void)onWillDisplayCell:(id)arg1 atIndexPath:(id)arg2;
- (id)ftsGetAllFeedModel;
- (void)onDidClickSearchMore:(id)arg1;
- (void)p_aiSearchReportModify:(int)arg1;
- (void)searchBarCancelButtonClicked:(id)arg1;
- (void)dismissSearchBarFirstResponder;
- (void)searchBarSearchButtonClicked:(id)arg1;
- (void)_performHandleSearchProcess:(id)arg1;
- (void)_searchEventHandleSearchProcess:(id)arg1;
- (void)_searchEventHandleSearchProcessNew:(id)arg1;
- (void)searchEventHandleSearchProcess:(id)arg1;
- (_Bool)_handleZhInputLanguage:(id)arg1;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (_Bool)searchBar:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)p_reStartFTSEngine;
- (_Bool)searchBarShouldBeginEditing:(id)arg1;
- (void)searchBarBookmarkButtonClicked:(id)arg1;
- (id)_ftsGetResultsKeywordFromArray:(id)arg1;
- (id)_ftsGetCurrMArrRegisterResultsKeyword;
- (id)_ftsGetResultsKeyword;
- (void)clearOptimizeRegister;
- (void)optimizeGroupResultsSearchFrequency:(id)arg1;
- (void)closeFTSNetSearchTask;
- (void)closeFTSLocalSearchTask:(_Bool)arg1;
- (void)closeFTSAllTask;
- (void)cancelFTSAction;
- (id)mergeNetAssociationalResult:(id)arg1;
- (void)onSmartSearchAssociationWordUpdateCallback:(id)arg1;
- (void)startFTSNetAssociationalWordSearch:(id)arg1;
- (id)matchedFunctionName;
- (void)FTSATableView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 dataModel:(id)arg3;
- (id)appendTabtypeString:(id)arg1;
- (void)expDataReport;
- (id)appendMoreSearchModel:(id)arg1;
- (void)showSearchedResult:(id)arg1;
- (void)handleShowNoResult;
- (id)subArrayFromArray:(id)arg1 totalCount:(long long)arg2;
- (id)_filterNativeSearchResult:(id)arg1;
- (void)refreshSearchGroupResults:(_Bool)arg1 isNeedContinueRefresh:(_Bool)arg2;
- (_Bool)localResultIsFull;
- (void)delayRefreshSearchData;
- (void)handleFTSSearchEngineResultsNotif:(id)arg1;
- (void)resultTableHandleNoResult;
- (void)initializeGroupResultsTable;
- (void)setLastKeyword:(id)arg1;
- (_Bool)isSelfNotSingleShow;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)initConfigAugument;
- (void)addObserver;
- (void)viewDidLoad;
- (void)loadView;
- (void)dealloc;
- (id)initWithSearchKeyword:(id)arg1 onOperateCallBack:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

