//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface MAFIABaseLogic : NSObject
{
}

+ (_Bool)logicBoolValue:(id)arg1 toValue:(id)arg2;
+ (_Bool)logicEqualValue:(id)arg1 toValue:(id)arg2 logic:(id)arg3;
+ (_Bool)logicCompareNum:(id)arg1 toNum:(id)arg2 logic:(id)arg3;
+ (_Bool)judgmentForPolicie:(id)arg1 value:(id)arg2 logicType:(long long)arg3;
+ (_Bool)judgmentForQuota:(id)arg1 info:(id *)arg2;
+ (_Bool)judgmentForScene:(id)arg1 infos:(id *)arg2;

@end

