//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GMSTileFetchingTileObserver.h"

@class GMSIndoorState, NSMutableDictionary;
@protocol GMSIndoorTileObserverDelegate;

@interface GMSIndoorTileObserver : GMSTileFetchingTileObserver
{
    GMSIndoorState *_indoorState;
    struct LRUCache<gmscore::model::FeatureID, GMSIndoorBuilding *, std::__1::hash<gmscore::model::FeatureID>, false> _buildingCache;
    NSMutableDictionary *_activeTileBuildings;
    id <GMSIndoorTileObserverDelegate> _delegate;
}

@property(nonatomic) __weak id <GMSIndoorTileObserverDelegate> delegate; // @synthesize delegate=_delegate;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)clearState;
- (void)clearCaches;
- (void)addRemoveFinished:(_Bool)arg1;
- (void)removedTileCoords:(id)arg1;
- (void)addedTileCoords:(id)arg1 metadata:(id)arg2;
- (id)metadataFromTile:(id)arg1;
- (id)initWithIndoorState:(id)arg1 tileServiceRegistry:(id)arg2 requestCoordinator:(id)arg3 styleTableService:(id)arg4;

@end

