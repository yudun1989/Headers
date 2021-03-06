//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MAMultiPolyline.h"

@class AMapNaviRoute, NSArray;

@interface AMapNaviRoutePolyline : MAMultiPolyline
{
    _Bool _isDashedLine;
    double _polylineWidth;
    double _dashPolylineWidth;
    NSArray *_polylineTextureImages;
    NSArray *_polylineTextureImagesSeleted;
    NSArray *_polylineStrokeColors;
    AMapNaviRoute *_myRoute;
}

@property(nonatomic) __weak AMapNaviRoute *myRoute; // @synthesize myRoute=_myRoute;
@property(copy, nonatomic) NSArray *polylineStrokeColors; // @synthesize polylineStrokeColors=_polylineStrokeColors;
@property(copy, nonatomic) NSArray *polylineTextureImagesSeleted; // @synthesize polylineTextureImagesSeleted=_polylineTextureImagesSeleted;
@property(copy, nonatomic) NSArray *polylineTextureImages; // @synthesize polylineTextureImages=_polylineTextureImages;
@property(nonatomic) double dashPolylineWidth; // @synthesize dashPolylineWidth=_dashPolylineWidth;
@property(nonatomic) double polylineWidth; // @synthesize polylineWidth=_polylineWidth;
@property(nonatomic) _Bool isDashedLine; // @synthesize isDashedLine=_isDashedLine;
- (void).cxx_destruct;

@end

