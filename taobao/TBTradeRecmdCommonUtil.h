//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface TBTradeRecmdCommonUtil : NSObject
{
}

+ (struct CGSize)sizeWithFont:(id)arg1 constrainedToSize:(struct CGSize)arg2 lineBreakMode:(long long)arg3 forString:(id)arg4;
+ (struct CGSize)sizeWithFont:(id)arg1 forString:(id)arg2;
+ (id)stringWithAppendWidth:(double)arg1 font:(id)arg2 withFillStr:(id)arg3 forOriginString:(id)arg4;
+ (void)drawLineFromPoint:(struct CGPoint)arg1 toPoint:(struct CGPoint)arg2 inContex:(struct CGContext *)arg3;
+ (id)attributedDeletePriceTitleForString:(id)arg1;
+ (id)filterAllDecimalsWithString:(id)arg1;
+ (id)filterZeroDecimalsWithString:(id)arg1;
+ (id)totalPriceStringWithString:(id)arg1;
+ (id)attributedPriceTitleForString:(id)arg1;
+ (id)objectFormJSONString:(id)arg1;
+ (id)jsonStringWithDictionary:(id)arg1;
+ (id)colorFromARGB:(id)arg1;
+ (id)colorWithHex:(long long)arg1;
+ (id)colorWithHexString:(id)arg1;
+ (id)colorWithHex:(long long)arg1 alpha:(double)arg2;

@end

