//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "DTRpcPrivateEncryptProtocol-Protocol.h"

@class NSData, NSString;

@interface ANXRPCDataPack : NSObject <DTRpcPrivateEncryptProtocol>
{
    NSData *_des3Key;
}

@property(retain, nonatomic) NSData *des3Key; // @synthesize des3Key=_des3Key;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *RSAPublicKey;
- (void)checkPublicKeyUpdateWithEnvelop:(id)arg1;
- (id)encryptedWithSource:(id)arg1 key:(id)arg2;
- (id)envelopData;
- (id)decryptData:(id)arg1;
- (id)encryptData:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

