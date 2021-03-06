//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MovieSDKTableViewController.h"

#import "MovieSDKCinemaFilterViewDataSource-Protocol.h"
#import "MovieSDKCinemaFilterViewDelegate-Protocol.h"
#import "MovieSDKCinemaSearchBarDelegate-Protocol.h"
#import "MovieSDKMovieSelectionViewDelegate-Protocol.h"
#import "MovieSDKPurchaseEmptyViewProtocol-Protocol.h"
#import "MovieSDKPurchaseFilterResultProtocol-Protocol.h"
#import "UICollectionViewDelegateFlowLayout-Protocol.h"

@class MovieSDKCinemaFilter, MovieSDKCinemaFilterView, MovieSDKCinemaPositionView, MovieSDKCinemaSearchBar, MovieSDKCityBarView, MovieSDKDataListInfo, MovieSDKEmptyView, MovieSDKGetPurchaseCinemasRequest, MovieSDKMovie, MovieSDKMovieSelectionView, MovieSDKNavigationBar, MovieSDKPurchaseCinemaList, MovieSDKPurchaseEmptyView, MovieSDKPurchaseFilterResultView, MovieSDKPurchaseHongBaoData, MovieSDKPurchaseSectionHeader, MovieSDKRefreshTableView, MovieSDKTipView, NSDictionary, NSMutableArray, NSString, UIButton, UIImageView, UIView;

@interface MovieSDKPurchaseViewController : MovieSDKTableViewController <MovieSDKMovieSelectionViewDelegate, MovieSDKCinemaFilterViewDelegate, MovieSDKCinemaFilterViewDataSource, MovieSDKPurchaseFilterResultProtocol, MovieSDKPurchaseEmptyViewProtocol, MovieSDKCinemaSearchBarDelegate, UICollectionViewDelegateFlowLayout>
{
    _Bool _isFilterRequest;
    _Bool _isFirstLoad;
    _Bool _needRefreshAllCinemas;
    MovieSDKRefreshTableView *_tableView;
    MovieSDKNavigationBar *_navigationBar;
    MovieSDKMovieSelectionView *_dateSelectionView;
    MovieSDKCinemaPositionView *_positionBar;
    MovieSDKCityBarView *_cityView;
    MovieSDKPurchaseFilterResultView *_filterResultView;
    UIView *_ceilingView;
    UIView *_tableFooterView;
    UIView *_searchBar;
    MovieSDKCinemaFilterView *_filterView;
    UIButton *_filterButton;
    MovieSDKPurchaseEmptyView *_emptyView;
    MovieSDKPurchaseSectionHeader *_sectionHeader;
    UIImageView *_pureShadowSectionHeader;
    MovieSDKEmptyView *_emptyCinemaView;
    UIImageView *_ceilingMaskView;
    NSMutableArray *_cinemas;
    NSMutableArray *_favoriteCinemas;
    NSMutableArray *_endCinemas;
    NSMutableArray *_sections;
    MovieSDKGetPurchaseCinemasRequest *_request;
    MovieSDKPurchaseCinemaList *_cinemaList;
    MovieSDKDataListInfo *_dateCinema;
    MovieSDKCinemaFilter *_filterData;
    MovieSDKPurchaseCinemaList *_filterCinemaList;
    double _longitude;
    double _latitude;
    NSString *_filterResult;
    MovieSDKMovie *_movieInfo;
    unsigned long long _cinemaIndex;
    NSDictionary *_allCinemas;
    unsigned long long _page;
    UIView *_searchView;
    MovieSDKCinemaSearchBar *_cinemaSearchBar;
    MovieSDKRefreshTableView *_searchTableView;
    NSMutableArray *_cinemasForSeach;
    NSMutableArray *_keyCinemas;
    NSString *_keyword;
    MovieSDKPurchaseHongBaoData *_hongbaoData;
    MovieSDKTipView *_hongbaoTipView;
}

