//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface CNMapCommonUtility : NSObject
{
}

+ (id)polylineForCoordinateString:(id)arg1;
+ (id)coordinatesArrayForString:(id)arg1 parseToken:(id)arg2;
+ (struct CLLocationCoordinate2D *)coordinatesForCoordinatesArray:(id)arg1;
+ (struct CLLocationCoordinate2D *)coordinatesForString:(id)arg1 coordinateCount:(unsigned long long *)arg2 parseToken:(id)arg3;

@end
