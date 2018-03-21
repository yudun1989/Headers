//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIImageView.h>

#import "AliDetailMultimediaBrowserViewControllerBaseDelegate-Protocol.h"

@class AliDetailMultimediaBrowserViewController, AliDetailProductQualityContentModel, AliDetailQualityBottomView, NSArray, NSMutableArray, NSString, UILabel;

@interface AliDetailQualityItemImageView : UIImageView <AliDetailMultimediaBrowserViewControllerBaseDelegate>
{
    long long _groupIndex;
    NSString *_eventToken;
    AliDetailProductQualityContentModel *_itemModel;
    unsigned long long _currentImageIndex;
    NSArray *_tappedImagePaths;
    NSArray *_allImagePaths;
    NSArray *_imageDesc;
    NSArray *_imageTags;
    NSMutableArray *_bigImagePaths;
    UILabel *_imageDescLabel;
    AliDetailQualityBottomView *_subTitleView;
    AliDetailMultimediaBrowserViewController *_bigBrowserVC;
}

@property(retain, nonatomic) AliDetailMultimediaBrowserViewController *bigBrowserVC; // @synthesize bigBrowserVC=_bigBrowserVC;
@property(retain, nonatomic) AliDetailQualityBottomView *subTitleView; // @synthesize subTitleView=_subTitleView;
@property(retain, nonatomic) UILabel *imageDescLabel; // @synthesize imageDescLabel=_imageDescLabel;
@property(retain, nonatomic) NSMutableArray *bigImagePaths; // @synthesize bigImagePaths=_bigImagePaths;
@property(retain, nonatomic) NSArray *imageTags; // @synthesize imageTags=_imageTags;
@property(retain, nonatomic) NSArray *imageDesc; // @synthesize imageDesc=_imageDesc;
@property(retain, nonatomic) NSArray *allImagePaths; // @synthesize allImagePaths=_allImagePaths;
@property(retain, nonatomic) NSArray *tappedImagePaths; // @synthesize tappedImagePaths=_tappedImagePaths;
@property(nonatomic) unsigned long long currentImageIndex; // @synthesize currentImageIndex=_currentImageIndex;
@property(retain, nonatomic) AliDetailProductQualityContentModel *itemModel; // @synthesize itemModel=_itemModel;
@property(retain, nonatomic) NSString *eventToken; // @synthesize eventToken=_eventToken;
@property(nonatomic) long long groupIndex; // @synthesize groupIndex=_groupIndex;
- (void).cxx_destruct;
- (void)photoBrowserWillDismiss:(id)arg1 imageInfo:(id)arg2;
- (id)photoBrowser:(id)arg1 subTitleDescViewForIndex:(unsigned long long)arg2;
- (id)photoBrowser:(id)arg1 captionForIndex:(unsigned long long)arg2;
- (void)setAllImageDesc:(id)arg1;
- (void)setQualityItemModel:(id)arg1;
- (id)imageTag;
- (id)getMaskImageView;
- (void)setupBigPhotoBrowser;
- (void)imageTaped;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

