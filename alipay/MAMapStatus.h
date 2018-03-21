//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface MAMapStatus : NSObject
{
    double _zoomLevel;
    double _rotationDegree;
    double _cameraDegree;
    struct CLLocationCoordinate2D _centerCoordinate;
    struct CGPoint _screenAnchor;
}

+ (id)statusWithCenterCoordinate:(struct CLLocationCoordinate2D)arg1 zoomLevel:(double)arg2 rotationDegree:(double)arg3 cameraDegree:(double)arg4 screenAnchor:(struct CGPoint)arg5;
@property(nonatomic) struct CGPoint screenAnchor; // @synthesize screenAnchor=_screenAnchor;
@property(nonatomic) double cameraDegree; // @synthesize cameraDegree=_cameraDegree;
@property(nonatomic) double rotationDegree; // @synthesize rotationDegree=_rotationDegree;
@property(nonatomic) double zoomLevel; // @synthesize zoomLevel=_zoomLevel;
@property(nonatomic) struct CLLocationCoordinate2D centerCoordinate; // @synthesize centerCoordinate=_centerCoordinate;
- (id)initWithCenterCoordinate:(struct CLLocationCoordinate2D)arg1 zoomLevel:(double)arg2 rotationDegree:(double)arg3 cameraDegree:(double)arg4 screenAnchor:(struct CGPoint)arg5;
- (id)init;

@end

