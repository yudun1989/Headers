//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AliDetailInputViewModel.h"

@class AliDetailApiUnit, NSArray;
@protocol AliDetailTreeBranchModel;

@interface AliDetailTreeModel : AliDetailInputViewModel
{
    _Bool _sync;
    AliDetailApiUnit *_api;
    NSArray<AliDetailTreeBranchModel> *_branches;
}

@property(retain, nonatomic) NSArray<AliDetailTreeBranchModel> *branches; // @synthesize branches=_branches;
@property(nonatomic) _Bool sync; // @synthesize sync=_sync;
@property(retain, nonatomic) AliDetailApiUnit *api; // @synthesize api=_api;
- (void).cxx_destruct;

@end

