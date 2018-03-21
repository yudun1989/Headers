//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <QQMainProject/TBStoryMusicCollectionViewCellDelegate-Protocol.h>
#import <QQMainProject/UICollectionViewDataSource-Protocol.h>
#import <QQMainProject/UICollectionViewDelegate-Protocol.h>

@class NSArray, NSString, UICollectionView;
@protocol TBStoryMusicListViewDelegate;

@interface TBStoryMusicListView : UIView <UICollectionViewDelegate, UICollectionViewDataSource, TBStoryMusicCollectionViewCellDelegate>
{
    UICollectionView *_collectionView;
    _Bool _isFirstLoad;
    _Bool _allMute;
    NSArray *_dataList;
    id <TBStoryMusicListViewDelegate> _delegate;
    long long _selectedMusic;
    long long _selectedMusicId;
    unsigned long long _mediaType;
}

@property(nonatomic) unsigned long long mediaType; // @synthesize mediaType=_mediaType;
@property(nonatomic) long long selectedMusicId; // @synthesize selectedMusicId=_selectedMusicId;
@property(nonatomic) long long selectedMusic; // @synthesize selectedMusic=_selectedMusic;
@property(nonatomic) _Bool allMute; // @synthesize allMute=_allMute;
@property(nonatomic) __weak id <TBStoryMusicListViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSArray *dataList; // @synthesize dataList=_dataList;
- (void).cxx_destruct;
- (void)resetMusicListView;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)musicListViewDidSelectItem:(long long)arg1;
- (void)selectedCellAlignCenter;
- (void)reloadData;
- (void)initUI;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

