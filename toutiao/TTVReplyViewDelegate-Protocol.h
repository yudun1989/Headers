//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class TTVReplyView;

@protocol TTVReplyViewDelegate <NSObject>
- (void)replyView:(TTVReplyView *)arg1 loadMoreCellTrigger:(unsigned long long)arg2;
- (void)replyView:(TTVReplyView *)arg1 shareButtonPressed:(id)arg2;
- (void)replyView:(TTVReplyView *)arg1 userInfoDiggButtonClicked:(id)arg2;
- (void)replyView:(TTVReplyView *)arg1 commentButtonClicked:(id)arg2;
@end

