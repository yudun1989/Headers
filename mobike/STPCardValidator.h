//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface STPCardValidator : NSObject
{
}

+ (long long)currentMonth;
+ (long long)currentYear;
+ (_Bool)stringIsValidLuhn:(id)arg1;
+ (long long)fragmentLengthForCardBrand:(long long)arg1;
+ (long long)maxLengthForCardBrand:(long long)arg1;
+ (id)lengthsForCardBrand:(long long)arg1;
+ (id)possibleBrandsForNumber:(id)arg1;
+ (long long)brandForNumber:(id)arg1;
+ (unsigned long long)maxCVCLengthForCardBrand:(long long)arg1;
+ (unsigned long long)minCVCLength;
+ (long long)validationStateForCard:(id)arg1;
+ (long long)validationStateForCard:(id)arg1 inCurrentYear:(long long)arg2 currentMonth:(long long)arg3;
+ (long long)validationStateForNumber:(id)arg1 validatingCardBrand:(_Bool)arg2;
+ (long long)validationStateForCVC:(id)arg1 cardBrand:(long long)arg2;
+ (long long)validationStateForExpirationYear:(id)arg1 inMonth:(id)arg2;
+ (long long)validationStateForExpirationYear:(id)arg1 inMonth:(id)arg2 inCurrentYear:(long long)arg3 currentMonth:(long long)arg4;
+ (long long)validationStateForExpirationMonth:(id)arg1;
+ (_Bool)stringIsNumeric:(id)arg1;
+ (id)stringByRemovingSpacesFromString:(id)arg1;
+ (id)sanitizedNumericStringForString:(id)arg1;

@end

