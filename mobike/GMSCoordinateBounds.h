//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface GMSCoordinateBounds : NSObject
{
    CDStruct_2c43369c _northEast;
    CDStruct_2c43369c _southWest;
}

+ (id)fromStandard:(id)arg1;
@property(nonatomic) CDStruct_c3b9c2ee southWest; // @synthesize southWest=_southWest;
@property(nonatomic) CDStruct_c3b9c2ee northEast; // @synthesize northEast=_northEast;
- (void)updateIncludingBoundsSouthWest:(CDStruct_c3b9c2ee)arg1 northEast:(CDStruct_c3b9c2ee)arg2;
- (void)updateIncludingCoordinate:(CDStruct_c3b9c2ee)arg1 coordinate:(CDStruct_c3b9c2ee)arg2;
- (CDStruct_c3b9c2ee)center;
- (id)initWithSouthWest:(CDStruct_c3b9c2ee)arg1 northEast:(CDStruct_c3b9c2ee)arg2;
- (id)includingBounds:(id)arg1;
- (id)includingCoordinate:(CDStruct_c3b9c2ee)arg1;
@property(readonly, getter=isValid) _Bool valid;
- (_Bool)isEqual:(id)arg1;
- (_Bool)intersectsBounds:(id)arg1;
- (_Bool)containsCoordinate:(CDStruct_c3b9c2ee)arg1;
- (id)initWithCoordinate:(CDStruct_c3b9c2ee)arg1 coordinate:(CDStruct_c3b9c2ee)arg2;
- (id)init;
- (struct WrappedRectangle2D)rectangle;
- (id)clampLatitudeCopy;
- (id)includingPath:(id)arg1;
- (id)initWithPath:(id)arg1;
- (id)initWithRegion:(CDStruct_7738a2f8)arg1;

@end

