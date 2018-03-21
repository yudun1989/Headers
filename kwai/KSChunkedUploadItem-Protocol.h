//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "KSUploadItem-Protocol.h"

@class NSData, NSDictionary, NSString;

@protocol KSChunkedUploadItem <KSUploadItem>
@property(copy, nonatomic) NSString *coverKey;
- (_Bool)isPhoto;
- (_Bool)isH265;
- (NSDictionary *)uploadBodyParams;
- (NSString *)mimeType;
- (NSString *)fileExtension;
- (NSData *)content;

@optional
- (NSString *)captureVideoKey;
- (NSString *)depthVideoPath;
- (NSString *)originalVideoPath;
- (unsigned long long)maxConcurrentChunkCount;
@end

