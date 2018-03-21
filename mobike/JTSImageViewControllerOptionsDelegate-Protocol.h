//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class JTSImageViewController, UIColor, UIFont;

@protocol JTSImageViewControllerOptionsDelegate <NSObject>

@optional
- (void)praiseDisdainProxy:(id)arg1;
- (double)backgroundBlurRadiusForImageViewer:(JTSImageViewController *)arg1;
- (double)alphaForBackgroundDimmingOverlayInImageViewer:(JTSImageViewController *)arg1;
- (UIColor *)backgroundColorImageViewInImageViewer:(JTSImageViewController *)arg1;
- (UIColor *)accentColorForAltTextInImageViewer:(JTSImageViewController *)arg1;
- (UIFont *)fontForAltTextInImageViewer:(JTSImageViewController *)arg1;
- (_Bool)imageViewerShouldFadeThumbnailsDuringPresentationAndDismissal:(JTSImageViewController *)arg1;
@end

