//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class EAGLContext, EAGLSharegroup, HTSGLFramebufferCache, HTSGLProgram, NSMutableArray, NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface HTSGLContext : NSObject
{
    NSMutableDictionary *shaderProgramCache;
    NSMutableArray *shaderProgramUsageHistory;
    EAGLSharegroup *_sharegroup;
    void *openGLESContextQueueKey;
    EAGLContext *_context;
    HTSGLProgram *_currentShaderProgram;
    NSObject<OS_dispatch_queue> *_contextQueue;
    struct __CVOpenGLESTextureCache *_coreVideoTextureCache;
    HTSGLFramebufferCache *_framebufferCache;
    struct __CVOpenGLESTextureCache *_gcoreVideoTextureCache;
}

+ (_Bool)supportsFastTextureUpload;
+ (struct CGSize)sizeThatFitsWithinATextureForSize:(struct CGSize)arg1;
+ (_Bool)deviceSupportsFramebufferReads;
+ (_Bool)deviceSupportsRedTextures;
+ (_Bool)deviceSupportsOpenGLESExtension:(id)arg1;
+ (int)maximumVaryingVectorsForThisDevice;
+ (int)maximumTextureUnitsForThisDevice;
+ (int)maximumTextureSizeForThisDevice;
+ (void)setActiveShaderProgram:(id)arg1;
+ (void)useImageProcessingContext;
+ (id)sharedFramebufferCache;
+ (id)sharedContextQueue;
+ (id)sharedImageProcessingContext;
@property struct __CVOpenGLESTextureCache *gcoreVideoTextureCache; // @synthesize gcoreVideoTextureCache=_gcoreVideoTextureCache;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *contextQueue; // @synthesize contextQueue=_contextQueue;
@property(retain, nonatomic) HTSGLProgram *currentShaderProgram; // @synthesize currentShaderProgram=_currentShaderProgram;
- (void).cxx_destruct;
@property(readonly) HTSGLFramebufferCache *framebufferCache; // @synthesize framebufferCache=_framebufferCache;
@property(readonly) struct __CVOpenGLESTextureCache *coreVideoTextureCache; // @synthesize coreVideoTextureCache=_coreVideoTextureCache;
@property(readonly, retain, nonatomic) EAGLContext *context; // @synthesize context=_context;
- (id)createContext;
- (void)useSharegroup:(id)arg1;
- (id)programForVertexShaderString:(id)arg1 fragmentShaderString:(id)arg2;
- (void)presentBufferForDisplay;
- (void)setContextShaderProgram:(id)arg1;
- (void)useAsCurrentContext;
- (void *)contextKey;
- (void)resetContext;
- (void)dealloc;
- (id)init;

@end

