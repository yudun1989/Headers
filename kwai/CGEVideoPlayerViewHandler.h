//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "CGEFrameUpdateDelegate-Protocol.h"

@class CGEVideoPlayer, GLKView, NSString;

@interface CGEVideoPlayerViewHandler : NSObject <CGEFrameUpdateDelegate>
{
    _Bool _shouldResetViewport;
    _Bool _shouldUpdateViewport;
    float _maskAspectRatio;
    int _displayMode;
    CGEVideoPlayer *_videoPlayer;
    GLKView *_glkView;
    struct CGRect _viewArea;
}

@property(nonatomic) _Bool shouldUpdateViewport; // @synthesize shouldUpdateViewport=_shouldUpdateViewport;
@property(nonatomic) _Bool shouldResetViewport; // @synthesize shouldResetViewport=_shouldResetViewport;
@property(nonatomic, setter=setViewDisplayMode:) int displayMode; // @synthesize displayMode=_displayMode;
@property(nonatomic) struct CGRect viewArea; // @synthesize viewArea=_viewArea;
@property(nonatomic) float maskAspectRatio; // @synthesize maskAspectRatio=_maskAspectRatio;
@property(nonatomic) __weak GLKView *glkView; // @synthesize glkView=_glkView;
@property(retain, nonatomic) CGEVideoPlayer *videoPlayer; // @synthesize videoPlayer=_videoPlayer;
- (void).cxx_destruct;
- (void)_updateViewArea:(float)arg1;
- (void)_updateViewArea;
- (long long)status;
- (CDStruct_1b6d18a9)currentTime;
- (CDStruct_1b6d18a9)videoDuration;
- (void)resume;
- (void)pause;
- (void)restart;
- (_Bool)isPlaying;
- (void)startWithAsset:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)startWithURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)startWithURL:(id)arg1;
- (_Bool)isUsingMask;
- (void)setMaskTexture:(unsigned int)arg1 textureAspectRatio:(float)arg2;
- (void)setMaskUIImage:(id)arg1;
- (void)setFilterWithConfig:(const char *)arg1;
- (void)setFilterIntensity:(float)arg1;
- (void)frameUpdated;
- (void)clear;
- (void)dealloc;
- (void)setup;
- (id)initWithGLKView:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

