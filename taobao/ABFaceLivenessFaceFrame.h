//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "ABFaceFrame-Protocol.h"

@class NSString;

@interface ABFaceLivenessFaceFrame : NSObject <ABFaceFrame>
{
    int _initImageHeight;
    int _initImageAngle;
    int _detectorStatus;
    struct opaqueCMSampleBuffer *_imageBuffer;
    struct ABDetectResult _detectResult;
    struct ABDetectInfo _detectInfo;
}

@property int detectorStatus; // @synthesize detectorStatus=_detectorStatus;
@property int initImageAngle; // @synthesize initImageAngle=_initImageAngle;
@property int initImageHeight; // @synthesize initImageHeight=_initImageHeight;
@property struct opaqueCMSampleBuffer *imageBuffer; // @synthesize imageBuffer=_imageBuffer;
@property(nonatomic) struct ABDetectResult detectResult; // @synthesize detectResult=_detectResult;
@property struct ABDetectInfo detectInfo; // @synthesize detectInfo=_detectInfo;
- (id)getCroppedFrameOfFaceWithMaxImageSize:(int)arg1;
- (id)getCroppedFrameOfFaceWithMaxImageSize:(int)arg1 withOutCGRect:(struct CGRect *)arg2;
- (id)getCroppedImageOfFace;
- (id)getCroppedImageOfFace:(struct CGRect *)arg1;
- (int)facesDetected;
- (struct ABDetectInfo)getDetectInfo;
- (id)getImage;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

