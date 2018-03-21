//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "FalconGLViewFrameRenderDelegate-Protocol.h"

@class FalconGLView, NSString;
@protocol FalconARRenderViewDelegate;

@interface FalconARRenderView : UIView <FalconGLViewFrameRenderDelegate>
{
    FalconGLView *fglView;
    _Bool _renderEnabled;
    id <FalconARRenderViewDelegate> _delegate;
}

@property(nonatomic) _Bool renderEnabled; // @synthesize renderEnabled=_renderEnabled;
@property(nonatomic) __weak id <FalconARRenderViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)destroyRenderView;
- (void)createRenderView;
- (void)resumeScan;
- (void)pauseScan;
- (void)stopScan;
- (void)stopScanAnimate;
- (void)startScanAnimate;
- (void)scanWithRefFrame:(id)arg1 refFrame:(struct __CVBuffer *)arg2 param:(id)arg3;
- (void)layoutSubviews;
- (void)FalconFirstFrameDidRender;
- (void)FalconGLViewframeRender:(int)arg1 renderResult:(id)arg2;
- (void)FalconStillTargetNotFitHide;
- (void)FalconTargetMoveFast;
- (void)setTrainFeature:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

