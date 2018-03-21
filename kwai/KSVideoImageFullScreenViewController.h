//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "KSBaseViewController.h"

#import "UIScrollViewDelegate-Protocol.h"
#import "UIViewControllerAnimatedTransitioning-Protocol.h"

@class NSString, UIView;
@protocol KSVideoImageFullScreenViewControllerDelegate;

@interface KSVideoImageFullScreenViewController : KSBaseViewController <UIViewControllerAnimatedTransitioning, UIScrollViewDelegate>
{
    _Bool _scrollEnabled;
    UIView *_targetView;
    id <KSVideoImageFullScreenViewControllerDelegate> _delegate;
    UIView *_originalSuperView;
    UIView *_backgroundView;
    UIView *_contentView;
    struct CGSize _targetSize;
    struct CGRect _originalFrame;
    struct CGRect _originalFrameInNavigation;
    struct CGAffineTransform _landscapeTransform;
    struct CGAffineTransform _portraitTransform;
}

@property(nonatomic) struct CGSize targetSize; // @synthesize targetSize=_targetSize;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(nonatomic) struct CGAffineTransform portraitTransform; // @synthesize portraitTransform=_portraitTransform;
@property(nonatomic) struct CGAffineTransform landscapeTransform; // @synthesize landscapeTransform=_landscapeTransform;
@property(nonatomic) struct CGRect originalFrameInNavigation; // @synthesize originalFrameInNavigation=_originalFrameInNavigation;
@property(nonatomic) struct CGRect originalFrame; // @synthesize originalFrame=_originalFrame;
@property(retain, nonatomic) UIView *originalSuperView; // @synthesize originalSuperView=_originalSuperView;
@property(nonatomic) _Bool scrollEnabled; // @synthesize scrollEnabled=_scrollEnabled;
@property(nonatomic) __weak id <KSVideoImageFullScreenViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIView *targetView; // @synthesize targetView=_targetView;
- (void).cxx_destruct;
- (_Bool)ks_shouldHandleBackPanGestureRecognizer:(id)arg1;
- (struct CGAffineTransform)transformWithOrigentaion:(long long)arg1;
- (void)backgroundClicked;
- (void)didReceiveDeviceOrientationDidChangeNotification:(id)arg1;
- (id)viewForZoomingInScrollView:(id)arg1;
- (void)animateTransition:(id)arg1;
- (double)transitionDuration:(id)arg1;
- (id)ks_navigationController:(id)arg1 animationControllerForOperation:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4;
- (long long)preferredStatusBarUpdateAnimation;
- (_Bool)prefersStatusBarHidden;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (struct CGSize)sizeWithOrigentaion:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)setZoomScale:(double)arg1 animated:(_Bool)arg2;
- (void)loadView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

