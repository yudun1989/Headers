//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "APBaseDownloadRequest.h"

#import "NSCopying-Protocol.h"

@class NSDictionary, NSMutableDictionary, NSString, UIImage;

@interface APImageRequest : APBaseDownloadRequest <NSCopying>
{
    _Bool _usePJPEG;
    _Bool _isGif;
    _Bool _useMMTC;
    unsigned long long _imageRequestType;
    CDUnknownBlockType _progress;
    CDUnknownBlockType _downLoadCompletion;
    CDUnknownBlockType _downloadPJPEGBlock;
    unsigned long long _respType;
    unsigned long long _qualityValue;
    unsigned long long _executeSequence;
    NSString *_md5;
    NSDictionary *_externalRemoteLogInfo;
    NSMutableDictionary *_internalRemoteLogInfo;
    NSString *_aliasIdentifier;
    UIImage *_placeholder;
    struct CGSize _zoom;
    struct CGSize _originalSize;
}

+ (_Bool)enableSuperLongImageCut;
+ (_Bool)isSuperLongImageWithSize:(struct CGSize)arg1;
+ (_Bool)isCutImageSize:(struct CGSize)arg1 originalSize:(struct CGSize)arg2;
+ (_Bool)isDjangoUrl:(id)arg1;
+ (_Bool)usingOSSFormat;
+ (id)stringWithHEVC;
+ (id)stringWithWebp;
+ (id)stringWithQValue:(int)arg1;
+ (id)stringWithGradualPercent:(int)arg1;
+ (id)stringWithCutSize:(struct CGSize)arg1;
+ (id)stringWithScaleSize:(struct CGSize)arg1;
@property(nonatomic) _Bool useMMTC; // @synthesize useMMTC=_useMMTC;
@property(retain, nonatomic) UIImage *placeholder; // @synthesize placeholder=_placeholder;
@property(retain, nonatomic) NSString *aliasIdentifier; // @synthesize aliasIdentifier=_aliasIdentifier;
@property(nonatomic) struct CGSize originalSize; // @synthesize originalSize=_originalSize;
@property(retain, nonatomic) NSMutableDictionary *internalRemoteLogInfo; // @synthesize internalRemoteLogInfo=_internalRemoteLogInfo;
@property(copy, nonatomic) NSDictionary *externalRemoteLogInfo; // @synthesize externalRemoteLogInfo=_externalRemoteLogInfo;
@property(retain, nonatomic) NSString *md5; // @synthesize md5=_md5;
@property(nonatomic) _Bool isGif; // @synthesize isGif=_isGif;
@property(nonatomic) unsigned long long executeSequence; // @synthesize executeSequence=_executeSequence;
@property(nonatomic) unsigned long long qualityValue; // @synthesize qualityValue=_qualityValue;
@property(nonatomic) unsigned long long respType; // @synthesize respType=_respType;
@property(nonatomic) _Bool usePJPEG; // @synthesize usePJPEG=_usePJPEG;
@property(copy, nonatomic) CDUnknownBlockType downloadPJPEGBlock; // @synthesize downloadPJPEGBlock=_downloadPJPEGBlock;
@property(copy, nonatomic) CDUnknownBlockType downLoadCompletion; // @synthesize downLoadCompletion=_downLoadCompletion;
@property(copy, nonatomic) CDUnknownBlockType progress; // @synthesize progress=_progress;
@property(nonatomic) struct CGSize zoom; // @synthesize zoom=_zoom;
@property(nonatomic) unsigned long long imageRequestType; // @synthesize imageRequestType=_imageRequestType;
- (void).cxx_destruct;
- (_Bool)isValid;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (struct CGSize)fixedSize;
- (unsigned long long)imageCacheType;
- (unsigned long long)calculateImageRequestTypeByOriginalSizeAndZoom;
- (unsigned long long)calculateImageRequestTypeInternal;
- (void)calculateImageRequestType;
- (_Bool)isSuperLongImage;
- (id)generateKeyForGetImage:(id)arg1;
- (id)taskIdWithIdentifier:(id)arg1;
- (id)cacheOptions;
- (_Bool)isQValueSupported;
- (_Bool)isWebPSupported;
- (id)zoomParameterWithSize:(struct CGSize)arg1;
- (_Bool)isGrayUser;
- (_Bool)requiredMMTC;
- (_Bool)isMobileNetwork;
- (_Bool)isWeakNetwork;
- (_Bool)isHevcSupport;
- (_Bool)isPJPEGSupported;
- (id)formatParameterWithMobileNetwork:(_Bool)arg1 grayUser:(_Bool)arg2 enablePJPEG:(_Bool)arg3;
- (id)degradeZoomStringWithSize:(struct CGSize)arg1 mobileNetwork:(_Bool)arg2 grayUser:(_Bool)arg3 enablePJPEG:(_Bool)arg4;
- (id)zoomStringWithSize:(struct CGSize)arg1 mobileNetwork:(_Bool)arg2 grayUser:(_Bool)arg3 enablePJPEG:(_Bool)arg4;
- (id)zoomStringWithSize:(struct CGSize)arg1;

@end

