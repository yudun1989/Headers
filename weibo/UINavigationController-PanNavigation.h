//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UINavigationController.h>

@class UIPanNavigationGestureRecognizer, UIViewController;

@interface UINavigationController (PanNavigation)
+ (void)initPanNavigation;
@property(nonatomic, getter=isPanNavigationEnable) _Bool PanNavigationEnable;
- (void)navigationController:(id)arg1 didShowViewController:(id)arg2 animated:(_Bool)arg3;
- (void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(_Bool)arg3;
- (id)popToRootViewControllerAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)popWithPan;
- (_Bool)inAnimation;
- (void)setPopingViewController:(id)arg1;
@property(readonly, nonatomic) __weak UIViewController *popingViewController; // @dynamic popingViewController;
- (void)clearPushingViewController;
- (void)setPushingViewController:(id)arg1;
@property(readonly, nonatomic) UIViewController *pushingViewController; // @dynamic pushingViewController;
@property(readonly, nonatomic) __weak UIPanNavigationGestureRecognizer *panGestureRecognizer;
- (id)initWithRootViewControllerForWB:(id)arg1;
@end

