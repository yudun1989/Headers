//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class LOTAsset, LOTKeyframeGroup, NSArray, NSNumber, NSString, UIColor;

@interface LOTLayer : NSObject
{
    NSString *_layerName;
    NSString *_referenceID;
    NSNumber *_layerID;
    long long _layerType;
    NSNumber *_parentID;
    NSNumber *_startFrame;
    NSNumber *_inFrame;
    NSNumber *_outFrame;
    NSArray *_shapes;
    NSArray *_masks;
    NSNumber *_layerWidth;
    NSNumber *_layerHeight;
    UIColor *_solidColor;
    LOTAsset *_imageAsset;
    LOTKeyframeGroup *_opacity;
    LOTKeyframeGroup *_rotation;
    LOTKeyframeGroup *_position;
    LOTKeyframeGroup *_positionX;
    LOTKeyframeGroup *_positionY;
    LOTKeyframeGroup *_anchor;
    LOTKeyframeGroup *_scale;
    long long _matteType;
    struct CGRect _layerBounds;
}

@property(readonly, nonatomic) long long matteType; // @synthesize matteType=_matteType;
@property(readonly, nonatomic) LOTKeyframeGroup *scale; // @synthesize scale=_scale;
@property(readonly, nonatomic) LOTKeyframeGroup *anchor; // @synthesize anchor=_anchor;
@property(readonly, nonatomic) LOTKeyframeGroup *positionY; // @synthesize positionY=_positionY;
@property(readonly, nonatomic) LOTKeyframeGroup *positionX; // @synthesize positionX=_positionX;
@property(readonly, nonatomic) LOTKeyframeGroup *position; // @synthesize position=_position;
@property(readonly, nonatomic) LOTKeyframeGroup *rotation; // @synthesize rotation=_rotation;
@property(readonly, nonatomic) LOTKeyframeGroup *opacity; // @synthesize opacity=_opacity;
@property(readonly, nonatomic) LOTAsset *imageAsset; // @synthesize imageAsset=_imageAsset;
@property(readonly, nonatomic) UIColor *solidColor; // @synthesize solidColor=_solidColor;
@property(readonly, nonatomic) NSNumber *layerHeight; // @synthesize layerHeight=_layerHeight;
@property(readonly, nonatomic) NSNumber *layerWidth; // @synthesize layerWidth=_layerWidth;
@property(readonly, nonatomic) NSArray *masks; // @synthesize masks=_masks;
@property(readonly, nonatomic) NSArray *shapes; // @synthesize shapes=_shapes;
@property(readonly, nonatomic) struct CGRect layerBounds; // @synthesize layerBounds=_layerBounds;
@property(readonly, nonatomic) NSNumber *outFrame; // @synthesize outFrame=_outFrame;
@property(readonly, nonatomic) NSNumber *inFrame; // @synthesize inFrame=_inFrame;
@property(readonly, nonatomic) NSNumber *startFrame; // @synthesize startFrame=_startFrame;
@property(readonly, nonatomic) NSNumber *parentID; // @synthesize parentID=_parentID;
@property(readonly, nonatomic) long long layerType; // @synthesize layerType=_layerType;
@property(readonly, nonatomic) NSNumber *layerID; // @synthesize layerID=_layerID;
@property(readonly, nonatomic) NSString *referenceID; // @synthesize referenceID=_referenceID;
@property(readonly, nonatomic) NSString *layerName; // @synthesize layerName=_layerName;
- (void).cxx_destruct;
- (id)description;
- (void)_mapFromJSON:(id)arg1 withAssetGroup:(id)arg2;
- (id)initWithJSON:(id)arg1 withAssetGroup:(id)arg2;

@end

