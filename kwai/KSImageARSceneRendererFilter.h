//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPUImageFilter.h"

#import "SCNSceneRendererDelegate-Protocol.h"

@class KSImageARScene, NSString, SCNRenderer;

@interface KSImageARSceneRendererFilter : GPUImageFilter <SCNSceneRendererDelegate>
{
    CDStruct_1b6d18a9 _frameTime;
    KSImageARScene *_arScene;
    unsigned long long _sceneRotation;
    unsigned char _initialized;
    unsigned int _depthTexture;
    struct list<unsigned int, std::__1::allocator<unsigned int>> m_frameTextures;
    struct vector<unsigned int, std::__1::allocator<unsigned int>> m_totalFrameTextures;
    int m_totalFrames;
    shared_ptr_656b164d vfp;
    _Bool _virtualEnabled;
    SCNRenderer *_renderer;
    double _superResolution;
}

@property(nonatomic) double superResolution; // @synthesize superResolution=_superResolution;
@property(retain, nonatomic) SCNRenderer *renderer; // @synthesize renderer=_renderer;
@property(nonatomic) _Bool virtualEnabled; // @synthesize virtualEnabled=_virtualEnabled;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)newFrameReadyAtTime:(CDStruct_1b6d18a9)arg1 atIndex:(long long)arg2;
- (void)renderToTextureWithVertices:(const float *)arg1 textureCoordinates:(const float *)arg2;
- (void)pushFrame:(unsigned int)arg1;
- (unsigned int)genBufferTexture;
- (void)bindDepthTexture:(id)arg1;
- (void)unbindDepthTexture;
- (shared_ptr_656b164d)getVfp;
- (id)initWithARScene:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

