//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface GSDK_GTMOAuth2Keychain : NSObject
{
}

+ (id)keychainQueryForService:(id)arg1 account:(id)arg2;
+ (void)setDefaultKeychain:(id)arg1;
+ (id)defaultKeychain;
- (_Bool)setPassword:(id)arg1 forService:(id)arg2 accessibility:(void *)arg3 account:(id)arg4 error:(id *)arg5;
- (_Bool)removePasswordForService:(id)arg1 account:(id)arg2 error:(id *)arg3;
- (id)passwordForService:(id)arg1 account:(id)arg2 error:(id *)arg3;
- (id)keychainQueryForService:(id)arg1 account:(id)arg2;
- (id)keyForService:(id)arg1 account:(id)arg2;

@end

