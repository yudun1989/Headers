//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "BEEPhoto-Protocol.h"
#import "NSCopying-Protocol.h"

@class ALAsset, NSDate, NSString, NSURL, PHAsset, UIImage;
@protocol SDWebImageOperation;

@interface BEEPhoto : NSObject <BEEPhoto, NSCopying>
{
    id <SDWebImageOperation> _webImageOperation;
    _Bool _loadImageByNetwork;
    double _loadingProgress;
    _Bool _isAssetInCloud;
    _Bool _loadingInProgress;
    _Bool _loadAsGif;
    _Bool _enableFadeIn;
    UIImage *_underlyingImage;
    unsigned long long _priority;
    unsigned long long _type;
    UIImage *_image;
    NSURL *_photoURL;
    ALAsset *_asset;
    PHAsset *_phAsset;
    double _time;
    NSDate *_timeDate;
    NSString *_caption;
    unsigned long long _sizeType;
    long long _contentMode;
    long long _originImageTotalBytes;
    NSString *_videoUrlString;
    NSString *_videoDuration;
    double _videoDurationTime;
    NSString *_mmBusinessId;
    NSString *_mmBizType;
    NSString *_extJson;
    NSString *_wmSourceId;
    unsigned long long _wmPosition;
    unsigned long long _wmTransparency;
    unsigned long long _wmWidth;
    unsigned long long _wmHeight;
    unsigned long long _wmXgap;
    unsigned long long _wmYgap;
    unsigned long long _wmP;
    unsigned long long _resultCode;
    struct CGSize _imageSize;
    struct CGSize _thumbSize;
    struct CGSize _videoDimensions;
    struct CGSize _zoomSize;
    struct CGSize _originalSize;
    struct CGSize _wmZoom;
    struct CGRect _origFrame;
}

