//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "IDataEnDecrypt-Protocol.h"

@class NSString;

@interface ALBBDataEnDecryptor : NSObject <IDataEnDecrypt>
{
    NSString *_aesKey;
    NSString *_rsaPK;
}

- (void).cxx_destruct;
- (id)generateRandomStringWithCount:(unsigned long long)arg1;
- (id)generateRandomAESKey;
- (id)getDataLengthHeader:(long long)arg1;
- (id)decryptData:(id)arg1;
- (id)encryptPostJson:(id)arg1;
- (id)encryptData:(id)arg1;
- (id)initWith:(id)arg1 rsaPK:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

