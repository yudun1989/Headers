//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class ArticleMomentCommentModel, ExploreMomentListCellCommentListItemView;

@protocol ExploreMomentListCellCommentListItemViewDelegate <NSObject>

@optional
- (void)momentCellCommentViewWriteCommentButtonClicked:(ExploreMomentListCellCommentListItemView *)arg1 rectInKeyWindow:(struct CGRect)arg2;
- (void)momentCellCommentViewShowMoreLabelClicked:(ExploreMomentListCellCommentListItemView *)arg1;
- (void)momentCellCommentView:(ExploreMomentListCellCommentListItemView *)arg1 commentButtonClicked:(ArticleMomentCommentModel *)arg2 rectInKeyWindow:(struct CGRect)arg3;
@end

