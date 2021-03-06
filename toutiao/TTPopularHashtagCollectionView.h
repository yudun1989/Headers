//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionView.h>

#import "SSImpressionProtocol-Protocol.h"
#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"

@class NSArray, NSString;
@protocol TTPopularHashtagTrackDelegate;

@interface TTPopularHashtagCollectionView : UICollectionView <UICollectionViewDelegate, UICollectionViewDataSource, SSImpressionProtocol>
{
    _Bool _isDisplay;
    NSString *_categoryName;
    NSArray *_cellDatas;
    id <TTPopularHashtagTrackDelegate> _trackDelegate;
}

+ (id)collectionView;
@property(nonatomic) _Bool isDisplay; // @synthesize isDisplay=_isDisplay;
@property(nonatomic) __weak id <TTPopularHashtagTrackDelegate> trackDelegate; // @synthesize trackDelegate=_trackDelegate;
@property(retain, nonatomic) NSArray *cellDatas; // @synthesize cellDatas=_cellDatas;
@property(copy, nonatomic) NSString *categoryName; // @synthesize categoryName=_categoryName;
- (void).cxx_destruct;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)needRerecordImpressions;
- (id)_categoryName;
- (id)_cellId;
- (void)didEndDisplaying;
- (void)willDisplay;
- (_Bool)modelChanged:(id)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)themeChanged:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 collectionViewLayout:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

