//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSIndexPath, NSString, UITableView, WDBaseCellView;

@protocol WDBaseCellDelegate <NSObject>

@optional
+ (Class)cellViewClass;
+ (double)heightForData:(id)arg1 cellWidth:(double)arg2 listType:(long long)arg3;
@property(retain, nonatomic) NSIndexPath *indexPath;
@property(nonatomic) __weak UITableView *tableView;
@property(retain, nonatomic) WDBaseCellView *cellView;
- (double)paddingForCellView;
- (double)paddingTopBottomForCellView;
- (void)didSelected:(id)arg1 apiParam:(NSString *)arg2;
- (void)didAppear;
- (void)didDisappear;
- (void)willDisappear;
- (void)willAppear;
- (void)willDisplay;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (id)cellData;
- (void)refreshWithData:(id)arg1;
- (void)refreshUI;
@end

