//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSDictionary, UIView, UIViewController;

@protocol AliHAVCLifeProtocol <NSObject>
- (void)onViewDidDisappear:(_Bool)arg1 viewController:(UIViewController *)arg2;
- (void)onViewDidLayoutSubviews:(UIViewController *)arg1;
- (void)onViewDidAppear:(_Bool)arg1 viewController:(UIViewController *)arg2;
- (void)onPageChange:(long long)arg1 fromVC:(UIViewController *)arg2 toVC:(UIViewController *)arg3 args:(NSDictionary *)arg4;

@optional
- (void)onUIViewLayoutSubviews;
- (void)onNavigationDidEndTransitionFromView:(UIView *)arg1 toView:(UIView *)arg2;
- (void)onViewWillDisappear:(_Bool)arg1 viewController:(UIViewController *)arg2;
- (void)onViewWillAppear:(_Bool)arg1 viewController:(UIViewController *)arg2;
- (void)onViewWillExit:(UIViewController *)arg1;
- (void)onViewDidLoad:(UIViewController *)arg1;
@end

