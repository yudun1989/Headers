//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MMCommon/MMObject.h>

#import "WCDataProviderDelegate-Protocol.h"

@class MyWCDB, NSMutableArray, NSObject, NSString, WCHomepageDataProvider_Sns;
@protocol OS_dispatch_queue, WCHomepageDelegate;

@interface WCHomepageMgr : MMObject <WCDataProviderDelegate>
{
    NSString *m_username;
    id <WCHomepageDelegate> m_delegate;
    NSMutableArray *m_cache;
    MyWCDB *m_database;
    WCHomepageDataProvider_Sns *m_dataProvider;
    NSObject<OS_dispatch_queue> *_homepageDBQueue;
}

+ (id)homepageMgrForUser:(id)arg1;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *homepageDBQueue; // @synthesize homepageDBQueue=_homepageDBQueue;
@property(retain, nonatomic) NSString *m_username; // @synthesize m_username;
@property(retain, nonatomic) WCHomepageDataProvider_Sns *m_dataProvider; // @synthesize m_dataProvider;
@property(retain, nonatomic) MyWCDB *m_database; // @synthesize m_database;
@property(retain, nonatomic) NSMutableArray *m_cache; // @synthesize m_cache;
@property(nonatomic) __weak id <WCHomepageDelegate> m_delegate; // @synthesize m_delegate;
- (void).cxx_destruct;
- (unsigned long long)onServiceCleanCache;
- (void)onServiceMemoryWarning;
- (id)findDataItemInCacheByItemID:(id)arg1;
- (void)modifyCache:(id)arg1;
- (void)deleteDataItem:(id)arg1 notify:(_Bool)arg2;
- (void)modifyDataItem:(id)arg1 notify:(_Bool)arg2;
- (void)addDataItem:(id)arg1 notify:(_Bool)arg2;
- (void)onReturnServerConfig:(id)arg1;
- (void)onReturnBGUserInfo:(id)arg1;
- (void)onNoMoreDataWithRet:(int)arg1;
- (void)onTotalCountChanged:(long long)arg1;
- (void)onReturnIsAllData:(id)arg1 andAdData:(id)arg2;
- (void)onReturnLimitFeedId:(unsigned long long)arg1;
- (void)onDataUpdated:(id)arg1 maxItemID:(unsigned long long)arg2 minItemID:(unsigned long long)arg3 withChangedTime:(unsigned int)arg4;
- (id)getHomepageData;
- (_Bool)updateTail;
- (_Bool)updateHeadWithSource:(long long)arg1;
- (_Bool)updateHead;
- (void)endHomepage;
- (void)beginHomepage;
- (id)dataProvider;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

