//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBManagerBase.h"

@class CNContactStore;

@interface PBManager : PBManagerBase
{
    CNContactStore *_store;
    CDUnknownBlockType _callback;
}

+ (long long)checkAuth;
@property(copy) CDUnknownBlockType callback; // @synthesize callback=_callback;
@property(retain, nonatomic) CNContactStore *store; // @synthesize store=_store;
- (void).cxx_destruct;
- (void)dealloc;
- (void)contactsChanged:(id)arg1;
- (void)unRegisterContactsChangedNotification;
- (void)registerContactsChangedNotificationWithCallback:(CDUnknownBlockType)arg1;
- (_Bool)updateContacts:(id)arg1;
- (_Bool)updateContact:(id)arg1;
- (_Bool)addContacts:(id)arg1;
- (_Bool)addContact:(id)arg1 toContainer:(id)arg2;
- (void)requestAuthWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)queryAllContactsSummaryWithComplete:(CDUnknownBlockType)arg1;
- (void)queryAllContactsWithComplete:(CDUnknownBlockType)arg1;
- (void)queryAllContactsOnlySummary:(_Bool)arg1 withComplete:(CDUnknownBlockType)arg2;
- (unsigned long long)getContactsCount;
- (id)convert2PBPerson:(id)arg1 onlySummary:(_Bool)arg2;
- (id)CNContactFromPbPerson:(id)arg1 withOrignalCNContact:(id)arg2;
- (id)init;

@end
