//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "TBAMPPublicServiceProtocol-Protocol.h"

@class NSString;

@interface TBAMPPublicService : NSObject <TBAMPPublicServiceProtocol>
{
    CDUnknownBlockType _refreshblock;
}

+ (_Bool)isEffectiveString:(id)arg1;
+ (id)dateFromTimeString:(id)arg1;
+ (unsigned long long)indexOfObject:(id)arg1 withArray:(id)arg2;
@property(copy, nonatomic) CDUnknownBlockType refreshblock; // @synthesize refreshblock=_refreshblock;
- (void).cxx_destruct;
- (void)ampRecentUsersNeedRefreshBlock:(CDUnknownBlockType)arg1;
- (_Bool)isOpenRecevieMessage;
- (void)updateOfficalAccountWithMessageTypeId:(id)arg1 isSubscribe:(_Bool)arg2 isPush:(_Bool)arg3;
- (id)toContentTypeAndSubTypeMapWithMessageType:(id)arg1;
- (void)queryMessageByCCodes:(id)arg1 messageTypes:(id)arg2 limit:(long long)arg3 withCallback:(CDUnknownBlockType)arg4;
- (void)startChat:(id)arg1 userName:(id)arg2 bizID:(id)arg3 topic:(id)arg4 ext:(id)arg5;
- (id)getAmpRecentUsers;
- (id)getAmpPotentialContacts;
- (id)getAmpRecentContacts;
- (void)getOffcialRecentContactListWithWWToken:(id)arg1;
- (void)clearUnreadedCountOfAccountID:(id)arg1;
- (id)getAMPSessionIdByUserId:(id)arg1;
- (void)sendMessage:(id)arg1 ToUser:(id)arg2;
- (void)storeMessage:(id)arg1 withUser:(id)arg2;
- (void)storeMessage:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

