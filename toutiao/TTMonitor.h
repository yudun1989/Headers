//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSTimer, TTMonitorAggregater, TTMonitorReporter, TTMonitorTracker;
@protocol OS_dispatch_queue;

@interface TTMonitor : NSObject
{
    unsigned long long _flushInterval;
    unsigned long long _latelyFlushInterval;
    _Bool _stopMonitor;
    _Bool _inBackGroundMode;
    CDUnknownBlockType _urlTransformBlock;
    TTMonitorAggregater *_aggregater;
    TTMonitorTracker *_tracker;
    TTMonitorReporter *_reporter;
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSTimer *_timer;
    Class _packClass;
    Class _configurationClass;
}

+ (void)setAppCrashFlagForLastTimeLaunch;
+ (void)saveLastDNSReprotTimeInterval:(double)arg1;
+ (double)lastDNSReprotTimeInterval;
+ (id)shareManager;
+ (id)processQueue;
+ (id)timingDict;
+ (void)cancelTimingForKey:(id)arg1;
+ (void)endTimingForKey:(id)arg1 event:(id)arg2 label:(id)arg3 needAggregate:(_Bool)arg4;
+ (void)startTimingForKey:(id)arg1;
+ (id)cachedEvents;
+ (void)setIsStart:(_Bool)arg1;
+ (_Bool)isStart;
+ (void)excuteStoredEventActions;
+ (void)dealEventAction:(CDUnknownBlockType)arg1;
+ (void)debugRealEvent:(id)arg1 label:(id)arg2 traceCode:(id)arg3 userInfo:(id)arg4;
+ (void)debugRealEvent:(id)arg1 label:(id)arg2 traceCode:(id)arg3;
+ (void)storeEvent:(id)arg1 label:(id)arg2 value:(float)arg3;
+ (void)event:(id)arg1 label:(id)arg2 duration:(float)arg3 needAggregate:(_Bool)arg4;
+ (void)event:(id)arg1 label:(id)arg2 needAggregate:(_Bool)arg3;
+ (void)event:(id)arg1 label:(id)arg2 count:(unsigned long long)arg3 needAggregate:(_Bool)arg4;
+ (void)trackService:(id)arg1 status:(long long)arg2 extra:(id)arg3;
+ (void)trackService:(id)arg1 value:(float)arg2 extra:(id)arg3;
+ (void)trackData:(id)arg1 logTypeStr:(id)arg2;
+ (void)trackData:(id)arg1 type:(long long)arg2;
+ (void)startWithAppkey:(id)arg1 paramsBlock:(CDUnknownBlockType)arg2;
+ (id)timingDict;
+ (double)timeIntervalForKey:(id)arg1;
+ (void)cancelTimingForKey:(id)arg1;
+ (_Bool)endTimingForKey:(id)arg1 serviceName:(id)arg2;
+ (void)startTimingForKey:(id)arg1;
@property(retain, nonatomic) Class configurationClass; // @synthesize configurationClass=_configurationClass;
@property(retain, nonatomic) Class packClass; // @synthesize packClass=_packClass;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue; // @synthesize serialQueue=_serialQueue;
@property(retain, nonatomic) TTMonitorReporter *reporter; // @synthesize reporter=_reporter;
@property(retain, nonatomic) TTMonitorTracker *tracker; // @synthesize tracker=_tracker;
@property(retain, nonatomic) TTMonitorAggregater *aggregater; // @synthesize aggregater=_aggregater;
@property(nonatomic) _Bool inBackGroundMode; // @synthesize inBackGroundMode=_inBackGroundMode;
@property(copy, nonatomic) CDUnknownBlockType urlTransformBlock; // @synthesize urlTransformBlock=_urlTransformBlock;
@property(nonatomic) _Bool stopMonitor; // @synthesize stopMonitor=_stopMonitor;
- (void).cxx_destruct;
- (void)reportDNSList;
- (void)receiveEnterBackgroundNotification:(id)arg1;
- (void)receiveEnterForegroundNotification:(id)arg1;
- (void)timerFire;
- (void)startFlushTimer;
- (void)setFlushInterval:(unsigned long long)arg1;
- (unsigned long long)flushInterval;
- (void)stopFlushTimer;
- (_Bool)isServerError:(id)arg1;
- (void)flushIfNeed;
- (void)tracksCountChanged;
- (void)debugRealEvent:(id)arg1 label:(id)arg2 traceCode:(id)arg3 userInfo:(id)arg4;
- (void)debugRealEvent:(id)arg1 label:(id)arg2 traceCode:(id)arg3;
- (void)storeEvent:(id)arg1 label:(id)arg2 value:(float)arg3;
- (void)event:(id)arg1 label:(id)arg2 duration:(float)arg3 needAggregate:(_Bool)arg4;
- (void)event:(id)arg1 label:(id)arg2 needAggregate:(_Bool)arg3;
- (void)event:(id)arg1 label:(id)arg2 count:(unsigned long long)arg3 needAggregate:(_Bool)arg4;
- (void)trackService:(id)arg1 status:(long long)arg2 extra:(id)arg3;
- (void)trackService:(id)arg1 attributes:(id)arg2;
- (void)trackService:(id)arg1 value:(id)arg2 extra:(id)arg3;
- (void)trackData:(id)arg1 logTypeStr:(id)arg2;
- (void)trackData:(id)arg1 type:(long long)arg2;
- (void)initializeBlockObj;
- (void)setPackagerClass:(Class)arg1;
- (void)setMonitorConfiguration:(Class)arg1;
- (void)startWithAppkey:(id)arg1 paramsBlock:(CDUnknownBlockType)arg2;
- (void)startIfNeed;
- (id)init;
- (void)dealloc;
- (void)trackAppLogWithTag:(id)arg1 label:(id)arg2 extraValue:(id)arg3;
- (void)trackAppLogWithTag:(id)arg1 label:(id)arg2;

@end

