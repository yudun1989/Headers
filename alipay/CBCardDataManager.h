//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SyncUpCallback-Protocol.h"

@class NSString;

@interface CBCardDataManager : NSObject <SyncUpCallback>
{
}

- (void)sendResultBiz:(id)arg1 msgID:(id)arg2 syncUpState:(long long)arg3;
- (void)markCard:(id)arg1 operation:(id)arg2 syncbiz:(id)arg3 ext:(id)arg4 prepare:(CDUnknownBlockType)arg5 success:(CDUnknownBlockType)arg6 failure:(CDUnknownBlockType)arg7;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

