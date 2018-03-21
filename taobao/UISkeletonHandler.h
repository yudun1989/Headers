//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "UISkeletonProtocol-Protocol.h"

@class NSString;

@interface UISkeletonHandler : NSObject <UISkeletonProtocol>
{
}

- (id)containerViewControllerForController:(id)arg1 navigateType:(id)arg2;
- (id)targetControllerWithNavigationParams:(id)arg1;
- (id)containerViewControllerWithNavigationParams:(id)arg1 sourceController:(id)arg2;
- (void)dismissViewController:(id)arg1 action:(id)arg2;
- (void)_doBackAction:(id)arg1;
- (void)backFromAction:(id)arg1;
- (void)openViewController:(id)arg1 urlAction:(id)arg2;
- (id)viewControllerForView:(id)arg1;
- (id)viewControllerForSource:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

