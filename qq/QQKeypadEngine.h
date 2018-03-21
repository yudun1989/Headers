//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <QQMainProject/IQSContactsEngineObserver-Protocol.h>

@class NSArray, NSMutableArray, NSString, QQKeypadModel;
@protocol OS_dispatch_queue;

@interface QQKeypadEngine : NSObject <IQSContactsEngineObserver>
{
    NSObject<OS_dispatch_queue> *_keypadQueue;
    NSMutableArray *_contactList;
    NSMutableArray *_recentList;
    NSMutableArray *_qqFriendList;
    NSMutableArray *_countryCodeList;
    QQKeypadModel *_dialPhoneNumModel;
    _Bool _isJsCall;
    NSString *_searchNumber;
    NSString *_realSearchNumber;
    NSArray *_searchResult;
}

+ (id)defaultEngine;
@property(nonatomic) _Bool isJsCall; // @synthesize isJsCall=_isJsCall;
@property(copy, nonatomic) NSArray *searchResult; // @synthesize searchResult=_searchResult;
@property(copy, nonatomic) NSString *realSearchNumber; // @synthesize realSearchNumber=_realSearchNumber;
@property(copy, nonatomic) NSString *searchNumber; // @synthesize searchNumber=_searchNumber;
- (id)internationalSearchNumberFormat:(id)arg1;
- (id)countryCodeFormatWithString:(id)arg1;
- (void)notifyUpdateContactsStat:(id)arg1;
- (void)searchForNumber:(id)arg1 realNumber:(id)arg2 lastNumber:(id)arg3 lastSearchResult:(id)arg4;
- (void)clearData;
- (id)qqFriendList;
- (id)recentList;
- (id)contactList;
- (void)synchronizeData:(id)arg1;
- (void)loadQQFriendListData;
- (void)loadRecentListData;
- (void)loadContactListData;
- (void)loadData;
- (void)loadCountryCode;
- (void)dealloc;
- (id)init;
- (void)callButtonAction:(id)arg1 vc:(id)arg2;
- (_Bool)checkContact:(id)arg1;
- (void)startMultiPSTN:(id)arg1 vc:(id)arg2;
- (void)startPSTNCall:(id)arg1 isForceMulti:(_Bool)arg2 vc:(id)arg3;
- (_Bool)checkPSTNCall:(id)arg1;
- (void)startPSTNCall:(id)arg1 isForceMulti:(_Bool)arg2 qcallModel:(id)arg3 vc:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

