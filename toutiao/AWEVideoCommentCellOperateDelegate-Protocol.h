//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class AWECommentModel, AWEVideoCommentCell;

@protocol AWEVideoCommentCellOperateDelegate <NSObject>
- (void)commentCell:(AWEVideoCommentCell *)arg1 didClickUserNameWithModel:(AWECommentModel *)arg2;
- (void)commentCell:(AWEVideoCommentCell *)arg1 didClickUserWithModel:(AWECommentModel *)arg2;
- (void)commentCell:(AWEVideoCommentCell *)arg1 didClickLikeWithModel:(AWECommentModel *)arg2;
- (void)commentCell:(AWEVideoCommentCell *)arg1 didClickReportWithModel:(AWECommentModel *)arg2;
- (void)commentCell:(AWEVideoCommentCell *)arg1 didClickDeleteWithModel:(AWECommentModel *)arg2;
@end

