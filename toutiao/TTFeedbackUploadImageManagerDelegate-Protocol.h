//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSError, NSNumber, TTFeedbackUploadImageManager;

@protocol TTFeedbackUploadImageManagerDelegate <NSObject>

@optional
- (void)uploadImageManager:(TTFeedbackUploadImageManager *)arg1 uploadImagesProgress:(NSNumber *)arg2;
- (void)uploadImageManager:(TTFeedbackUploadImageManager *)arg1 uploadFinishForUniqueKeys:(NSArray *)arg2 results:(NSArray *)arg3 error:(NSError *)arg4;
@end

