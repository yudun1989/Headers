//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/NSObject-Protocol.h>

@class NSArray, NSData, NSError, NSString, QQMessageModel, RichMediaPBFileDownloadReq;

@protocol IRichMediaPBTransferResult <NSObject>
- (void)richMediaStartDownloadLongMsg:(RichMediaPBFileDownloadReq *)arg1 andUrls:(NSArray *)arg2 andResKey:(NSString *)arg3 isTry:(_Bool)arg4;
- (void)richMediaDownloadPBFileMessageModel:(QQMessageModel *)arg1 result:(_Bool)arg2 error:(NSError *)arg3;
- (void)richMediaUploadPBFileMessageModel:(QQMessageModel *)arg1 result:(_Bool)arg2 resId:(NSData *)arg3 error:(NSError *)arg4;
@end

