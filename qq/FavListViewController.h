//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QQViewController.h>

#import <QQMainProject/FavActionBarDelegate-Protocol.h>
#import <QQMainProject/FavAddItemDelegate-Protocol.h>
#import <QQMainProject/FavAudioPlayManagerDelegate-Protocol.h>
#import <QQMainProject/FavChooseFolderDelegate-Protocol.h>
#import <QQMainProject/FavListTitleDelegate-Protocol.h>
#import <QQMainProject/FavSearcherLogicEnginDelegate-Protocol.h>
#import <QQMainProject/FavoritesCellDelegate-Protocol.h>
#import <QQMainProject/QQMoreOptionTableViewCellScrollStateDelegate-Protocol.h>
#import <QQMainProject/UIGestureRecognizerDelegate-Protocol.h>
#import <QQMainProject/UINavigationControllerDelegate-Protocol.h>
#import <QQMainProject/UITableViewDataSource-Protocol.h>
#import <QQMainProject/UITableViewDelegate-Protocol.h>

@class EmptyListCell, FavActionBar, FavAddPopMenu, FavListTitleView, FavSearcherLogicEngin, FavoritesTableView, NSIndexPath, NSString, ODRefreshControl, ShowMoreFavCell, UIButton, UIImageView, UILongPressGestureRecognizer;

@interface FavListViewController : QQViewController <FavListTitleDelegate, FavChooseFolderDelegate, UITableViewDelegate, UITableViewDataSource, UIGestureRecognizerDelegate, UINavigationControllerDelegate, FavAudioPlayManagerDelegate, FavoritesCellDelegate, FavAddItemDelegate, FavSearcherLogicEnginDelegate, FavActionBarDelegate, QQMoreOptionTableViewCellScrollStateDelegate>
{
    FavSearcherLogicEngin *_logicEngine;
    FavoritesTableView *_favoritesTableView;
    ShowMoreFavCell *_showMoreCell;
    EmptyListCell *_emptyListCell;
    ODRefreshControl *_refreshControl;
    FavListTitleView *_customTitleView;
    UIButton *_editModeButton;
    FavAddPopMenu *_popMenu;
    UIImageView *_addIcon;
    FavActionBar *_actionBar;
    int _currentMode;
    int _favListEntry;
    unsigned int _filterFolder;
    _Bool _reverseFiltering;
    FavSearcherLogicEngin *_searcherLogicEngine;
    _Bool _showLoading;
    _Bool _unknownItemsRefreshed;
    _Bool _hasMore;
    _Bool _isFetchingMore;
    unsigned long long _moreCount;
    UILongPressGestureRecognizer *_touchGestureRecognizer;
    NSIndexPath *_leftSwipCellIndex;
    _Bool _isSearch;
}

- (void)leftSwipTouchDown;
- (_Bool)isMessageTabInLeftSwipState;
- (void)tableView:(id)arg1 scrollBackToCenterStateInRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 scrollToLeftSwipStateInRowAtIndexPath:(id)arg2;
- (void)stopRefreshCtrlAnimate:(_Bool)arg1 isShowFailedTips:(_Bool)arg2;
- (void)dragViewDidBeginRefreshing:(id)arg1;
- (void)refreshList;
- (void)onFavListUpdated:(id)arg1;
- (void)endNavIndicator;
- (void)onDownloadAudioEnd:(_Bool)arg1 localid:(unsigned long long)arg2;
- (void)onDownloadAudioBegin;
- (void)onPlayEnd:(id)arg1;
- (void)onPlayBegin:(id)arg1;
- (id)getParentView;
- (id)getCellByLocalId:(long long)arg1;
- (void)onFavListLoadResult:(id)arg1;
- (void)onFavListSearchResult:(id)arg1;
- (void)loadInTopItems;
- (void)loadUploadingAndFailedFavInfo;
- (void)loadNextFavoritesInfo:(unsigned long long)arg1 queryFlag:(unsigned long long)arg2;
- (_Bool)showMoreCellOrDefaultView;
- (_Bool)showDefaultView;
- (_Bool)showMoreCell;
- (id)tableHeaderView;
- (_Bool)hasMoreFavorites;
- (unsigned long long)lastFavId;
- (void)loadFavoritesItems:(_Bool)arg1;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)tableView:(id)arg1 willBeginEditingRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didDeselectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 willDeselectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (_Bool)isSupportRightDragToGoBack;
- (void)searchBarAdjustingFrame:(_Bool)arg1;
- (_Bool)searchResultCellDidSelect:(id)arg1;
- (void)onClickAction:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)onClickCancelTopBtn:(id)arg1;
- (void)onClickTopBtn:(id)arg1;
- (void)onClickDeleteBtn:(id)arg1;
- (void)onClickRetryBtn:(id)arg1;
- (void)onMoveFavsToFolderResult:(id)arg1;
- (void)onDeleteFolderResult:(id)arg1;
- (void)onNewFolderResult:(id)arg1;
- (void)onDeleteFavResult:(id)arg1;
- (void)onFavInvalidated:(id)arg1;
- (void)onAddFavResult:(id)arg1;
- (void)onModifyFavResult:(id)arg1;
- (void)applicationWillEnterForeground;
- (void)reachabilityChanged:(id)arg1;
- (void)changeFolder:(id)arg1;
- (void)onDropDown:(_Bool)arg1;
- (void)enableMainTableVoiceOver;
- (void)shieldMainTableVoiceOver;
- (void)createPopMenu;
- (void)popAddingMenu;
- (void)leftButtonClick:(id)arg1;
- (void)rightButtonClick:(id)arg1;
- (void)onFavItemAdd:(id)arg1 bAddAll:(_Bool)arg2;
- (void)onFavItemAdd:(id)arg1;
- (void)delayLoadFavlist:(id)arg1;
- (void)loadMoreFavorites;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)layoutViewsIfNeeds:(id)arg1;
- (void)dealloc;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)showTopGuide;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)titleBarDoubleTapped:(id)arg1;
- (void)setActionBar;
- (id)editModeSelectTips;
- (id)normalModeTitle;
- (void)newFavFolder;
- (void)deleteFavorites;
- (void)forwardFavorites;
- (void)checkAndForwardFavorites:(CDUnknownBlockType)arg1;
- (void)createNewFolder:(id)arg1;
- (void)enterFolderList:(id)arg1;
- (void)switchEditMode:(id)arg1;
- (void)setControllerTitle:(id)arg1;
- (void)loadView;
- (void)initAdditionalViews;
- (void)viewDidLoad;
- (_Bool)needRefreshFavoritesOnLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) int favListEntry; // @dynamic favListEntry;
@property(nonatomic) unsigned int filterFolder; // @dynamic filterFolder;
@property(readonly) unsigned long long hash;
@property(nonatomic) _Bool reverseFiltering; // @dynamic reverseFiltering;
@property(retain, nonatomic) FavSearcherLogicEngin *searcherLogicEngine; // @dynamic searcherLogicEngine;
@property(readonly) Class superclass;

@end

