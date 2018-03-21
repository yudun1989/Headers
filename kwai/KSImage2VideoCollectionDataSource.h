//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "LXReorderableCollectionViewDataSource-Protocol.h"

@class KSCachedImageArray, NSMutableArray, NSString, UICollectionView;

@interface KSImage2VideoCollectionDataSource : NSObject <LXReorderableCollectionViewDataSource>
{
    _Bool _isAppendingAsset;
    KSCachedImageArray *_cachedImages;
    NSMutableArray *_cachedAssets;
    UICollectionView *_collectionView;
}

+ (id)assetIdWithAsset:(id)arg1;
@property(nonatomic) _Bool isAppendingAsset; // @synthesize isAppendingAsset=_isAppendingAsset;
@property(nonatomic) __weak UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(readonly, nonatomic) NSMutableArray *cachedAssets; // @synthesize cachedAssets=_cachedAssets;
@property(readonly, nonatomic) KSCachedImageArray *cachedImages; // @synthesize cachedImages=_cachedImages;
- (void).cxx_destruct;
- (void)willAddAsset;
- (void)collectionView:(id)arg1 itemAtIndexPath:(id)arg2 didMoveToIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)initWithCollectionView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