@property(retain, nonatomic) MovieSDKTipView *hongbaoTipView; // @synthesize hongbaoTipView=_hongbaoTipView;
@property(retain, nonatomic) MovieSDKPurchaseHongBaoData *hongbaoData; // @synthesize hongbaoData=_hongbaoData;
@property(retain, nonatomic) NSString *keyword; // @synthesize keyword=_keyword;
@property(retain, nonatomic) NSMutableArray *keyCinemas; // @synthesize keyCinemas=_keyCinemas;
@property(retain, nonatomic) NSMutableArray *cinemasForSeach; // @synthesize cinemasForSeach=_cinemasForSeach;
@property(retain, nonatomic) MovieSDKRefreshTableView *searchTableView; // @synthesize searchTableView=_searchTableView;
@property(retain, nonatomic) MovieSDKCinemaSearchBar *cinemaSearchBar; // @synthesize cinemaSearchBar=_cinemaSearchBar;
@property(retain, nonatomic) UIView *searchView; // @synthesize searchView=_searchView;
@property(nonatomic) unsigned long long page; // @synthesize page=_page;
@property(nonatomic) _Bool needRefreshAllCinemas; // @synthesize needRefreshAllCinemas=_needRefreshAllCinemas;
@property(nonatomic) _Bool isFirstLoad; // @synthesize isFirstLoad=_isFirstLoad;
@property(nonatomic) _Bool isFilterRequest; // @synthesize isFilterRequest=_isFilterRequest;
@property(retain, nonatomic) NSDictionary *allCinemas; // @synthesize allCinemas=_allCinemas;
@property(nonatomic) unsigned long long cinemaIndex; // @synthesize cinemaIndex=_cinemaIndex;
@property(retain, nonatomic) MovieSDKMovie *movieInfo; // @synthesize movieInfo=_movieInfo;
@property(retain, nonatomic) NSString *filterResult; // @synthesize filterResult=_filterResult;
@property(nonatomic) double latitude; // @synthesize latitude=_latitude;
@property(nonatomic) double longitude; // @synthesize longitude=_longitude;
@property(retain, nonatomic) MovieSDKPurchaseCinemaList *filterCinemaList; // @synthesize filterCinemaList=_filterCinemaList;
@property(retain, nonatomic) MovieSDKCinemaFilter *filterData; // @synthesize filterData=_filterData;
@property(retain, nonatomic) MovieSDKDataListInfo *dateCinema; // @synthesize dateCinema=_dateCinema;
@property(retain, nonatomic) MovieSDKPurchaseCinemaList *cinemaList; // @synthesize cinemaList=_cinemaList;
@property(retain, nonatomic) MovieSDKGetPurchaseCinemasRequest *request; // @synthesize request=_request;
@property(retain, nonatomic) NSMutableArray *sections; // @synthesize sections=_sections;
@property(retain, nonatomic) NSMutableArray *endCinemas; // @synthesize endCinemas=_endCinemas;
@property(retain, nonatomic) NSMutableArray *favoriteCinemas; // @synthesize favoriteCinemas=_favoriteCinemas;
@property(retain, nonatomic) NSMutableArray *cinemas; // @synthesize cinemas=_cinemas;
@property(retain, nonatomic) UIImageView *ceilingMaskView; // @synthesize ceilingMaskView=_ceilingMaskView;
@property(retain, nonatomic) MovieSDKEmptyView *emptyCinemaView; // @synthesize emptyCinemaView=_emptyCinemaView;
@property(retain, nonatomic) UIImageView *pureShadowSectionHeader; // @synthesize pureShadowSectionHeader=_pureShadowSectionHeader;
@property(retain, nonatomic) MovieSDKPurchaseSectionHeader *sectionHeader; // @synthesize sectionHeader=_sectionHeader;
@property(retain, nonatomic) MovieSDKPurchaseEmptyView *emptyView; // @synthesize emptyView=_emptyView;
@property(retain, nonatomic) UIButton *filterButton; // @synthesize filterButton=_filterButton;
@property(retain, nonatomic) MovieSDKCinemaFilterView *filterView; // @synthesize filterView=_filterView;
@property(retain, nonatomic) UIView *searchBar; // @synthesize searchBar=_searchBar;
@property(retain, nonatomic) UIView *tableFooterView; // @synthesize tableFooterView=_tableFooterView;
@property(retain, nonatomic) UIView *ceilingView; // @synthesize ceilingView=_ceilingView;
@property(retain, nonatomic) MovieSDKPurchaseFilterResultView *filterResultView; // @synthesize filterResultView=_filterResultView;
@property(retain, nonatomic) MovieSDKCityBarView *cityView; // @synthesize cityView=_cityView;
@property(retain, nonatomic) MovieSDKCinemaPositionView *positionBar; // @synthesize positionBar=_positionBar;
@property(retain, nonatomic) MovieSDKMovieSelectionView *dateSelectionView; // @synthesize dateSelectionView=_dateSelectionView;
@property(retain, nonatomic) MovieSDKNavigationBar *navigationBar; // @synthesize navigationBar=_navigationBar;
@property(retain, nonatomic) MovieSDKRefreshTableView *tableView; // @synthesize tableView=_tableView;
- (void).cxx_destruct;
- (long long)preferredInterfaceOrientationForPresentation;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotate;
- (void)layoutHongBaoTip;
- (void)onSearchCanceled;
- (void)onSearch:(id)arg1;
- (void)openFilterView;
- (void)closeFilterView;
- (id)cinemaFilterView:(id)arg1 selectOptionItemsForRowAtIndex:(unsigned long long)arg2;
- (id)cinemaFilterView:(id)arg1 titleForRowAtIndex:(unsigned long long)arg2;
- (unsigned long long)numberOfRowsInCinemaFilterView:(id)arg1;
- (void)cinemaFilterView:(id)arg1 userDidChooseOption:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)cinemaFilterViewDidFilter:(id)arg1;
- (void)cinemaFilterViewDidCancel:(id)arg1;
- (void)positionViewHidden:(_Bool)arg1;
- (void)layoutCeiling;
- (_Bool)whetherToday;
- (void)setCinemasEmptyView;
- (_Bool)filterResultChanged:(id)arg1;
- (id)cinemaFilledWithOldData:(id)arg1;
- (void)cancelRequestHandler;
- (void)setSpecificCinemaList;
- (void)refreshController;
- (void)clearFilterResult;
- (void)refreshTableView;
- (void)recoverOriginalCinemas;
- (void)refreshCinemasByFilter:(id)arg1;
- (void)refreshCinemasByCity:(id)arg1;
- (void)requestPurchaseCinemas;
- (id)timeStampToDate:(id)arg1;
- (void)internalActionWithParam:(id)arg1;
- (void)setFirstLocation;
- (void)setCityName:(id)arg1;
- (void)locationChanged:(id)arg1;
- (void)cityChanged:(id)arg1;
- (_Bool)tableViewCell:(id)arg1 action:(unsigned long long)arg2 userInfo:(id)arg3;
- (void)didClearButtonTouched;
- (void)didClearFilterResult;
- (void)movieSelectionView:(id)arg1 itemDidSelected:(id)arg2 data:(id)arg3;
- (void)touchSearchBar:(id)arg1;
- (void)touchFilters:(id)arg1;
- (void)touchCityView:(id)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)sdkTableView:(id)arg1 extraInfoForRowAtIndexPath:(id)arg2 data:(id)arg3;
- (Class)sdkTableView:(id)arg1 classForRowAtIndexPath:(id)arg2 data:(id)arg3;
- (id)sdkTableView:(id)arg1 dataForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)tableView:(id)arg1 didStartRefreshData:(long long)arg2;
- (void)didReceiveMemoryWarning;
- (void)dealloc;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithMovieInfo:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

