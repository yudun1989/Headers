//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface ZCUtils : NSObject
{
}

+ (double)getVersionInteval:(id)arg1 withLastVersion:(id)arg2;
+ (_Bool)compareVersion:(id)arg1 withOriginal:(id)arg2 ignoreTarget:(_Bool)arg3;
+ (_Bool)checkAndMark:(id)arg1 withInterval:(double)arg2;
+ (id)dateFromRFC1123String:(id)arg1;
+ (id)stringFromRFC1123Date:(id)arg1;
+ (id)RFC1123DateFormatter;
+ (_Bool)testSampleRate:(double)arg1;
+ (double)randomDouble;
+ (id)objectFromJSONString:(id)arg1;
+ (id)objectFromJSONData:(id)arg1;
+ (id)jsonData:(id)arg1;
+ (id)dataWithBase64String:(id)arg1;
+ (id)md5WithString:(id)arg1;
+ (id)md5WithData:(id)arg1;
+ (id)md5FromByte:(char *)arg1;
+ (id)getEnvironmentName:(unsigned long long)arg1;

@end

