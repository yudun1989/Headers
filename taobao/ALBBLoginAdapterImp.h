//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "LoginProtocol-Protocol.h"

@class NSString;

@interface ALBBLoginAdapterImp : NSObject <LoginProtocol>
{
}

+ (id)sharedInstantce;
- (void)logout;
- (void)markInvalidLogin;
- (_Bool)isProcessingLogin;
- (id)currentSession;
- (void)loginWithLoginOption:(int)arg1 extraInfo:(id)arg2 completionHandler:(CDUnknownBlockType)arg3 cancelationHandler:(CDUnknownBlockType)arg4;
- (void)loginWithLoginOption:(int)arg1 completionHandler:(CDUnknownBlockType)arg2 cancelationHandler:(CDUnknownBlockType)arg3;
- (_Bool)isValidLogin;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

