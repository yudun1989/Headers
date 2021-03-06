//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSDictionary, NSMutableArray, NSString;

@protocol ShareItemDelegate <NSObject>
- (void)sendShareItem:(NSMutableArray *)arg1;

@optional
- (NSString *)pageTitle;
- (void)trackUserSelectItemAtTabIndex:(int)arg1;
- (void)trackUserCancelItemAtTabIndex:(int)arg1;
- (void)searchIMShareGoodsWithArgs:(NSDictionary *)arg1 keyword:(NSString *)arg2 complete:(void (^)(id <AMPError>, NSMutableArray *, NSString *, NSString *, _Bool))arg3;
- (void)getIMShareGoodsAtTabIndex:(int)arg1 WithPageStart:(NSString *)arg2 otherData:(NSString *)arg3 args:(NSDictionary *)arg4 complete:(void (^)(id <AMPError>, NSMutableArray *, NSString *, NSString *, _Bool))arg5;
- (void)getIMShareGoodsAtTabIndex:(int)arg1 WithPageStart:(NSString *)arg2 otherData:(NSString *)arg3 complete:(void (^)(id <AMPError>, NSMutableArray *, NSString *, NSString *, _Bool))arg4;
- (_Bool)needCustomizeAtIndex:(int)arg1;
- (_Bool)needSearch;
- (NSDictionary *)getParameters;
- (NSArray *)getShareItem;
- (int)maxCountForShare;
@end

