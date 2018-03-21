//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <QQMainProject/UICollectionViewDataSource-Protocol.h>
#import <QQMainProject/UICollectionViewDelegate-Protocol.h>
#import <QQMainProject/UICollectionViewDelegateFlowLayout-Protocol.h>

@class NSArray, NSMutableArray, NSString, UICollectionView;

@interface QQCampusTopicCollectionView : UIView <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout>
{
    struct NSArray *_topics;
    CDUnknownBlockType _designSizeBlock;
    CDUnknownBlockType _colorBlock;
    CDUnknownBlockType _webImageViewBlock;
    CDUnknownBlockType _selectionBlock;
    UICollectionView *_collectionView;
    NSMutableArray *_selectedTopicIds;
}

@property(retain, nonatomic) NSMutableArray *selectedTopicIds; // @synthesize selectedTopicIds=_selectedTopicIds;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(copy, nonatomic) CDUnknownBlockType selectionBlock; // @synthesize selectionBlock=_selectionBlock;
@property(copy, nonatomic) CDUnknownBlockType webImageViewBlock; // @synthesize webImageViewBlock=_webImageViewBlock;
@property(copy, nonatomic) CDUnknownBlockType colorBlock; // @synthesize colorBlock=_colorBlock;
@property(copy, nonatomic) CDUnknownBlockType designSizeBlock; // @synthesize designSizeBlock=_designSizeBlock;
@property(retain, nonatomic) NSArray *topics; // @synthesize topics=_topics;
- (void).cxx_destruct;
- (void)loadTopicViewCell:(int)arg1 cell:(id)arg2 index:(unsigned long long)arg3;
- (id)loadCollectionView;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(long long)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (_Bool)isTopicSelectedById:(id)arg1;
- (void)setTopicSelected:(id)arg1 selected:(_Bool)arg2;
- (void)sizeToFit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

