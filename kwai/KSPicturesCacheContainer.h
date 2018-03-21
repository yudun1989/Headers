//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class KSCachedImageArray;

@interface KSPicturesCacheContainer : NSObject
{
    KSCachedImageArray *_longPicture;
    KSCachedImageArray *_longPictureForPreview;
    KSCachedImageArray *_picturesCollection;
    KSCachedImageArray *_picturesCollectionForPreview;
}

+ (void)generateLongPictureAndPicturesCollectionWithImageCount:(unsigned long long)arg1 imageProvider:(CDUnknownBlockType)arg2 progress:(id *)arg3 completion:(CDUnknownBlockType)arg4;
+ (void)generatePicturesCollectionPreviewImagesWithAmount:(unsigned long long)arg1 provider:(CDUnknownBlockType)arg2 progress:(id)arg3 completion:(CDUnknownBlockType)arg4;
+ (void)generatePicturesCollectionImagesWithCount:(unsigned long long)arg1 provider:(CDUnknownBlockType)arg2 progress:(id)arg3 completion:(CDUnknownBlockType)arg4;
+ (void)generateLongPicturePreviewImagesWithCount:(unsigned long long)arg1 provider:(CDUnknownBlockType)arg2 progress:(id)arg3 completion:(CDUnknownBlockType)arg4;
+ (void)generateLongPictureImagesWithCount:(unsigned long long)arg1 provider:(CDUnknownBlockType)arg2 progress:(id)arg3 completion:(CDUnknownBlockType)arg4;
@property(retain, nonatomic) KSCachedImageArray *picturesCollectionForPreview; // @synthesize picturesCollectionForPreview=_picturesCollectionForPreview;
@property(retain, nonatomic) KSCachedImageArray *picturesCollection; // @synthesize picturesCollection=_picturesCollection;
@property(retain, nonatomic) KSCachedImageArray *longPictureForPreview; // @synthesize longPictureForPreview=_longPictureForPreview;
@property(retain, nonatomic) KSCachedImageArray *longPicture; // @synthesize longPicture=_longPicture;
- (void).cxx_destruct;

@end

