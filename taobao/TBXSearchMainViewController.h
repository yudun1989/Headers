//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBXSearchSrpViewController.h"

#import "TBSRPXSearchDynPromotionCellDelegate-Protocol.h"
#import "TBSRPXSearchTopBarComponentDelegate-Protocol.h"
#import "TBSearchSideDoorViewControllerDelegate-Protocol.h"
#import "TBXCustomerDataDelegate-Protocol.h"
#import "TBXSearchFilterComponentDelegate-Protocol.h"
#import "TBXSearchHintDelegate-Protocol.h"
#import "TBXSearchRelatedRecommendDelegate-Protocol.h"
#import "TBXSearchSearchBarDelegate-Protocol.h"

@class NSString, TBSRPXSearchDynamicPortalViewController, TBXSearchMainViewModel, XSearchWXInstance;

@interface TBXSearchMainViewController : TBXSearchSrpViewController <TBSRPXSearchTopBarComponentDelegate, TBXSearchFilterComponentDelegate, TBXSearchSearchBarDelegate, TBSearchSideDoorViewControllerDelegate, TBXSearchHintDelegate, TBSRPXSearchDynPromotionCellDelegate, TBXCustomerDataDelegate, TBXSearchRelatedRecommendDelegate>
{
    XSearchWXInstance *_wxInstance;
    NSString *_botSearchStatus;
    TBSRPXSearchDynamicPortalViewController *_dynamicPortalVc;
}

@property(retain, nonatomic) TBSRPXSearchDynamicPortalViewController *dynamicPortalVc; // @synthesize dynamicPortalVc=_dynamicPortalVc;
@property(retain, nonatomic) NSString *botSearchStatus; // @synthesize botSearchStatus=_botSearchStatus;
@property(retain, nonatomic) XSearchWXInstance *wxInstance; // @synthesize wxInstance=_wxInstance;
- (void).cxx_destruct;
- (void)tabContentWhenVCDidShowAgain;
- (void)tabDidHiddenForPageDisAppear;
- (void)updatePageNameAndArgs;
- (id)pageUserInfo;
- (void)dealloc;
- (void)searchWithKeyWord:(id)arg1 AndType:(id)arg2 AndSearchParams:(id)arg3;
- (void)createMainSrpSearchDoor;
- (_Bool)textFieldShouldReturn:(id)arg1 searchBar:(id)arg2;
- (_Bool)textFieldShouldBeginEditing:(id)arg1 searchBar:(id)arg2;
- (void)setCollectionAccessibility:(_Bool)arg1;
- (void)setFilterBackViewAccessibility:(_Bool)arg1;
- (id)getCurrentFilterComponent;
- (void)reloadFilter;
- (void)setFilterIconHighlight;
- (void)closeFilter;
- (void)doFilterSearch;
- (void)openFilter;
- (void)goToTop;
- (void)searchScrollViewDidScroll:(id)arg1;
- (void)hideAllFloatBar;
- (void)loadCurrentFloatBarComponent;
- (void)showFloatBar;
- (void)topBarTurnStyle:(long long)arg1;
- (void)topBarCloseFloatingLayer:(long long)arg1 withIndex:(int)arg2;
- (void)topBarOpenFloatingLayer:(long long)arg1 withIndex:(int)arg2;
- (void)topBarSearchWithData:(id)arg1;
- (void)clickRelatedRecommend:(id)arg1;
- (void)clickCustomData:(id)arg1;
- (void)filterParams:(id)arg1 andExtData:(id)arg2;
- (void)clickHintQuery:(id)arg1;
- (void)clearFullOneSearch;
- (void)showFullOneSearch:(id)arg1;
- (id)fullOneSearchURL;
- (void)filterSearchFail:(id)arg1;
- (void)filterSearchSuccess;
- (void)filterSearchStart;
- (void)fixSearchFail:(id)arg1;
- (void)fixSearchSuccess;
- (void)fixSearchStart;
- (void)sendEventToBotWeex;
- (void)reloadData;
- (void)registerRequestStatusView;
- (void)registerCell;
- (void)registerComponents;
- (void)setupPlaceholderView;
- (void)setupPullRefresh;
- (void)sendPulltoRefreshRequest:(id)arg1;
- (void)fixWeexBottomAfterViewDidAppear;
- (void)updateWeexFrame:(id)arg1;
- (void)filterSearch:(id)arg1;
- (void)botSearchQuit:(id)arg1;
- (void)botSearchToHalfScreen:(id)arg1;
- (double)getBotTop;
- (void)botSearchToFullScreen:(id)arg1;
- (void)addEventForService:(id)arg1;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWasShown:(id)arg1;
- (void)renderMaskViewWithURL:(id)arg1;
- (void)loadPoplayer;
- (void)shareAction;
- (void)addCustomMoreItems;
- (void)viewDidAppear:(_Bool)arg1;
- (id)loadViewModel;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(retain, nonatomic) TBXSearchMainViewModel *viewModel; // @dynamic viewModel;

@end

