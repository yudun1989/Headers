//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QQARUploadImgCallback.h>

@class NSDate, QQARCloudProcessorUpload, QQARCommonConfigModel, QQARFileParameterInfo, QQARMarkerParameterInfo, QQARPretreatmentManager, QQARRootParameterInfo;
@protocol OCRImageSelectedFinishDelegate, OCRUploadResultCallback;

@interface OCRCloudProcessor : QQARUploadImgCallback
{
    QQARPretreatmentManager *_mOCRPretreatmentManager;
    _Bool _isOCRImgUploading;
    QQARCloudProcessorUpload *_mOCRCloudProcessorUpload;
    QQARRootParameterInfo *_mOCRRootParmeterInfo;
    QQARFileParameterInfo *_mOCRFileParameterInfo;
    QQARMarkerParameterInfo *_mOCRMarkerParameterInfo;
    QQARCommonConfigModel *_mOCRConfigModel;
    NSDate *_OCRLocalStartCalcTime;
    double _OCRLocalTimeoutInterval;
    _Bool _OCRHadTrigeTimeout;
    float _picQuality;
    _Bool _isThisDealloc;
    id <OCRUploadResultCallback> _resultCallback;
    id <OCRImageSelectedFinishDelegate> _uiDelegate;
    unsigned long long _recogType;
}

@property(nonatomic) unsigned long long recogType; // @synthesize recogType=_recogType;
@property(nonatomic) _Bool isThisDealloc; // @synthesize isThisDealloc=_isThisDealloc;
@property(nonatomic) __weak id <OCRImageSelectedFinishDelegate> uiDelegate; // @synthesize uiDelegate=_uiDelegate;
@property(nonatomic) __weak id <OCRUploadResultCallback> resultCallback; // @synthesize resultCallback=_resultCallback;
- (void).cxx_destruct;
- (void)doCloudRecogWithImage:(id)arg1;
- (void)cloudProcessorResultCallBack:(id)arg1;
- (void)cloudProcessorCallBack:(id)arg1;
- (void)failCallBack:(id)arg1;
- (void)sucCallBack:(id)arg1;
- (void)doInitCloudProcessor:(id)arg1;
- (void)getDcpConfig;
- (void)dealloc;
- (id)init;

@end

