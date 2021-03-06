//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CAEAGLLayer, WBEAGLContext;

@interface WBMediaEAGLView : UIView
{
    WBEAGLContext *_context;
    CAEAGLLayer *_eaglLayer;
    struct CGSize _previousLayerSize;
    unsigned int _colorRenderBuffer;
    unsigned int _frameBuffer;
}

+ (Class)layerClass;
@property(readonly, nonatomic) unsigned int frameBuffer; // @synthesize frameBuffer=_frameBuffer;
- (void).cxx_destruct;
- (void)dealloc;
- (void)performGLOperations:(CDUnknownBlockType)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)updateScene;
- (void)layoutSubviews;
- (void)updateColorBuffer;
- (void)setupFrameBuffer;
- (void)setupRenderBuffer;
- (void)setupContext;
- (void)setupLayer;

@end

