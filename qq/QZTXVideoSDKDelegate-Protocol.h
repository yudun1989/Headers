//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/NSObject-Protocol.h>

@class NSError, NSString, QZVideoInfo, QZVideoProxyCallBackParams;

@protocol QZTXVideoSDKDelegate <NSObject>

@optional
- (void)QZTXVideoSDKDelegateDownloadInfo:(QZVideoProxyCallBackParams *)arg1;
- (void)QZTXVideoSDKDelegateFileSize:(long long)arg1 httpDownLoadSize:(long long)arg2 readCacheSize:(long long)arg3 clipNo:(long long)arg4 attachInfo:(id)arg5;
- (void)QZTXVideoSDKDelegateStorageFileComplete:(long long)arg1;
- (void)QZTXVideoSDKDelegate:(long long)arg1 loadedSize:(long long)arg2 offset:(long long)arg3 fileSize:(long long)arg4 speedKBS:(long long)arg5;
- (void)QZTXVideoSDKDelegate:(long long)arg1 error:(NSError *)arg2;
- (void)QZTXVideoSDKDelegate:(long long)arg1 changePlayUrl:(NSString *)arg2 videoInfo:(QZVideoInfo *)arg3 isRestartByChangeVkey:(_Bool)arg4;
@end

