//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QQCollectionViewCell.h>

@class NearbyAlbumInfoComponent, NearbyCollectionViewCell, UILabel, UIView;

@interface NearbyAblumEditCollectionViewCell : QQCollectionViewCell
{
    UIView *_tipbgView;
    NearbyCollectionViewCell *_imageViewForPic;
    UILabel *_labelForTip;
    NearbyAlbumInfoComponent *_albumInfoComponent;
}

@property(nonatomic) __weak NearbyAlbumInfoComponent *albumInfoComponent; // @synthesize albumInfoComponent=_albumInfoComponent;
- (void).cxx_destruct;
- (void)setCellImageModel:(id)arg1;
- (void)layoutSubviews;
- (void)initViews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

