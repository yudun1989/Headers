//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CGECVUtilTexture.h"

@interface CGECVUtilTextureWithFramebuffer : CGECVUtilTexture
{
    unsigned int _framebufferID;
}

+ (id)makeCVTexture:(int)arg1 height:(int)arg2 bufferPool:(struct __CVPixelBufferPool *)arg3;
- (void)unmapBuffer:(unsigned long long)arg1;
- (struct CGECVBufferData)mapBuffer:(unsigned long long)arg1;
- (void)bindTextureFramebuffer;
- (unsigned int)framebuffer;
- (void)clear;
- (id)initWithSize:(int)arg1 height:(int)arg2 bufferPool:(struct __CVPixelBufferPool *)arg3;
- (id)initWithSize:(int)arg1 height:(int)arg2;

@end

