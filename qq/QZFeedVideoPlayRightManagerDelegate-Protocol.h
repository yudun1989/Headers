//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/NSObject-Protocol.h>

@class NSArray, QZFeedVideoView, UITableViewCell;

@protocol QZFeedVideoPlayRightManagerDelegate <NSObject>
- (NSArray *)getFeedVideoViewsInCell:(UITableViewCell *)arg1;

@optional
- (_Bool)needAsyncaSnapImgWhenDisappear:(QZFeedVideoView *)arg1;
- (void)checkVideoIllegal:(UITableViewCell *)arg1;
- (void)currentFocusFeedCellChange:(UITableViewCell *)arg1;
- (void)feedCell:(UITableViewCell *)arg1 playRightChangeTo:(_Bool)arg2;
@end
