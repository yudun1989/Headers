//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GMSTile-Protocol.h"

@class GMSEmptyTileExpirationState, GMSTileCoords, GMSTileType, NSString;

@interface GMSEmptyTile : NSObject <GMSTile>
{
    GMSTileCoords *_coords;
    GMSTileType *_tileType;
    GMSEmptyTileExpirationState *_expirationState;
}

- (void).cxx_destruct;
- (void)refreshValidationTime:(long long)arg1;
- (void)refreshServerPerTileEpoch:(int)arg1 validationTime:(long long)arg2;
- (_Bool)isTileStoreTile;
- (int)serverPerTileEpoch;
- (int)perTileEpoch;
- (int)copyrightYear;
- (id)imageryCopyrights;
- (id)mapDataCopyrights;
- (int)dataVersion;
- (id)expirationState;
- (id)tileType;
- (id)coords;
- (id)initWithTileCoords:(id)arg1 tileType:(id)arg2 validationTime:(long long)arg3 serverPerTileEpoch:(int)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

