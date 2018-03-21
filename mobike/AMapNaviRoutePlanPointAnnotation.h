//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "MAAnnotation-Protocol.h"

@class AMapNaviRoute, NSString;

@interface AMapNaviRoutePlanPointAnnotation : NSObject <MAAnnotation>
{
    NSString *_imageName;
    AMapNaviRoute *_myRoute;
    struct CLLocationCoordinate2D _coordinate;
    struct CGPoint _centerOffset;
    struct CGRect _bounds;
}

@property(nonatomic) __weak AMapNaviRoute *myRoute; // @synthesize myRoute=_myRoute;
@property(nonatomic) struct CGPoint centerOffset; // @synthesize centerOffset=_centerOffset;
@property(nonatomic) struct CGRect bounds; // @synthesize bounds=_bounds;
@property(copy, nonatomic) NSString *imageName; // @synthesize imageName=_imageName;
@property(nonatomic) struct CLLocationCoordinate2D coordinate; // @synthesize coordinate=_coordinate;
- (void).cxx_destruct;
- (id)initWithCoordinate:(struct CLLocationCoordinate2D)arg1 imageName:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(copy, nonatomic) NSString *subtitle;
@property(readonly) Class superclass;
@property(copy, nonatomic) NSString *title;

@end

