//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QMSBaseResult.h"

@class NSArray, NSString, QMSBusStation, QMSStationEntrance;

@interface QMSBusingRouteTransitLine : QMSBaseResult
{
    NSString *_vehicle;
    NSString *_id_;
    double _distance;
    double _duration;
    NSString *_title;
    NSArray *_polyline;
    long long _station_count;
    QMSStationEntrance *_destination;
    QMSBusStation *_geton;
    QMSBusStation *_getoff;
}

@property(retain, nonatomic) QMSBusStation *getoff; // @synthesize getoff=_getoff;
@property(retain, nonatomic) QMSBusStation *geton; // @synthesize geton=_geton;
@property(retain, nonatomic) QMSStationEntrance *destination; // @synthesize destination=_destination;
@property(nonatomic) long long station_count; // @synthesize station_count=_station_count;
@property(copy, nonatomic) NSArray *polyline; // @synthesize polyline=_polyline;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(nonatomic) double distance; // @synthesize distance=_distance;
@property(copy, nonatomic) NSString *id_; // @synthesize id_=_id_;
@property(copy, nonatomic) NSString *vehicle; // @synthesize vehicle=_vehicle;
- (void).cxx_destruct;

@end

