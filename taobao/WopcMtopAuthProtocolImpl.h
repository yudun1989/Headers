//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "MtopAuthProtocol-Protocol.h"

@class NSString;

@interface WopcMtopAuthProtocolImpl : NSObject <MtopAuthProtocol>
{
}

+ (id)sharedInstantce;
- (void)markInvalidAuth:(id)arg1;
- (_Bool)isProcessingAuth:(id)arg1;
- (id)currentSession:(id)arg1;
- (void)authWithAuthOption:(int)arg1 extraInfo:(id)arg2 completionHandler:(CDUnknownBlockType)arg3 cancelationHandler:(CDUnknownBlockType)arg4 authParam:(id)arg5;
- (void)authWithAuthOption:(int)arg1 completionHandler:(CDUnknownBlockType)arg2 cancelationHandler:(CDUnknownBlockType)arg3 authParam:(id)arg4;
- (_Bool)isValidAuth:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
