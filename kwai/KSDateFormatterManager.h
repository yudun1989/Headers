//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class KSKeyValues;

@interface KSDateFormatterManager : NSObject
{
    KSKeyValues *_formatters;
}

+ (id)sharedKSDateFormatterManager;
- (void).cxx_destruct;
- (void)didReceiveMemoryWarning;
- (id)dateWithFormatteString:(id)arg1 withFormat:(id)arg2;
- (id)formatDate:(id)arg1 withFormat:(id)arg2;
- (id)formatterForFormat:(id)arg1;
- (id)init;
- (void)dealloc;

@end

