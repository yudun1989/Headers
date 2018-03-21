//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface CGECVUtilTexture : NSObject
{
    struct __CVBuffer *_pixelBufferRef;
    struct __CVBuffer *_textureRef;
    struct __CVOpenGLESTextureCache *_textureCacheRef;
    unsigned int _textureID;
    unsigned int _textureTarget;
    int _textureWidth;
    int _textureHeight;
}

+ (id)makeCVTexture:(int)arg1 height:(int)arg2 bufferPool:(struct __CVPixelBufferPool *)arg3;
+ (void)releasePixelBufferPoolRef:(struct __CVPixelBufferPool *)arg1;
+ (struct __CVPixelBufferPool *)makePixelBufferPoolRef:(int)arg1 height:(int)arg2;
@property(readonly, nonatomic) int textureHeight; // @synthesize textureHeight=_textureHeight;
@property(readonly, nonatomic) int textureWidth; // @synthesize textureWidth=_textureWidth;
- (unsigned int)textureID;
- (unsigned int)textureTarget;
- (struct __CVOpenGLESTextureCache *)textureCacheRef;
- (struct __CVBuffer *)textureRef;
- (struct __CVBuffer *)pixelBufferRef;
- (_Bool)setupWithSize:(int)arg1 height:(int)arg2 bufferPool:(struct __CVPixelBufferPool *)arg3;
- (void)clear;
- (void)dealloc;
- (id)initWithSize:(int)arg1 height:(int)arg2 bufferPool:(struct __CVPixelBufferPool *)arg3;
- (id)initWithSize:(int)arg1 height:(int)arg2;

@end

