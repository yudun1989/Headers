//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class WAMainFrameTaskBarView, WAMainFrameTaskItem;

@protocol WAMainFrameTaskBarViewDelegate <NSObject>

@optional
- (void)taskBarViewDidSelectMore:(WAMainFrameTaskBarView *)arg1;
- (void)taskBarView:(WAMainFrameTaskBarView *)arg1 didSelectTaskItem:(WAMainFrameTaskItem *)arg2;
- (void)taskBarViewDidEndDragging:(WAMainFrameTaskBarView *)arg1;
@end

