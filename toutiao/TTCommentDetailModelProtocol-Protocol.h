//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSNumber, NSString, TTGroupModel;

@protocol TTCommentDetailModelProtocol <NSObject>
@property(readonly, nonatomic) NSString *qutoedCommentModel_commentContentRichSpan;
@property(readonly, nonatomic) NSString *qutoedCommentModel_commentContent;
@property(readonly, nonatomic) NSString *qutoedCommentModel_userID;
@property(readonly, nonatomic) NSString *qutoedCommentModel_userName;
@property(readonly, nonatomic) NSString *contentRichSpanJSONString;
@property(readonly, nonatomic) NSString *content;
@property(readonly, nonatomic) NSString *userName;
@property(readonly, nonatomic) NSString *userIDStr;
@property(readonly, nonatomic) NSString *commentPlaceholder;
@property(readonly, nonatomic) _Bool banEmojiInput;
@property(readonly, nonatomic) NSString *commentID;
@property(readonly, nonatomic) TTGroupModel *groupModel;

@optional
- (NSNumber *)banForwardToWeitoutiao;
@end
