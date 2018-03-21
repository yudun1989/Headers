//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GCDAsyncUdpSocketDelegate-Protocol.h"
#import "NetAssociationDelegate-Protocol.h"

@class GCDAsyncUdpSocket, NSString, NSTimer;

@interface NetAssociation : NSObject <GCDAsyncUdpSocketDelegate, NetAssociationDelegate>
{
    GCDAsyncUdpSocket *socket;
    NSTimer *repeatingTimer;
    int pollingIntervalIndex;
    union ntpTime ntpClientSendTime;
    union ntpTime ntpServerRecvTime;
    union ntpTime ntpServerSendTime;
    union ntpTime ntpClientRecvTime;
    union ntpTime ntpServerBaseTime;
    int li;
    int vn;
    int mode;
    int stratum;
    int poll;
    int prec;
    int refid;
    double timerWobbleFactor;
    double fifoQueue[8];
    short fifoIndex;
    _Bool _active;
    _Bool _trusty;
    id _delegate;
    NSString *_server;
    double _offset;
    double _root_delay;
    double _dispersion;
    double _roundtrip;
    double _serverDelay;
}

+ (id)ipAddrFromName:(id)arg1;
@property(readonly) double serverDelay; // @synthesize serverDelay=_serverDelay;
@property(readonly) double roundtrip; // @synthesize roundtrip=_roundtrip;
@property(readonly) double dispersion; // @synthesize dispersion=_dispersion;
@property(readonly) double root_delay; // @synthesize root_delay=_root_delay;
@property(readonly) double offset; // @synthesize offset=_offset;
@property(readonly) _Bool trusty; // @synthesize trusty=_trusty;
@property(readonly) _Bool active; // @synthesize active=_active;
@property(readonly) NSString *server; // @synthesize server=_server;
@property(nonatomic) __weak id delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)registerObservations;
@property(readonly, copy) NSString *description;
- (id)prettyPrintTimers;
- (id)prettyPrintPacket;
- (id)dateFromNetworkTime:(union ntpTime *)arg1;
- (void)postNotificationWithError:(id)arg1;
- (void)udpSocketDidClose:(id)arg1 withError:(id)arg2;
- (void)udpSocket:(id)arg1 didReceiveData:(id)arg2 fromAddress:(id)arg3 withFilterContext:(id)arg4;
- (void)udpSocket:(id)arg1 didNotSendDataWithTag:(long long)arg2 dueToError:(id)arg3;
- (void)udpSocket:(id)arg1 didSendDataWithTag:(long long)arg2;
- (void)udpSocket:(id)arg1 didNotConnect:(id)arg2;
- (void)reportFromDelegate;
- (void)decodePacket:(id)arg1;
- (id)createPacket;
- (void)finish;
- (void)sendTimeQuery;
- (void)queryTimeServer;
- (void)enable;
- (id)initWithServerName:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

