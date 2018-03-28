//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class NSString, TTAssetModel, UIImageView, UILabel, UIView;

@interface TTImagePickerCell : UICollectionViewCell
{
    UIView *selectView;
    UIImageView *typeBg;
    _Bool _isSelected;
    _Bool _isMask;
    _Bool _isCellRefresh;
    _Bool _isAllMode;
    int _imageRequestID;
    TTAssetModel *_model;
    UIImageView *_img;
    UIImageView *_selectImg;
    UIView *_mask;
    UILabel *_typeLabel;
    NSString *_representedAssetIdentifier;
}

@property(nonatomic) int imageRequestID; // @synthesize imageRequestID=_imageRequestID;
@property(copy, nonatomic) NSString *representedAssetIdentifier; // @synthesize representedAssetIdentifier=_representedAssetIdentifier;
@property(retain, nonatomic) UILabel *typeLabel; // @synthesize typeLabel=_typeLabel;
@property(retain, nonatomic) UIView *mask; // @synthesize mask=_mask;
@property(retain, nonatomic) UIImageView *selectImg; // @synthesize selectImg=_selectImg;
@property(nonatomic) _Bool isAllMode; // @synthesize isAllMode=_isAllMode;
@property(nonatomic) _Bool isCellRefresh; // @synthesize isCellRefresh=_isCellRefresh;
@property(readonly, nonatomic) UIImageView *img; // @synthesize img=_img;
@property(nonatomic) _Bool isMask; // @synthesize isMask=_isMask;
@property(nonatomic) _Bool isSelected; // @synthesize isSelected=_isSelected;
@property(retain, nonatomic) TTAssetModel *model; // @synthesize model=_model;
- (void).cxx_destruct;
- (void)dealloc;
- (void)selectedCountDidChange:(id)arg1;
- (void)imageAction;
- (void)interceptTapAction;
- (void)selectAction;
- (void)_initViews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

