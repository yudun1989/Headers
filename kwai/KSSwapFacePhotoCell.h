//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class KSSwapFacePhotoCellItem, NSString, UIImageView;

@interface KSSwapFacePhotoCell : UICollectionViewCell
{
    UIImageView *_imageView;
    UIImageView *_selectedBorder;
    KSSwapFacePhotoCellItem *_cellItem;
    NSString *_selectedObserver;
}

@property(retain, nonatomic) NSString *selectedObserver; // @synthesize selectedObserver=_selectedObserver;
@property(retain, nonatomic) KSSwapFacePhotoCellItem *cellItem; // @synthesize cellItem=_cellItem;
@property(retain, nonatomic) UIImageView *selectedBorder; // @synthesize selectedBorder=_selectedBorder;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

@end

