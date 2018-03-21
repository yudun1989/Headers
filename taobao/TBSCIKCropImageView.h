//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UIScrollViewDelegate-Protocol.h"

@class NSString, TBSCIKCropImageMaskView, UIImage, UIImageView, UIScrollView;

@interface TBSCIKCropImageView : UIView <UIScrollViewDelegate>
{
    UIScrollView *_scrollView;
    UIImageView *_imageView;
    TBSCIKCropImageMaskView *_maskView;
    UIImage *_image;
    struct UIEdgeInsets _imageInset;
    struct CGSize _cropSize;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)viewForZoomingInScrollView:(id)arg1;
- (void)scrollViewDidZoom:(id)arg1;
- (id)cropImage;
- (id)Image;
- (void)setCropSize:(struct CGSize)arg1;
- (void)setImage:(id)arg1;
- (id)loadImageView:(id)arg1;
- (id)scrollView;
- (void)setFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

