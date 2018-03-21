//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "MKMapViewDelegate-Protocol.h"

@class MKMapView, NSNumber, NSString, TBLCWeakTimer, UIButton;

@interface TBLCRiderLocationManager : NSObject <MKMapViewDelegate>
{
    _Bool _firstRequest;
    double _cycleInterval;
    double _timeInterval;
    double _resignActiveTimeStamp;
    double _becomeActiveTimeStamp;
    TBLCWeakTimer *_timer;
    MKMapView *_mapView;
    NSNumber *_riderStatus;
    NSNumber *_riderLatitude;
    NSNumber *_riderLongitude;
    NSNumber *_lastUpdateTime;
    NSString *_riderName;
    NSString *_riderPhone;
    NSString *_deliverLatitude;
    NSString *_deliverLongitude;
    NSString *_tbMainOrderId;
    NSString *_storeLatitude;
    NSString *_storeLongitude;
    NSString *_storeName;
    UIButton *_toRiderPositionButton;
    CDUnknownBlockType _riderStatusBlock;
}

@property(copy, nonatomic) CDUnknownBlockType riderStatusBlock; // @synthesize riderStatusBlock=_riderStatusBlock;
@property(nonatomic) _Bool firstRequest; // @synthesize firstRequest=_firstRequest;
@property(retain, nonatomic) UIButton *toRiderPositionButton; // @synthesize toRiderPositionButton=_toRiderPositionButton;
@property(retain, nonatomic) NSString *storeName; // @synthesize storeName=_storeName;
@property(retain, nonatomic) NSString *storeLongitude; // @synthesize storeLongitude=_storeLongitude;
@property(retain, nonatomic) NSString *storeLatitude; // @synthesize storeLatitude=_storeLatitude;
@property(retain, nonatomic) NSString *tbMainOrderId; // @synthesize tbMainOrderId=_tbMainOrderId;
@property(retain, nonatomic) NSString *deliverLongitude; // @synthesize deliverLongitude=_deliverLongitude;
@property(retain, nonatomic) NSString *deliverLatitude; // @synthesize deliverLatitude=_deliverLatitude;
@property(retain, nonatomic) NSString *riderPhone; // @synthesize riderPhone=_riderPhone;
@property(retain, nonatomic) NSString *riderName; // @synthesize riderName=_riderName;
@property(retain, nonatomic) NSNumber *lastUpdateTime; // @synthesize lastUpdateTime=_lastUpdateTime;
@property(retain, nonatomic) NSNumber *riderLongitude; // @synthesize riderLongitude=_riderLongitude;
@property(retain, nonatomic) NSNumber *riderLatitude; // @synthesize riderLatitude=_riderLatitude;
@property(retain, nonatomic) NSNumber *riderStatus; // @synthesize riderStatus=_riderStatus;
@property(retain, nonatomic) MKMapView *mapView; // @synthesize mapView=_mapView;
@property(retain, nonatomic) TBLCWeakTimer *timer; // @synthesize timer=_timer;
@property(nonatomic) double becomeActiveTimeStamp; // @synthesize becomeActiveTimeStamp=_becomeActiveTimeStamp;
@property(nonatomic) double resignActiveTimeStamp; // @synthesize resignActiveTimeStamp=_resignActiveTimeStamp;
@property(nonatomic) double timeInterval; // @synthesize timeInterval=_timeInterval;
@property(nonatomic) double cycleInterval; // @synthesize cycleInterval=_cycleInterval;
- (void).cxx_destruct;
- (id)mapView:(id)arg1 viewForAnnotation:(id)arg2;
- (void)setupMapViewIfError:(_Bool)arg1;
- (void)toRiderPositionAction:(id)arg1;
- (void)appDidBecomeActive:(id)arg1;
- (void)appWillResignActive:(id)arg1;
- (void)requestRiderLocation:(id)arg1;
- (void)dealloc;
- (void)stop;
- (void)start;
- (id)initWithStoreLatitude:(id)arg1 storeLongitude:(id)arg2 storeName:(id)arg3 deliverLatitude:(id)arg4 deliverLongitude:(id)arg5 tbMainOrderId:(id)arg6 view:(id)arg7 frame:(struct CGRect)arg8 riderStatusBlock:(CDUnknownBlockType)arg9;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

