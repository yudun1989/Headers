//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIImageView.h>

#import "ImageLibNetworkNofityProtocol-Protocol.h"

@class NSString;

@interface UIImageView (WebCache) <ImageLibNetworkNofityProtocol>
- (void)retryError404;
- (void)retryLoadImage:(_Bool)arg1;
- (void)restoreImageLoad;
- (void)cancelCurrentImageLoad;
- (void)cancelCurrentArrayLoad;
- (void)setImageWithURL:(id)arg1 module:(id)arg2 placeholderImage:(id)arg3 imageSize:(struct CGSize)arg4 cutType:(long long)arg5 options:(unsigned long long)arg6 progress:(CDUnknownBlockType)arg7 completed:(CDUnknownBlockType)arg8;
- (void)setImageWithURL:(id)arg1 module:(id)arg2 placeholderImage:(id)arg3 imageSize:(struct CGSize)arg4 cutType:(long long)arg5 options:(unsigned long long)arg6 completed:(CDUnknownBlockType)arg7;
- (void)setImageWithURL:(id)arg1 module:(id)arg2 placeholderImage:(id)arg3 imageSize:(struct CGSize)arg4 cutType:(long long)arg5 completed:(CDUnknownBlockType)arg6;
- (void)setImageWithURL:(id)arg1 module:(id)arg2 placeholderImage:(id)arg3 imageSize:(struct CGSize)arg4 completed:(CDUnknownBlockType)arg5;
- (void)setImageWithURL:(id)arg1 module:(id)arg2 placeholderImage:(id)arg3 completed:(CDUnknownBlockType)arg4;
- (void)setImageWithURL:(id)arg1 module:(id)arg2 completed:(CDUnknownBlockType)arg3;
- (void)setImageWithURL:(id)arg1 placeholderImage:(id)arg2 options:(unsigned long long)arg3 progress:(CDUnknownBlockType)arg4 completed:(CDUnknownBlockType)arg5;
- (void)setImageWithURL:(id)arg1 placeholderImage:(id)arg2 imageSize:(struct CGSize)arg3 cutType:(long long)arg4 options:(unsigned long long)arg5 progress:(CDUnknownBlockType)arg6 completed:(CDUnknownBlockType)arg7;
- (void)setImageWithURL:(id)arg1 placeholderImage:(id)arg2 imageSize:(struct CGSize)arg3 cutType:(long long)arg4 options:(unsigned long long)arg5 completed:(CDUnknownBlockType)arg6;
- (void)setImageWithURL:(id)arg1 placeholderImage:(id)arg2 imageSize:(struct CGSize)arg3 cutType:(long long)arg4 completed:(CDUnknownBlockType)arg5;
- (void)setImageWithURL:(id)arg1 placeholderImage:(id)arg2 imageSize:(struct CGSize)arg3 completed:(CDUnknownBlockType)arg4;
- (void)setImageWithURL:(id)arg1 placeholderImage:(id)arg2 completed:(CDUnknownBlockType)arg3;
- (void)setImageWithURL:(id)arg1 completed:(CDUnknownBlockType)arg2;
- (void)setImageWithURL:(id)arg1 placeholderImage:(id)arg2 imageSize:(struct CGSize)arg3 cutType:(long long)arg4 options:(unsigned long long)arg5 progress:(CDUnknownBlockType)arg6;
- (void)setImageWithURL:(id)arg1 placeholderImage:(id)arg2 imageSize:(struct CGSize)arg3 cutType:(long long)arg4 options:(unsigned long long)arg5;
- (void)setImageWithURL:(id)arg1 placeholderImage:(id)arg2 imageSize:(struct CGSize)arg3 cutType:(long long)arg4;
- (void)setImageWithURL:(id)arg1 placeholderImage:(id)arg2 imageSize:(struct CGSize)arg3;
- (void)setImageWithURL:(id)arg1 placeholderImage:(id)arg2 options:(unsigned long long)arg3;
- (void)sd_setAnimationImagesWithURLs:(id)arg1;
- (void)sd_setImageWithURL_InnerMethod:(id)arg1 module:(id)arg2 placeholderImage:(id)arg3 options:(unsigned long long)arg4 progress:(CDUnknownBlockType)arg5 completed:(CDUnknownBlockType)arg6;
- (void)sd_setImageWithURL:(id)arg1 module:(id)arg2 placeholderImage:(id)arg3 imageSize:(struct CGSize)arg4 cutType:(long long)arg5 options:(unsigned long long)arg6 progress:(CDUnknownBlockType)arg7 completed:(CDUnknownBlockType)arg8;
- (void)sd_setImageWithURL:(id)arg1 module:(id)arg2 placeholderImage:(id)arg3 imageSize:(struct CGSize)arg4 options:(unsigned long long)arg5 completed:(CDUnknownBlockType)arg6;
- (void)sd_setImageWithURL:(id)arg1 module:(id)arg2 placeholderImage:(id)arg3 completed:(CDUnknownBlockType)arg4;
- (void)sd_setImageWithURL:(id)arg1 module:(id)arg2 completed:(CDUnknownBlockType)arg3;
- (void)sd_setImageWithURL:(id)arg1 placeholderImage:(id)arg2 options:(unsigned long long)arg3 progress:(CDUnknownBlockType)arg4 completed:(CDUnknownBlockType)arg5;
- (void)sd_setImageWithURL:(id)arg1 placeholderImage:(id)arg2 options:(unsigned long long)arg3 completed:(CDUnknownBlockType)arg4;
- (void)sd_setImageWithURL:(id)arg1 placeholderImage:(id)arg2 completed:(CDUnknownBlockType)arg3;
- (void)sd_setImageWithURL:(id)arg1 completed:(CDUnknownBlockType)arg2;
- (void)sd_setImageWithURL:(id)arg1 placeholderImage:(id)arg2 options:(unsigned long long)arg3;
- (void)sd_setImageWithURL:(id)arg1 placeholderImage:(id)arg2;
- (void)sd_setImageWithURL:(id)arg1;
- (void)setAnimationImagesWithURLs:(id)arg1;
- (void)sd_cancelCurrentAnimationImagesLoad;
- (void)sd_cancelCurrentImageLoad;
- (id)sd_imageURL;
- (id)sd_originalImageURL;
- (_Bool)sd_isSameImageWithURL:(id)arg1;
- (void)receiveNotification:(id)arg1;
- (void)addNetworkObserver;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

