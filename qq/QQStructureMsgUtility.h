//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSData, NSDate, NSString, QQHttpClientSession, UIImage;
@protocol QQStructureMsgUtilityDelegate;

@interface QQStructureMsgUtility : NSObject
{
    QQHttpClientSession *_changeShortURLSession;
    QQHttpClientSession *_uploadImageSession;
    QQHttpClientSession *_fastUploadImageSession;
    id <QQStructureMsgUtilityDelegate> _delegate;
    NSArray *_longUrlsArr;
    UIImage *_shareImage;
    struct CGSize _uploadShareImageSizeMax;
    double _uploadShareImageCompressionQuality;
    long long _lRequestSKeyTag;
    _Bool _changeShortUrlFlag;
    _Bool _uploadImageFlag;
    int _xo;
    NSString *_connIpAddr;
    unsigned int _connIp;
    unsigned int _connPort;
    NSDate *_fastStartTime;
    NSData *_preImageData;
}

+ (void)serverDownloadImage:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (_Bool)isATSError:(id)arg1;
+ (void)savePreImageToFile:(id)arg1 withUrl:(id)arg2;
+ (void)saveDataToFile:(id)arg1 withUrl:(id)arg2;
@property(retain, nonatomic) NSData *preImageData; // @synthesize preImageData=_preImageData;
- (void).cxx_destruct;
- (void)onQQRequestSigSKeyFailNote:(id)arg1;
- (void)onQQRequestSigSKeySuccNote:(id)arg1;
- (void)requestFetchSKey;
- (void)qqHttpSessionError:(id)arg1 error:(id)arg2;
- (void)qqHttpSessionDidLoad:(id)arg1 result:(id)arg2;
- (void)dealloc;
- (id)parsePreviewURL:(id)arg1 retCode:(int *)arg2;
- (id)parsePreviewURL:(id)arg1;
- (void)reportFastUploadImgInfo:(int)arg1;
- (void)fastUploadImageOnTimeout:(id)arg1;
- (void)uploadImageOnTimeout;
- (void)changeShortURLOnTimeout;
- (void)fastUploadImage:(id)arg1;
- (void)_runUploadShareImage:(id)arg1;
- (id)getCookieStr:(id)arg1;
- (_Bool)canUseArkHttp;
- (void)_uploadShareImage:(id)arg1 isScaleToSettingSize:(_Bool)arg2;
- (void)shareUploadShareImage:(id)arg1 isScale:(_Bool)arg2;
- (void)uploadShareImageWithOriginSize:(id)arg1;
- (void)uploadShareImage:(id)arg1;
- (void)getShortUrls:(id)arg1;
- (id)initWithDelegate:(id)arg1;

// Remaining properties
@property(nonatomic) __weak id <QQStructureMsgUtilityDelegate> delegate; // @dynamic delegate;
@property(retain, nonatomic) NSArray *longUrlsArr; // @dynamic longUrlsArr;
@property(retain, nonatomic) UIImage *shareImage; // @dynamic shareImage;

@end

