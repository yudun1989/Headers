//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SARSAService-Protocol.h"

@class NSString, SARSAKeyResult;

@interface SARSAServiceImpl : NSObject <SARSAService>
{
    SARSAKeyResult *_rsaKey;
}

@property(retain, nonatomic) SARSAKeyResult *rsaKey; // @synthesize rsaKey=_rsaKey;
- (void).cxx_destruct;
- (void)clearRSA;
- (id)RSAEncrypt:(id)arg1 needTS:(_Bool)arg2 rsa:(id)arg3;
- (void)RSAEncryptAsync:(id)arg1 needTS:(_Bool)arg2 onComplete:(CDUnknownBlockType)arg3;
- (id)RSAEncryptSync:(id)arg1 needTS:(_Bool)arg2;
- (void)getRsaAsync:(CDUnknownBlockType)arg1;
- (id)getRsaSync;
- (id)RSAEncrypt:(id)arg1 needTS:(_Bool)arg2;
- (id)RSA;
- (void)start;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

