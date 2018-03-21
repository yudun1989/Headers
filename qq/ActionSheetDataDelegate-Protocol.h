//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/NSObject-Protocol.h>

@class DataForActionSheetConfig, DataForActionSheetShareItem, NSArray, QQWebShareActionSheet;

@protocol ActionSheetDataDelegate <NSObject>
- (DataForActionSheetShareItem *)getDataForShareItem:(QQWebShareActionSheet *)arg1 onThisItem:(int)arg2;
- (DataForActionSheetConfig *)getDataForConfig:(QQWebShareActionSheet *)arg1;

@optional
- (NSArray *)getQQActivityViewTitles;
- (void)actionSheetClickedAtIndex:(int)arg1 sender:(QQWebShareActionSheet *)arg2;
- (void)dismissCompleted;
@end

