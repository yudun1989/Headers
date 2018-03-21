//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <QQMainProject/AnaCommunicationNetFlowDelegate-Protocol.h>

@class BeaconEventRecord, NSString;

@interface BeaconNetFlowEventRecorder : NSObject <AnaCommunicationNetFlowDelegate>
{
    _Bool enabled;
    BeaconEventRecord *netFlowEvent;
    long long startTime;
    int count;
    long long upFlow;
    long long downFlow;
    BeaconEventRecord *wifiNetFlowEvent;
    long long wifiStartTime;
    int wifiCount;
    long long wifiUpFlow;
    long long wifiDownFlow;
    long long _needReportFlow;
    long long _needReportNotWifiFlow;
}

+ (id)sharedInstance;
@property(nonatomic) long long needReportNotWifiFlow; // @synthesize needReportNotWifiFlow=_needReportNotWifiFlow;
@property(nonatomic) long long needReportFlow; // @synthesize needReportFlow=_needReportFlow;
- (void)cleanFlowData;
- (void)saveFlowData;
- (void)uploadFlowEvent;
- (void)recordFlowEventWithIsWifi:(_Bool)arg1 upFlowBytes:(long long)arg2 downFlowBytes:(long long)arg3;
- (void)onDayNetFlowOverload:(id)arg1 counts:(int)arg2 upFlow:(long long)arg3 downFlow:(long long)arg4;
- (void)onNetFlowHappened:(id)arg1 status:(id)arg2 elapse:(long long)arg3 isWiFi:(_Bool)arg4 upFlowBytes:(long long)arg5 downFlowBytes:(long long)arg6 reqTime:(double)arg7;
- (_Bool)checkNetFlowEvent:(_Bool)arg1;
- (_Bool)clean:(_Bool)arg1;
- (_Bool)enable:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

