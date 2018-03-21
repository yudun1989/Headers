//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class MKTCoreDataManager, NSArray, NSDate, NSDictionary, NSString, TBAMPGroupInfo, TBAMPGroupUser, TBAMPMessage, TBAMPSession, TBAMPUser;

@protocol AMPDBOperator <NSObject>
@property(retain, nonatomic) MKTCoreDataManager *manager;
- (void)saveBindMobileUsers:(NSArray *)arg1;
- (NSArray *)bindMobileUsersByPhones:(NSArray *)arg1;
- (NSArray *)groupUsersByUserId:(NSString *)arg1;
- (void)removeGroupUsersForGroup:(NSString *)arg1;
- (void)removeGroupUsersForGroup:(NSString *)arg1 userIds:(NSArray *)arg2;
- (void)invalidGroupUserWithWithUserIds:(NSArray *)arg1 withGroupId:(NSString *)arg2;
- (NSArray *)groupUserListByGroupId:(NSString *)arg1;
- (NSArray *)groupUserListWithUserIds:(NSArray *)arg1 withGroupId:(NSString *)arg2;
- (TBAMPGroupUser *)groupUserByUserId:(NSString *)arg1 groupId:(NSString *)arg2;
- (void)saveGroupUserInfos:(NSArray *)arg1;
- (void)invalidGroupWithGroupIds:(NSDictionary *)arg1;
- (void)removeGroupInfo:(NSString *)arg1;
- (NSArray *)groupInfoListWithCCodeList:(NSArray *)arg1;
- (NSArray *)joinedGroupInfos;
- (TBAMPGroupInfo *)groupById:(NSString *)arg1;
- (void)saveGroupInfos:(NSArray *)arg1;
- (NSDictionary *)allConfigValues;
- (void)removeConfigValueForKey:(NSString *)arg1;
- (void)setConfigValue:(NSString *)arg1 forKey:(NSString *)arg2;
- (NSString *)configValueForKey:(NSString *)arg1;
- (void)applySaveAndWait;
- (void)applySave;
- (void)setUserDisplayName:(NSString *)arg1 userId:(NSString *)arg2 forChannel:(long long)arg3 bizSubId:(long long)arg4;
- (void)setUserDefaultName:(NSDictionary *)arg1 forChannel:(long long)arg2 bizSubId:(long long)arg3;
- (NSArray *)batchUserByNick:(NSArray *)arg1 forChannel:(long long)arg2 bizSubId:(long long)arg3;
- (NSArray *)batchUserById:(NSArray *)arg1 forChannel:(long long)arg2 bizSubId:(long long)arg3;
- (TBAMPUser *)userById:(NSString *)arg1 ForChannel:(long long)arg2 bizSubId:(long long)arg3;
- (void)saveUsers:(NSArray *)arg1;
- (TBAMPMessage *)messagesBySession:(TBAMPSession *)arg1 withMessageId:(NSString *)arg2;
- (NSArray *)messagesBySession:(TBAMPSession *)arg1 andMessageTypes:(NSArray *)arg2 limit:(long long)arg3;
- (NSArray *)messagesBySession:(TBAMPSession *)arg1 andContentType:(unsigned long long)arg2 andSubType:(long long)arg3 limit:(long long)arg4;
- (NSArray *)messagesBySession:(TBAMPSession *)arg1 currentMessage:(TBAMPMessage *)arg2 count:(unsigned long long)arg3 isFront:(_Bool)arg4;
- (void)deleteMessages:(NSArray *)arg1;
- (void)saveMessages:(NSArray *)arg1;
- (TBAMPMessage *)messageWithMessageCodeWaitSave:(NSString *)arg1;
- (NSArray *)messagesBySession:(TBAMPSession *)arg1 lastMessage:(TBAMPMessage *)arg2 date:(NSDate *)arg3;
- (NSArray *)messagesBySession:(TBAMPSession *)arg1 lastMessage:(TBAMPMessage *)arg2 count:(unsigned long long)arg3;
- (void)deleteMessagesWithSessionID:(NSString *)arg1;
- (void)deleteSessionsWithId:(NSArray *)arg1;
- (void)saveSessions:(NSArray *)arg1;
- (_Bool)isSessionExist:(NSString *)arg1;
- (NSArray *)sessionByIdList:(NSArray *)arg1;
- (TBAMPSession *)sessionById:(NSString *)arg1;
- (NSArray *)allSessions;
- (void)reset;
- (void)initOperator;
@end

