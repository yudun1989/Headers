//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSString;

@interface RDMEventTaskManager : NSObject
{
    NSMutableDictionary *_eventQueue;
    int _seq;
    _Bool _eventFlag;
    NSString *_imsiStr;
    NSString *_imeiStr;
}

+ (id)instance;
- (void)updateMonitorEventName:(int)arg1 eventName:(id)arg2;
- (_Bool)setMonitorEvent:(int)arg1 size:(int)arg2;
- (_Bool)doReport:(id)arg1 isSucceed:(_Bool)arg2 elapse:(long long)arg3 size:(long long)arg4 params:(id)arg5 reportImmediately:(_Bool)arg6;
- (_Bool)endTaskFailedWithSeq:(int)arg1;
- (void)endMonitorMergeEvent:(int)arg1 success:(_Bool)arg2 paramsDic:(id)arg3 failCode:(int)arg4;
- (void)endMonitorEvent:(int)arg1 size:(int)arg2 success:(_Bool)arg3 paramsDic:(id)arg4 reportImmediately:(_Bool)arg5;
- (void)endMonitorEvent:(int)arg1 success:(_Bool)arg2 paramsDic:(id)arg3 reportImmediately:(_Bool)arg4;
- (void)endMonitorEvent:(int)arg1 size:(int)arg2 success:(_Bool)arg3 failCode:(int)arg4;
- (void)endMonitorEvent:(int)arg1 success:(_Bool)arg2 failCode:(int)arg3;
- (void)endMonitorEvent:(int)arg1 success:(_Bool)arg2 sessionID:(int)arg3;
- (void)endMonitorEvent:(int)arg1 success:(_Bool)arg2;
- (int)beginMonitorRDMEvent:(id)arg1 size:(int)arg2;
- (int)getSeq;
- (_Bool)isSdkInitialied;
- (void)dealloc;
- (id)init;
- (_Bool)isNecessaryEvent:(id)arg1;
- (id)getIMEI;
- (id)getIMSI;
- (void)updateRDMConfig;
- (_Bool)endTaskWithSeq:(int)arg1 size:(int)arg2 success:(_Bool)arg3 params:(id)arg4;
- (_Bool)endTaskWithSeq:(int)arg1 size:(int)arg2 success:(_Bool)arg3 params:(id)arg4 reportImmediately:(_Bool)arg5;
- (_Bool)endTaskWithSeq:(int)arg1 success:(_Bool)arg2 params:(id)arg3;
- (_Bool)endTaskWithSeq:(int)arg1 success:(_Bool)arg2 params:(id)arg3 reportImmediately:(_Bool)arg4;
- (_Bool)endTaskWithSeq:(int)arg1 size:(int)arg2 success:(_Bool)arg3 params:(id)arg4 reportImmediately:(_Bool)arg5 hasSize:(_Bool)arg6 merge:(_Bool)arg7;
- (_Bool)beginTaskWithSeq:(int)arg1;
- (_Bool)addTaskWithSeq:(int)arg1 cmd:(id)arg2 size:(int)arg3;

@end

