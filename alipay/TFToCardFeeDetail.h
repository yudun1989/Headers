//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDecimalNumber;

@interface TFToCardFeeDetail : NSObject
{
    _Bool _isFree;
    _Bool _shoudUsePoint;
    _Bool _shoudUseAvailableAmount;
    NSDecimalNumber *_consumePoint;
    NSDecimalNumber *_exchangePointAmount;
    NSDecimalNumber *_totalFee;
    NSDecimalNumber *_totalFeeWithPoint;
}

@property(copy, nonatomic) NSDecimalNumber *totalFeeWithPoint; // @synthesize totalFeeWithPoint=_totalFeeWithPoint;
@property(copy, nonatomic) NSDecimalNumber *totalFee; // @synthesize totalFee=_totalFee;
@property(copy, nonatomic) NSDecimalNumber *exchangePointAmount; // @synthesize exchangePointAmount=_exchangePointAmount;
@property(copy, nonatomic) NSDecimalNumber *consumePoint; // @synthesize consumePoint=_consumePoint;
@property(nonatomic) _Bool shoudUseAvailableAmount; // @synthesize shoudUseAvailableAmount=_shoudUseAvailableAmount;
@property(nonatomic) _Bool shoudUsePoint; // @synthesize shoudUsePoint=_shoudUsePoint;
@property(nonatomic) _Bool isFree; // @synthesize isFree=_isFree;
- (void).cxx_destruct;

@end

