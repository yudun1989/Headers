//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionView.h>

#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"

@class NSString, WDPostQuestionReviewStatusViewModel;

@interface WDQuestionReviewStateCollectionView : UICollectionView <UICollectionViewDataSource, UICollectionViewDelegate>
{
    WDPostQuestionReviewStatusViewModel *_viewModel;
}

@property(retain, nonatomic) WDPostQuestionReviewStatusViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void).cxx_destruct;
- (id)tagEntities;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)initWithViewModel:(id)arg1 frame:(struct CGRect)arg2;
- (id)initWithFrame:(struct CGRect)arg1 collectionViewLayout:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

