//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TMMuiLabel.h"

@interface TMMuiPriceLabel : TMMuiLabel
{
}

- (void)setCustomString:(id)arg1 andType:(long long)arg2;
- (void)setOriginalPrice:(double)arg1 andType:(long long)arg2;
- (void)setOriginalPrice:(double)arg1;
- (void)setMinPrice:(double)arg1 maxPrice:(double)arg2 andType:(long long)arg3;
- (void)setPrice:(double)arg1 andType:(long long)arg2;
- (id)initWithCustomString:(id)arg1 andType:(long long)arg2;
- (id)initWithCurrencySymbol:(id)arg1 originalPrice:(double)arg2;
- (id)initWithOriginalPrice:(double)arg1 andType:(long long)arg2;
- (id)initWithOriginalPrice:(double)arg1;
- (id)initWithMinPrice:(double)arg1 maxPrice:(double)arg2 andType:(long long)arg3;
- (id)initWithCurrency:(id)arg1 currencySymbol:(id)arg2 price:(double)arg3 type:(long long)arg4;
- (id)initWithPrice:(double)arg1 andType:(long long)arg2;

@end

