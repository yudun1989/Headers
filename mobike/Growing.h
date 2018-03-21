//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface Growing : NSObject
{
}

+ (id)getSessionId;
+ (id)getDeviceId;
+ (void)setDeviceIDModeToCustomBlock:(CDUnknownBlockType)arg1;
+ (void)setZone:(id)arg1;
+ (void)setTrackerHost:(id)arg1;
+ (unsigned long long)getDailyDataLimit;
+ (void)setDailyDataLimit:(unsigned long long)arg1;
+ (unsigned long long)getBulkSize;
+ (void)setBulkSize:(unsigned long long)arg1;
+ (double)getFlushInterval;
+ (void)setFlushInterval:(double)arg1;
+ (void)setImp:(_Bool)arg1;
+ (_Bool)isTrackingWebView;
+ (void)enableHybridHashTag:(_Bool)arg1;
+ (void)enableAllWebViews:(_Bool)arg1;
+ (void)disable;
+ (void)trackEvent:(id)arg1 withValue:(id)arg2;
+ (void)track:(id)arg1 properties:(id)arg2;
+ (void)setCS10Value:(id)arg1 forKey:(id)arg2;
+ (void)setCS9Value:(id)arg1 forKey:(id)arg2;
+ (void)setCS8Value:(id)arg1 forKey:(id)arg2;
+ (void)setCS7Value:(id)arg1 forKey:(id)arg2;
+ (void)setCS6Value:(id)arg1 forKey:(id)arg2;
+ (void)setCS5Value:(id)arg1 forKey:(id)arg2;
+ (void)setCS4Value:(id)arg1 forKey:(id)arg2;
+ (void)setCS3Value:(id)arg1 forKey:(id)arg2;
+ (void)setCS2Value:(id)arg1 forKey:(id)arg2;
+ (void)resetSessionIDAndSendVstByCS1OldValue:(id)arg1 cs1NewValue:(id)arg2;
+ (void)setCS1Value:(id)arg1 forKey:(id)arg2;
+ (void)setEnableDiagnose:(_Bool)arg1;
+ (long long)getAspectMode;
+ (void)setAspectMode:(long long)arg1;
+ (_Bool)getEnableLog;
+ (void)setEnableLog:(_Bool)arg1;
+ (void)startWithAccountId:(id)arg1 withSampling:(double)arg2;
+ (void)startWithAccountId:(id)arg1;
+ (_Bool)handleUrl:(id)arg1;
+ (id)sdkVersion;

@end

