//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class MCSelectItemSelectModel, NSArray, NSError;
@protocol MCShareItemObject;

@protocol MCSelectItemSelectModelDelegate <NSObject>
- (void)shareItemModel:(MCSelectItemSelectModel *)arg1 loadFailAtTabIndex:(unsigned long long)arg2 withError:(NSError *)arg3;
- (void)shareItemModel:(MCSelectItemSelectModel *)arg1 loadFinishAtTabIndex:(unsigned long long)arg2 withData:(NSArray<MCShareItemObject> *)arg3;
@end

