//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "TTAccountStoreProtocol-Protocol.h"

@class NSString, TTAccountKeyChainStore;

@interface TTAccountStore : NSObject <TTAccountStoreProtocol>
{
    NSString *_serviceName;
    NSString *_accessGroupName;
    TTAccountKeyChainStore *_keychainStore;
}

+ (id)tt_dataForKey:(id)arg1 service:(id)arg2 accessGroup:(id)arg3;
+ (id)tt_dictionaryForKey:(id)arg1 service:(id)arg2 accessGroup:(id)arg3;
+ (id)tt_arrayForKey:(id)arg1 service:(id)arg2 accessGroup:(id)arg3;
+ (id)tt_stringForKey:(id)arg1 service:(id)arg2 accessGroup:(id)arg3;
+ (id)tt_numberForKey:(id)arg1 service:(id)arg2 accessGroup:(id)arg3;
+ (_Bool)tt_boolForKey:(id)arg1 service:(id)arg2 accessGroup:(id)arg3;
+ (void)tt_setData:(id)arg1 forKey:(id)arg2 service:(id)arg3 accessGroup:(id)arg4;
+ (void)tt_setDictionary:(id)arg1 forKey:(id)arg2 service:(id)arg3 accessGroup:(id)arg4;
+ (void)tt_setArray:(id)arg1 forKey:(id)arg2 service:(id)arg3 accessGroup:(id)arg4;
+ (void)tt_setString:(id)arg1 forKey:(id)arg2 service:(id)arg3 accessGroup:(id)arg4;
+ (void)tt_setNumber:(id)arg1 forKey:(id)arg2 service:(id)arg3 accessGroup:(id)arg4;
+ (void)tt_setBool:(_Bool)arg1 forKey:(id)arg2 service:(id)arg3 accessGroup:(id)arg4;
+ (id)tt_dataForKey:(id)arg1;
+ (id)tt_dictionaryForKey:(id)arg1;
+ (id)tt_arrayForKey:(id)arg1;
+ (id)tt_stringForKey:(id)arg1;
+ (id)tt_numberForKey:(id)arg1;
+ (_Bool)tt_boolForKey:(id)arg1;
+ (void)tt_setData:(id)arg1 forKey:(id)arg2;
+ (void)tt_setDictionary:(id)arg1 forKey:(id)arg2;
+ (void)tt_setArray:(id)arg1 forKey:(id)arg2;
+ (void)tt_setString:(id)arg1 forKey:(id)arg2;
+ (void)tt_setNumber:(id)arg1 forKey:(id)arg2;
+ (void)tt_setBool:(_Bool)arg1 forKey:(id)arg2;
+ (id)storeWithServiceName:(id)arg1 accessGroup:(id)arg2;
+ (id)sharedStore;
@property(retain, nonatomic) TTAccountKeyChainStore *keychainStore; // @synthesize keychainStore=_keychainStore;
@property(copy, nonatomic) NSString *accessGroupName; // @synthesize accessGroupName=_accessGroupName;
@property(copy, nonatomic) NSString *serviceName; // @synthesize serviceName=_serviceName;
- (void).cxx_destruct;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (_Bool)tt_removeItemForKey:(id)arg1;
- (_Bool)tt_removeAllItems;
- (id)tt_allItems;
- (id)tt_allKeys;
- (id)tt_dataForKey:(id)arg1;
- (id)tt_dictionaryForKey:(id)arg1;
- (id)tt_arrayForKey:(id)arg1;
- (id)tt_stringForKey:(id)arg1;
- (id)tt_numberForKey:(id)arg1;
- (_Bool)tt_boolForKey:(id)arg1;
- (void)tt_setData:(id)arg1 forKey:(id)arg2;
- (void)tt_setDictionary:(id)arg1 forKey:(id)arg2;
- (void)tt_setArray:(id)arg1 forKey:(id)arg2;
- (void)tt_setString:(id)arg1 forKey:(id)arg2;
- (id)init;
- (id)initWithService:(id)arg1 accessGroup:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

