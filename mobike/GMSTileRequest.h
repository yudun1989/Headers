//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GMSTileRequest-Protocol.h"

@class GMSTileCoords, NSDictionary, NSString;

@interface GMSTileRequest : NSObject <GMSTileRequest>
{
    GMSTileCoords *_coords;
    NSDictionary *_extraRequestParams;
    int _fetchType;
    int _aggregateFetchType;
    int _perTileEpoch;
    int _dataVersion;
    id _target;
    SEL _selector;
    id _savedTarget;
    SEL _savedSelector;
    _Bool _calledToSayMakingServerRequest;
    _Bool _calledToComplete;
    GMSTileRequest *_nextRequest;
    _Bool _forcedToFail;
}

@property(nonatomic) _Bool forcedToFail; // @synthesize forcedToFail=_forcedToFail;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (void)invokeCallbackWithTileService:(id)arg1 status:(int)arg2 tile:(id)arg3 diffTiles:(id)arg4 useSavedCallback:(_Bool)arg5;
- (void)invokeCallbackWithTileService:(id)arg1 status:(int)arg2 tile:(id)arg3 diffTiles:(id)arg4;
- (void)invokeSavedCallbackWithTileService:(id)arg1 status:(int)arg2 tile:(id)arg3 diffTiles:(id)arg4;
- (void)saveAndClearCallback;
- (void)clearCallback;
- (id)extraRequestParams;
- (id)target;
- (void)setDataVersion:(int)arg1;
- (int)dataVersion;
- (void)setPerTileEpoch:(int)arg1;
- (int)perTileEpoch;
- (int)aggregateFetchType;
- (int)fetchType;
- (id)tileCoords;
- (id)nextDuplicate;
- (void)addDuplicate:(id)arg1;
- (id)initWithTileCoords:(id)arg1 extraRequestParams:(id)arg2 fetchType:(int)arg3 target:(id)arg4 selector:(SEL)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

