//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/NSObject-Protocol.h>

@class QQStorySelfCell, QQStorySelfDisplayModel;

@protocol QQStoryUserCellDelegate <NSObject>
- (void)onActionTapShareStorySelfCell:(QQStorySelfDisplayModel *)arg1;
- (void)onActionTapDownloadStorySelfCell:(QQStorySelfCell *)arg1;
- (void)onActionTapExpandStorySelfCell:(QQStorySelfCell *)arg1;
- (void)onActionTapSelfHeader;
@end

