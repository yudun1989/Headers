//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface AWERedPacketPrefetchManager : NSObject
{
}

+ (id)_imageCachePathForURLString:(id)arg1;
+ (void)_storeImage:(id)arg1 targetPath:(id)arg2;
+ (void)_downloadImageWithURLString:(id)arg1;
+ (void)_downloadCoverImagesWithURLModel:(id)arg1;
+ (id)_voiceCachePathForURLString:(id)arg1;
+ (void)_downloadWithVoiceURLString:(id)arg1 targetPath:(id)arg2 retryCount:(int)arg3 completion:(CDUnknownBlockType)arg4;
+ (void)_downloadWithVoiceURLString:(id)arg1 targetPath:(id)arg2 completion:(CDUnknownBlockType)arg3;
+ (void)_downloadWithDefaultVoiceURLString:(id)arg1;
+ (void)_downloadWithVoiceURLString:(id)arg1 itemID:(id)arg2 completion:(CDUnknownBlockType)arg3;
+ (_Bool)canFetchCompleteRedPacketCover;
+ (id)cachePathForURLModel:(id)arg1;
+ (id)cachePathForCoverTopImage;
+ (id)cachePathForCoverButtonBgImage;
+ (id)cachePathForCoverBottomFrontImage;
+ (id)cachePathForCoverBottomBackImage;
+ (void)fetchKDXFVoiceWithItemID:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (id)cachePathForVoice:(id)arg1;
+ (void)prefetch;

@end

