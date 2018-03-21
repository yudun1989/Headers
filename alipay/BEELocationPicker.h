//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BEEBaseController.h"

#import "UISearchBarDelegate-Protocol.h"
#import "UISearchDisplayDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"
#import "UITextFieldDelegate-Protocol.h"

@class AMapPOI, APMapSendLocationView, APTableView, BEELocationLoadingView, BEELocationPickerParams, BEELocationSwitchTabView, LBSAddressInfo, NSMutableArray, NSMutableDictionary, NSString, UILabel, UISearchBar, UISearchDisplayController, UIView;
@protocol BEELocationPickerDelegate;

@interface BEELocationPicker : BEEBaseController <UISearchBarDelegate, UITextFieldDelegate, UISearchDisplayDelegate, UITableViewDelegate, UITableViewDataSource>
{
    LBSAddressInfo *_currentAddressInfo;
    AMapPOI *_selectedPOI;
    long long _currentTabType;
    NSString *_hightLightKey;
    double _lastContentOffset;
    struct CLLocationCoordinate2D _currentLocation;
    NSMutableArray *_resultArray;
    NSMutableArray *_searchResultArray;
    NSMutableArray *_resultForOfficeBuilding;
    NSMutableArray *_resultForvillage;
    NSMutableArray *_resultForSchool;
    NSMutableDictionary *_resultHasMoreDic;
    NSString *_rid;
    _Bool _scrollToChangeMapView;
    _Bool _hasRegeoLocation;
    long long _mapviewSizeType;
    double _accuracy;
    long long _curReqPageIndex;
    BEELocationPickerParams *_params;
    _Bool _hideRegeoLocation;
    id <BEELocationPickerDelegate> _delegate;
    NSString *_titleText;
    NSString *_rightBarBtnText;
    NSString *_appkey;
    double _mapRange;
    NSString *_outOfRangeTip;
    UISearchBar *_searchBar;
    APTableView *_tableView;
    UISearchDisplayController *_searchViewController;
    BEELocationLoadingView *_searchPageFooterView;
    BEELocationLoadingView *_poiPageFooterView;
    BEELocationSwitchTabView *_switchTabView;
    UILabel *_searchResultTipLabel;
    UIView *_searchBarBackgroundView;
    UIView *_navigationBarBGView;
    APMapSendLocationView *_mapView;
}

+ (void)reGeocodeWithLocation:(struct CLLocationCoordinate2D)arg1 completion:(CDUnknownBlockType)arg2;
@property(retain, nonatomic) APMapSendLocationView *mapView; // @synthesize mapView=_mapView;
@property(retain, nonatomic) UIView *navigationBarBGView; // @synthesize navigationBarBGView=_navigationBarBGView;
@property(retain, nonatomic) UIView *searchBarBackgroundView; // @synthesize searchBarBackgroundView=_searchBarBackgroundView;
@property(retain, nonatomic) UILabel *searchResultTipLabel; // @synthesize searchResultTipLabel=_searchResultTipLabel;
@property(retain, nonatomic) BEELocationSwitchTabView *switchTabView; // @synthesize switchTabView=_switchTabView;
@property(retain, nonatomic) BEELocationLoadingView *poiPageFooterView; // @synthesize poiPageFooterView=_poiPageFooterView;
@property(retain, nonatomic) BEELocationLoadingView *searchPageFooterView; // @synthesize searchPageFooterView=_searchPageFooterView;
@property(retain, nonatomic) UISearchDisplayController *searchViewController; // @synthesize searchViewController=_searchViewController;
@property(retain, nonatomic) APTableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) UISearchBar *searchBar; // @synthesize searchBar=_searchBar;
@property(nonatomic) _Bool hideRegeoLocation; // @synthesize hideRegeoLocation=_hideRegeoLocation;
@property(retain, nonatomic) NSString *outOfRangeTip; // @synthesize outOfRangeTip=_outOfRangeTip;
@property(nonatomic) double mapRange; // @synthesize mapRange=_mapRange;
@property(retain, nonatomic) NSString *appkey; // @synthesize appkey=_appkey;
@property(retain, nonatomic) NSString *rightBarBtnText; // @synthesize rightBarBtnText=_rightBarBtnText;
@property(retain, nonatomic) NSString *titleText; // @synthesize titleText=_titleText;
@property(nonatomic) __weak id <BEELocationPickerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)remoteLoggerWithPOI:(id)arg1 atIndex:(long long)arg2 actionCode:(id)arg3 keyword:(id)arg4;
- (id)remoteLogForARWithPOI:(id)arg1 atIndex:(long long)arg2 keyword:(id)arg3;
- (void)closeCurVC;
- (void)back;
- (void)scrollToUpdateMapviewSize:(_Bool)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)updateCellStyle:(id)arg1 forRowAtIndexPath:(id)arg2 poi:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)updateSearchBarStyle:(id)arg1 andTextFieldColor:(id)arg2;
- (void)updateSearchBarBackground:(id)arg1;
- (void)searchBarCancelButtonClicked:(id)arg1;
- (void)searchBarSearchButtonClicked:(id)arg1;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (void)searchBarTextDidBeginEditing:(id)arg1;
- (void)searchDisplayControllerDidEndSearch:(id)arg1;
- (void)searchDisplayControllerWillEndSearch:(id)arg1;
- (_Bool)searchDisplayController:(id)arg1 shouldReloadTableForSearchString:(id)arg2;
- (void)searchDisplayController:(id)arg1 willShowSearchResultsTableView:(id)arg2;
- (void)dealloc;
- (void)didClickRightBarButton;
- (_Bool)checkValidForSelectedPOI;
- (void)regeocodeWithLocation:(struct CLLocationCoordinate2D)arg1 completion:(CDUnknownBlockType)arg2;
- (void)reGeocodeWithLocation:(struct CLLocationCoordinate2D)arg1;
- (void)onMapCenterLocationChanged:(struct CLLocationCoordinate2D)arg1 accuracy:(double)arg2;
- (void)onChangeTabviewIndex:(long long)arg1;
- (void)createSwitchTabView;
- (void)createSubviews;
- (void)applicationDidActive;
- (void)tryToshowGiudeOptions;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)poiSearchWithCoordinate:(struct CLLocationCoordinate2D)arg1 keywords:(id)arg2 pageIndex:(long long)arg3 searchType:(long long)arg4;
- (_Bool)checkResultWithIndex:(long long)arg1 pois:(id)arg2;
- (void)handleNullResultWithKeywords:(id)arg1 error:(id)arg2;
- (void)searchCurrentLocation;
- (void)poisPrepareForUse;
- (id)remoteLogStrWithlatitude:(double)arg1 longitude:(double)arg2;
- (void)dealwithCllocationObj;
- (id)initWithparamsBlock:(CDUnknownBlockType)arg1;
- (long long)registerLocationPickerStyleWithNeedMapView:(_Bool)arg1 needSwitchTab:(_Bool)arg2;
- (id)initWithDataDic:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

