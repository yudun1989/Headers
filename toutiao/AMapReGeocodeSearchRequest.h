//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AMapSearchObject.h"

@class AMapGeoPoint;

@interface AMapReGeocodeSearchRequest : AMapSearchObject
{
    _Bool _requireExtension;
    AMapGeoPoint *_location;
    long long _radius;
}

@property(nonatomic) long long radius; // @synthesize radius=_radius;
@property(copy, nonatomic) AMapGeoPoint *location; // @synthesize location=_location;
@property(nonatomic) _Bool requireExtension; // @synthesize requireExtension=_requireExtension;
- (void).cxx_destruct;
- (id)init;

@end

