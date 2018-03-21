//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface APContactAPI : NSObject
{
}

+ (void)preloadMemberContactsForGroup:(id)arg1;
+ (void)queryChatRoomHot:(id)arg1 bizType:(id)arg2 callback:(CDUnknownBlockType)arg3;
+ (void)theAddressBookDidChange;
+ (void)addFriendsWithContactInfos:(id)arg1 source:(id)arg2 callback:(CDUnknownBlockType)arg3;
+ (void)deleteContactMessageWithUserID:(id)arg1;
+ (void)acceptFriendRequestWithUserId:(id)arg1 scene:(id)arg2;
+ (void)acceptFriendRequestWithUserId:(id)arg1;
+ (_Bool)acceptFriendRequestDefaultCheckValue;
+ (id)getFriendRequestSourceWithUserId:(id)arg1;
+ (_Bool)shouldShowAcceptFriendWithUserId:(id)arg1;
+ (void)ingoreFriendRequestInChat:(id)arg1;
+ (_Bool)userDidSendFriendRequest:(id)arg1;
+ (_Bool)userIsMyFriend:(id)arg1;
+ (void)currentUserHasFriend:(CDUnknownBlockType)arg1;
+ (void)insertOrUpdateAPContactInfo:(id)arg1;
+ (id)timeStringFromDate:(id)arg1;
+ (id)getTimeTextByDate:(id)arg1;
+ (id)chatTableNameWithUserId:(id)arg1 userType:(id)arg2;
+ (void)queryInfoForDict:(id)arg1 resultCallback:(CDUnknownBlockType)arg2;
+ (void)queryInfoForUserIDs:(id)arg1 accounts:(id)arg2 resultCallback:(CDUnknownBlockType)arg3;
+ (void)queryContactInfo:(id)arg1 account:(id)arg2 resultCallback:(CDUnknownBlockType)arg3;
+ (void)queryInfoForUserIDs:(id)arg1 callback:(CDUnknownBlockType)arg2;
+ (id)queryInfoForUserIDs:(id)arg1;
+ (id)queryRelatedContactWithUserID:(id)arg1;
+ (void)logAcceptFriendRequestWithUserId:(id)arg1 scene:(id)arg2;
+ (id)pickFromCombinedContactVCWithParamDict:(id)arg1 strangerCallback:(CDUnknownBlockType)arg2 selectCallback:(CDUnknownBlockType)arg3 backCallback:(CDUnknownBlockType)arg4;
+ (id)pickFromCombinedContactVCWithParamDict:(id)arg1 selectCallback:(CDUnknownBlockType)arg2 backCallback:(CDUnknownBlockType)arg3;
+ (id)pickFromCombinedContactVCWithDelegate:(id)arg1 paramDict:(id)arg2;
+ (id)sharedInstance;
+ (id)queryParametersOfUrl:(id)arg1;

@end

