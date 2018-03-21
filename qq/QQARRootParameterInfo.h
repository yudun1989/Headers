//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString, QQARFaceParameterInfo, QQARFileParameterInfo, QQARImgRetrievalInfo, QQARMarkerParameterInfo, QQAROcrParameterInfo, QQAROcrSoutiParameterInfo;

@interface QQARRootParameterInfo : NSObject
{
    int _longitude;
    int _latitude;
    int _businessType;
    int _word_detect_timeout;
    NSString *_sessionId;
    long long _recogType;
    NSString *_version;
    long long _uin;
    QQARFileParameterInfo *_fileInfo;
    QQARMarkerParameterInfo *_markerInfo;
    QQARFaceParameterInfo *_faceRecogInfo;
    QQAROcrParameterInfo *_ocrInfo;
    QQAROcrSoutiParameterInfo *_ocrSoutiInfo;
    QQARImgRetrievalInfo *_imgRetrivevalInfo;
}

@property(retain, nonatomic) QQARImgRetrievalInfo *imgRetrivevalInfo; // @synthesize imgRetrivevalInfo=_imgRetrivevalInfo;
@property(retain, nonatomic) QQAROcrSoutiParameterInfo *ocrSoutiInfo; // @synthesize ocrSoutiInfo=_ocrSoutiInfo;
@property(retain, nonatomic) QQAROcrParameterInfo *ocrInfo; // @synthesize ocrInfo=_ocrInfo;
@property(retain, nonatomic) QQARFaceParameterInfo *faceRecogInfo; // @synthesize faceRecogInfo=_faceRecogInfo;
@property(retain, nonatomic) QQARMarkerParameterInfo *markerInfo; // @synthesize markerInfo=_markerInfo;
@property(retain, nonatomic) QQARFileParameterInfo *fileInfo; // @synthesize fileInfo=_fileInfo;
@property(nonatomic) int word_detect_timeout; // @synthesize word_detect_timeout=_word_detect_timeout;
@property(nonatomic) long long uin; // @synthesize uin=_uin;
@property(retain, nonatomic) NSString *version; // @synthesize version=_version;
@property(nonatomic) int businessType; // @synthesize businessType=_businessType;
@property(nonatomic) long long recogType; // @synthesize recogType=_recogType;
@property(nonatomic) int latitude; // @synthesize latitude=_latitude;
@property(nonatomic) int longitude; // @synthesize longitude=_longitude;
@property(retain, nonatomic) NSString *sessionId; // @synthesize sessionId=_sessionId;
- (void).cxx_destruct;
- (id)init;

@end

