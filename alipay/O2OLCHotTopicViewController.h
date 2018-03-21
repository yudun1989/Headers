//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegateFlowLayout-Protocol.h"

@class NSArray, NSString, O2OLCTopicFetchModel, UICollectionView;
@protocol O2OLCHotTopicViewControllerDelegate;

@interface O2OLCHotTopicViewController : UIViewController <UICollectionViewDelegateFlowLayout, UICollectionViewDataSource>
{
    id <O2OLCHotTopicViewControllerDelegate> _delegate;
    NSArray *_selectedTopics;
    UICollectionView *_collectionView;
    NSArray *_topics;
    O2OLCTopicFetchModel *_fetchModel;
}

@property(retain, nonatomic) O2OLCTopicFetchModel *fetchModel; // @synthesize fetchModel=_fetchModel;
@property(copy, nonatomic) NSArray *topics; // @synthesize topics=_topics;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(copy, nonatomic) NSArray *selectedTopics; // @synthesize selectedTopics=_selectedTopics;
@property(nonatomic) __weak id <O2OLCHotTopicViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (void)loadData;
- (void)viewDidLoad;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

