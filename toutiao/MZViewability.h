//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class MZRequest, UIView;
@protocol OS_dispatch_source;

@interface MZViewability : NSObject
{
    unsigned char _viewableStatus;
    int _percentageViewable;
    UIView *_adView;
    long long _viewableDuration;
    long long _trackStartTime;
    long long _viewableStartTime;
    long long _timeThreshold;
    long long _handleId;
    MZRequest *_request;
    NSObject<OS_dispatch_source> *_timer;
    long long _trackingTimerOut;
}

+ (void)stopTrackTimer:(long long)arg1;
@property(nonatomic) long long trackingTimerOut; // @synthesize trackingTimerOut=_trackingTimerOut;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *timer; // @synthesize timer=_timer;
@property(retain, nonatomic) MZRequest *request; // @synthesize request=_request;
@property(nonatomic) long long handleId; // @synthesize handleId=_handleId;
@property(nonatomic) long long timeThreshold; // @synthesize timeThreshold=_timeThreshold;
@property(nonatomic) long long viewableStartTime; // @synthesize viewableStartTime=_viewableStartTime;
@property(nonatomic) long long trackStartTime; // @synthesize trackStartTime=_trackStartTime;
@property(nonatomic) unsigned char viewableStatus; // @synthesize viewableStatus=_viewableStatus;
@property(nonatomic) long long viewableDuration; // @synthesize viewableDuration=_viewableDuration;
@property(nonatomic) int percentageViewable; // @synthesize percentageViewable=_percentageViewable;
@property(nonatomic) __weak UIView *adView; // @synthesize adView=_adView;
- (void).cxx_destruct;
- (long long)userDefineData:(id)arg1;
- (void)startTimer;
- (void)setPercentageViewable;
- (_Bool)runningInForeground;
- (void)setViewableStatus;
- (long long)startTrackTimer;
- (long long)getCurrentTimeMillis;
- (id)initWithAdView:(id)arg1 withRequest:(id)arg2 withViewableThreshold:(long long)arg3;

@end

