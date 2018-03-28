//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "UIGestureRecognizerDelegate-Protocol.h"
#import "UIViewControllerTransitioningDelegate-Protocol.h"

@class NSDictionary, NSString, TTLUserWalletInfoService, TTLWalletInfoModel, UILabel, UIPercentDrivenInteractiveTransition, UIView;

@interface TTLWalletViewController : UIViewController <UIViewControllerTransitioningDelegate, UIGestureRecognizerDelegate>
{
    _Bool _navigationHide;
    TTLWalletInfoModel *_wallet;
    NSDictionary *_extraInfo;
    UIView *_navigationView;
    TTLUserWalletInfoService *_walletService;
    UILabel *_balanceLabel;
    UILabel *_remaining;
    UIPercentDrivenInteractiveTransition *_percentDrivenTransition;
}

@property(retain, nonatomic) UIPercentDrivenInteractiveTransition *percentDrivenTransition; // @synthesize percentDrivenTransition=_percentDrivenTransition;
@property(retain, nonatomic) UILabel *remaining; // @synthesize remaining=_remaining;
@property(retain, nonatomic) UILabel *balanceLabel; // @synthesize balanceLabel=_balanceLabel;
@property(retain, nonatomic) TTLUserWalletInfoService *walletService; // @synthesize walletService=_walletService;
@property(retain, nonatomic) UIView *navigationView; // @synthesize navigationView=_navigationView;
@property(copy, nonatomic) NSDictionary *extraInfo; // @synthesize extraInfo=_extraInfo;
@property(retain, nonatomic) TTLWalletInfoModel *wallet; // @synthesize wallet=_wallet;
- (void).cxx_destruct;
- (_Bool)shouldAutorotate;
- (void)onPanGesture:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (id)interactionControllerForPresentation:(id)arg1;
- (id)interactionControllerForDismissal:(id)arg1;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (void)presentViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3 pushStyle:(_Bool)arg4;
- (void)buttonAction:(id)arg1;
- (void)back;
- (void)customRow:(id)arg1;
- (void)setupSubViews;
- (void)setupNaviBar;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

