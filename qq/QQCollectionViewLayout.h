//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class QQCollectionView;

@interface QQCollectionViewLayout : NSObject
{
    QQCollectionView *_collectionView;
}

@property(readonly, nonatomic) QQCollectionView *collectionView; // @synthesize collectionView=_collectionView;
- (struct CGSize)collectionViewContentSize;
- (struct CGRect)frameForIndexPath:(id)arg1 total:(long long)arg2;
- (void)invalidateLayout;
- (id)initWithCollectionView:(id)arg1;
- (void)setCollectionView:(id)arg1;

@end

