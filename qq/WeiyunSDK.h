//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@protocol WeiyunSDKContext;

@interface WeiyunSDK : NSObject
{
    long long _sceneId;
    id <WeiyunSDKContext> _context;
}

+ (id)sharedInstance;
@property(nonatomic) __weak id <WeiyunSDKContext> context; // @synthesize context=_context;
- (void).cxx_destruct;
- (void)getOfflineFileListWithOfflineType:(unsigned int)arg1 offset:(unsigned int)arg2 fileNum:(unsigned int)arg3 block:(CDUnknownBlockType)arg4;
- (void)fetchUserConfig:(long long)arg1 block:(CDUnknownBlockType)arg2;
- (void)verifyPassword:(id)arg1 sig:(id)arg2 block:(CDUnknownBlockType)arg3;
- (void)queryPassword:(CDUnknownBlockType)arg1;
- (void)fetchPOI:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)deleteFile:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)fetchFileListRecursively:(long long)arg1 dbOnly:(_Bool)arg2 block:(CDUnknownBlockType)arg3;
- (void)fetchFileList:(id)arg1 fileType:(long long)arg2 count:(unsigned long long)arg3 block:(CDUnknownBlockType)arg4;
- (void)setFetchFileListSceneId:(long long)arg1;
- (void)checkShareFile:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)checkPreviewFile:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)checkBackupFile:(id)arg1 isAuto:(_Bool)arg2 block:(CDUnknownBlockType)arg3;
- (void)checkDownloadFile:(id)arg1 type:(long long)arg2 block:(CDUnknownBlockType)arg3;
- (void)checkDownloadFile:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)checkUploadFile:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)aioPicAndVideoCopyToWeiyun:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)copyToOtherCloud:(id)arg1 toAppid:(unsigned int)arg2 toUin:(unsigned long long)arg3 toDst:(id)arg4 block:(CDUnknownBlockType)arg5;
- (void)reset;
- (void)fetchThumbURL:(id)arg1 block:(CDUnknownBlockType)arg2;
- (id)getThumbURL:(id)arg1 withSize:(long long)arg2;
- (id)init;

@end

