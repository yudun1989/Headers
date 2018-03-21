//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <QQMainProject/SDImageCacheDelegate-Protocol.h>
#import <QQMainProject/SDWebImageDownloaderDelegate-Protocol.h>

@class NSMutableArray, NSMutableDictionary, NSString;

@interface SDWebImageManager : NSObject <SDWebImageDownloaderDelegate, SDImageCacheDelegate>
{
    NSMutableArray *downloadDelegates;
    NSMutableArray *downloaders;
    NSMutableArray *cacheDelegates;
    NSMutableArray *cacheURLs;
    NSMutableDictionary *downloaderForURL;
    NSMutableArray *failedURLs;
    CDUnknownBlockType cacheKeyFilter;
}

+ (id)sharedManager;
@property(copy) CDUnknownBlockType cacheKeyFilter; // @synthesize cacheKeyFilter;
- (void).cxx_destruct;
- (void)imageDownloader:(id)arg1 didFailWithError:(id)arg2;
- (void)imageDownloader:(id)arg1 didFinishWithImage:(id)arg2;
- (void)imageDownloader:(id)arg1 didUpdatePartialImage:(id)arg2;
- (void)imageCache:(id)arg1 didNotFindImageForKey:(id)arg2 userInfo:(id)arg3;
- (void)imageCache:(id)arg1 didFindImage:(id)arg2 forKey:(id)arg3 userInfo:(id)arg4;
- (unsigned long long)indexOfDelegate:(id)arg1 waitingForURL:(id)arg2;
- (void)downloadWithURL:(id)arg1 delegate:(id)arg2 options:(int)arg3 userInfo:(id)arg4 success:(CDUnknownBlockType)arg5 failure:(CDUnknownBlockType)arg6;
- (void)downloadWithURL:(id)arg1 delegate:(id)arg2 options:(int)arg3 success:(CDUnknownBlockType)arg4 failure:(CDUnknownBlockType)arg5;
- (void)downloadWithURL:(id)arg1 delegate:(id)arg2 options:(int)arg3 userInfo:(id)arg4;
- (void)downloadWithURL:(id)arg1 delegate:(id)arg2 options:(int)arg3;
- (void)downloadWithURL:(id)arg1 delegate:(id)arg2;
- (id)imageWithURL:(id)arg1;
- (id)cacheKeyForURL:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

