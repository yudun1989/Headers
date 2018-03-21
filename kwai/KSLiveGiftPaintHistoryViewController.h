//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "KSShowViewController.h"

#import "UIPageViewControllerDataSource-Protocol.h"
#import "UIPageViewControllerDelegate-Protocol.h"

@class KSLiveGiftPaintHistoryViewModel, NSString, UIButton, UIPageControl, UIPageViewController;

@interface KSLiveGiftPaintHistoryViewController : KSShowViewController <UIPageViewControllerDelegate, UIPageViewControllerDataSource>
{
    KSLiveGiftPaintHistoryViewModel *_viewModel;
    CDUnknownBlockType _onDismissViewController;
    UIPageControl *_pageControl;
    UIPageViewController *_pageViewController;
    UIButton *_cancelButton;
    UIButton *_selectButton;
}

@property(retain, nonatomic) UIButton *selectButton; // @synthesize selectButton=_selectButton;
@property(retain, nonatomic) UIButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(retain, nonatomic) UIPageViewController *pageViewController; // @synthesize pageViewController=_pageViewController;
@property(retain, nonatomic) UIPageControl *pageControl; // @synthesize pageControl=_pageControl;
@property(copy, nonatomic) CDUnknownBlockType onDismissViewController; // @synthesize onDismissViewController=_onDismissViewController;
@property(readonly, nonatomic) KSLiveGiftPaintHistoryViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void).cxx_destruct;
- (unsigned long long)indexOfViewController:(id)arg1;
- (void)pageViewController:(id)arg1 didFinishAnimating:(_Bool)arg2 previousViewControllers:(id)arg3 transitionCompleted:(_Bool)arg4;
- (id)pageViewController:(id)arg1 viewControllerAfterViewController:(id)arg2;
- (id)pageViewController:(id)arg1 viewControllerBeforeViewController:(id)arg2;
- (double)contentViewHeight;
- (void)viewDidLoad;
- (id)initWithViewModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

