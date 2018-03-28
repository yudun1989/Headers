//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "Action.h"

@class Article, NSDictionary, TTCommentDetailModel, TTCommentDetailReplyCommentModel;
@protocol TTCommentModelProtocol;

@interface TTMomentDetailAction : Action
{
    unsigned long long _type;
    unsigned long long _source;
    unsigned long long _from;
    id <TTCommentModelProtocol> _commentModel;
    TTCommentDetailModel *_commentDetailModel;
    TTCommentDetailReplyCommentModel *_replyCommentModel;
    Article *_group;
    NSDictionary *_payload;
}

+ (id)digActionWithCommentDetailModel:(id)arg1;
+ (id)digActionWithReplyCommentModel:(id)arg1;
+ (id)enterProfileActionWithUserID:(id)arg1;
+ (id)actionWithType:(unsigned long long)arg1 comment:(id)arg2;
+ (id)actionWithType:(unsigned long long)arg1 payload:(id)arg2;
@property(retain, nonatomic) NSDictionary *payload; // @synthesize payload=_payload;
@property(retain, nonatomic) Article *group; // @synthesize group=_group;
@property(retain, nonatomic) TTCommentDetailReplyCommentModel *replyCommentModel; // @synthesize replyCommentModel=_replyCommentModel;
@property(retain, nonatomic) TTCommentDetailModel *commentDetailModel; // @synthesize commentDetailModel=_commentDetailModel;
@property(retain, nonatomic) id <TTCommentModelProtocol> commentModel; // @synthesize commentModel=_commentModel;
@property(nonatomic) unsigned long long from; // @synthesize from=_from;
@property(nonatomic) unsigned long long source; // @synthesize source=_source;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (id)init;

@end