+ (id)photoWithVideoUrl:(id)arg1 photoType:(unsigned long long)arg2 business:(id)arg3;
+ (id)photoWithPHAsset:(id)arg1 business:(id)arg2;
+ (id)photoWithAsset:(id)arg1 business:(id)arg2;
+ (id)photoWithURL:(id)arg1 business:(id)arg2;
+ (id)photoWithImage:(id)arg1 business:(id)arg2;
@property(nonatomic) unsigned long long resultCode; // @synthesize resultCode=_resultCode;
@property(nonatomic) unsigned long long wmP; // @synthesize wmP=_wmP;
@property(nonatomic) unsigned long long wmYgap; // @synthesize wmYgap=_wmYgap;
@property(nonatomic) unsigned long long wmXgap; // @synthesize wmXgap=_wmXgap;
@property(nonatomic) unsigned long long wmHeight; // @synthesize wmHeight=_wmHeight;
@property(nonatomic) unsigned long long wmWidth; // @synthesize wmWidth=_wmWidth;
@property(nonatomic) unsigned long long wmTransparency; // @synthesize wmTransparency=_wmTransparency;
@property(nonatomic) unsigned long long wmPosition; // @synthesize wmPosition=_wmPosition;
@property(nonatomic) struct CGSize wmZoom; // @synthesize wmZoom=_wmZoom;
@property(copy, nonatomic) NSString *wmSourceId; // @synthesize wmSourceId=_wmSourceId;
@property(nonatomic) struct CGSize originalSize; // @synthesize originalSize=_originalSize;
@property(nonatomic) struct CGSize zoomSize; // @synthesize zoomSize=_zoomSize;
@property(retain, nonatomic) NSString *extJson; // @synthesize extJson=_extJson;
@property(copy, nonatomic) NSString *mmBizType; // @synthesize mmBizType=_mmBizType;
@property(copy, nonatomic) NSString *mmBusinessId; // @synthesize mmBusinessId=_mmBusinessId;
@property(nonatomic) double videoDurationTime; // @synthesize videoDurationTime=_videoDurationTime;
@property(copy, nonatomic) NSString *videoDuration; // @synthesize videoDuration=_videoDuration;
@property(nonatomic) struct CGSize videoDimensions; // @synthesize videoDimensions=_videoDimensions;
@property(copy, nonatomic) NSString *videoUrlString; // @synthesize videoUrlString=_videoUrlString;
@property(nonatomic) long long originImageTotalBytes; // @synthesize originImageTotalBytes=_originImageTotalBytes;
@property(nonatomic) long long contentMode; // @synthesize contentMode=_contentMode;
@property(nonatomic) struct CGSize thumbSize; // @synthesize thumbSize=_thumbSize;
@property(nonatomic) unsigned long long sizeType; // @synthesize sizeType=_sizeType;
@property(retain, nonatomic) NSString *caption; // @synthesize caption=_caption;
@property(retain, nonatomic) NSDate *timeDate; // @synthesize timeDate=_timeDate;
@property(nonatomic) double time; // @synthesize time=_time;
@property(nonatomic) struct CGSize imageSize; // @synthesize imageSize=_imageSize;
@property(nonatomic) struct CGRect origFrame; // @synthesize origFrame=_origFrame;
@property(nonatomic) _Bool enableFadeIn; // @synthesize enableFadeIn=_enableFadeIn;
@property(nonatomic) _Bool loadAsGif; // @synthesize loadAsGif=_loadAsGif;
@property(retain, nonatomic) PHAsset *phAsset; // @synthesize phAsset=_phAsset;
@property(retain, nonatomic) ALAsset *asset; // @synthesize asset=_asset;
@property(retain, nonatomic) NSURL *photoURL; // @synthesize photoURL=_photoURL;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(nonatomic) _Bool loadingInProgress; // @synthesize loadingInProgress=_loadingInProgress;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(retain, nonatomic) UIImage *underlyingImage; // @synthesize underlyingImage=_underlyingImage;
- (void).cxx_destruct;
- (id)getImageForCloudId:(id)arg1 size:(struct CGSize)arg2 originalSize:(struct CGSize)arg3;
- (unsigned long long)multiMediaImageType;
- (unsigned long long)photoSizeType;
- (void)cancelAnyLoading;
- (void)postCompleteNotification;
- (void)postLoadingProgressNotification:(double)arg1 withInCloud:(_Bool)arg2;
- (void)postStartDownloadNotificationWithInCloud:(_Bool)arg1;
- (void)imageLoadingComplete;
- (void)unloadUnderlyingImage;
- (void)loadImageFromWebUrl;
- (void)loadImageByFileReference;
- (void)loadBigOrOriginalImageWithCloudId:(id)arg1;
- (void)loadThumbImageWithCloudId:(id)arg1;
- (void)loadWaterMarkImageWithCloudId:(id)arg1;
- (void)loadImageByCloudIdOrLocalId;
- (void)loadImageFromAssetLibrary;
- (void)loadImageByPHAsset;
- (void)loadImageByALAsset;
- (void)performLoadUnderlyingImageAndNotify;
- (void)loadUnderlyingImageAndNotify;
@property(nonatomic) unsigned long long priority; // @synthesize priority=_priority;
- (void)image:(id)arg1 didFinishSavingWithError:(id)arg2 contextInfo:(void *)arg3;
- (void)saveToAlbumWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)requestGifDataWithDoneBlock:(CDUnknownBlockType)arg1;
- (id)userInfo4ErrorCode:(unsigned long long)arg1;
- (id)resultError;
@property(nonatomic) unsigned long long photoType;
- (id)cloudId;
- (void)getLocalPhoto;
- (void)getDownloadProgress:(CDUnknownBlockType)arg1;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)setWaterMark:(id)arg1 zoom:(struct CGSize)arg2 position:(unsigned long long)arg3 transparency:(unsigned long long)arg4 width:(unsigned long long)arg5 height:(unsigned long long)arg6 xgap:(unsigned long long)arg7 ygap:(unsigned long long)arg8 p:(unsigned long long)arg9;
- (id)initWithVideoUrl:(id)arg1 photoType:(unsigned long long)arg2 business:(id)arg3;
- (id)initWithPHAsset:(id)arg1 business:(id)arg2;
- (id)initWithAsset:(id)arg1 business:(id)arg2;
- (id)initWithURL:(id)arg1 business:(id)arg2;
- (id)initWithImage:(id)arg1 business:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

