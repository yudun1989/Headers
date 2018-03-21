//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "CBCentralManagerDelegate-Protocol.h"
#import "CLLocationManagerDelegate-Protocol.h"

@class CBCentralManager, CLLocationManager, NSMutableArray, NSMutableDictionary, NSString, TidaBeaconInfo;

@interface TidaBeaconManager : NSObject <CLLocationManagerDelegate, CBCentralManagerDelegate>
{
    _Bool _running;
    CBCentralManager *_centralManager;
    CLLocationManager *_locationManager;
    NSMutableArray *_beaconRegions;
    NSMutableDictionary *_nearbyBeacons;
    TidaBeaconInfo *_beaconInfo;
}

+ (id)sharedInstance;
@property(retain, nonatomic) TidaBeaconInfo *beaconInfo; // @synthesize beaconInfo=_beaconInfo;
@property(nonatomic, getter=isRunning) _Bool running; // @synthesize running=_running;
@property(retain, nonatomic) NSMutableDictionary *nearbyBeacons; // @synthesize nearbyBeacons=_nearbyBeacons;
@property(retain, nonatomic) NSMutableArray *beaconRegions; // @synthesize beaconRegions=_beaconRegions;
@property(retain, nonatomic) CLLocationManager *locationManager; // @synthesize locationManager=_locationManager;
@property(retain, nonatomic) CBCentralManager *centralManager; // @synthesize centralManager=_centralManager;
- (void).cxx_destruct;
- (void)centralManager:(id)arg1 didDiscoverPeripheral:(id)arg2 advertisementData:(id)arg3 RSSI:(id)arg4;
- (void)centralManagerDidUpdateState:(id)arg1;
- (_Bool)getLocEnable;
- (void)locationManager:(id)arg1 didRangeBeacons:(id)arg2 inRegion:(id)arg3;
- (void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2;
- (_Bool)bleAgpsOn;
- (_Bool)gpsOn;
- (_Bool)bleOn;
- (void)stopRanging;
- (void)startRanging;
- (void)setupMonitoringRegion:(id)arg1;
- (void)doScan;
- (void)stopScan;
- (void)startScan:(id)arg1;
- (void)startModule:(id)arg1;
- (void)dealloc;
- (void)destroy;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

