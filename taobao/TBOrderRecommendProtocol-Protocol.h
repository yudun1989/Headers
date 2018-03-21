//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSIndexPath, NSString, TBOrderStorageComponent, UITableView, UITableViewCell;

@protocol TBOrderRecommendProtocol <NSObject>

@optional
- (void)customCellDidSelected:(NSIndexPath *)arg1;
- (UITableViewCell *)customCell:(UITableView *)arg1 indexPath:(NSIndexPath *)arg2;
- (double)customCellHeight:(NSIndexPath *)arg1;
- (long long)customCellNumberOfRowsInSection:(long long)arg1;
- (long long)customCellNumberOfSections;
- (void)showRecommendWithOrderId:(NSString *)arg1 storage:(TBOrderStorageComponent *)arg2 finishBlock:(void (^)(NSMutableArray *, long long, _Bool))arg3;
- (_Bool)orangeSwitchRecommend;
@end

