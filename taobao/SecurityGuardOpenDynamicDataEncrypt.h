//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "ISecurityGuardOpenDynamicDataEncrypt-Protocol.h"

@class NSString;

@interface SecurityGuardOpenDynamicDataEncrypt : NSObject <ISecurityGuardOpenDynamicDataEncrypt>
{
}

- (id)dynamicCrypt:(int)arg1 value:(id)arg2 isDDp:(unsigned char)arg3;
- (Class)getMetaClass;
- (id)dynamicDecryptByteArrayDDp:(id)arg1;
- (id)dynamicEncryptByteArrayDDp:(id)arg1;
- (id)dynamicDecryptDDp:(id)arg1;
- (id)dynamicEncryptDDp:(id)arg1;
- (id)dynamicDecryptByteArray:(id)arg1;
- (id)dynamicEncryptByteArray:(id)arg1;
- (id)dynamicDecrypt:(id)arg1;
- (id)dynamicEncrypt:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

