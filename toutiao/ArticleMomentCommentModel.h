//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SSBaseModel.h"

#import "NSCoding-Protocol.h"

@class NSString, SSUserModel, TTQutoedCommentModel;

@interface ArticleMomentCommentModel : SSBaseModel <NSCoding>
{
    _Bool _userDigged;
    _Bool _isPgcAuthor;
    _Bool _isOwner;
    _Bool _isLocal;
    int _diggCount;
    double _createTime;
    NSString *_content;
    NSString *_replyID;
    SSUserModel *_replyUser;
    SSUserModel *_user;
    TTQutoedCommentModel *_qutoedComment;
    double _height;
    double _descHeight;
}

+ (id)commentsWithArray:(id)arg1;
@property(nonatomic) double descHeight; // @synthesize descHeight=_descHeight;
@property(nonatomic) double height; // @synthesize height=_height;
@property(nonatomic) _Bool isLocal; // @synthesize isLocal=_isLocal;
@property(retain, nonatomic) TTQutoedCommentModel *qutoedComment; // @synthesize qutoedComment=_qutoedComment;
@property(nonatomic) _Bool isOwner; // @synthesize isOwner=_isOwner;
@property(nonatomic) _Bool isPgcAuthor; // @synthesize isPgcAuthor=_isPgcAuthor;
@property(nonatomic) _Bool userDigged; // @synthesize userDigged=_userDigged;
@property(nonatomic) int diggCount; // @synthesize diggCount=_diggCount;
@property(retain, nonatomic) SSUserModel *user; // @synthesize user=_user;
@property(retain, nonatomic) SSUserModel *replyUser; // @synthesize replyUser=_replyUser;
@property(retain, nonatomic) NSString *replyID; // @synthesize replyID=_replyID;
@property(retain, nonatomic) NSString *content; // @synthesize content=_content;
@property(nonatomic) double createTime; // @synthesize createTime=_createTime;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (id)toDict;
- (id)initWithDictionary:(id)arg1;
- (void)dealloc;

@end

