//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GMSIndoorBounds, NSArray;

@interface GMSIndoorBuilding : NSObject
{
    struct IndoorID _indoorID;
    _Bool _underground;
    int _minRenderingZoom;
    NSArray *_levels;
    unsigned long long _defaultLevelIndex;
    GMSIndoorBounds *_bounds;
    struct Point2D _center;
}

+ (id)buildingFromProto:(id)arg1;
@property(readonly, nonatomic) int minRenderingZoom; // @synthesize minRenderingZoom=_minRenderingZoom;
@property(readonly, nonatomic) struct Point2D center; // @synthesize center=_center;
@property(readonly, nonatomic) GMSIndoorBounds *bounds; // @synthesize bounds=_bounds;
@property(readonly, nonatomic, getter=isUnderground) _Bool underground; // @synthesize underground=_underground;
@property(readonly, nonatomic) unsigned long long defaultLevelIndex; // @synthesize defaultLevelIndex=_defaultLevelIndex;
@property(readonly, nonatomic) NSArray *levels; // @synthesize levels=_levels;
@property(readonly, nonatomic) const struct IndoorID *indoorID; // @synthesize indoorID=_indoorID;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)updateWithBoundingRect:(struct Rectangle2D)arg1;
- (void)updateWithBoundingPolygon:(const struct TriangleList2D *)arg1 fromTileCoords:(id)arg2 featureIndexInTile:(int)arg3 tileDataVersion:(int)arg4 perTileEpoch:(int)arg5;
- (void)mergeBoundsFromBuilding:(id)arg1;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)levelIndexForIndoorID:(const struct IndoorID *)arg1;
- (id)initWithIndoorID:(const struct IndoorID *)arg1 levels:(id)arg2 center:(struct Point2D)arg3 minRenderingZoom:(int)arg4 underground:(_Bool)arg5 defaultLevelIndex:(unsigned long long)arg6;

@end

