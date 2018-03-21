//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface MP4Manager : NSObject
{
}

+ (id)infoFromPath:(id)arg1;
+ (_Bool)isVideoTypeWithPath:(id)arg1;
+ (long long)orientationForVideoTrack:(id)arg1;
+ (struct CGAffineTransform)calcTransformForVideoTrack:(id)arg1;
+ (void)compressVideo:(id)arg1 toPath:(id)arg2 fileSize:(long long)arg3 isShortVideo:(_Bool)arg4 timeRange:(CDStruct_5c5366e1)arg5 progress:(CDUnknownBlockType)arg6 completion:(CDUnknownBlockType)arg7;
+ (struct CGSize)getDimensionFromTrack:(id)arg1;
+ (void)compressVideo:(id)arg1 key:(id)arg2 fileSize:(long long)arg3 isShortVideo:(_Bool)arg4 startPoint:(double)arg5 endPoint:(double)arg6 progress:(CDUnknownBlockType)arg7 completeHandler:(CDUnknownBlockType)arg8;
+ (void)compressVideo:(id)arg1 key:(id)arg2 fileSize:(long long)arg3 isShortVideo:(_Bool)arg4 timeRange:(CDStruct_5c5366e1)arg5 progress:(CDUnknownBlockType)arg6 completeHandler:(CDUnknownBlockType)arg7;
+ (void)compressVideo:(id)arg1 key:(id)arg2 fileSize:(long long)arg3 isShortVideo:(_Bool)arg4 completeHandler:(CDUnknownBlockType)arg5;

@end

