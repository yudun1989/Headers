//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBViewController.h"

#import "GLKViewDelegate-Protocol.h"
#import "TBARCameraCaptureDelegate-Protocol.h"
#import "TBRDMSceneTrackingDelegate-Protocol.h"
#import "WVWebViewDelegate-Protocol.h"

@class EAGLContext, GLKViewController, MBProgressHUD, NSDictionary, NSMutableArray, NSString, Reachability, TBARCameraViewController, TBARScanPixelBufferRender, TBRDMSceneTracking, UIButton, WVWebView;
@protocol WVBridgeCallbackContext;

@interface TBRDMHybridViewController : TBViewController <TBARCameraCaptureDelegate, WVWebViewDelegate, TBRDMSceneTrackingDelegate, GLKViewDelegate>
{
    _Bool registerSuccess;
    MBProgressHUD *_activeHud;
    struct _opaque_pthread_mutex_t pixelBufferLock;
    struct __CVBuffer *cvPixelBuffer;
    _Bool _trackSrcDownloaded;
    _Bool _webviewLoaded;
    id <WVBridgeCallbackContext> _testCallback;
    Reachability *_reachability;
    UIButton *_backButton;
    TBARCameraViewController *_cameraVC;
    GLKViewController *_glkVC;
    EAGLContext *_context;
    TBARScanPixelBufferRender *_render;
    NSDictionary *_resumeOption;
    NSString *_trackSrc;
    long long _trackState;
    TBRDMSceneTracking *_tracker;
    NSMutableArray *_trackingResult;
    NSString *_h5Url;
    WVWebView *_webView;
    CDUnknownBlockType _resumeCallback;
}

+ (_Bool)registerWV;
@property(copy, nonatomic) CDUnknownBlockType resumeCallback; // @synthesize resumeCallback=_resumeCallback;
@property(nonatomic) _Bool webviewLoaded; // @synthesize webviewLoaded=_webviewLoaded;
@property(retain, nonatomic) WVWebView *webView; // @synthesize webView=_webView;
@property(copy, nonatomic) NSString *h5Url; // @synthesize h5Url=_h5Url;
@property(retain, nonatomic) NSMutableArray *trackingResult; // @synthesize trackingResult=_trackingResult;
@property(retain, nonatomic) TBRDMSceneTracking *tracker; // @synthesize tracker=_tracker;
@property(nonatomic) long long trackState; // @synthesize trackState=_trackState;
@property(nonatomic) _Bool trackSrcDownloaded; // @synthesize trackSrcDownloaded=_trackSrcDownloaded;
@property(copy, nonatomic) NSString *trackSrc; // @synthesize trackSrc=_trackSrc;
@property(retain, nonatomic) NSDictionary *resumeOption; // @synthesize resumeOption=_resumeOption;
@property(retain, nonatomic) TBARScanPixelBufferRender *render; // @synthesize render=_render;
@property(retain, nonatomic) EAGLContext *context; // @synthesize context=_context;
@property(retain, nonatomic) GLKViewController *glkVC; // @synthesize glkVC=_glkVC;
@property(retain, nonatomic) TBARCameraViewController *cameraVC; // @synthesize cameraVC=_cameraVC;
@property(retain, nonatomic) UIButton *backButton; // @synthesize backButton=_backButton;
@property(retain, nonatomic) Reachability *reachability; // @synthesize reachability=_reachability;
@property(retain, nonatomic) id <WVBridgeCallbackContext> testCallback; // @synthesize testCallback=_testCallback;
- (void).cxx_destruct;
- (void)glkView:(id)arg1 drawInRect:(struct CGRect)arg2;
- (void)sceneTrackingDidReceiveServerResult:(id)arg1 rt:(double)arg2;
- (void)sceneTrackingNeedsValidImage;
- (void)captureVideo:(char **)arg1 width:(int)arg2 height:(int)arg3;
- (void)captureCMSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 video:(char **)arg2 width:(int)arg3 height:(int)arg4;
- (_Bool)isOpenLocalService;
- (void)webViewDidFinishLoad:(id)arg1;
- (void)fireEvent:(id)arg1 params:(id)arg2;
- (void)hideScanAnimation;
- (void)showScanAnimation;
- (int)setParameters:(id)arg1;
- (int)resetTracking;
- (int)exitViewController;
- (int)pauseTracking;
- (void)resumeTracking:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)refresh;
- (void)toastMessage:(id)arg1;
- (void)hideHud;
- (void)toastHudOnView:(id)arg1;
- (void)addBackbutton;
- (void)didReceiveMemoryWarning;
- (void)prepareTracking;
- (void)setupCamera;
- (void)handleTestSuccess;
- (void)handleTestFailure;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithNavigatorURL:(id)arg1 query:(id)arg2 nativeParams:(id)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

