//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AMapSearchObject.h"

@interface AMapGeoPoint : AMapSearchObject
{
    double _latitude;
    double _longitude;
}

+ (id)locationWithString:(id)arg1;
+ (id)locationWithLatitude:(double)arg1 longitude:(double)arg2;
+ (id)ajo_mapping;
@property(nonatomic) double longitude; // @synthesize longitude=_longitude;
@property(nonatomic) double latitude; // @synthesize latitude=_latitude;
- (id)description;

@end

