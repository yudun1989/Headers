//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface KSProjectThumbnailService : NSObject
{
    unsigned int _frameBuffer;
    struct __CVOpenGLESTextureCache *_textureCache;
    struct __CVBuffer *_texture;
    struct __CVBuffer *_pixelBuffer;
    struct KSEditorProjectObj *ksEditorObj;
    struct CKSForUIOper *ksForUIOper;
    double _thumbnailInterval;
    struct CGSize _videoSize;
}

@property(nonatomic) double thumbnailInterval; // @synthesize thumbnailInterval=_thumbnailInterval;
@property(nonatomic) struct CGSize videoSize; // @synthesize videoSize=_videoSize;
- (void)createFrameBufferObject;
- (struct CGImage *)renderFrameAt:(double)arg1;
- (int)setupOpenGLESTextureCache;
- (void)releaseEncode;
- (void)setup;
- (struct CGImage *)thumbnailAtIndex:(unsigned long long)arg1;
- (void)updateProject:(struct KSAProject *)arg1;
- (void)didReceiveMemoryWarning;
- (void)dealloc;
- (id)initWithProject:(struct KSAProject *)arg1 outputSize:(int)arg2 timeInterval:(double)arg3;

@end

