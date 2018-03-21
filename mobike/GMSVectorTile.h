//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GMSTile-Protocol.h"
#import "NSCopying-Protocol.h"

@class GMSStyleTable, GMSTileCoords, GMSTileType, GMSVectorTileExpirationState, NSArray, NSString;
@protocol GMSTileExpirationState;

@interface GMSVectorTile : NSObject <GMSTile, NSCopying>
{
    GMSVectorTileExpirationState *_tileExpirationState;
    _Bool _isTileStoreTile;
    unsigned char _attributes;
    int _dataVersion;
    int _copyrightYear;
    int _perTileEpoch;
    int _majorEpoch;
    GMSTileCoords *_coords;
    NSArray *_features;
    GMSStyleTable *_embeddedStyleTable;
    NSArray *_mapDataCopyrights;
    NSArray *_featureProviders;
    GMSTileType *_tileType;
    NSArray *_vectorModifiers;
}

+ (id)unpackedWithTileCoords:(id)arg1 tileProto:(id)arg2 mapTileProto:(id)arg3 combinedTileEdition:(int)arg4 perTileEpoch:(int)arg5 tileType:(id)arg6 validationTime:(long long)arg7;
+ (_Bool)checkTileMagicInData:(id)arg1 offset:(int)arg2;
+ (void)decryptTileWithTileCoords:(id)arg1 protocolVersion:(int)arg2 tileVersion:(int)arg3 tileHashKey:(long long)arg4 data:(id)arg5 offset:(unsigned long long)arg6 length:(unsigned long long)arg7;
+ (_Bool)parseHeaderWithData:(id)arg1 offset:(unsigned long long)arg2 tileType:(id)arg3 combinedTileEdition:(int *)arg4 perTileEpoch:(int *)arg5 protocolVersion:(int *)arg6 tileVersion:(int *)arg7 tileHashKey:(long long *)arg8 attributes:(char *)arg9;
+ (_Bool)checkTileMagicForInput:(struct JavaDataInput *)arg1;
+ (void)populateHeaderForEdition:(int)arg1 perTileEpoch:(int)arg2 output:(id)arg3;
+ (unsigned long long)tileEncodedHeaderSize;
+ (id)unpackedWithTileCoords:(id)arg1 tileProto:(id)arg2 data:(id)arg3 isTileStoreData:(_Bool)arg4 offset:(int)arg5 tileType:(id)arg6 validationTime:(long long)arg7;
+ (long long)psmPerTileDurationMS:(id)arg1;
+ (int)perTileDurationHours:(id)arg1;
+ (long long)perTileDurationMS:(id)arg1;
+ (id)tileFromUWFDiffTile:(id)arg1;
+ (id)tileFromDiffTileAdds:(id)arg1;
@property(readonly, nonatomic) int majorEpoch; // @synthesize majorEpoch=_majorEpoch;
@property(readonly, nonatomic) int perTileEpoch; // @synthesize perTileEpoch=_perTileEpoch;
@property(readonly, nonatomic) NSArray *vectorModifiers; // @synthesize vectorModifiers=_vectorModifiers;
@property(readonly, nonatomic) GMSTileType *tileType; // @synthesize tileType=_tileType;
@property(readonly, nonatomic) int copyrightYear; // @synthesize copyrightYear=_copyrightYear;
@property(readonly, nonatomic) NSArray *featureProviders; // @synthesize featureProviders=_featureProviders;
@property(readonly, nonatomic) NSArray *mapDataCopyrights; // @synthesize mapDataCopyrights=_mapDataCopyrights;
@property(readonly, nonatomic) id <GMSTileExpirationState> tileExpirationState; // @synthesize tileExpirationState=_tileExpirationState;
@property(readonly, nonatomic) GMSStyleTable *embeddedStyleTable; // @synthesize embeddedStyleTable=_embeddedStyleTable;
@property(readonly, nonatomic) NSArray *features; // @synthesize features=_features;
@property(readonly, nonatomic) unsigned char attributes; // @synthesize attributes=_attributes;
@property(readonly, nonatomic) int dataVersion; // @synthesize dataVersion=_dataVersion;
@property(readonly, nonatomic) GMSTileCoords *coords; // @synthesize coords=_coords;
- (void).cxx_destruct;
- (void)refreshServerPerTileEpoch:(int)arg1 validationTime:(long long)arg2;
- (void)refreshValidationTime:(long long)arg1;
- (int)serverPerTileEpoch;
- (id)expirationState;
- (_Bool)isTileStoreTile;
- (_Bool)canOfflineWithClientParameters:(id)arg1;
@property(readonly, nonatomic) _Bool hasNotOfflineableRegion;
@property(readonly, nonatomic) _Bool hasOfflineableRegion;
@property(readonly, nonatomic) NSArray *copyrights;
- (id)imageryCopyrights;
@property(readonly, nonatomic) _Bool usesGlobalStyles;
@property(readonly, copy) NSString *description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithStyleTable:(id)arg1 coords:(id)arg2 dataVersion:(int)arg3 attributes:(unsigned char)arg4 perTileEpoch:(int)arg5 serverPerTileEpoch:(int)arg6 mapDataCopyrights:(id)arg7 featureProviders:(id)arg8 copyrightYear:(int)arg9 features:(id)arg10 tileType:(id)arg11 vectorModifiers:(id)arg12 validationTime:(long long)arg13 majorEpoch:(int)arg14;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

