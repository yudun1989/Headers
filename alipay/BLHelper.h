//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface BLHelper : NSObject
{
}

+ (void)logWithAction:(id)arg1 seed:(id)arg2 params:(id)arg3;
+ (void)logWithAction:(id)arg1 seed:(id)arg2;
+ (void)clickLogWithSeed:(id)arg1 params:(id)arg2;
+ (void)clickLogWithSeed:(id)arg1;
+ (id)getCurrentAppId;
+ (id)dictionaryFromString:(id)arg1;
+ (void)openURL:(id)arg1;
+ (id)queryParams:(id)arg1;
+ (void)toastView:(id)arg1 icon:(int)arg2 duration:(double)arg3;
+ (void)toastView:(id)arg1;
+ (_Bool)isEmptyString:(id)arg1;
+ (id)colorWithRGBAString:(id)arg1;
+ (id)colorFromHexRGB:(id)arg1;
+ (id)colorWithRGBString:(id)arg1;
+ (id)supportedColorString:(id)arg1;
+ (id)convertDictionaryFromJSONString:(id)arg1;
+ (_Bool)isNullString:(id)arg1;
+ (struct CGSize)sizeWithLabel:(id)arg1;

@end

