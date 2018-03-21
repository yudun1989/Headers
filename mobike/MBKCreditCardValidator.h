//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface MBKCreditCardValidator : NSObject
{
}

+ (_Bool)needLuhnCheck:(long long)arg1;
+ (_Bool)isValidLengthWithCardNumber:(id)arg1 cardType:(long long)arg2;
+ (_Bool)isValidCVV:(id)arg1 withCardNumber:(id)arg2;
+ (_Bool)isLuhnValidString:(id)arg1;
+ (id)expressionForType:(long long)arg1;
+ (long long)creditCardTypeFromString:(id)arg1;

@end
