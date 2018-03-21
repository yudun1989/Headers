//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "TBBuyQueryProtocol-Protocol.h"

@class NSString, TBSDKMTOPServer;

@interface FFBuyQueryServices : NSObject <TBBuyQueryProtocol>
{
    TBSDKMTOPServer *server;
}

- (void).cxx_destruct;
- (void)cancel;
- (_Bool)showErrorCode;
- (void)queryWithApiName:(id)arg1 version:(id)arg2 domain:(id)arg3 params:(id)arg4 successBlock:(CDUnknownBlockType)arg5 failureBlock:(CDUnknownBlockType)arg6 extra:(id)arg7 priorityData:(id)arg8 priorityFlag:(_Bool)arg9;
- (void)queryWithApiName:(id)arg1 version:(id)arg2 domain:(id)arg3 params:(id)arg4 successBlock:(CDUnknownBlockType)arg5 failureBlock:(CDUnknownBlockType)arg6 extra:(id)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

