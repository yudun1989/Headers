//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <QQMainProject/APMidasImgVerifyCodeViewDelegate-Protocol.h>

@class APMidasBizManager, APMidasImgVerifyCodeView, NSString;
@protocol APMidasImgVerifyCodeViewControllerDelegate;

@interface APMidasImgVerifyCodeViewController : UIViewController <APMidasImgVerifyCodeViewDelegate>
{
    id <APMidasImgVerifyCodeViewControllerDelegate> delegate;
    APMidasBizManager *bizManager;
    APMidasImgVerifyCodeView *imgvcView;
}

- (void)onImgVerifyCodeViewClose:(id)arg1;
- (void)onImgVerifyCodeViewResendBtnClicked:(id)arg1;
- (void)onImgVerifyCodeViewMainBtnClicked:(id)arg1;
- (void)onTapBlank;
- (void)onGetCodeSuccess;
- (void)onGetCodeErr:(long long)arg1 innerCode:(id)arg2 errMsg:(id)arg3;
- (void)onNetworkError:(long long)arg1;
- (void)dealloc;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

