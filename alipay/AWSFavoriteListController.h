//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BEEPullTableController.h"

#import "AWSFavoriteSectionHeaderViewDelegate-Protocol.h"
#import "AWSPopupBtnDelegate-Protocol.h"
#import "AWSStockPriceCellDelegate-Protocol.h"
#import "AWSTableViewDelegate-Protocol.h"

@class AWSFavoriteSectionHeaderView, AWSPopupWindow, AWSSockTradePortfolioCell, AWSTabStripViewController, DTRpcAsyncCaller, NSString, SFAProfileItemContent;

@interface AWSFavoriteListController : BEEPullTableController <AWSStockPriceCellDelegate, AWSTableViewDelegate, AWSFavoriteSectionHeaderViewDelegate, AWSPopupBtnDelegate>
{
    long long _reorderingCellIndex;
    _Bool _isPullingDown;
    _Bool _isOnMoving;
    _Bool _notFirstIn;
    _Bool _isOnEditing;
    unsigned long long _orderBy;
    unsigned long long _currentItem;
    unsigned long long _currentShowType;
    long long _currentDropDownType;
    _Bool _hideMove;
    SFAProfileItemContent *_tradeItem;
    DTRpcAsyncCaller *_backgroundCaller;
    AWSFavoriteSectionHeaderView *_sectionHeaderView;
    AWSTabStripViewController *_parentContainer;
    AWSPopupWindow *_popUpWindow;
    AWSSockTradePortfolioCell *_openCell;
}

@property(retain, nonatomic) AWSSockTradePortfolioCell *openCell; // @synthesize openCell=_openCell;
@property(retain, nonatomic) AWSPopupWindow *popUpWindow; // @synthesize popUpWindow=_popUpWindow;
@property(nonatomic) __weak AWSTabStripViewController *parentContainer; // @synthesize parentContainer=_parentContainer;
@property(retain, nonatomic) AWSFavoriteSectionHeaderView *sectionHeaderView; // @synthesize sectionHeaderView=_sectionHeaderView;
- (void).cxx_destruct;
- (id)applyOrderBy:(id)arg1;
- (void)applyOrderBy;
- (void)didClickGroupBy:(id)arg1;
- (void)didClickOrderByPercentOrAmount:(id)arg1;
- (void)didClickOrderByPrice:(id)arg1;
- (void)didLongPressEndMove:(id)arg1;
- (void)didLongPressBeginMove:(id)arg1;
- (void)filterResult;
- (id)filterResult:(id)arg1;
- (void)didClickDelete:(id)arg1;
- (void)didClickSetTop:(id)arg1;
- (void)switchPriceDisplay:(unsigned long long)arg1;
- (void)buttonDidHide:(_Bool)arg1 cell:(id)arg2;
- (id)defaultTitleForType:(long long)arg1;
- (void)didClickPopupBtnView:(id)arg1;
- (id)popUpView:(id)arg1 btnAtIndex:(long long)arg2;
- (long long)numberOfBtnsOfPopUpView:(id)arg1;
- (void)setTableViewIsEditing:(_Bool)arg1;
- (_Bool)tableView:(id)arg1 shouldIndentWhileEditingRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didEndEditingRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willBeginReorderingRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 didEndReorderingRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didCancelReorderingRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 moveRowAtIndexPath:(id)arg2 toIndexPath:(id)arg3;
- (_Bool)tableView:(id)arg1 canMoveRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didUnhighlightRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didHighlightRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)titleForPagerTabStripViewController:(id)arg1;
- (void)stockFavDidChanged:(id)arg1;
- (void)viewDidLayoutSubviews;
- (id)tv;
- (id)tableView;
- (id)r;
- (id)emptyText;
- (void)gotoAgreeWap;
- (void)loadInBackground;
- (_Bool)canRunInBackgroundModel;
- (void)loadRefresh;
- (void)clearContent;
- (void)loadSuccess:(id)arg1;
- (void)loadEnded:(id)arg1;
- (void)loadError:(id)arg1;
- (void)loadException:(int)arg1 info:(id)arg2 retry:(_Bool)arg3;
- (id)loadCache;
- (id)loadOnline;
- (void)dealloc;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)onTradeButtonClicked;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)changeRefreshControl;
- (void)stockOpenExposreLogger;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

