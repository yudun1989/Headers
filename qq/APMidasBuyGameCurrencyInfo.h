//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/APMidasBaseBuyInfo.h>

@class NSString;

@interface APMidasBuyGameCurrencyInfo : APMidasBaseBuyInfo
{
}

- (long long)getCostByCount:(long long)arg1;
- (long long)totalPrice;
- (void)calcCost:(long long)arg1;
- (id)init;

// Remaining properties
@property(nonatomic) long long qbRechargePrice; // @dynamic qbRechargePrice;
@property(retain, nonatomic) NSString *tips; // @dynamic tips;

@end

