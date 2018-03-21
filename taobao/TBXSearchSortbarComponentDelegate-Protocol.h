//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSDictionary, NSString, TBXSearchSortbarSortModel;

@protocol TBXSearchSortbarComponentDelegate <NSObject>
- (void)passiveCloseSortbarFloatingLayer:(long long)arg1 withIndex:(int)arg2;
- (void)closeSortbarFloatingLayer:(long long)arg1 withIndex:(int)arg2;
- (void)openSortbarFloatingLayer:(long long)arg1 withIndex:(int)arg2;

@optional
- (void)filterValue:(NSString *)arg1 forKey:(NSString *)arg2 andExtData:(NSDictionary *)arg3;
- (void)turnStyle:(int)arg1;
- (void)sortbarForSearchBySortModel:(TBXSearchSortbarSortModel *)arg1;
- (float)getSortbarBottomContentHeight;
@end

