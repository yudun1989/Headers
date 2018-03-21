//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class AVGLSkincropFilter, CAEAGLLayer, NSMutableArray, NSMutableDictionary, NSTimer, PituFaceSwapFilter;
@protocol AVGLBaseViewDelegate;

@interface AVGLBaseView : UIView
{
    unsigned int _renderBuffer;
    unsigned int _frameBuffer;
    unsigned int _frameBuffer2;
    CAEAGLLayer *_eaglLayer;
    NSMutableDictionary *_subViews;
    NSMutableArray *_subViewsKey;
    NSTimer *_timer;
    id <AVGLBaseViewDelegate> _delegate;
    _Bool _initFail;
    _Bool _stopDisplay;
    _Bool _hasBothSkinColor;
    int _skincalculateNum;
    float _faceFeature[83][2];
    NSMutableArray *_accessibleElements;
    struct __CVOpenGLESTextureCache *_coreEndVideoCache;
    struct __CVBuffer *_coreEndVideoTexture;
    struct __CVBuffer *_coreEndVideoRenderTarget;
    int _imageWidth;
    int _imageHeight;
    _Bool _isInTroopVideo;
    _Bool _shouldSwitchFace;
    int _viewMode;
    PituFaceSwapFilter *_pFilter;
    PituFaceSwapFilter *_pFilter2;
    AVGLSkincropFilter *_skinCropFilter1;
    AVGLSkincropFilter *_skinCropFilter2;
    struct AVSkinColor _skinColor1;
    struct AVSkinColor _skinColor2;
}

+ (Class)layerClass;
@property(nonatomic) struct AVSkinColor skinColor2; // @synthesize skinColor2=_skinColor2;
@property(nonatomic) struct AVSkinColor skinColor1; // @synthesize skinColor1=_skinColor1;
@property(retain, nonatomic) AVGLSkincropFilter *skinCropFilter2; // @synthesize skinCropFilter2=_skinCropFilter2;
@property(retain, nonatomic) AVGLSkincropFilter *skinCropFilter1; // @synthesize skinCropFilter1=_skinCropFilter1;
@property(retain, nonatomic) PituFaceSwapFilter *pFilter2; // @synthesize pFilter2=_pFilter2;
@property(retain, nonatomic) PituFaceSwapFilter *pFilter; // @synthesize pFilter=_pFilter;
@property(nonatomic) int viewMode; // @synthesize viewMode=_viewMode;
@property(nonatomic) _Bool shouldSwitchFace; // @synthesize shouldSwitchFace=_shouldSwitchFace;
@property(nonatomic) _Bool isInTroopVideo; // @synthesize isInTroopVideo=_isInTroopVideo;
@property(nonatomic) id <AVGLBaseViewDelegate> delegate; // @synthesize delegate=_delegate;
- (long long)indexOfAccessibilityElement:(id)arg1;
- (id)accessibilityElementAtIndex:(long long)arg1;
- (long long)accessibilityElementCount;
- (_Bool)isAccessibilityElement;
- (id)accessibilityElements;
- (_Bool)setupLayerAndBindBuffer;
- (void)dealloc;
- (void)setBackGroundTransparent:(_Bool)arg1;
- (id)smallViewsHittest:(struct CGPoint)arg1;
- (void)switchToFullState;
- (void)switchToFloatState;
- (void)blockImageForKey:(id)arg1;
- (void)setCuttingEnable:(_Bool)arg1;
- (void)setHasBlackEdge:(_Bool)arg1;
- (void)bringSubviewToFront:(id)arg1;
- (_Bool)hasSmallView;
- (void)changeSubviewForKey:(id)arg1 withKey:(id)arg2;
- (id)getSubViewsKey;
- (id)getSubviewForKey:(id)arg1;
- (void)removeSubviewForKey:(id)arg1;
- (void)addNickName:(id)arg1 forView:(id)arg2;
- (void)addSubview:(id)arg1 forKey:(id)arg2;
- (void)setupFrameBuffer;
- (void)setupRenderBuffer;
- (void)setupLayer;
- (void)destroyOpenGL;
- (void)stopDisplay;
- (void)startDisplay;
- (void)bindSwapfaceViewWithView:(id)arg1 anotherView:(id)arg2 needSwap:(_Bool)arg3 withFilter:(id)arg4;
- (struct CGRect)getRectWithFaceFeature:(id)arg1 WithImageSize:(struct CGSize)arg2;
- (void)calculateSkinColor;
- (void)startSkinColorFusionWithselfRenderView:(id)arg1 peerView:(id)arg2;
- (void)frameBufferRenderToOpenGLTexture;
- (void)uninitCoreEndVideoRenderTarget;
- (_Bool)initCoreEndVideoRenderTarget;
- (id)getSelfRenderView;
- (void)getOffScreenImage;
- (void)display;
- (void)flushFrame;
- (void)initOpenGL;
- (id)initWithFrame:(struct CGRect)arg1;

@end
