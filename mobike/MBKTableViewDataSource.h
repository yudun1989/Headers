//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "UITableViewDataSource-Protocol.h"

@class NSMutableArray, NSString;
@protocol MBKStickerCellDelegate, UICollectionViewDelegate><UICollectionViewDelegateFlowLayout;

@interface MBKTableViewDataSource : NSObject <UITableViewDataSource>
{
    NSMutableArray *_items;
    NSMutableArray *_historyItems;
    NSMutableArray *_ongoingItems;
    NSString *_stikerIdentifier;
    CDUnknownBlockType _configureCellBlock;
    id <MBKStickerCellDelegate> _cellDelegate;
    id <UICollectionViewDelegate><UICollectionViewDelegateFlowLayout> _collectionDelegate;
}

@property(nonatomic) id <UICollectionViewDelegate><UICollectionViewDelegateFlowLayout> collectionDelegate; // @synthesize collectionDelegate=_collectionDelegate;
@property(nonatomic) id <MBKStickerCellDelegate> cellDelegate; // @synthesize cellDelegate=_cellDelegate;
@property(copy, nonatomic) CDUnknownBlockType configureCellBlock; // @synthesize configureCellBlock=_configureCellBlock;
@property(copy, nonatomic) NSString *stikerIdentifier; // @synthesize stikerIdentifier=_stikerIdentifier;
@property(retain, nonatomic) NSMutableArray *ongoingItems; // @synthesize ongoingItems=_ongoingItems;
@property(retain, nonatomic) NSMutableArray *historyItems; // @synthesize historyItems=_historyItems;
@property(retain, nonatomic) NSMutableArray *items; // @synthesize items=_items;
- (void).cxx_destruct;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)extractOngoingItems:(id)arg1;
- (double)heightForHeaderIndexPath:(long long)arg1;
- (double)heightForIndexPath:(id)arg1;
- (void)removeAllItems;
- (void)appendItems:(id)arg1;
- (id)itemAtIndexPath:(id)arg1;
- (id)initWithCellIdentifier:(id)arg1 configureCellBlock:(CDUnknownBlockType)arg2 cellDelegate:(id)arg3 collectionDelegate:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

