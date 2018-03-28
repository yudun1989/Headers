//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "SSImpressionProtocol-Protocol.h"
#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"

@class NSString, TSVRecommendCardCollectionView, TSVRecommendCardViewModel;

@interface TSVRecommendCardViewController : UIViewController <UICollectionViewDelegate, UICollectionViewDataSource, SSImpressionProtocol>
{
    TSVRecommendCardViewModel *_viewModel;
    TSVRecommendCardCollectionView *_collectionView;
}

@property(retain, nonatomic) TSVRecommendCardCollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) TSVRecommendCardViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void).cxx_destruct;
- (void)dealloc;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)needRerecordImpressions;
- (void)resetContentOffset;
- (void)scrollAfterFollowed;
- (struct CGPoint)adjustedContentOffsetForContentOffset:(struct CGPoint)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)viewDidLayoutSubviews;
- (void)refreshData;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

