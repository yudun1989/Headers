//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GMSx_PBGeneratedMessage.h"

@class GMSx_GMMMapTileRequestHeader, GMSx_PBMutableArray;

@interface GMSx_GMMMapTileRequestProto : GMSx_PBGeneratedMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasHeader; // @dynamic hasHeader;
@property(nonatomic) _Bool hasMapTileArray; // @dynamic hasMapTileArray;
@property(nonatomic) _Bool hasPaintDescriptionArray; // @dynamic hasPaintDescriptionArray;
@property(retain, nonatomic) GMSx_GMMMapTileRequestHeader *header; // @dynamic header;
@property(retain, nonatomic) GMSx_PBMutableArray *mapTileArray; // @dynamic mapTileArray;
@property(retain, nonatomic) GMSx_PBMutableArray *paintDescriptionArray; // @dynamic paintDescriptionArray;

@end

