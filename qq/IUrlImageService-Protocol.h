//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSData, NSString, UIImage;

@protocol IUrlImageService
- (NSData *)getLocalImageWithUrl:(NSString *)arg1;
- (NSString *)getImageUUIDwithUrl:(NSString *)arg1;
- (void)removeImageFromDisk:(NSString *)arg1;
- (_Bool)isImageExist:(NSString *)arg1;
- (void)asyncGetImageWithUrl:(NSString *)arg1 needRequest:(_Bool)arg2;
- (void)asyncGetImageWithUrl:(NSString *)arg1;
- (UIImage *)getImageWithUrl:(NSString *)arg1;
@end

