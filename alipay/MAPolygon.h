//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MAMultiPoint.h"

#import "MAOverlay-Protocol.h"

@class NSString;

@interface MAPolygon : MAMultiPoint <MAOverlay>
{
}

+ (id)polygonWithPoints:(struct MAMapPoint *)arg1 count:(unsigned long long)arg2;
+ (id)polygonWithCoordinates:(struct CLLocationCoordinate2D *)arg1 count:(unsigned long long)arg2;
- (id)initWithPoints:(struct MAMapPoint *)arg1 count:(unsigned long long)arg2;
- (id)initWithWithCoordinates:(struct CLLocationCoordinate2D *)arg1 count:(unsigned long long)arg2;
@property(readonly, nonatomic) struct CLLocationCoordinate2D coordinate;
@property(readonly, nonatomic) struct MAMapRect boundingMapRect;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(copy, nonatomic) NSString *subtitle;
@property(readonly) Class superclass;
@property(copy, nonatomic) NSString *title;

@end

