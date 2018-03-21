//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray, NSString, NXPromise;

@interface TXDPayDataController : NSObject
{
    _Bool _cancelled;
    _Bool _fetched;
    _Bool _alipay;
    NSMutableArray *_barcodes;
    CDUnknownBlockType _completion;
    NXPromise *_promise;
    NXPromise *_payLinkPromise;
    double _payTimeout;
    unsigned long long _fetchPayLinkTimes;
    NSString *_barcode;
    NSString *_orderId;
    NSString *_alipayTradeId;
}

@property(nonatomic) _Bool alipay; // @synthesize alipay=_alipay;
@property(copy, nonatomic) NSString *alipayTradeId; // @synthesize alipayTradeId=_alipayTradeId;
@property(copy, nonatomic) NSString *orderId; // @synthesize orderId=_orderId;
@property(copy, nonatomic) NSString *barcode; // @synthesize barcode=_barcode;
@property(nonatomic) unsigned long long fetchPayLinkTimes; // @synthesize fetchPayLinkTimes=_fetchPayLinkTimes;
@property(nonatomic) double payTimeout; // @synthesize payTimeout=_payTimeout;
@property(retain, nonatomic) NXPromise *payLinkPromise; // @synthesize payLinkPromise=_payLinkPromise;
@property(retain, nonatomic) NXPromise *promise; // @synthesize promise=_promise;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(retain, nonatomic) NSMutableArray *barcodes; // @synthesize barcodes=_barcodes;
@property(nonatomic) _Bool fetched; // @synthesize fetched=_fetched;
@property(nonatomic) _Bool cancelled; // @synthesize cancelled=_cancelled;
- (void).cxx_destruct;
- (void)complete:(id)arg1;
- (void)retry;
- (void)payWithActionId:(id)arg1;
- (void)parseResult:(id)arg1;
- (void)query;
- (void)pause;
- (void)resume;
- (void)fetch:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)observeAccs;
- (id)init;

@end

