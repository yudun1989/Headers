//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBTableViewController.h"

#import "PRLMTableViewWrapperDelegate-Protocol.h"
#import "WBContactPickerViewControllerDelegate-Protocol.h"

@class NSArray, NSDictionary, NSMutableArray, NSString, WBDirectionalGroup, WBPRLMTableViewWrapper, WBSelectGroupSuperTopic;
@protocol WBSelectGroupViewControllerDelegate;

@interface WBSelectGroupViewController : WBTableViewController <WBContactPickerViewControllerDelegate, PRLMTableViewWrapperDelegate>
{
    id groupManagerNetworkHandle;
    _Bool _queryTopic;
    _Bool _refreshing;
    _Bool _hasNextPage;
    _Bool _needToRemoveDeplicate;
    id <WBSelectGroupViewControllerDelegate> _delegate;
    WBDirectionalGroup *_selectedGroup;
    WBSelectGroupSuperTopic *_selectedTopic;
    unsigned long long _selectedGroupType;
    WBPRLMTableViewWrapper *_prlmWrapper;
    NSMutableArray *_groupObjs;
    unsigned long long _pageNumber;
    NSDictionary *_groupTypeInfos;
    NSArray *_groupTypeNames;
    NSArray *_groupTypeDescription;
    NSMutableArray *_supertopicObjs;
    NSMutableArray *_supertopicShowObjs;
    CDStruct_b54fce71 _layout;
}

@property(retain, nonatomic) NSMutableArray *supertopicShowObjs; // @synthesize supertopicShowObjs=_supertopicShowObjs;
@property(retain, nonatomic) NSMutableArray *supertopicObjs; // @synthesize supertopicObjs=_supertopicObjs;
@property(nonatomic) CDStruct_b54fce71 layout; // @synthesize layout=_layout;
@property(retain, nonatomic) NSArray *groupTypeDescription; // @synthesize groupTypeDescription=_groupTypeDescription;
@property(retain, nonatomic) NSArray *groupTypeNames; // @synthesize groupTypeNames=_groupTypeNames;
@property(retain, nonatomic) NSDictionary *groupTypeInfos; // @synthesize groupTypeInfos=_groupTypeInfos;
@property(nonatomic) _Bool needToRemoveDeplicate; // @synthesize needToRemoveDeplicate=_needToRemoveDeplicate;
@property(nonatomic) _Bool hasNextPage; // @synthesize hasNextPage=_hasNextPage;
@property(nonatomic) unsigned long long pageNumber; // @synthesize pageNumber=_pageNumber;
@property(retain, nonatomic) NSMutableArray *groupObjs; // @synthesize groupObjs=_groupObjs;
@property(retain, nonatomic) WBPRLMTableViewWrapper *prlmWrapper; // @synthesize prlmWrapper=_prlmWrapper;
@property(nonatomic) unsigned long long selectedGroupType; // @synthesize selectedGroupType=_selectedGroupType;
@property(retain, nonatomic) WBSelectGroupSuperTopic *selectedTopic; // @synthesize selectedTopic=_selectedTopic;
@property(retain, nonatomic) WBDirectionalGroup *selectedGroup; // @synthesize selectedGroup=_selectedGroup;
@property(nonatomic, getter=isRefreshing) _Bool refreshing; // @synthesize refreshing=_refreshing;
@property(nonatomic) _Bool queryTopic; // @synthesize queryTopic=_queryTopic;
@property(nonatomic) __weak id <WBSelectGroupViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (long long)lastSections;
- (id)indexPathWithGroupID:(id)arg1;
- (void)didChangedGroupNotification:(id)arg1;
- (void)didQuitGroupNotification:(id)arg1;
- (void)removeObserverForGroupStateChangedNotification;
- (void)addObserverForGroupStateChangedNotification;
- (void)contactPickerViewController:(id)arg1 didCreateGroup:(id)arg2;
- (void)didPressedEditAccessory:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (CDStruct_b54fce71)layoutPreset;
- (void)backButtonPressed:(id)arg1;
- (void)fetchMoreDataWithIndex:(long long)arg1 pagesize:(long long)arg2;
- (void)fetchMoreData;
- (void)showAllTopicDatas;
- (void)setupSuertopicDatas:(id)arg1 Cache:(_Bool)arg2;
- (void)setCacheSupertopicDatas;
- (void)refreshData;
- (void)resetGroupObjsArray;
- (void)didTriggerLoadMoreInWrapper:(id)arg1;
- (void)setupUI;
- (void)setupData;
- (void)dealloc;
- (void)configSubviewsFrame;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (id)initWithSelectedGroup:(id)arg1 type:(unsigned long long)arg2;
- (id)initWithSelectedGroup:(id)arg1 type:(unsigned long long)arg2 Topic:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

