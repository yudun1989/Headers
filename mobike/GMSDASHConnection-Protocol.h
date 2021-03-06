//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class GMSDASHClientDescription, GMSDASHClientState, GMSDASHConnectionRequest, GMSx_PBArray, NSArray, NSString, NSURL;

@protocol GMSDASHConnection <NSObject>
@property _Bool suppressUserState;
@property _Bool voiceSearchEnabled;
@property(copy) GMSx_PBArray *experimentIDs;
@property int navUsage;
@property(readonly, nonatomic) unsigned long long numberOfBatchesInSuspension;
@property(readonly, nonatomic) unsigned long long pendingEnqueueCount;
@property(readonly, nonatomic) unsigned long long pendingRequestCount;
@property(retain) NSArray *locationDescriptors;
@property _Bool hasLocationFix;
@property(readonly, nonatomic) NSString *legalCountry;
@property(readonly, nonatomic) GMSDASHClientState *clientState;
@property(readonly, copy, nonatomic) GMSDASHClientDescription *clientDescription;
@property(retain) NSURL *serverURL;
- (void)resumeSending;
- (void)suspendSending;
- (void)checkConnection:(void (^)(_Bool))arg1;
- (long long)connectionIdleTimeMS;
- (void)enqueueRequest:(GMSDASHConnectionRequest *)arg1;
- (void)sendRequest:(GMSDASHConnectionRequest *)arg1;
@end

