//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/NSObject-Protocol.h>

@class NSArray, UIPageViewController;

@protocol UIPageViewControllerDelegate <NSObject>

@optional
- (long long)pageViewControllerPreferredInterfaceOrientationForPresentation:(UIPageViewController *)arg1;
- (unsigned long long)pageViewControllerSupportedInterfaceOrientations:(UIPageViewController *)arg1;
- (long long)pageViewController:(UIPageViewController *)arg1 spineLocationForInterfaceOrientation:(long long)arg2;
- (void)pageViewController:(UIPageViewController *)arg1 didFinishAnimating:(_Bool)arg2 previousViewControllers:(NSArray *)arg3 transitionCompleted:(_Bool)arg4;
- (void)pageViewController:(UIPageViewController *)arg1 willTransitionToViewControllers:(NSArray *)arg2;
@end

