//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSMutableArray;
@protocol TBTradeRecmdItemModel;

@protocol TBTradeRecmdCellModel <NSObject>
- (id)initWithChildModels:(NSMutableArray<TBTradeRecmdItemModel> *)arg1;
- (void)setMaxCountOfItemModels:(unsigned long long)arg1;
- (unsigned long long)maxCountOfItemModels;
- (NSMutableArray *)childItemModels;
@end

