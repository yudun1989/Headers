//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GMSTileFetchingTileObserver.h"

@class NSMutableDictionary;
@protocol GMSIndoorSearchMeaslesTileObserverDelegate;

@interface GMSIndoorSearchMeaslesTileObserver : GMSTileFetchingTileObserver
{
    NSMutableDictionary *_activeSets;
    set_88de248f _lastSet;
    id <GMSIndoorSearchMeaslesTileObserverDelegate> _delegate;
}

@property(nonatomic) __weak id <GMSIndoorSearchMeaslesTileObserverDelegate> delegate; // @synthesize delegate=_delegate;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)addRemoveFinished:(_Bool)arg1;
- (void)removedTileCoords:(id)arg1;
- (void)addedTileCoords:(id)arg1 metadata:(id)arg2;
- (id)metadataFromTile:(id)arg1;
- (id)initWithTileServiceRegistry:(id)arg1 requestCoordinator:(id)arg2 styleTableService:(id)arg3;

@end

