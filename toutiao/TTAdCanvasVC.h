//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SSViewControllerBase.h"

#import "TTAdCanvasViewController-Protocol.h"

@class NSDictionary, NSMutableArray, TTAdCanvasImpressionTracker, TTAdCanvasJsonLayoutModel, TTAdCanvasNavigationBar, TTAdCanvasTracker, TTAdCanvasVCDelegate, TTAdCanvasViewModel, UIScrollView, UIView;
@protocol TTAdCanvasVCDelegate;

@interface TTAdCanvasVC : SSViewControllerBase <TTAdCanvasViewController>
{
    _Bool _hasLayout;
    _Bool _customAnimation;
    id <TTAdCanvasVCDelegate> _delegate;
    TTAdCanvasTracker *_tracker;
    TTAdCanvasViewModel *_viewModel;
    UIView *_bangView;
    TTAdCanvasNavigationBar *_naviView;
    UIScrollView *_scrollView;
    UIView *_screenShotView;
    NSDictionary *_baseCondition;
    TTAdCanvasVCDelegate *_canvasDelegate;
    NSMutableArray *_cellArray;
    TTAdCanvasJsonLayoutModel *_jsonLayoutModel;
    TTAdCanvasImpressionTracker *_impressionTracker;
    struct UIEdgeInsets _safeEdgeInsets;
}

@property(retain, nonatomic) TTAdCanvasImpressionTracker *impressionTracker; // @synthesize impressionTracker=_impressionTracker;
@property(nonatomic) struct UIEdgeInsets safeEdgeInsets; // @synthesize safeEdgeInsets=_safeEdgeInsets;
@property(nonatomic) _Bool customAnimation; // @synthesize customAnimation=_customAnimation;
@property(nonatomic) _Bool hasLayout; // @synthesize hasLayout=_hasLayout;
@property(retain, nonatomic) TTAdCanvasJsonLayoutModel *jsonLayoutModel; // @synthesize jsonLayoutModel=_jsonLayoutModel;
@property(retain, nonatomic) NSMutableArray *cellArray; // @synthesize cellArray=_cellArray;
@property(retain, nonatomic) TTAdCanvasVCDelegate *canvasDelegate; // @synthesize canvasDelegate=_canvasDelegate;
@property(retain, nonatomic) NSDictionary *baseCondition; // @synthesize baseCondition=_baseCondition;
@property(retain, nonatomic) UIView *screenShotView; // @synthesize screenShotView=_screenShotView;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) TTAdCanvasNavigationBar *naviView; // @synthesize naviView=_naviView;
@property(retain, nonatomic) UIView *bangView; // @synthesize bangView=_bangView;
@property(retain, nonatomic) TTAdCanvasViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) TTAdCanvasTracker *tracker; // @synthesize tracker=_tracker;
@property(nonatomic) __weak id <TTAdCanvasVCDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)didReceiveMemoryWarning;
- (void)skStoreViewDidDisappear:(id)arg1;
- (void)skStoreViewDidAppear:(id)arg1;
- (void)didBecomeActive:(id)arg1;
- (void)didEnterBackground:(id)arg1;
- (void)removeNotification;
- (void)addNotification;
- (void)showEndAnimation;
- (void)commitShowRNViewAnimation;
- (void)startAnimationScale:(struct CGRect)arg1 sourceImageModel:(id)arg2 toFrame:(struct CGRect)arg3 toImageModel:(id)arg4;
- (void)startAnimationMoveUp:(struct CGRect)arg1 sourceImageModel:(id)arg2 toFrame:(struct CGRect)arg3 toImageModel:(id)arg4;
- (void)showStartAnimation;
- (void)closeButtonTouched:(id)arg1;
- (void)shareTouched:(id)arg1;
- (struct CGRect)contentArea;
- (void)viewDidLayoutSubviews;
- (void)setShotScreen;
- (void)setCommons;
- (void)reloadState:(id)arg1;
- (void)createScrollView;
- (void)createCustormNavigationBar;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (void)buildup;
- (id)initWithViewModel:(id)arg1;
- (id)initWithRouteParamObj:(id)arg1;

@end

