//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface ise : NSObject
{
}

+ (id)otpWithSeed:(id)arg1 movingFactor:(long long)arg2 outLen:(int)arg3;
+ (id)hexToBytes:(id)arg1;
- (int)checkSeed:(id)arg1;
- (int)readRootKey:(id)arg1;
- (id)computeSecurityKeyWithId:(id)arg1;
- (id)Init;
- (id)reInitForce;
- (int)hasKey:(id)arg1;
- (int)generateKey:(id)arg1;
- (int)destoryKey:(id)arg1;
- (id)symmetricEncrypt:(id)arg1 withKey:(id)arg2 andMode:(id)arg3;
- (id)getBizKey:(id)arg1 withDecryptPrivKey:(id)arg2;
- (id)symmetricDecrypt:(id)arg1 withKey:(id)arg2 andMode:(id)arg3;
- (id)getRootPrivKey;
- (id)computeOtpWithSeed:(id)arg1 movingFactor:(long long)arg2 outLen:(int)arg3;
- (id)md5:(id)arg1;
- (id)sha1:(id)arg1;
- (id)decodeBase64:(id)arg1;
- (id)encodeBase64:(id)arg1;
- (int)getVersion;
- (void)dealloc;
- (id)init;

@end
