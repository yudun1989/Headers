//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class GMSTileType, NSObject, NSSet;
@protocol OS_dispatch_queue;

@protocol GMSTileObserver <NSObject>
@property(readonly, nonatomic) NSSet *tileTypesHandled;
@property(readonly, nonatomic) _Bool onlyWantsBaseTiles;
- (NSObject<OS_dispatch_queue> *)dispatchQueue;
- (void)didRemoveTileObserver;
- (void)didSwitchToBaseTileType:(GMSTileType *)arg1;
- (void)viewportTilesAdded:(NSSet *)arg1 removed:(NSSet *)arg2 tileType:(GMSTileType *)arg3 frustum:(const struct WrappedFrustum2D *)arg4;

@optional
- (void)didSwitchToPSMTileType:(GMSTileType *)arg1 isBaseTileType:(_Bool)arg2;
@end

