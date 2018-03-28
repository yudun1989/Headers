//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class AWEActionSheetModel, NSMutableArray, NSString;

@interface AWEVideoCommentDataManager : NSObject
{
    _Bool _hasMore;
    _Bool _isLoadingComments;
    _Bool _isSendingComments;
    AWEActionSheetModel *_reportModel;
    NSString *_criticismInput;
    long long _totalCount;
    NSMutableArray *_commentArray;
}

@property(retain, nonatomic) NSMutableArray *commentArray; // @synthesize commentArray=_commentArray;
@property(nonatomic) _Bool isSendingComments; // @synthesize isSendingComments=_isSendingComments;
@property(nonatomic) _Bool isLoadingComments; // @synthesize isLoadingComments=_isLoadingComments;
@property(nonatomic) long long totalCount; // @synthesize totalCount=_totalCount;
@property(nonatomic) _Bool hasMore; // @synthesize hasMore=_hasMore;
@property(retain, nonatomic) NSString *criticismInput; // @synthesize criticismInput=_criticismInput;
@property(retain, nonatomic) AWEActionSheetModel *reportModel; // @synthesize reportModel=_reportModel;
- (void).cxx_destruct;
- (void)reportCommentWithType:(id)arg1 userInputText:(id)arg2 userID:(id)arg3 commentID:(id)arg4 momentID:(id)arg5 groupID:(id)arg6 postID:(id)arg7 completion:(CDUnknownBlockType)arg8;
- (void)diggCommentItemWithCommentId:(id)arg1 itemID:(id)arg2 groupID:(id)arg3 userID:(id)arg4 cancelDigg:(_Bool)arg5 completion:(CDUnknownBlockType)arg6;
- (void)requestCommentListWithID:(id)arg1 groupID:(id)arg2 count:(id)arg3 offset:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)deleteCommentItemWithId:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)commentAwemeItemWithID:(id)arg1 groupID:(id)arg2 content:(id)arg3 replyCommentID:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)commentAwemeItemWithID:(id)arg1 groupID:(id)arg2 content:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (long long)currentCommentCount;
- (long long)totalCommentCount;
- (_Bool)isEmpty;
- (id)commentForIndexPath:(id)arg1;
- (void)addActionSheetMode:(id)arg1;
- (_Bool)canLoadMore;
- (id)init;

@end

