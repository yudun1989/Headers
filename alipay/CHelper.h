//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface CHelper : NSObject
{
}

+ (id)replaceFontSize:(id)arg1 withScale:(unsigned long long)arg2;
+ (id)templateCodeWithFeedType:(id)arg1;
+ (id)formatCardDate:(id)arg1;
+ (_Bool)device12HourDateFormat;
+ (id)loginUser;
+ (_Bool)isValidInputText:(id)arg1;
+ (int)dynamicEditSendLimit;
+ (int)dynamicSendLimit;
+ (id)buildLabelWithText:(id)arg1 fontSize:(double)arg2 textColor:(id)arg3 maxWidth:(double)arg4 wrap:(_Bool)arg5;
+ (struct CGSize)sizeForText:(id)arg1 fontSize:(double)arg2 maxWidth:(double)arg3 wrap:(_Bool)arg4;
+ (struct CGSize)sizeForString:(id)arg1 font:(id)arg2 forWidth:(double)arg3;
+ (struct CGSize)sizeForString:(id)arg1 font:(id)arg2;
+ (_Bool)isIOS7;

@end

