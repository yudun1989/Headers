//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/GAMultiThreadObject.h>

@class NSMutableDictionary, NSObject, NSOperationQueue, QZUrlDownloaderObserverManager;
@protocol OS_dispatch_queue;

@interface QZUrlDownloaderManager : GAMultiThreadObject
{
    QZUrlDownloaderObserverManager *_observerManager;
    NSMutableDictionary *_imageDownloadMutlDict;
    NSOperationQueue *_reqOptQueue;
    NSObject<OS_dispatch_queue> *_serialQueue;
}

+ (id)instance;
- (void).cxx_destruct;
- (_Bool)checkLocalImgUrlContentExist:(unsigned long long)arg1 url:(id)arg2 clientKey:(id)arg3 delegate:(id)arg4 reqFinishBlock:(CDUnknownBlockType)arg5 dataSavePath:(id)arg6 clipper:(id)arg7 userInfo:(id)arg8;
- (_Bool)checkLocalUrlContentExist:(unsigned long long)arg1 url:(id)arg2 clientKey:(id)arg3 delegate:(id)arg4 reqFinishBlock:(CDUnknownBlockType)arg5 dataSavePath:(id)arg6 clipper:(id)arg7 userInfo:(id)arg8;
- (_Bool)checkMemeoryUrlContentExist:(unsigned long long)arg1 url:(id)arg2 clientKey:(id)arg3 delegate:(id)arg4 reqFinishBlock:(CDUnknownBlockType)arg5 clipper:(id)arg6 userInfo:(id)arg7;
- (void)endUrlDownload:(id)arg1;
- (void)beginUrlDownload:(unsigned long long)arg1 url:(id)arg2 clientKey:(id)arg3 isOnlyDownloadOnWifi:(_Bool)arg4 isNeedDownloadProgressNotify:(_Bool)arg5 isPreDownload:(_Bool)arg6 delegate:(id)arg7 reqFinishBlock:(CDUnknownBlockType)arg8 reqProgressBlock:(CDUnknownBlockType)arg9 dataSavePath:(id)arg10 clipper:(id)arg11 userInfo:(id)arg12 from:(unsigned long long)arg13;
- (void)onRequestProgress:(id)arg1 bytesOfThisTime:(unsigned long long)arg2 downloadedBytes:(long long)arg3 totalBytes:(long long)arg4;
- (void)onRequestFinished:(id)arg1;
- (void)reportPredownloadSuccess:(id)arg1 from:(unsigned long long)arg2;
- (_Bool)requestUrl:(unsigned long long)arg1 url:(id)arg2 clientKey:(id)arg3 isOnlyDownloadOnWifi:(_Bool)arg4 isNeedDownloadProgressNotify:(_Bool)arg5 isPreDownload:(_Bool)arg6 delegate:(id)arg7 reqFinishBlock:(CDUnknownBlockType)arg8 reqProgressBlock:(CDUnknownBlockType)arg9 dataSavePath:(id)arg10 clipper:(id)arg11 userInfo:(id)arg12 from:(unsigned long long)arg13;
- (_Bool)requestUrl:(unsigned long long)arg1 url:(id)arg2 clientKey:(id)arg3 isNeedDownloadProgressNotify:(_Bool)arg4 delegate:(id)arg5 reqFinishBlock:(CDUnknownBlockType)arg6 reqProgressBlock:(CDUnknownBlockType)arg7 clipper:(id)arg8 userInfo:(id)arg9 from:(unsigned long long)arg10;
- (_Bool)requestUrl:(unsigned long long)arg1 url:(id)arg2 clientKey:(id)arg3 isNeedDownloadProgressNotify:(_Bool)arg4 delegate:(id)arg5 reqFinishBlock:(CDUnknownBlockType)arg6 reqProgressBlock:(CDUnknownBlockType)arg7 dataSavePath:(id)arg8 userInfo:(id)arg9 from:(unsigned long long)arg10;
- (void)removeObserver:(id)arg1 url:(id)arg2 clipper:(id)arg3 isNeedContineDownload:(_Bool)arg4;
- (void)removeObserver:(id)arg1 url:(id)arg2 isNeedContineDownload:(_Bool)arg3;
- (void)removeObserver:(id)arg1 isNeedContineDownload:(_Bool)arg2;
- (void)removeObserver:(id)arg1;
- (void)doCallBack:(id)arg1 delegate:(id)arg2 reqFinishBlock:(CDUnknownBlockType)arg3;
- (id)init;

@end

