//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GO2OServiceObject.h"

@class NSArray;

@interface GO2OPromotionInfo : GO2OServiceObject
{
    long long _totalVouchers;
    NSArray *_vouchers;
}

@property(retain, nonatomic) NSArray *vouchers; // @synthesize vouchers=_vouchers;
@property(nonatomic) long long totalVouchers; // @synthesize totalVouchers=_totalVouchers;
- (void).cxx_destruct;

@end

