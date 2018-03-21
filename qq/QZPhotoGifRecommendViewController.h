//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QZoneViewController.h>

#import <QQMainProject/PhotoEditDelegate-Protocol.h>
#import <QQMainProject/QZPhotoGifRecommendCellDelegate-Protocol.h>
#import <QQMainProject/QZPhotoGifRecorderViewControllerDelegate-Protocol.h>
#import <QQMainProject/UICollectionViewDataSource-Protocol.h>
#import <QQMainProject/UICollectionViewDelegate-Protocol.h>

@class NSArray, NSMutableDictionary, NSString, UIButton, UICollectionView;
@protocol QZPhotoGifRecommendViewControllerDelegate;

@interface QZPhotoGifRecommendViewController : QZoneViewController <UICollectionViewDelegate, UICollectionViewDataSource, QZPhotoGifRecommendCellDelegate, PhotoEditDelegate, QZPhotoGifRecorderViewControllerDelegate>
{
    UICollectionView *_collectionView;
    UIButton *_shootBtn;
    NSArray *_gifResults;
    id <QZPhotoGifRecommendViewControllerDelegate> _delegate;
    _Bool _needRefresh;
    NSMutableDictionary *_imagesIDDict;
    long long _cacheImagesCount;
    unsigned long long _scrollDirection;
    double _previousOffsetY;
}

+ (id)mediaTypes;
@property(nonatomic) __weak id <QZPhotoGifRecommendViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)gifRecordBtnClick;
- (void)gifSearchBtnClick;
- (void)verticalCenterImageAndTitleWithSpacing:(float)arg1 btn:(id)arg2;
- (id)shootBtn;

// Remaining properties
@property(retain, nonatomic) UICollectionView *collectionView; // @dynamic collectionView;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(retain, nonatomic) NSArray *gifResults; // @dynamic gifResults;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) NSMutableDictionary *imagesIDDict; // @dynamic imagesIDDict;
@property(readonly) Class superclass;

@end

