//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface MBKCoreAnalytics : NSObject
{
}

+ (void)log:(CDUnknownBlockType)arg1 withPriority:(long long)arg2;
+ (void)log:(CDUnknownBlockType)arg1;
- (void)logPageLeaveWithPageName:(int)arg1;
- (void)logPageShowWithPageName:(int)arg1;
- (void)logButtonClicedWithButtonName:(id)arg1 pageName:(int)arg2;

@end

