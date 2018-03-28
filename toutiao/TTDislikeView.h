//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SSViewBase.h"

#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"
#import "UICollectionViewDelegateFlowLayout-Protocol.h"

@class NSArray, NSString, TTAlphaThemedButton, TTDetailModel, UICollectionView;

@interface TTDislikeView : SSViewBase <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout>
{
    _Bool _hasComplainMessage;
    unsigned long long _type;
    TTDetailModel *_detailModel;
    CDUnknownBlockType _cancelComplete;
    CDUnknownBlockType _commitComplete;
    CDUnknownBlockType _extraComeplete;
    NSArray *_dislikeOptions;
    NSArray *_reportOptions;
    UICollectionView *_collectionView;
    TTAlphaThemedButton *_cancelButton;
}

@property(nonatomic) _Bool hasComplainMessage; // @synthesize hasComplainMessage=_hasComplainMessage;
@property(retain, nonatomic) TTAlphaThemedButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) NSArray *reportOptions; // @synthesize reportOptions=_reportOptions;
@property(retain, nonatomic) NSArray *dislikeOptions; // @synthesize dislikeOptions=_dislikeOptions;
@property(copy, nonatomic) CDUnknownBlockType extraComeplete; // @synthesize extraComeplete=_extraComeplete;
@property(copy, nonatomic) CDUnknownBlockType commitComplete; // @synthesize commitComplete=_commitComplete;
@property(copy, nonatomic) CDUnknownBlockType cancelComplete; // @synthesize cancelComplete=_cancelComplete;
@property(retain, nonatomic) TTDetailModel *detailModel; // @synthesize detailModel=_detailModel;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)setComplainMessage:(_Bool)arg1;
- (void)insertDislikeOptions:(id)arg1 reportOptions:(id)arg2;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

