//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"

@class APVideoPlayer, NSMutableArray, NSString, UICollectionView;
@protocol APSightBoxDelegate;

@interface APSightBoxView : UIView <UICollectionViewDataSource, UICollectionViewDelegate>
{
    UICollectionView *w_container;
    NSMutableArray *w_dataAry;
    NSMutableArray *w_selectedAry;
    NSMutableArray *w_itemViewAry;
    long long w_selectedItem;
    APVideoPlayer *w_selectedPlayer;
    UIView *w_previewContent;
    _Bool w_editMode;
    _Bool w_leaveEditMode;
    double w_itemWidth;
    id <APSightBoxDelegate> _delegate;
    NSString *_business;
    NSString *_selectTag;
}

@property(copy, nonatomic) NSString *selectTag; // @synthesize selectTag=_selectTag;
@property(retain, nonatomic) NSString *business; // @synthesize business=_business;
@property(nonatomic) __weak id <APSightBoxDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)dealloc;
- (void)makeContainer;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForFooterInSection:(long long)arg3;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (void)setTopInset:(double)arg1;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (id)makeCell:(long long)arg1;
- (id)dateFormatForVoiceOver:(id)arg1;
- (void)clearPlayer;
- (void)reloadContainer;
- (void)scrollViewDidScroll:(id)arg1;
- (void)onSelectItem:(id)arg1;
- (void)setItemSelected:(long long)arg1;
- (void)onDeleteButton:(id)arg1;
- (id)getClickAnimation;
- (id)getPreviewClickAnimation;
- (_Bool)isInEditMode;
- (void)enterEditMode;
- (void)leaveEditMode;
- (void)undoDeleted;
- (void)confirmDeleted;
- (void)reloadContent;
- (void)scrollToBottom:(_Bool)arg1;
- (void)reflashState;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

