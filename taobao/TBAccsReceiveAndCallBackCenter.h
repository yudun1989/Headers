//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface TBAccsReceiveAndCallBackCenter : NSObject
{
    NSMutableDictionary *_multiPackageDataDict;
    NSMutableDictionary *_multiPackageTimeDict;
    NSObject<OS_dispatch_queue> *_multiPackageQueue;
    NSObject<OS_dispatch_queue> *_packageTimerQueue;
    NSObject<OS_dispatch_source> *_packageTimer;
    _Bool _timeoutSettingForce;
    int _timeoutMode;
    unsigned long long _timeout;
}

+ (id)shareInstance;
@property(nonatomic) _Bool timeoutSettingForce; // @synthesize timeoutSettingForce=_timeoutSettingForce;
@property(nonatomic) int timeoutMode; // @synthesize timeoutMode=_timeoutMode;
@property(nonatomic) unsigned long long timeout; // @synthesize timeout=_timeout;
- (void).cxx_destruct;
- (void)checkoutAntiBrush:(id)arg1;
- (void)notifyChannelFail:(id)arg1;
- (void)notifyChannelSueesss:(id)arg1;
- (void)recvCustomFrametype:(short)arg1 Flags:(BOOL)arg2 Data:(id)arg3 channel:(id)arg4;
- (id)mergeMultiEntityData:(id)arg1;
- (void)appendEntity:(id)arg1 intoArray:(id)arg2;
- (_Bool)handleMultiPackageEntity:(id)arg1;
- (void)removeCachedPackagesForDataId:(id)arg1;
- (void)removeTimestampForDataId:(id)arg1;
- (void)setTimestampForDataId:(id)arg1;
- (void)setupMultipackageTimer;
- (void)dealloc;
- (id)init;

@end

