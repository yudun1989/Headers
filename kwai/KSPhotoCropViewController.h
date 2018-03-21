//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "KSBaseViewController.h"

#import "UIScrollViewDelegate-Protocol.h"

@class NSString, UIImage, UIImageView, UIScrollView;

@interface KSPhotoCropViewController : KSBaseViewController <UIScrollViewDelegate>
{
    double _imageInitialScale;
    _Bool _useBlackNavigationButton;
    UIImage *_image;
    CDUnknownBlockType _delegateBlock;
    CDUnknownBlockType _cancelBlock;
    UIImageView *_imageView;
    UIScrollView *_scrollView;
    UIImageView *_cropOverlayView;
    struct CGSize _minSizeInPixel;
    struct CGRect _cropRect;
}

+ (struct CGRect)cropRectWithAspectRatio:(double)arg1;
@property(retain, nonatomic) UIImageView *cropOverlayView; // @synthesize cropOverlayView=_cropOverlayView;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(copy, nonatomic) CDUnknownBlockType cancelBlock; // @synthesize cancelBlock=_cancelBlock;
@property(copy, nonatomic) CDUnknownBlockType delegateBlock; // @synthesize delegateBlock=_delegateBlock;
@property(nonatomic) struct CGSize minSizeInPixel; // @synthesize minSizeInPixel=_minSizeInPixel;
@property(nonatomic) _Bool useBlackNavigationButton; // @synthesize useBlackNavigationButton=_useBlackNavigationButton;
@property(readonly, nonatomic) struct CGRect cropRect; // @synthesize cropRect=_cropRect;
@property(readonly, nonatomic) UIImage *image; // @synthesize image=_image;
- (void).cxx_destruct;
- (id)viewForZoomingInScrollView:(id)arg1;
- (void)setMaxMinZoomScalesForCurrentBounds;
- (void)viewWillAppear:(_Bool)arg1;
- (void)didTapBackNagigationButton:(id)arg1;
- (void)didTapDoneButton:(id)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithImage:(id)arg1 cropRect:(struct CGRect)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

