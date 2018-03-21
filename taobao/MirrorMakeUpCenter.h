//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSRecursiveLock;

@interface MirrorMakeUpCenter : NSObject
{
    _Bool _initialized;
    NSRecursiveLock *_dataLock;
    struct CGSize _bufferSize;
    int _referenceCount;
    unsigned int uBeautyFlags;
    unsigned int uPlasticBeautyFlags;
    _Bool _hasChangedFaceBeautyParams;
    _Bool _hasChangedFaceCosmeticParams;
    _Bool _useNewApis;
    NSArray *_faceBeautyParams;
    NSArray *_faceCosmeticParams;
}

+ (id)convertBitmapBGR24ToUIImage:(char *)arg1 withWidth:(int)arg2 withHeight:(int)arg3;
+ (struct CGContext *)newBitmapRGBA8ContextFromImage:(struct CGImage *)arg1;
+ (char *)convertUIImageToBitmapRGBA8:(id)arg1;
+ (id)sharedCenter;
+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)sharedMirrorMakeUpCenter;
@property(retain, nonatomic) NSArray *faceCosmeticParams; // @synthesize faceCosmeticParams=_faceCosmeticParams;
@property(retain, nonatomic) NSArray *faceBeautyParams; // @synthesize faceBeautyParams=_faceBeautyParams;
@property(nonatomic) _Bool useNewApis; // @synthesize useNewApis=_useNewApis;
@property(nonatomic) struct CGSize bufferSize; // @synthesize bufferSize=_bufferSize;
@property(readonly, nonatomic) _Bool initialized; // @synthesize initialized=_initialized;
- (void)updateCosmeticParams;
- (char *)mirrorImage2YUVData:(id)arg1;
- (id)convertWithImage:(id)arg1;
- (id)takePhotoWithImg:(id)arg1;
- (_Bool)setPlasticBeautyArray:(id)arg1;
- (_Bool)setFaceBeautyArray:(id)arg1;
- (_Bool)setBeautyArray:(id)arg1;
- (id)getColorList:(id)arg1;
- (_Bool)setMakeUpArray:(id)arg1;
- (int)intFromColor:(id)arg1;
- (_Bool)inputSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;
- (void)clear;
- (void)clearFaceBeauty;
- (void)clearCosmetic;
- (void)clearAllLocks;
- (void)unlock;
- (void)lock;
- (void)initializer:(id)arg1 completed:(CDUnknownBlockType)arg2;
- (id)init;
- (void)dealloc;
- (id)autorelease;
- (oneway void)release;
- (unsigned long long)retainCount;
- (id)retain;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

