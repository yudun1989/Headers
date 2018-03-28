//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TTFeedMultiDeleteViewModel.h"

@class NSArray, NSMutableSet;

@interface TTFeedHistoryViewModel : TTFeedMultiDeleteViewModel
{
    NSMutableSet *_deletingGroups;
    unsigned long long _historyType;
}

@property(nonatomic) unsigned long long historyType; // @synthesize historyType=_historyType;
@property(retain, nonatomic) NSMutableSet *deletingGroups; // @synthesize deletingGroups=_deletingGroups;
- (void).cxx_destruct;
- (void)deleteItem:(id)arg1;
- (id)headerTextForGroup:(id)arg1;
- (id)generateParamsClearAll:(_Bool)arg1 historyType:(unsigned long long)arg2;
- (void)deleteItemsClearAll:(_Bool)arg1 historyType:(unsigned long long)arg2 finishBlock:(CDUnknownBlockType)arg3;
- (id)initWithDelegate:(id)arg1;

// Remaining properties
@property(copy, nonatomic) NSArray *allItems;

@end

