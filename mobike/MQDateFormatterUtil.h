//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDateFormatter;

@interface MQDateFormatterUtil : NSObject
{
    NSDateFormatter *_dateFormatter;
}

+ (long long)dateDayFromDate:(id)arg1;
+ (long long)dateYearFromDate:(id)arg1;
+ (id)sharedFormatter;
@property(readonly, nonatomic) NSDateFormatter *dateFormatter; // @synthesize dateFormatter=_dateFormatter;
- (void).cxx_destruct;
- (id)weekForDate:(id)arg1;
- (id)relativeDateForDate:(id)arg1;
- (id)timeForDate:(id)arg1;
- (id)timestampForDate:(id)arg1;
- (id)meiqiaStyleDateForDate:(id)arg1;
- (void)dealloc;
- (id)init;

@end

