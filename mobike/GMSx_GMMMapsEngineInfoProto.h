//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GMSx_PBGeneratedMessage.h"

@class GMSx_PBMutableArray, NSString;

@interface GMSx_GMMMapsEngineInfoProto : GMSx_PBGeneratedMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) NSString *geoAssetId; // @dynamic geoAssetId;
@property(nonatomic) _Bool hasGeoAssetId; // @dynamic hasGeoAssetId;
@property(nonatomic) _Bool hasLayerId; // @dynamic hasLayerId;
@property(nonatomic) _Bool hasParameterArray; // @dynamic hasParameterArray;
@property(retain, nonatomic) NSString *layerId; // @dynamic layerId;
@property(retain, nonatomic) GMSx_PBMutableArray *parameterArray; // @dynamic parameterArray;

@end

