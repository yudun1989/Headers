//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class UIButton, UILabel;

@interface MBKStickerItemViewCell : UICollectionViewCell
{
    double cellwidth;
    UIButton *_stickerButton;
    UILabel *_stickerTitle;
}

@property(retain, nonatomic) UILabel *stickerTitle; // @synthesize stickerTitle=_stickerTitle;
@property(retain, nonatomic) UIButton *stickerButton; // @synthesize stickerButton=_stickerButton;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)loadCellData:(id)arg1 isCollected:(_Bool)arg2;
- (void)clearData;
- (id)initWithFrame:(struct CGRect)arg1;

@end

