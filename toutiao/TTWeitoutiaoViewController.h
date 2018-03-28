//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SSViewControllerBase.h"

#import "ExploreMixedListBaseViewDelegate-Protocol.h"
#import "TTInteractExitProtocol-Protocol.h"
#import "TTTopBarDelegate-Protocol.h"
#import "TTWeitoutiaoNavigationBarDelegate-Protocol.h"

@class ExploreMixedListBaseView, NSString, TTTopBar, TTWeitoutiaoHeaderContainerScrollView, TTWeitoutiaoNavigationBar, TTWeitoutiaoPostUGCTopEntranceView, TTWeitoutiaoViewModel, TTWriteButton;

@interface TTWeitoutiaoViewController : SSViewControllerBase <ExploreMixedListBaseViewDelegate, TTInteractExitProtocol, TTTopBarDelegate, TTWeitoutiaoNavigationBarDelegate>
{
    _Bool _hasLoadLocalData;
    _Bool _topBarEnable;
    TTWeitoutiaoHeaderContainerScrollView *_headerContainerScrollView;
    TTWeitoutiaoPostUGCTopEntranceView *_postUGCTopEntranceView;
    ExploreMixedListBaseView *_mixedListView;
    TTWriteButton *_postWeitoutiaoButton;
    TTWeitoutiaoViewModel *_viewModel;
    TTTopBar *_topBar;
    TTWeitoutiaoNavigationBar *_naviBar;
}

@property(retain, nonatomic) TTWeitoutiaoNavigationBar *naviBar; // @synthesize naviBar=_naviBar;
@property(nonatomic) _Bool topBarEnable; // @synthesize topBarEnable=_topBarEnable;
@property(retain, nonatomic) TTTopBar *topBar; // @synthesize topBar=_topBar;
@property(retain, nonatomic) TTWeitoutiaoViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(nonatomic) _Bool hasLoadLocalData; // @synthesize hasLoadLocalData=_hasLoadLocalData;
@property(retain, nonatomic) TTWriteButton *postWeitoutiaoButton; // @synthesize postWeitoutiaoButton=_postWeitoutiaoButton;
@property(retain, nonatomic) ExploreMixedListBaseView *mixedListView; // @synthesize mixedListView=_mixedListView;
@property(retain, nonatomic) TTWeitoutiaoPostUGCTopEntranceView *postUGCTopEntranceView; // @synthesize postUGCTopEntranceView=_postUGCTopEntranceView;
@property(retain, nonatomic) TTWeitoutiaoHeaderContainerScrollView *headerContainerScrollView; // @synthesize headerContainerScrollView=_headerContainerScrollView;
- (void).cxx_destruct;
- (void)rightBarButtonPressed:(id)arg1;
- (void)leftBarButtonPressed:(id)arg1;
- (void)searchBarButtonActionFired:(id)arg1;
- (void)mineActionFired:(id)arg1;
- (void)searchActionFired:(id)arg1;
- (id)suitableFinishBackView;
- (void)mixListViewDidSelectLastReadCellDidBeginRefresh:(id)arg1;
- (void)mixListViewDidSelectLastReadCellWillBeginRefresh:(id)arg1;
- (void)mixListViewWillScrollToTop:(id)arg1;
- (void)postWeitoutiaoButtonClicked:(id)arg1;
- (void)publishButtonClicked:(id)arg1;
- (void)addFriendButtonClicked:(id)arg1;
- (void)didEnterBackground;
- (void)willEnterForeground;
- (void)postUGCPermissionUpdateNotification:(id)arg1;
- (void)tabbarKeepClick:(id)arg1;
- (void)weitoutiaoTabbarTapped:(id)arg1;
- (void)themeChanged:(id)arg1;
- (void)removeNotifications;
- (void)registerNotifications;
- (void)showOrHidePostUGCTopEntrance;
- (void)viewWillLayoutSubviews;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)dealloc;
- (void)didReceiveMemoryWarning;
- (void)setupNavigatipnBar;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

