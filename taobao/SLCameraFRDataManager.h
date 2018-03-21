//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class SLCameraFRViewController;

@interface SLCameraFRDataManager : NSObject
{
    _Bool _isHaveFace;
    _Bool _isWebviewNeedMouthCallback;
    _Bool _isWebviewNeedSunGlassCallback;
    float _weexRate;
    float _deviceWidth;
    float _deviceHeight;
    SLCameraFRViewController *_containerVC;
    float *_frList;
}

@property(nonatomic) float deviceHeight; // @synthesize deviceHeight=_deviceHeight;
@property(nonatomic) float deviceWidth; // @synthesize deviceWidth=_deviceWidth;
@property(nonatomic) float weexRate; // @synthesize weexRate=_weexRate;
@property(nonatomic) float *frList; // @synthesize frList=_frList;
@property(nonatomic) _Bool isWebviewNeedSunGlassCallback; // @synthesize isWebviewNeedSunGlassCallback=_isWebviewNeedSunGlassCallback;
@property(nonatomic) _Bool isWebviewNeedMouthCallback; // @synthesize isWebviewNeedMouthCallback=_isWebviewNeedMouthCallback;
@property(nonatomic) _Bool isHaveFace; // @synthesize isHaveFace=_isHaveFace;
@property(nonatomic) __weak SLCameraFRViewController *containerVC; // @synthesize containerVC=_containerVC;
- (void).cxx_destruct;
- (float *)getRealFaceFeaturePoints;
- (void)updateToWebView:(_Bool)arg1;
- (id)getCommonLocationInWeex:(_Bool)arg1 hLeft:(int)arg2 hRight:(int)arg3 vTop:(int)arg4 vBottom:(int)arg5;
- (id)getCommonWeexLocation:(int)arg1 hRight:(int)arg2 vTop:(int)arg3 vBottom:(int)arg4;
- (id)getCommonLocation:(int)arg1 hRight:(int)arg2 vTop:(int)arg3 vBottom:(int)arg4;
- (id)getCommonWebCenterPoint:(int)arg1 end:(int)arg2;
- (id)getComonWebPoints:(id)arg1;
- (void)clearData;
- (void)updateFaceFeaturePoints:(float *)arg1 imageWidth:(double)arg2 imageHeight:(double)arg3;
- (void)dealloc;
- (id)init;

@end

