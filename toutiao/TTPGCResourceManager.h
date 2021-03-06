//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSURLSessionDownloadTask;

@interface TTPGCResourceManager : NSObject
{
    NSURLSessionDownloadTask *_downloadTask;
}

@property(retain, nonatomic) NSURLSessionDownloadTask *downloadTask; // @synthesize downloadTask=_downloadTask;
- (void).cxx_destruct;
- (_Bool)shouleUpdate:(id)arg1 version:(id)arg2;
- (void)updateResourceIfNeeded:(id)arg1 url:(id)arg2 version:(id)arg3 md5:(id)arg4 zipFilename:(id)arg5 unzipFolder:(id)arg6 completionHandler:(CDUnknownBlockType)arg7;
- (void)setResourceInfo:(id)arg1 url:(id)arg2 version:(id)arg3 md5:(id)arg4;
- (void)loadWebContent:(id)arg1 folder:(id)arg2 fileName:(id)arg3 fallbackUrl:(id)arg4 onDownload:(CDUnknownBlockType)arg5;
- (_Bool)exist:(id)arg1;
- (id)md5:(id)arg1;
- (_Bool)verifyMd5:(id)arg1 md5:(id)arg2;
- (void)download:(id)arg1 md5:(id)arg2 zipFilename:(id)arg3 unzipFolder:(id)arg4 completeHandler:(CDUnknownBlockType)arg5;
- (void)cancel;
- (void)dealloc;

@end

