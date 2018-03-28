//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TTNavigationController.h"

#import "TTModalWrapControllerDelegate-Protocol.h"

@class NSString;
@protocol TTModalInsideNavigationDelegate;

@interface TTModalInsideNavigationController : TTNavigationController <TTModalWrapControllerDelegate>
{
    id <TTModalInsideNavigationDelegate> _modalNavigationDelegate;
}

@property(nonatomic) __weak id <TTModalInsideNavigationDelegate> modalNavigationDelegate; // @synthesize modalNavigationDelegate=_modalNavigationDelegate;
- (void).cxx_destruct;
- (void)modalWrapController:(id)arg1 panAtPercent:(double)arg2;
- (void)modalWrapController:(id)arg1 closeButtonOnClick:(id)arg2;
- (void)modalWrapController:(id)arg1 backButtonOnClick:(id)arg2;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (id)popViewControllerAnimated:(_Bool)arg1;
- (void)pushViewController:(id)arg1 animated:(_Bool)arg2;
- (id)initWithRootViewController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

