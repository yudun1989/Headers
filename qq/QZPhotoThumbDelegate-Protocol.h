//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/NSObject-Protocol.h>

@class NSDictionary, NSNumber, NSString;

@protocol QZPhotoThumbDelegate <NSObject>

@optional
- (void)didPhotoThumbDownloadSuccessForReport:(NSString *)arg1 imageBytes:(int)arg2 imageSize:(struct CGSize)arg3;
- (void)didPhotoThumbDownloadFailed:(NSString *)arg1 userInfo:(NSDictionary *)arg2;
- (void)didPhotoThumbDownloadSuccess:(NSString *)arg1 isCache:(_Bool)arg2 userInfo:(NSDictionary *)arg3;
- (void)didPhotoThumbProgress:(NSNumber *)arg1;
- (void)didPhotoThumbNeedDisplay;
- (void)didPhotoThumbNeedLayout;
@end

