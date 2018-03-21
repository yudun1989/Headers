//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GeofenceModel.h"

@interface GeofenceCircularModel : GeofenceModel
{
    double _latitude;
    double _longitude;
    double _radius;
}

+ (id)modelWithJSONDictionary:(id)arg1;
@property(nonatomic) double radius; // @synthesize radius=_radius;
@property(nonatomic) double longitude; // @synthesize longitude=_longitude;
@property(nonatomic) double latitude; // @synthesize latitude=_latitude;
- (id)circularRegion;
- (id)initWithCircularRegion:(id)arg1;
- (id)initWithJSONDictionary:(id)arg1;

@end

