//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NWStatisticPoint.h"

@class NWStatisticDimension, NWStatisticMeasure;

@interface NWPointSession : NWStatisticPoint
{
    NWStatisticDimension *_dmNetType;
    NWStatisticDimension *_dmIp;
    NWStatisticDimension *_dmPort;
    NWStatisticDimension *_dmIpRefer;
    NWStatisticDimension *_dmIpType;
    NWStatisticDimension *_dmProtocolType;
    NWStatisticDimension *_dmRetryTimes;
    NWStatisticDimension *_dmHost;
    NWStatisticDimension *_dmRet;
    NWStatisticDimension *_dmIsProxy;
    NWStatisticDimension *_dmErrorCode;
    NWStatisticDimension *_dmErrorMsg;
    NWStatisticDimension *_dmCloseReason;
    NWStatisticMeasure *_msRequestCount;
    NWStatisticMeasure *_msInceptCount;
    NWStatisticMeasure *_msConnTime;
    NWStatisticMeasure *_msSslTime;
    NWStatisticMeasure *_msAuthTime;
    NWStatisticMeasure *_msLiveTime;
    NWStatisticMeasure *_msPingCount;
    NWStatisticMeasure *_msPingInterval;
}

+ (void)commit2appmonitor:(id)arg1;
+ (void)registerPointWithArg1:(id)arg1 withArg2:(id)arg2 withArg3:(id)arg3 withArg4:(id)arg4;
@property(retain, nonatomic) NWStatisticMeasure *msPingInterval; // @synthesize msPingInterval=_msPingInterval;
@property(retain, nonatomic) NWStatisticMeasure *msPingCount; // @synthesize msPingCount=_msPingCount;
@property(retain, nonatomic) NWStatisticMeasure *msLiveTime; // @synthesize msLiveTime=_msLiveTime;
@property(retain, nonatomic) NWStatisticMeasure *msAuthTime; // @synthesize msAuthTime=_msAuthTime;
@property(retain, nonatomic) NWStatisticMeasure *msSslTime; // @synthesize msSslTime=_msSslTime;
@property(retain, nonatomic) NWStatisticMeasure *msConnTime; // @synthesize msConnTime=_msConnTime;
@property(retain, nonatomic) NWStatisticMeasure *msInceptCount; // @synthesize msInceptCount=_msInceptCount;
@property(retain, nonatomic) NWStatisticMeasure *msRequestCount; // @synthesize msRequestCount=_msRequestCount;
@property(retain, nonatomic) NWStatisticDimension *dmCloseReason; // @synthesize dmCloseReason=_dmCloseReason;
@property(retain, nonatomic) NWStatisticDimension *dmErrorMsg; // @synthesize dmErrorMsg=_dmErrorMsg;
@property(retain, nonatomic) NWStatisticDimension *dmErrorCode; // @synthesize dmErrorCode=_dmErrorCode;
@property(retain, nonatomic) NWStatisticDimension *dmIsProxy; // @synthesize dmIsProxy=_dmIsProxy;
@property(retain, nonatomic) NWStatisticDimension *dmRet; // @synthesize dmRet=_dmRet;
@property(retain, nonatomic) NWStatisticDimension *dmHost; // @synthesize dmHost=_dmHost;
@property(retain, nonatomic) NWStatisticDimension *dmRetryTimes; // @synthesize dmRetryTimes=_dmRetryTimes;
@property(retain, nonatomic) NWStatisticDimension *dmProtocolType; // @synthesize dmProtocolType=_dmProtocolType;
@property(retain, nonatomic) NWStatisticDimension *dmIpType; // @synthesize dmIpType=_dmIpType;
@property(retain, nonatomic) NWStatisticDimension *dmIpRefer; // @synthesize dmIpRefer=_dmIpRefer;
@property(retain, nonatomic) NWStatisticDimension *dmPort; // @synthesize dmPort=_dmPort;
@property(retain, nonatomic) NWStatisticDimension *dmIp; // @synthesize dmIp=_dmIp;
@property(retain, nonatomic) NWStatisticDimension *dmNetType; // @synthesize dmNetType=_dmNetType;
- (void).cxx_destruct;
- (id)init;

@end

