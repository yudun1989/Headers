//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableView.h>

#import <QQMainProject/QUIAlertViewDelegate-Protocol.h>
#import <QQMainProject/UISearchBarDelegate-Protocol.h>
#import <QQMainProject/UITableViewDataSource-Protocol.h>
#import <QQMainProject/UITableViewDelegate-Protocol.h>

@class NSArray, NSMutableDictionary, NSMutableSet, NSString;
@protocol QQStorySGMemberSelectorViewDelegate;

@interface QQStorySGMemberSelectorView : UITableView <UISearchBarDelegate, QUIAlertViewDelegate, UITableViewDataSource, UITableViewDelegate>
{
    long long _memberCount;
    long long _letterIndexCount;
    NSArray *_sectionIndexTitles;
    NSMutableDictionary *_checkStateDic;
    NSMutableSet *_checkedModelSet;
    _Bool _isSearching;
    _Bool _isMultiSelectMode;
    NSArray *_sectionModelArray;
    UITableView *_searchTableView;
    id <QQStorySGMemberSelectorViewDelegate> _memberDelegate;
}

@property(nonatomic) __weak id <QQStorySGMemberSelectorViewDelegate> memberDelegate; // @synthesize memberDelegate=_memberDelegate;
@property(retain, nonatomic) UITableView *searchTableView; // @synthesize searchTableView=_searchTableView;
@property(nonatomic) _Bool isMultiSelectMode; // @synthesize isMultiSelectMode=_isMultiSelectMode;
@property(nonatomic) _Bool isSearching; // @synthesize isSearching=_isSearching;
@property(retain, nonatomic) NSArray *sectionModelArray; // @synthesize sectionModelArray=_sectionModelArray;
- (void).cxx_destruct;
- (id)checkedMembers;
- (void)setCellCheckState:(id)arg1;
- (_Bool)isCellChecked:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (long long)tableView:(id)arg1 sectionForSectionIndexTitle:(id)arg2 atIndex:(long long)arg3;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)sectionIndexTitlesForTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)modelByIndexPath:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

