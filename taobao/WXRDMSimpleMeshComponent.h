//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WXRDMBaseEntityComponent.h"

#import "EZAnimationDelegate-Protocol.h"

@class EZAnimation, EZAnimationFlow, EZAnimationLane, EZBareMaterial, EZEntity, EZImageTexture, EZMaterial, EZModel, NSString;

@interface WXRDMSimpleMeshComponent : WXRDMBaseEntityComponent <EZAnimationDelegate>
{
    _Bool _notifyGazeEvent;
    double _mFocusEnterSecond;
    float _width;
    float _height;
    int _gazeTime;
    EZBareMaterial *_textureMaterial;
    id _image;
    EZImageTexture *_imageTexture;
    NSString *_maskSrc;
    EZImageTexture *_maskTexture;
    EZEntity *_textureEntity;
    EZEntity *_waterEntity;
    EZModel *_waterMesh;
    EZMaterial *_waterMaterial;
    EZAnimationFlow *_waterAnimationFlow;
    EZAnimationLane *_waterAnimationLane;
    EZAnimation *_waterAnimation;
}

@property(nonatomic) _Bool notifyGazeEvent; // @synthesize notifyGazeEvent=_notifyGazeEvent;
@property(nonatomic) int gazeTime; // @synthesize gazeTime=_gazeTime;
@property(retain, nonatomic) EZAnimation *waterAnimation; // @synthesize waterAnimation=_waterAnimation;
@property(retain, nonatomic) EZAnimationLane *waterAnimationLane; // @synthesize waterAnimationLane=_waterAnimationLane;
@property(retain, nonatomic) EZAnimationFlow *waterAnimationFlow; // @synthesize waterAnimationFlow=_waterAnimationFlow;
@property(retain, nonatomic) EZMaterial *waterMaterial; // @synthesize waterMaterial=_waterMaterial;
@property(retain, nonatomic) EZModel *waterMesh; // @synthesize waterMesh=_waterMesh;
@property(retain, nonatomic) EZEntity *waterEntity; // @synthesize waterEntity=_waterEntity;
@property(retain, nonatomic) EZEntity *textureEntity; // @synthesize textureEntity=_textureEntity;
@property(retain, nonatomic) EZImageTexture *maskTexture; // @synthesize maskTexture=_maskTexture;
@property(copy, nonatomic) NSString *maskSrc; // @synthesize maskSrc=_maskSrc;
@property(retain, nonatomic) EZImageTexture *imageTexture; // @synthesize imageTexture=_imageTexture;
@property(retain, nonatomic) id image; // @synthesize image=_image;
@property(nonatomic) float height; // @synthesize height=_height;
@property(nonatomic) float width; // @synthesize width=_width;
@property(retain, nonatomic) EZBareMaterial *textureMaterial; // @synthesize textureMaterial=_textureMaterial;
- (void).cxx_destruct;
- (void)mixValueFrom:(float)arg1 to:(float)arg2 animation:(id)arg3;
- (void)resetGaze;
- (void)onFocusEvent:(long long)arg1;
- (void)removeEvent:(id)arg1;
- (void)addEvent:(id)arg1;
- (void)refreshMask;
- (id)imageLoader;
- (void)updateTexture;
- (void)createTextureWithImage:(id)arg1;
- (void)bindMaterial;
- (void)createMesh;
- (void)notifyTextureRefresh;
- (void)createMaterial;
- (void)refreshEntity;
- (void)findModelRecursive:(id)arg1 result:(id *)arg2;
- (void)prepareGeometry:(id)arg1;
- (void)createEntity;
- (void)initGazeAttributes;
- (void)updateAttributes:(id)arg1;
- (void)dealloc;
- (void)clearEZObjects;
- (void)handleSplitNotification:(id)arg1;
- (void)viewDidUnload;
- (id)initWithRef:(id)arg1 type:(id)arg2 styles:(id)arg3 attributes:(id)arg4 events:(id)arg5 weexInstance:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

