//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SafePayDelegate-Protocol.h"

@class NSString;

@interface H5TradePay : NSObject <SafePayDelegate>
{
    CDUnknownBlockType _depositCallbackBlock;
    CDUnknownBlockType _callbackBlock;
}

+ (id)dictionaryFromQuery:(id)arg1 usingEncoding:(unsigned long long)arg2;
@property(copy, nonatomic) CDUnknownBlockType callbackBlock; // @synthesize callbackBlock=_callbackBlock;
@property(copy, nonatomic) CDUnknownBlockType depositCallbackBlock; // @synthesize depositCallbackBlock=_depositCallbackBlock;
- (void).cxx_destruct;
- (void)deposit:(CDUnknownBlockType)arg1;
- (void)safepayDidFinishWithResult:(id)arg1;
- (void)getDomainsFromUrls:(id)arg1 output:(id)arg2;
- (void)loadSafepayDomainConfig;
- (void)callSafepayForURL:(id)arg1 extraOrder:(id)arg2;
- (id)appenv;
- (void)callSafepayForOrderstr:(id)arg1 completeBlock:(CDUnknownBlockType)arg2;
- (void)callSafepayWithParnter:(id)arg1 externToken:(id)arg2 outTradeNo:(id)arg3 bizType:(id)arg4 bizNo:(id)arg5 bizSubType:(id)arg6 bizContext:(id)arg7 canShowPayResult:(_Bool)arg8 completeBlock:(CDUnknownBlockType)arg9;
- (_Bool)shouldInterceptForSafepay:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

