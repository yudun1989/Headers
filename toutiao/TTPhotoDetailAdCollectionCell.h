//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

#import "TTPhotoDetailCellProtocol-Protocol.h"

@class NSString, TTShowImageView;

@interface TTPhotoDetailAdCollectionCell : UICollectionViewCell <TTPhotoDetailCellProtocol>
{
    TTShowImageView *_imageScrollView;
    struct UIEdgeInsets _contentInset;
}

@property(nonatomic) struct UIEdgeInsets contentInset; // @synthesize contentInset=_contentInset;
@property(retain, nonatomic) TTShowImageView *imageScrollView; // @synthesize imageScrollView=_imageScrollView;
- (void).cxx_destruct;
- (void)refreshRightDistanceWithPersent:(double)arg1;
- (void)refreshBlackOpaqueWithPersent:(double)arg1;
- (void)configurePhotoAdView;
- (void)ScrollViewDidScrollView:(id)arg1 ScrollDirection:(int)arg2 WithScrollPersent:(double)arg3 WithContainView:(id)arg4 WithScrollBlock:(CDUnknownBlockType)arg5;
- (void)refreshWithData:(id)arg1 WithContainView:(id)arg2 WithCollectionView:(id)arg3 WithIndexPath:(id)arg4 WithImageScrollViewDelegate:(id)arg5 WithRefreshBlock:(CDUnknownBlockType)arg6;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

