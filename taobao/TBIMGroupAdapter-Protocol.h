//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSDate, NSDictionary, NSNumber, NSString, NSURL, UIImage;
@protocol TBIMGroupAdapter, TBIMGroupUserAdapter;

@protocol TBIMGroupAdapter <NSObject>
@property(nonatomic) unsigned long long changeFlag;
- (NSDictionary *)groupAttibutes;
- (NSArray *)linkGroups;
- (NSString *)subIndex;
- (NSString *)groupNoticeModifyUserId;
- (NSDate *)groupNoticeModifyTime;
- (NSDictionary *)ext;
- (NSString *)checkType;
- (_Bool)isPublic;
- (NSNumber *)bizSubId;
- (NSString *)bizSubType;
- (NSNumber *)bizId;
- (NSString *)url;
- (NSArray *)groupUserIdList;
- (NSArray *)groupUserList;
- (id <TBIMGroupUserAdapter>)groupUserByTaobaoId:(NSString *)arg1;
- (id <TBIMGroupUserAdapter>)getGroupOwner;
- (id <TBIMGroupUserAdapter>)getSelf;
- (_Bool)isEqual:(id <TBIMGroupAdapter>)arg1;
- (UIImage *)getHeadPicImage;
- (NSString *)groupHeadPic;
- (NSURL *)getHeadURL;
- (unsigned long long)groupBizType;
- (_Bool)hasBeenDissolved;
- (_Bool)isInGroup;
- (_Bool)isOwner;
- (unsigned long long)groupUserNum;
- (unsigned long long)groupType;
- (unsigned long long)checkinTypeList;
- (NSString *)groupNotice;
- (NSString *)groupId;
- (NSString *)groupDynamicName;
- (NSString *)groupName;
@end

