//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBXSearchTopBaseViewController.h"

#import "TBSearchSideDoorViewModelDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"
#import "UITextFieldDelegate-Protocol.h"
#import "magicDelegate-Protocol.h"

@class NSDictionary, NSMutableArray, NSString, TBSearchInput, TBSearchSideDoorViewModel, UIScrollView, UITableView, UIView;
@protocol TBXSearchCommonSearchDoorViewControllerDelegate;

@interface TBXSearchCommonSearchDoorViewController : TBXSearchTopBaseViewController <UITextFieldDelegate, TBSearchSideDoorViewModelDelegate, UITableViewDelegate, UITableViewDataSource, magicDelegate>
{
    _Bool _fromsearch;
    id <TBXSearchCommonSearchDoorViewControllerDelegate> _delegate;
    NSString *_q;
    NSString *_from;
    NSDictionary *_globalParams;
    TBSearchInput *_searchBar;
    TBSearchSideDoorViewModel *_viewModel;
    UITableView *_suggestionTableView;
    UIView *_bodyView;
    UIScrollView *_sideDoor;
    NSDictionary *_query;
    NSMutableArray *_allWidgets;
}

@property(retain, nonatomic) NSMutableArray *allWidgets; // @synthesize allWidgets=_allWidgets;
@property(retain, nonatomic) NSDictionary *query; // @synthesize query=_query;
@property(retain, nonatomic) UIScrollView *sideDoor; // @synthesize sideDoor=_sideDoor;
@property(retain, nonatomic) UIView *bodyView; // @synthesize bodyView=_bodyView;
@property(retain, nonatomic) UITableView *suggestionTableView; // @synthesize suggestionTableView=_suggestionTableView;
@property(retain, nonatomic) TBSearchSideDoorViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) TBSearchInput *searchBar; // @synthesize searchBar=_searchBar;
@property(retain, nonatomic) NSDictionary *globalParams; // @synthesize globalParams=_globalParams;
@property(retain, nonatomic) NSString *from; // @synthesize from=_from;
@property(retain, nonatomic) NSString *q; // @synthesize q=_q;
@property(nonatomic) _Bool fromsearch; // @synthesize fromsearch=_fromsearch;
@property(nonatomic) __weak id <TBXSearchCommonSearchDoorViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)clickOnWidget:(id)arg1;
- (void)toggleSubmodule:(id)arg1;
- (id)createRequestEarlySearchServiceWithUrl:(id)arg1;
- (void)openURLAndPop:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)updateQuery:(id)arg1;
- (void)clickMagic:(id)arg1 IndexPath:(id)arg2 params:(id)arg3;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)shouldUpdateSuggest;
- (void)shouldUpdateSearchDoor;
- (void)searchWithKeyWord:(id)arg1 AndSearchParams:(id)arg2;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (id)getCleanGlobalParams;
- (void)loadDefaultSuggestion;
- (void)textFieldEditingChanged:(id)arg1;
- (void)navBackItemClick:(id)arg1;
- (void)navBackInterception;
- (void)configNavBar;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)init;
- (id)initWithNavigatorURL:(id)arg1 query:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

