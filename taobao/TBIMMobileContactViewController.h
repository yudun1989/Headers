//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MUKSearchViewController.h"

#import "MUKIndexBarDelegate-Protocol.h"
#import "MUKSearchViewControllerDelegate-Protocol.h"
#import "TBIMMobileContactServiceDelegate-Protocol.h"
#import "TBIMMobileContactTableViewCellDelegate-Protocol.h"
#import "TBIMRelationServiceDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSArray, NSMutableArray, NSMutableDictionary, NSSet, NSString, TBIMMoblieContactsFriendsProfileView, TBModelStatusHandler;
@protocol MUKIndexBarDelegate, TBIMBindMobileUser, TBIMUserAdapter, UITableViewDataSource, UITableViewDelegate;

@interface TBIMMobileContactViewController : MUKSearchViewController <UITableViewDataSource, UITableViewDelegate, MUKIndexBarDelegate, MUKSearchViewControllerDelegate, TBIMMobileContactTableViewCellDelegate, TBIMMobileContactServiceDelegate, TBIMRelationServiceDelegate>
{
    _Bool _needSearchRealTime;
    _Bool _isLeadingToAddTaoFriends;
    NSString *_searchBarTip;
    id <UITableViewDataSource> _showTableViewDataSource;
    id <UITableViewDelegate> _showTableViewDelegate;
    id <UITableViewDataSource> _searchTableViewDataSource;
    id <UITableViewDelegate> _searchTableViewDelegate;
    id <MUKIndexBarDelegate> _indexBarDelegate;
    NSArray *_mobileContacts;
    NSSet<TBIMBindMobileUser> *_bindMobileUsers;
    NSArray<TBIMUserAdapter> *_imUsers;
    NSMutableArray *_indexArray;
    NSMutableArray *_showMobileContactModels;
    NSMutableArray *_searchMobileContactModels;
    NSMutableDictionary *_mapPendingPhone;
    TBIMMoblieContactsFriendsProfileView *_friendProfileView;
    TBModelStatusHandler *_statusHandler;
}

@property(retain, nonatomic) TBModelStatusHandler *statusHandler; // @synthesize statusHandler=_statusHandler;
@property(retain, nonatomic) TBIMMoblieContactsFriendsProfileView *friendProfileView; // @synthesize friendProfileView=_friendProfileView;
@property(nonatomic) _Bool isLeadingToAddTaoFriends; // @synthesize isLeadingToAddTaoFriends=_isLeadingToAddTaoFriends;
@property(retain, nonatomic) NSMutableDictionary *mapPendingPhone; // @synthesize mapPendingPhone=_mapPendingPhone;
@property(retain, nonatomic) NSMutableArray *searchMobileContactModels; // @synthesize searchMobileContactModels=_searchMobileContactModels;
@property(retain, nonatomic) NSMutableArray *showMobileContactModels; // @synthesize showMobileContactModels=_showMobileContactModels;
@property(retain, nonatomic) NSMutableArray *indexArray; // @synthesize indexArray=_indexArray;
@property(retain, nonatomic) NSArray<TBIMUserAdapter> *imUsers; // @synthesize imUsers=_imUsers;
@property(retain, nonatomic) NSSet<TBIMBindMobileUser> *bindMobileUsers; // @synthesize bindMobileUsers=_bindMobileUsers;
@property(retain, nonatomic) NSArray *mobileContacts; // @synthesize mobileContacts=_mobileContacts;
@property(nonatomic) __weak id <MUKIndexBarDelegate> indexBarDelegate; // @synthesize indexBarDelegate=_indexBarDelegate;
@property(nonatomic) __weak id <UITableViewDelegate> searchTableViewDelegate; // @synthesize searchTableViewDelegate=_searchTableViewDelegate;
@property(nonatomic) __weak id <UITableViewDataSource> searchTableViewDataSource; // @synthesize searchTableViewDataSource=_searchTableViewDataSource;
@property(nonatomic) __weak id <UITableViewDelegate> showTableViewDelegate; // @synthesize showTableViewDelegate=_showTableViewDelegate;
@property(nonatomic) __weak id <UITableViewDataSource> showTableViewDataSource; // @synthesize showTableViewDataSource=_showTableViewDataSource;
@property(copy, nonatomic) NSString *searchBarTip; // @synthesize searchBarTip=_searchBarTip;
@property(nonatomic) _Bool needSearchRealTime; // @synthesize needSearchRealTime=_needSearchRealTime;
- (void).cxx_destruct;
- (void)taoFriendDataUpdate:(id)arg1;
- (void)requestTaobaoUserWithMobileContact:(id)arg1;
- (void)readMobileContactFail:(id)arg1;
- (void)readMobileContact:(id)arg1;
- (void)mobileContactTableViewCell:(id)arg1 tappedAddButtonForModel:(id)arg2;
- (void)searchDataWithText:(id)arg1 result:(CDUnknownBlockType)arg2;
- (void)indexBar:(id)arg1 didSelectIndex:(unsigned long long)arg2;
- (id)stringForIndex:(unsigned long long)arg1;
- (unsigned long long)numberOfIndexesForIndexBar:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)showRequestViewWithModel:(id)arg1 selfName:(id)arg2;
- (void)assembleMobileContactModels;
- (void)loadData;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithNavigatorURL:(id)arg1 query:(id)arg2 nativeParams:(id)arg3;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

