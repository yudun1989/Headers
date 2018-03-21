//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface TBBuyUtils : NSObject
{
}

+ (void)frontTraceWithBuyEngine:(id)arg1 monitorPoint:(id)arg2 errorCode:(id)arg3 errorMsg:(id)arg4 errorArg:(id)arg5 model:(id)arg6;
+ (id)priceAttributedString:(id)arg1 currencySymbol:(id)arg2 symbolFontSize:(double)arg3 symbolFontColor:(id)arg4 integerFontSize:(double)arg5 integerFontColor:(id)arg6 decimalFontSize:(double)arg7 decimalFontColor:(id)arg8;
+ (id)imageWithColor:(id)arg1;
+ (id)colorWithHexString:(id)arg1 alpha:(double)arg2;
+ (id)colorWithHexValue:(long long)arg1 alpha:(double)arg2;
+ (id)mutableObjectFromJSONString:(id)arg1;
+ (id)objectFromJSONString:(id)arg1;
+ (id)keyForCellPhoneNumInUserDefaults;
+ (id)cellPhoneNumInUserDefaults;
+ (void)populateDefaultCellPhoneNum:(id)arg1;
+ (void)saveCellPhoneNum:(id)arg1;

@end

