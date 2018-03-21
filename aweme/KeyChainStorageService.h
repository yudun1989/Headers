//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "HTSService.h"

#import "HTSService-Protocol.h"

@class NSString;

@interface KeyChainStorageService : HTSService <HTSService>
{
}

- (_Bool)removeValueForKey:(id)arg1;
- (_Bool)setData:(id)arg1 forKey:(id)arg2;
- (_Bool)setObject:(id)arg1 forKey:(id)arg2;
- (id)objectForKey:(id)arg1;
- (void)clearKeyChainStorage;
- (void)updateInstallID:(id)arg1 deviceID:(id)arg2;
- (id)installInfoFromKeyChain;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

