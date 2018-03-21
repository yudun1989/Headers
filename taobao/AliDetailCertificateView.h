//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegateFlowLayout-Protocol.h"

@class NSString, UIActivityIndicatorView, UIButton, UICollectionView, UILabel;
@protocol AliDetailCertificateViewDataSource;

@interface AliDetailCertificateView : UIView <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout>
{
    _Bool _showIndicator;
    id <AliDetailCertificateViewDataSource> _dataSource;
    CDUnknownBlockType _backgroundTapBlock;
    long long _index;
    UIActivityIndicatorView *_activityIndicatorView;
    UIButton *_backButton;
    UICollectionView *_imageCollectionView;
    UIView *_titleAndPageContentView;
    UILabel *_titleLabel;
    UILabel *_pageLabel;
    UIView *_tmallContentView;
    UILabel *_tmallLabel;
}

@property(nonatomic) __weak UILabel *tmallLabel; // @synthesize tmallLabel=_tmallLabel;
@property(nonatomic) __weak UIView *tmallContentView; // @synthesize tmallContentView=_tmallContentView;
@property(nonatomic) __weak UILabel *pageLabel; // @synthesize pageLabel=_pageLabel;
@property(nonatomic) __weak UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) __weak UIView *titleAndPageContentView; // @synthesize titleAndPageContentView=_titleAndPageContentView;
@property(nonatomic) __weak UICollectionView *imageCollectionView; // @synthesize imageCollectionView=_imageCollectionView;
@property(nonatomic) __weak UIButton *backButton; // @synthesize backButton=_backButton;
@property(nonatomic) __weak UIActivityIndicatorView *activityIndicatorView; // @synthesize activityIndicatorView=_activityIndicatorView;
@property(nonatomic) long long index; // @synthesize index=_index;
@property(copy, nonatomic) CDUnknownBlockType backgroundTapBlock; // @synthesize backgroundTapBlock=_backgroundTapBlock;
@property(nonatomic) __weak id <AliDetailCertificateViewDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) _Bool showIndicator; // @synthesize showIndicator=_showIndicator;
- (void).cxx_destruct;
- (void)backgroundTap;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)reloadData;
- (void)setup;
- (void)layoutSubviews;
- (id)initWithCoder:(id)arg1;
- (id)init;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

