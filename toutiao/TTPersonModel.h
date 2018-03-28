//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSCoding-Protocol.h"

@class NSArray, NSString;

@interface TTPersonModel : NSObject <NSCoding>
{
    _Bool _isFollowing;
    _Bool _isFollowed;
    _Bool _isBlocking;
    _Bool _isBlocked;
    int _reasonType;
    NSString *_userID;
    NSString *_name;
    NSString *_screenName;
    NSString *_avatarURLString;
    NSString *_userDescription;
    NSString *_userIntro;
    NSString *_userAuthInfo;
    NSString *_verfiedAgency;
    NSString *_verfiedContent;
    NSString *_gender;
    long long _pgcLikeCount;
    long long _followingCount;
    long long _followerCount;
    NSString *_recommendReason;
    NSString *_mobileHash;
    NSString *_phoneNumberString;
    long long _postCount;
    long long _replyCount;
    long long _forumCount;
    long long _roleDisplayType;
    NSString *_roleName;
    NSArray *_userRoles;
    NSArray *_userRoleIcons;
    NSArray *_medals;
}

+ (id)genUserStructModelFrom:(id)arg1;
+ (id)genUserModelFromTTPersonModel:(id)arg1;
+ (id)genTTPersonModelFromUserModel:(id)arg1;
+ (id)genMyUserModelFromTTPersonModel:(id)arg1;
+ (id)genTTPersonModelFromMyUserModel:(id)arg1;
+ (id)genPersonModelsFromUserStruct:(id)arg1;
@property(copy, nonatomic) NSArray *medals; // @synthesize medals=_medals;
@property(copy, nonatomic) NSArray *userRoleIcons; // @synthesize userRoleIcons=_userRoleIcons;
@property(copy, nonatomic) NSArray *userRoles; // @synthesize userRoles=_userRoles;
@property(copy, nonatomic) NSString *roleName; // @synthesize roleName=_roleName;
@property(nonatomic) long long roleDisplayType; // @synthesize roleDisplayType=_roleDisplayType;
@property(nonatomic) long long forumCount; // @synthesize forumCount=_forumCount;
@property(nonatomic) long long replyCount; // @synthesize replyCount=_replyCount;
@property(nonatomic) long long postCount; // @synthesize postCount=_postCount;
@property(copy, nonatomic) NSString *phoneNumberString; // @synthesize phoneNumberString=_phoneNumberString;
@property(copy, nonatomic) NSString *mobileHash; // @synthesize mobileHash=_mobileHash;
@property(copy, nonatomic) NSString *recommendReason; // @synthesize recommendReason=_recommendReason;
@property(nonatomic) int reasonType; // @synthesize reasonType=_reasonType;
@property(nonatomic) _Bool isBlocked; // @synthesize isBlocked=_isBlocked;
@property(nonatomic) _Bool isBlocking; // @synthesize isBlocking=_isBlocking;
@property(nonatomic) long long followerCount; // @synthesize followerCount=_followerCount;
@property(nonatomic) _Bool isFollowed; // @synthesize isFollowed=_isFollowed;
@property(nonatomic) long long followingCount; // @synthesize followingCount=_followingCount;
@property(nonatomic) _Bool isFollowing; // @synthesize isFollowing=_isFollowing;
@property(nonatomic) long long pgcLikeCount; // @synthesize pgcLikeCount=_pgcLikeCount;
@property(copy, nonatomic) NSString *gender; // @synthesize gender=_gender;
@property(copy, nonatomic) NSString *verfiedContent; // @synthesize verfiedContent=_verfiedContent;
@property(copy, nonatomic) NSString *verfiedAgency; // @synthesize verfiedAgency=_verfiedAgency;
@property(copy, nonatomic) NSString *userAuthInfo; // @synthesize userAuthInfo=_userAuthInfo;
@property(copy, nonatomic) NSString *userIntro; // @synthesize userIntro=_userIntro;
@property(copy, nonatomic) NSString *userDescription; // @synthesize userDescription=_userDescription;
@property(copy, nonatomic) NSString *avatarURLString; // @synthesize avatarURLString=_avatarURLString;
@property(copy, nonatomic) NSString *screenName; // @synthesize screenName=_screenName;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSString *userID; // @synthesize userID=_userID;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)updateWithDictionary:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithUserStructModel:(id)arg1;
- (id)initWithMessageListUserModel:(id)arg1;
- (id)initWithUserModel:(id)arg1;
- (id)initWithDefault;

@end

