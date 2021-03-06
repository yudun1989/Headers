//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "UIGestureRecognizerDelegate-Protocol.h"

@class NSString, UIPanGestureRecognizer, UITapGestureRecognizer, UIView;
@protocol KSRevealSideViewControllerDelegate;

@interface KSRevealSideViewController : UIViewController <UIGestureRecognizerDelegate>
{
    _Bool _tapHideMenu;
    UIViewController *_menuViewController;
    UIViewController *_contentViewController;
    id <KSRevealSideViewControllerDelegate> _delegate;
    double _touchWidth;
    double _animationDuration;
    UIPanGestureRecognizer *_panGestureRecognizer;
    double _contentMaxOffset;
    double _contentMinScale;
    double _menuMaxOffset;
    double _menuMinScale;
    UIPanGestureRecognizer *_coverPanGestureRecognizer;
    UITapGestureRecognizer *_tapGestureRecognizer;
    UIView *_contentCoverView;
    double _radio;
    double _contentScale;
    double _contentOffset;
    double _menuScale;
    double _menuOffset;
}

@property(nonatomic) double menuOffset; // @synthesize menuOffset=_menuOffset;
@property(nonatomic) double menuScale; // @synthesize menuScale=_menuScale;
@property(nonatomic) double contentOffset; // @synthesize contentOffset=_contentOffset;
@property(nonatomic) double contentScale; // @synthesize contentScale=_contentScale;
@property(nonatomic) double radio; // @synthesize radio=_radio;
@property(retain, nonatomic) UIView *contentCoverView; // @synthesize contentCoverView=_contentCoverView;
@property(retain, nonatomic) UITapGestureRecognizer *tapGestureRecognizer; // @synthesize tapGestureRecognizer=_tapGestureRecognizer;
@property(retain, nonatomic) UIPanGestureRecognizer *coverPanGestureRecognizer; // @synthesize coverPanGestureRecognizer=_coverPanGestureRecognizer;
@property(nonatomic) double menuMinScale; // @synthesize menuMinScale=_menuMinScale;
@property(nonatomic) double menuMaxOffset; // @synthesize menuMaxOffset=_menuMaxOffset;
@property(nonatomic) double contentMinScale; // @synthesize contentMinScale=_contentMinScale;
@property(nonatomic) double contentMaxOffset; // @synthesize contentMaxOffset=_contentMaxOffset;
@property(retain, nonatomic) UIPanGestureRecognizer *panGestureRecognizer; // @synthesize panGestureRecognizer=_panGestureRecognizer;
@property(nonatomic) double animationDuration; // @synthesize animationDuration=_animationDuration;
@property(nonatomic) double touchWidth; // @synthesize touchWidth=_touchWidth;
@property(nonatomic) _Bool tapHideMenu; // @synthesize tapHideMenu=_tapHideMenu;
@property(nonatomic) __weak id <KSRevealSideViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) UIViewController *contentViewController; // @synthesize contentViewController=_contentViewController;
@property(readonly, nonatomic) UIViewController *menuViewController; // @synthesize menuViewController=_menuViewController;
- (void).cxx_destruct;
- (_Bool)ks_shouldHandleRevealSidePanGestureRecognizer:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (id)childViewControllerForStatusBarHidden;
- (id)childViewControllerForStatusBarStyle;
- (_Bool)prefersStatusBarHidden;
- (long long)preferredStatusBarStyle;
- (void)hideMenuWithNewContentViewController:(id)arg1;
- (void)hideMenu;
- (void)hideMenuWithOptions:(unsigned long long)arg1;
- (void)showMenu;
- (void)showMenuWithOption:(unsigned long long)arg1;
- (void)handlePan:(id)arg1;
- (void)handleTap:(id)arg1;
- (void)updateUI;
- (unsigned long long)supportedInterfaceOrientations;
- (long long)preferredInterfaceOrientationForPresentation;
- (_Bool)shouldAutorotate;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithMenuViewController:(id)arg1 contentViewController:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

