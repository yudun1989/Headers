//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <QQMainProject/IAppIAPPayDelegate-Protocol.h>
#import <QQMainProject/ILogDelegate-Protocol.h>
#import <QQMainProject/SKStoreProductViewControllerDelegate-Protocol.h>
#import <QQMainProject/UIAlertViewDelegate-Protocol.h>

@class MidasIapCurrencyMonitor, NSString;
@protocol IAPGetBalanceDelegate, IAPPayDelegate;

@interface IAPPayHelper : NSObject <ILogDelegate, IAppIAPPayDelegate, UIAlertViewDelegate, SKStoreProductViewControllerDelegate>
{
    id <IAPPayDelegate> delegate;
    id <IAPGetBalanceDelegate> getBalanceDelegate;
    _Bool _busying;
    MidasIapCurrencyMonitor *_monitor;
}

+ (void)showRiskAlert:(id)arg1 errorCode:(long long)arg2 completion:(CDUnknownBlockType)arg3;
+ (void)registerUuId:(CDUnknownBlockType)arg1;
+ (void)setIsEnLog:(unsigned char)arg1;
+ (id)getVersion;
+ (_Bool)judgeIsCanPay;
+ (id)getIntanceIapHelp;
+ (void)enableHttp:(_Bool)arg1;
+ (void)getProductInfoStatus:(id)arg1 callback:(CDUnknownBlockType)arg2;
+ (void)load;
@property(nonatomic) id <IAPGetBalanceDelegate> GetBalanceDelegate; // @synthesize GetBalanceDelegate=getBalanceDelegate;
@property(nonatomic) id <IAPPayDelegate> Delegate; // @synthesize Delegate=delegate;
- (id)getBizManager;
- (void)initAcctSave:(id)arg1;
- (void)launchSaveController:(id)arg1 withController:(id)arg2 saveReq:(id)arg3;
- (void)launchAccountBalance:(id)arg1 withGetBalanceDelegate:(id)arg2;
- (_Bool)isRiskAlert:(long long)arg1;
- (_Bool)shouldFinishTransactionsWhenFail:(long long)arg1;
- (void)showPrepayPrompt:(long long)arg1 inner:(id)arg2 errMsg:(id)arg3 netErr:(CDUnknownBlockType)arg4 err:(CDUnknownBlockType)arg5 succ:(CDUnknownBlockType)arg6;
- (_Bool)checkPrepaySuspend:(long long)arg1 inner:(id)arg2 errMsg:(id)arg3 netErr:(CDUnknownBlockType)arg4 err:(CDUnknownBlockType)arg5 succ:(CDUnknownBlockType)arg6;
- (void)notifyBusyDone;
- (void)notifyBusying;
- (id)validateParamOfOfferId:(id)arg1 openid:(id)arg2 openKey:(id)arg3 sessionId:(id)arg4 sessionType:(id)arg5 pf:(id)arg6 pfkey:(id)arg7 zoneId:(id)arg8;
- (void)showSandboxAlert:(CDUnknownBlockType)arg1;
- (void)logwithMessage:(id)arg1;
- (void)failedTransaction:(id)arg1;
- (void)completeTransactions:(id)arg1 receipt:(id)arg2;
- (void)completeTransaction:(id)arg1 receipt:(id)arg2;
- (void)receiveProductsFail:(id)arg1;
- (void)receiveProducts:(id)arg1;
- (void)distributeGoods:(id)arg1;
- (void)payOrder;
- (_Bool)checkParameter:(id)arg1 ignoreProductType:(_Bool)arg2;
- (void)dealloc;
- (void)pay:(id)arg1 withOpenid:(id)arg2 withOpenKey:(id)arg3 withSessionId:(id)arg4 withSessionType:(id)arg5 withPf:(id)arg6 withPfkey:(id)arg7 withPayItem:(id)arg8 withProductId:(id)arg9 withIsDepositGameCoin:(unsigned char)arg10 withProductType:(int)arg11 withZoneId:(id)arg12 withVarItem:(id)arg13;
- (_Bool)registerPay:(id)arg1 withOpenid:(id)arg2 withOpenKey:(id)arg3 withSessionId:(id)arg4 withSessionType:(id)arg5 withPf:(id)arg6 withPfkey:(id)arg7 withEnv:(id)arg8 withExtra:(id)arg9;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

