//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <QQMainProject/QRTotalBookPayWorkerDelegate-Protocol.h>

@class NSMutableArray, NSString, QRAlertView, QRTotalBookPayRequest, UIAlertController;

@interface QRTotalBookPayment : NSObject <QRTotalBookPayWorkerDelegate>
{
    QRTotalBookPayRequest *_holdingTotalBookPayRequest;
    NSMutableArray *_payingWorker;
    QRAlertView *_payingAlertView;
    UIAlertController *_payAlertVC;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)totalBookPayFailure;
- (void)loginCancle;
- (void)loginFailed;
- (void)loginSuc;
- (void)rechargeCancled:(id)arg1;
- (void)rechargeFailure:(id)arg1;
- (void)rechargeSuccess:(id)arg1;
- (void)removeRechargeNotification;
- (void)addRechargeNotification;
- (void)totalBookPayShortMoneyWithRequest:(id)arg1 result:(id)arg2;
- (void)totalBookPayNotLoginWithRequest:(id)arg1;
- (void)totalBookPayPriceErrorWithRequest:(id)arg1 result:(id)arg2;
- (void)totalBookPayFailureWithRequest:(id)arg1 result:(id)arg2;
- (void)totalBookPaySuccessWithRequest:(id)arg1 result:(id)arg2;
- (void)handlePaySuccessForHKEpubWithBookInfo:(id)arg1;
- (void)totalBookPayFinishedWithWorker:(id)arg1 result:(id)arg2;
- (void)hideExistPayingAlterView;
- (void)showPayingAlterViewWithCompletion:(CDUnknownBlockType)arg1;
- (_Bool)isPayingWithBookId:(id)arg1;
- (void)payTotalBookWithRequest:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

