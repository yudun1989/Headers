//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MapKit/MKMapView.h>

@interface MKMapView (WBTZoomLevel)
- (int)wbt_zoomLevel;
- (CDStruct_26e8d939)wbt_setCenterCoordinate:(struct CLLocationCoordinate2D)arg1 zoomLevel:(unsigned long long)arg2 animated:(_Bool)arg3;
- (CDStruct_26e8d939)wbt_regionForCenterCoordinate:(struct CLLocationCoordinate2D)arg1 zoomLevel:(unsigned long long)arg2;
- (CDStruct_c3b9c2ee)wbt_coordinateSpanWithMapView:(id)arg1 centerCoordinate:(struct CLLocationCoordinate2D)arg2 andZoomLevel:(unsigned long long)arg3;
- (double)wbt_pixelSpaceYToLatitude:(double)arg1;
- (double)wbt_pixelSpaceXToLongitude:(double)arg1;
- (double)wbt_latitudeToPixelSpaceY:(double)arg1;
- (double)wbt_longitudeToPixelSpaceX:(double)arg1;
@end

