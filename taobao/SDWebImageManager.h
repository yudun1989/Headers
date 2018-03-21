//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray, SDImageCache, SDWebImageDownloader;
@protocol SDWebImageManagerDelegate;

@interface SDWebImageManager : NSObject
{
    id <SDWebImageManagerDelegate> _delegate;
    SDImageCache *_imageCache;
    SDWebImageDownloader *_imageDownloader;
    CDUnknownBlockType _cacheKeyFilter;
    NSMutableArray *_runningOperations;
}

+ (id)sharedManager;
@property(retain, nonatomic) NSMutableArray *runningOperations; // @synthesize runningOperations=_runningOperations;
@property(copy, nonatomic) CDUnknownBlockType cacheKeyFilter; // @synthesize cacheKeyFilter=_cacheKeyFilter;
@property(retain, nonatomic) SDWebImageDownloader *imageDownloader; // @synthesize imageDownloader=_imageDownloader;
@property(retain, nonatomic) SDImageCache *imageCache; // @synthesize imageCache=_imageCache;
@property(nonatomic) __weak id <SDWebImageManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)safelyRemoveOperationFromRunning:(id)arg1;
- (_Bool)isRunning;
- (void)cancelAll;
- (void)saveImageToCache:(id)arg1 forURL:(id)arg2;
- (id)inner_downloadImageWithURL:(id)arg1 module:(id)arg2 viewSize:(struct CGSize)arg3 options:(unsigned long long)arg4 progress:(CDUnknownBlockType)arg5 completed:(CDUnknownBlockType)arg6;
- (id)downloadImageWithURL:(id)arg1 module:(id)arg2 imageSize:(struct CGSize)arg3 viewSize:(struct CGSize)arg4 cutType:(long long)arg5 options:(unsigned long long)arg6 progress:(CDUnknownBlockType)arg7 completed:(CDUnknownBlockType)arg8;
- (id)downloadImageWithURL:(id)arg1 module:(id)arg2 imageSize:(struct CGSize)arg3 cutType:(long long)arg4 options:(unsigned long long)arg5 progress:(CDUnknownBlockType)arg6 completed:(CDUnknownBlockType)arg7;
- (id)downloadImageWithURL:(id)arg1 viewSize:(struct CGSize)arg2 completed:(CDUnknownBlockType)arg3;
- (id)downloadImageWithURL:(id)arg1 options:(unsigned long long)arg2 progress:(CDUnknownBlockType)arg3 completed:(CDUnknownBlockType)arg4;
- (id)downloadWithURL:(id)arg1 options:(unsigned long long)arg2 progress:(CDUnknownBlockType)arg3 completed:(CDUnknownBlockType)arg4;
- (id)downloadWithURL:(id)arg1 module:(id)arg2 imageSize:(struct CGSize)arg3 cutType:(long long)arg4 options:(unsigned long long)arg5 progress:(CDUnknownBlockType)arg6 completed:(CDUnknownBlockType)arg7;
- (id)downloadWithURL:(id)arg1 imageSize:(struct CGSize)arg2 cutType:(long long)arg3 options:(unsigned long long)arg4 progress:(CDUnknownBlockType)arg5 completed:(CDUnknownBlockType)arg6;
- (id)downloadWithURL:(id)arg1 imageSize:(struct CGSize)arg2 cutType:(long long)arg3 options:(unsigned long long)arg4 completed:(CDUnknownBlockType)arg5;
- (id)downloadWithURL:(id)arg1 imageSize:(struct CGSize)arg2 cutType:(long long)arg3 completed:(CDUnknownBlockType)arg4;
- (id)downloadWithURL:(id)arg1 imageSize:(struct CGSize)arg2 completed:(CDUnknownBlockType)arg3;
- (id)downloadWithURL:(id)arg1 completed:(CDUnknownBlockType)arg2;
- (void)diskImageExistsForURL:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)cachedImageExistsForURL:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)diskImageExistsForURL:(id)arg1;
- (_Bool)cachedImageExistsForURL:(id)arg1;
- (id)cacheKeyForURL:(id)arg1;
- (id)initWithCache:(id)arg1 downloader:(id)arg2;
- (id)init;

@end

