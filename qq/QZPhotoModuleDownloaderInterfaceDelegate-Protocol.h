//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/NSObject-Protocol.h>

@class NSData, NSString, NSURLConnection, NSURLResponse, UIImage;

@protocol QZPhotoModuleDownloaderInterfaceDelegate <NSObject>

@optional
- (void)requestRecvData:(NSURLConnection *)arg1 data:(NSData *)arg2;
- (void)requestRecvResponse:(NSURLConnection *)arg1 resp:(NSURLResponse *)arg2;
- (void)requestProgress:(id)arg1 bytesOfThisTime:(unsigned long long)arg2 downloadedBytes:(long long)arg3 totalBytes:(long long)arg4;
- (void)requestFinishedisSuccess:(_Bool)arg1 resInfo:(id)arg2 image:(UIImage *)arg3 reqUrl:(NSString *)arg4;
- (void)requestFinishedisSuccess:(_Bool)arg1 image:(UIImage *)arg2 reqUrl:(NSString *)arg3;
@end

