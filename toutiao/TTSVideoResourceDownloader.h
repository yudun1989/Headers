//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSMutableDictionary;

@interface TTSVideoResourceDownloader : NSObject
{
    _Bool _isDownloading;
    NSArray *_stickerList;
    long long _downloadVersion;
    NSMutableDictionary *_downloadOperationMap;
}

+ (id)sharedManager;
@property(retain, nonatomic) NSMutableDictionary *downloadOperationMap; // @synthesize downloadOperationMap=_downloadOperationMap;
@property(nonatomic) long long downloadVersion; // @synthesize downloadVersion=_downloadVersion;
@property(nonatomic) _Bool isDownloading; // @synthesize isDownloading=_isDownloading;
@property(retain, nonatomic) NSArray *stickerList; // @synthesize stickerList=_stickerList;
- (void).cxx_destruct;
- (id)stickerTMPPath;
- (id)stickerStorePath;
- (id)pathForSid:(id)arg1;
- (void)removeAllLocalStickers;
- (void)applyStickerFailed:(id)arg1;
- (_Bool)strickerHasDownloaded:(id)arg1;
- (id)downloadTaskWithRequest:(id)arg1 parameters:(id)arg2 progress:(id *)arg3 destination:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (id)downloadStickerWithID:(id)arg1 downloadManually:(_Bool)arg2 progress:(id *)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (_Bool)springStickersHaveDownloaded;
- (void)downloadSpringStickersIfNeeded:(long long)arg1;
- (id)init;

@end

