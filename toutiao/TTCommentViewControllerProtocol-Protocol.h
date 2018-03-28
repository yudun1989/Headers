//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSDictionary, NSIndexPath, NSString, SSThemedTableView;
@protocol TTCommentDataSource, TTCommentModelProtocol, TTCommentViewControllerDelegate;

@protocol TTCommentViewControllerProtocol <NSObject>
@property(retain, nonatomic) NSString *serviceID;
@property(readonly, nonatomic) SSThemedTableView *commentTableView;
@property(nonatomic) _Bool hasSelfShown;
@property(copy, nonatomic) NSDictionary *commentTrackDictionary;
@property(nonatomic) _Bool enableImpressionRecording;
@property(nonatomic) __weak id <TTCommentViewControllerDelegate> delegate;
- (void)tt_sendHalfStatusFooterImpressionsForViableCellsWithOffset:(double)arg1;
- (void)tt_sendShowTrackForVisibleCells;
- (void)tt_sendShowStatusTrackForCommentShown:(_Bool)arg1;
- (void)tt_insertCommentWithDict:(NSDictionary *)arg1;
- (id)initWithViewFrame:(struct CGRect)arg1 dataSource:(id <TTCommentDataSource>)arg2 delegate:(id <TTCommentViewControllerDelegate>)arg3;

@optional
- (void)tt_trackCommentListImpression:(_Bool)arg1;
- (void)tt_updateCommentCellLayoutAtIndexPath:(NSIndexPath *)arg1 replyCount:(long long)arg2;
- (void)tt_updateConstraintWidth:(double)arg1;
- (void)tt_commentTableViewScrollToTop;
- (void)tt_markStickyCellNeedsAnimation;
- (NSString *)tt_writeCommentViewPlaceholder;
- (_Bool)tt_banEmojiInput;
- (void)tt_clearDefaultReplyCommentModel;
- (id <TTCommentModelProtocol>)tt_defaultReplyCommentModel;
- (void)tt_reloadData;
- (void)tt_sendCommentWithContent:(NSString *)arg1 replyCommentID:(NSString *)arg2 replyUserID:(NSString *)arg3 finishBlock:(void (^)(NSError *))arg4;
@end

