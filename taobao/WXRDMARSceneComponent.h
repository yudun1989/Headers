//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WXRDMBaseContainerComponent.h"

@class CMMotionManager, EAGLContext, EZMatrix4, GLKViewController, UIView;

@interface WXRDMARSceneComponent : WXRDMBaseContainerComponent
{
    EAGLContext *_context;
    UIView *_gl3dView;
    _Bool _motionEnabled;
    _Bool _cameraFront;
    _Bool _notifyCameraChange;
    CMMotionManager *_motionManager;
    EZMatrix4 *_matrix4;
    EZMatrix4 *_rotateMatrix4;
    EZMatrix4 *_viewMatrix4;
    GLKViewController *_glkVC;
}

@property(retain, nonatomic) GLKViewController *glkVC; // @synthesize glkVC=_glkVC;
@property(nonatomic) _Bool notifyCameraChange; // @synthesize notifyCameraChange=_notifyCameraChange;
@property(retain, nonatomic) EZMatrix4 *viewMatrix4; // @synthesize viewMatrix4=_viewMatrix4;
@property(retain, nonatomic) EZMatrix4 *rotateMatrix4; // @synthesize rotateMatrix4=_rotateMatrix4;
@property(retain, nonatomic) EZMatrix4 *matrix4; // @synthesize matrix4=_matrix4;
@property(nonatomic) _Bool cameraFront; // @synthesize cameraFront=_cameraFront;
@property(nonatomic) _Bool motionEnabled; // @synthesize motionEnabled=_motionEnabled;
@property(retain, nonatomic) CMMotionManager *motionManager; // @synthesize motionManager=_motionManager;
- (void)setGlView:(id)arg1;
- (id)glView;
- (void).cxx_destruct;
- (void)stopMotion;
- (void)startMotion;
- (void)layoutDidFinish;
- (void)clearGLView;
- (void)dealloc;
- (void)removeEvent:(id)arg1;
- (void)addEvent:(id)arg1;
- (void)parseAttributes:(id)arg1;
- (void)updateAttributes:(id)arg1;
- (void)viewDidUnload;
- (void)handleForground;
- (void)handleBackground;
- (void)viewDidLoad;
- (id)initWithRef:(id)arg1 type:(id)arg2 styles:(id)arg3 attributes:(id)arg4 events:(id)arg5 weexInstance:(id)arg6;

@end
