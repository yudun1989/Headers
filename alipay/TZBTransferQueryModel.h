//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface TZBTransferQueryModel : NSObject
{
    NSString *_remainDayLimit;
    NSString *_remainMonthLimit;
    NSString *_remainCardAccountLimit;
    NSString *_availableBalance;
    NSString *_availableBalanceDesc;
    NSString *_remainLimitAmount;
    NSString *_remainLimitDesc;
    NSString *_yebName;
    NSString *_tzbName;
    NSString *_yebDesc;
    NSString *_tzbDesc;
    NSString *_profitDate;
    NSString *_bizOrderNo;
    NSString *_tipDesc;
}

@property(retain, nonatomic) NSString *tipDesc; // @synthesize tipDesc=_tipDesc;
@property(retain, nonatomic) NSString *bizOrderNo; // @synthesize bizOrderNo=_bizOrderNo;
@property(retain, nonatomic) NSString *profitDate; // @synthesize profitDate=_profitDate;
@property(retain, nonatomic) NSString *tzbDesc; // @synthesize tzbDesc=_tzbDesc;
@property(retain, nonatomic) NSString *yebDesc; // @synthesize yebDesc=_yebDesc;
@property(retain, nonatomic) NSString *tzbName; // @synthesize tzbName=_tzbName;
@property(retain, nonatomic) NSString *yebName; // @synthesize yebName=_yebName;
@property(retain, nonatomic) NSString *remainLimitDesc; // @synthesize remainLimitDesc=_remainLimitDesc;
@property(retain, nonatomic) NSString *remainLimitAmount; // @synthesize remainLimitAmount=_remainLimitAmount;
@property(retain, nonatomic) NSString *availableBalanceDesc; // @synthesize availableBalanceDesc=_availableBalanceDesc;
@property(retain, nonatomic) NSString *availableBalance; // @synthesize availableBalance=_availableBalance;
@property(retain, nonatomic) NSString *remainCardAccountLimit; // @synthesize remainCardAccountLimit=_remainCardAccountLimit;
@property(retain, nonatomic) NSString *remainMonthLimit; // @synthesize remainMonthLimit=_remainMonthLimit;
@property(retain, nonatomic) NSString *remainDayLimit; // @synthesize remainDayLimit=_remainDayLimit;
- (void).cxx_destruct;
- (id)initQueryModelWithResult:(id)arg1;

@end

