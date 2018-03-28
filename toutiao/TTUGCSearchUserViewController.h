//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SSViewControllerBase.h"

#import "TTSeachBarViewDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"
#import "UIViewControllerErrorHandler-Protocol.h"

@class NSArray, NSError, NSNumber, NSString, SSThemedTableView, SSThemedView, TTSeachBarView, TTUGCSearchUserEmptyView;
@protocol TTUGCSearchUserTableViewDelegate;

@interface TTUGCSearchUserViewController : SSViewControllerBase <UITableViewDataSource, UITableViewDelegate, UIViewControllerErrorHandler, TTSeachBarViewDelegate>
{
    _Bool _hasMore;
    _Bool _hasMoreSearchResult;
    id <TTUGCSearchUserTableViewDelegate> _delegate;
    TTSeachBarView *_searchBar;
    SSThemedTableView *_tableView;
    SSThemedTableView *_searchResultTableView;
    SSThemedView *_maskView;
    TTUGCSearchUserEmptyView *_emptyView;
    NSNumber *_offset;
    NSArray *_recentUsers;
    NSArray *_followingUsers;
    unsigned long long _state;
    NSNumber *_searchResultOffset;
    NSArray *_searchResultFollowingUsers;
    NSArray *_searchResultSuggestUsers;
    NSArray *_searchResultInputUsers;
    NSString *_searchingWord;
    NSError *_searchError;
    NSError *_searchResultError;
}

@property(retain, nonatomic) NSError *searchResultError; // @synthesize searchResultError=_searchResultError;
@property(retain, nonatomic) NSError *searchError; // @synthesize searchError=_searchError;
@property(copy, nonatomic) NSString *searchingWord; // @synthesize searchingWord=_searchingWord;
@property(retain, nonatomic) NSArray *searchResultInputUsers; // @synthesize searchResultInputUsers=_searchResultInputUsers;
@property(retain, nonatomic) NSArray *searchResultSuggestUsers; // @synthesize searchResultSuggestUsers=_searchResultSuggestUsers;
@property(retain, nonatomic) NSArray *searchResultFollowingUsers; // @synthesize searchResultFollowingUsers=_searchResultFollowingUsers;
@property(retain, nonatomic) NSNumber *searchResultOffset; // @synthesize searchResultOffset=_searchResultOffset;
@property(nonatomic) _Bool hasMoreSearchResult; // @synthesize hasMoreSearchResult=_hasMoreSearchResult;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
@property(retain, nonatomic) NSArray *followingUsers; // @synthesize followingUsers=_followingUsers;
@property(retain, nonatomic) NSArray *recentUsers; // @synthesize recentUsers=_recentUsers;
@property(retain, nonatomic) NSNumber *offset; // @synthesize offset=_offset;
@property(nonatomic) _Bool hasMore; // @synthesize hasMore=_hasMore;
@property(retain, nonatomic) TTUGCSearchUserEmptyView *emptyView; // @synthesize emptyView=_emptyView;
@property(retain, nonatomic) SSThemedView *maskView; // @synthesize maskView=_maskView;
@property(retain, nonatomic) SSThemedTableView *searchResultTableView; // @synthesize searchResultTableView=_searchResultTableView;
@property(retain, nonatomic) SSThemedTableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) TTSeachBarView *searchBar; // @synthesize searchBar=_searchBar;
@property(nonatomic) __weak id <TTUGCSearchUserTableViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)trackEventPageTypeInSection:(long long)arg1 forState:(unsigned long long)arg2;
- (id)trackEventProfileTypeInSection:(long long)arg1 forState:(unsigned long long)arg2;
- (id)titleForHeaderInSection:(long long)arg1 forState:(unsigned long long)arg2;
- (id)dataSourceInSection:(long long)arg1 forState:(unsigned long long)arg2;
- (void)searchBarCancelButtonClicked:(id)arg1;
- (void)searchBarSearchButtonClicked:(id)arg1;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (_Bool)searchBarShouldBeginEditing:(id)arg1;
- (void)searchBarBecomeActive;
- (void)searchBarTapAction:(id)arg1;
- (void)refreshData;
- (_Bool)tt_hasValidateData;
- (void)hideSearchResultTableView;
- (void)showSearchResultTableView;
- (void)swipeAction:(id)arg1;
- (void)dismissAction:(id)arg1;
- (void)triggerLoadMoreSearchResult;
- (void)loadRequestSearchResult:(_Bool)arg1;
- (void)triggerLoadMore;
- (void)loadRequest;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

