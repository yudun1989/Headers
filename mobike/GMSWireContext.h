//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GMSStyleTable, GMSTileCoords, GMSx_GMPCTileOptions;

@interface GMSWireContext : NSObject
{
    _Bool _hasWorldBasedCoordinates;
    GMSTileCoords *_tileCoords;
    GMSx_GMPCTileOptions *_tileOptions;
    unsigned long long _worldBasedVertexEncoding;
    GMSStyleTable *_styleTable;
}

@property(readonly, nonatomic) GMSStyleTable *styleTable; // @synthesize styleTable=_styleTable;
@property(readonly, nonatomic) unsigned long long worldBasedVertexEncoding; // @synthesize worldBasedVertexEncoding=_worldBasedVertexEncoding;
@property(readonly, nonatomic) _Bool hasWorldBasedCoordinates; // @synthesize hasWorldBasedCoordinates=_hasWorldBasedCoordinates;
@property(readonly, nonatomic) GMSx_GMPCTileOptions *tileOptions; // @synthesize tileOptions=_tileOptions;
@property(readonly, nonatomic) GMSTileCoords *tileCoords; // @synthesize tileCoords=_tileCoords;
- (void).cxx_destruct;
- (struct StyleID)unpackStylingIDWithProtoRenderOp:(id)arg1 type:(unsigned long long)arg2;
- (id)renderOpInfoFromProtoRenderOp:(id)arg1 extensionMappings:(id)arg2 serverRenderOpIndex:(unsigned long long)arg3;
- (id)renderOpInfoFromProtoRenderOp:(id)arg1;
- (id)initWithWorldBasedVertexEncoding:(unsigned long long)arg1 styleTable:(id)arg2;
- (id)initWithTileCoords:(id)arg1 tileOptions:(id)arg2 styleTable:(id)arg3;

@end

