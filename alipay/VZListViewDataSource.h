//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "VZListViewDataSource-Protocol.h"

@class NSDictionary, NSMutableDictionary, NSString, VZListViewController;

@interface VZListViewDataSource : NSObject <VZListViewDataSource>
{
    NSMutableDictionary *_itemsForSectionInternal;
    VZListViewController *_controller;
}

@property(nonatomic) __weak VZListViewController *controller; // @synthesize controller=_controller;
- (void).cxx_destruct;
- (void)tableViewControllerDidLoadModel:(id)arg1;
- (Class)cellClassForItem:(id)arg1 AtIndex:(id)arg2;
- (id)itemForCellAtIndexPath:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)reloadAllItems;
- (void)removeAllItems;
- (void)reloadItemsForSection:(unsigned long long)arg1;
- (_Bool)removeItemAtIndexPath:(id)arg1;
- (_Bool)replaceItem:(id)arg1 AtIndexPath:(id)arg2;
- (_Bool)insertItem:(id)arg1 AtIndexPath:(id)arg2;
- (id)itemsForSection:(long long)arg1;
- (_Bool)setItems:(id)arg1 ForSection:(long long)arg2;
- (_Bool)removeSectionByIndex:(long long)arg1;
- (_Bool)insertSectionAtIndex:(long long)arg1 withItems:(id)arg2;
- (void)dealloc;
- (id)init;
@property(readonly, nonatomic) NSDictionary *itemsForSection;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

