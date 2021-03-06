//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBIMMessageAdapter-Protocol.h"

@class NSString, UIImage;

@protocol TBIMImageMessage <TBIMMessageAdapter>
- (NSString *)getCDNImageUrl;
- (_Bool)isEmoticon;
- (UIImage *)getLocalImage:(NSString *)arg1;
- (struct CGSize)getPreviewImageSize;
- (NSString *)getPreviewURL:(_Bool *)arg1;
- (NSString *)getImageUrl:(_Bool *)arg1;
@end

