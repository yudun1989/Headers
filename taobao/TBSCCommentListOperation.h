//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "TBSCBasicServiceDelegate-Protocol.h"

@class NSString, TBSCCommentService, TBSCPagedList, TBSCSocialParam;

@interface TBSCCommentListOperation : NSObject <TBSCBasicServiceDelegate>
{
    int _userType;
    int _commentAction;
    TBSCCommentService *_commentListService;
    TBSCPagedList *_pagedList;
    CDUnknownBlockType _finishCallBack;
    unsigned long long _userId;
    TBSCSocialParam *_socialParam;
    unsigned long long _commentId;
    CDUnknownBlockType _resultBlock;
}

@property(nonatomic) int commentAction; // @synthesize commentAction=_commentAction;
@property(copy, nonatomic) CDUnknownBlockType resultBlock; // @synthesize resultBlock=_resultBlock;
@property(nonatomic) int userType; // @synthesize userType=_userType;
@property(nonatomic) unsigned long long commentId; // @synthesize commentId=_commentId;
@property(retain, nonatomic) TBSCSocialParam *socialParam; // @synthesize socialParam=_socialParam;
@property(nonatomic) unsigned long long userId; // @synthesize userId=_userId;
@property(copy, nonatomic) CDUnknownBlockType finishCallBack; // @synthesize finishCallBack=_finishCallBack;
@property(retain, nonatomic) TBSCPagedList *pagedList; // @synthesize pagedList=_pagedList;
@property(retain, nonatomic) TBSCCommentService *commentListService; // @synthesize commentListService=_commentListService;
- (void).cxx_destruct;
- (void)service:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)serviceDidFinishLoad:(id)arg1;
- (long long)cellNum;
- (void)initCommentItem;
- (void)refresh;
- (void)nextPage;
- (void)loadData;
- (void)doCommentInstantBanWithParam:(id)arg1 CommentId:(unsigned long long)arg2 blackTime:(int)arg3 onResult:(CDUnknownBlockType)arg4;
- (void)doCommentPullBalckAndAddSampleWithParam:(id)arg1 CommentId:(unsigned long long)arg2 onResult:(CDUnknownBlockType)arg3;
- (void)doCommentPullBalckWithParam:(id)arg1 CommentId:(unsigned long long)arg2 onResult:(CDUnknownBlockType)arg3;
- (void)doCommentReportWithParam:(id)arg1 CommentId:(unsigned long long)arg2 onResult:(CDUnknownBlockType)arg3;
- (void)doCommentRemoveWithParam:(id)arg1 CommentId:(unsigned long long)arg2 userType:(int)arg3 onResult:(CDUnknownBlockType)arg4;
- (void)onNewCommentSucceed:(id)arg1;
- (void)initUserId;
- (id)initWithSocialParam:(id)arg1 finishCallBack:(CDUnknownBlockType)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

