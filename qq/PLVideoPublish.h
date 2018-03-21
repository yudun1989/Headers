//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface PLVideoPublish : NSObject
{
}

+ (void)makeVideoMixMusic:(id)arg1 withType:(int)arg2 musicModel:(id)arg3 withCompletionHandler:(CDUnknownBlockType)arg4;
+ (id)createTinyVideoClipPath:(id)arg1;
+ (void)calculateMD5:(id)arg1 param:(id)arg2 completion:(CDUnknownBlockType)arg3;
+ (void)verifyMD5:(id)arg1;
+ (void)publishStoryVideo:(id)arg1 videoPath:(id)arg2;
+ (void)processVideo:(id)arg1 videoPath:(id)arg2 maskimage:(id)arg3 videoDir:(id)arg4 originPath:(id)arg5;
+ (void)storyVideoCaptureViewController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
+ (void)getFeedId:(id)arg1;
+ (id)getPublishThumbleDir;
+ (id)getPublishDoodleDir;
+ (id)getPublishVideoDir;

@end

