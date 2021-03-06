//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "Mobike_Controller.h"

#import "MMLocationContextDelegate-Protocol.h"

@class CLLocation, MBKHealthykit, MMLocationContext, NSString;

@interface RidingTrackController : Mobike_Controller <MMLocationContextDelegate>
{
    MMLocationContext *_locationContext;
    struct CLLocationCoordinate2D lastCoord;
    CLLocation *lastLocation;
    _Bool _lock;
    float _distance;
    NSString *_locationString;
    MBKHealthykit *_healthKit;
}

+ (id)sharedInstance;
@property(retain) MBKHealthykit *healthKit; // @synthesize healthKit=_healthKit;
@property(retain, nonatomic) NSString *locationString; // @synthesize locationString=_locationString;
@property _Bool lock; // @synthesize lock=_lock;
@property(nonatomic) float distance; // @synthesize distance=_distance;
- (void).cxx_destruct;
- (void)saveHealthDataIntoHealthKit:(float)arg1 energy:(float)arg2;
- (void)logString:(id)arg1;
- (void)dealloc;
- (void)ridingTrackReportFailed:(id)arg1;
- (void)requestRidingDistanceWithOrderId:(id)arg1;
- (void)ridingTrackReportSucc:(id)arg1;
- (void)reFresh;
- (void)reportTrackOrderid;
- (void)reportRidingTrackReport:(struct CLLocationCoordinate2D)arg1 distance:(float)arg2;
- (void)saveBikeCoords;
- (void)readCoords;
- (void)locationContext:(id)arg1 didUpdateHeading:(id)arg2;
- (void)locationContext:(id)arg1 didUpdateLocation:(id)arg2;
- (void)deleteLog;
- (void)stopCoorsLocation;
- (void)startCoorsLocation;
- (void)setLocationManager;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

