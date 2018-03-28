//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSCoding-Protocol.h"

@class NSArray, NSString, WDRedPackStructModel;

@interface WDPersonModel : NSObject <NSCoding>
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
    NSString *_userIntro;
    NSString *_userAuthInfo;
    NSString *_userDecoration;
    NSString *_userSchema;
    NSString *_verfiedAgency;
    NSString *_verfiedContent;
    NSString *_gender;
    long long _pgcLikeCount;
    long long _followingCount;
    long long _followerCount;
    long long _totalAnswerCount;
    long long _totalDiggCount;
    NSString *_recommendReason;
    NSString *_mobileHash;
    NSString *_phoneNumberString;
    long long _postCount;
    long long _replyCount;
    NSArray *_medals;
    long long _inviteStatus;
    WDRedPackStructModel *_redPack;
}

+ (id)genWDPersonModelFromWDUserModel:(id)arg1;
+ (id)genWDPersonModelFromDictionary:(id)arg1;
+ (id)userMap;
+ (id)genWDPersonModelFromWDFeedUserModel:(id)arg1;
@property(retain, nonatomic) WDRedPackStructModel *redPack; // @synthesize redPack=_redPack;
@property(nonatomic) long long inviteStatus; // @synthesize inviteStatus=_inviteStatus;
@property(copy, nonatomic) NSArray *medals; // @synthesize medals=_medals;
@property(nonatomic) long long replyCount; // @synthesize replyCount=_replyCount;
@property(nonatomic) long long postCount; // @synthesize postCount=_postCount;
@property(copy, nonatomic) NSString *phoneNumberString; // @synthesize phoneNumberString=_phoneNumberString;
@property(copy, nonatomic) NSString *mobileHash; // @synthesize mobileHash=_mobileHash;
@property(copy, nonatomic) NSString *recommendReason; // @synthesize recommendReason=_recommendReason;
@property(nonatomic) int reasonType; // @synthesize reasonType=_reasonType;
@property(nonatomic) _Bool isBlocked; // @synthesize isBlocked=_isBlocked;
@property(nonatomic) _Bool isBlocking; // @synthesize isBlocking=_isBlocking;
@property(nonatomic) long long totalDiggCount; // @synthesize totalDiggCount=_totalDiggCount;
@property(nonatomic) long long totalAnswerCount; // @synthesize totalAnswerCount=_totalAnswerCount;
@property(nonatomic) long long followerCount; // @synthesize followerCount=_followerCount;
@property(nonatomic) _Bool isFollowed; // @synthesize isFollowed=_isFollowed;
@property(nonatomic) long long followingCount; // @synthesize followingCount=_followingCount;
@property(nonatomic) _Bool isFollowing; // @synthesize isFollowing=_isFollowing;
@property(nonatomic) long long pgcLikeCount; // @synthesize pgcLikeCount=_pgcLikeCount;
@property(copy, nonatomic) NSString *gender; // @synthesize gender=_gender;
@property(copy, nonatomic) NSString *verfiedContent; // @synthesize verfiedContent=_verfiedContent;
@property(copy, nonatomic) NSString *verfiedAgency; // @synthesize verfiedAgency=_verfiedAgency;
@property(copy, nonatomic) NSString *userSchema; // @synthesize userSchema=_userSchema;
@property(copy, nonatomic) NSString *userDecoration; // @synthesize userDecoration=_userDecoration;
@property(copy, nonatomic) NSString *userAuthInfo; // @synthesize userAuthInfo=_userAuthInfo;
@property(copy, nonatomic) NSString *userIntro; // @synthesize userIntro=_userIntro;
@property(copy, nonatomic) NSString *avatarURLString; // @synthesize avatarURLString=_avatarURLString;
@property(copy, nonatomic) NSString *screenName; // @synthesize screenName=_screenName;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSString *userID; // @synthesize userID=_userID;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)updatePersonWithWDUserModel:(id)arg1;
- (id)initWithStructModel:(id)arg1;
- (void)updateWithDictionary:(id)arg1;
- (id)initWithDictionary:(id)arg1;

@end

