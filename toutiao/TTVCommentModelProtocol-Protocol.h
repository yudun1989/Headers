//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class ExploreForumModel, NSArray, NSDictionary, NSNumber, NSString, TTGroupModel, TTQuotedCommentStructModel;

@protocol TTVCommentModelProtocol <NSObject>
@property(nonatomic) _Bool isBlocked;
@property(nonatomic) _Bool isBlocking;
@property(nonatomic) _Bool userBuried;
@property(nonatomic) _Bool userDigged;
@property(retain, nonatomic) NSNumber *buryCount;
@property(retain, nonatomic) NSNumber *replyCount;
@property(retain, nonatomic) NSNumber *digCount;
@property(readonly, nonatomic) ExploreForumModel *forumModel;
@property(retain, nonatomic) TTGroupModel *groupModel;
@property(readonly, copy, nonatomic) NSArray *authorBadgeList;
@property(readonly, copy, nonatomic) NSArray *replyList;
@property(readonly, copy, nonatomic) NSString *mediaId;
@property(readonly, copy, nonatomic) NSString *mediaName;
@property(readonly, copy, nonatomic) NSString *openURL;
@property(readonly, copy, nonatomic) NSString *userAuthInfo;
@property(readonly, copy, nonatomic) NSString *accessoryInfo;
@property(readonly, copy, nonatomic) NSString *userSignature;
@property(readonly, copy, nonatomic) NSString *userPlatform;
@property(readonly, copy, nonatomic) NSString *userProfileURL;
@property(readonly, copy, nonatomic) NSString *userAvatarURL;
@property(readonly, copy, nonatomic) NSString *fromSite;
@property(readonly, copy, nonatomic) NSString *commentContentRichSpanJSONString;
@property(readonly, copy, nonatomic) NSString *commentContent;
@property(readonly, copy, nonatomic) NSString *userName;
@property(readonly, copy, nonatomic) NSString *userDecoration;
@property(readonly, nonatomic) NSNumber *userID;
@property(readonly, nonatomic) NSNumber *commentCreateTime;
@property(readonly, nonatomic) NSString *commentID;
@property(readonly, nonatomic) NSNumber *commentIDNum;
@property(readonly, nonatomic) _Bool isPGCAuthor;
- (_Bool)hasReply;
- (_Bool)isAvailable;
- (id)initWithDictionary:(NSDictionary *)arg1 groupModel:(TTGroupModel *)arg2;

@optional
@property(readonly, nonatomic) _Bool isStick;
@property(readonly, nonatomic) _Bool isOwner;
@property(readonly, nonatomic) _Bool isFollowed;
@property(nonatomic) _Bool isFollowing;
@property(readonly, nonatomic) NSNumber *userRelation;
@property(readonly, copy, nonatomic) NSString *verifiedInfo;
@property(readonly, nonatomic) TTQuotedCommentStructModel *quotedComment;
- (NSString *)userInfoStr;
- (NSString *)userRelationStr;
@end

