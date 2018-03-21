//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "VZListViewDataSource.h"

@class NSArray, NSIndexPath;

@interface O2OSearchResultViewDataDelegate : VZListViewDataSource
{
    long long _realTimeRowNumber;
    NSIndexPath *_maxIndexPath;
    NSArray *_sections;
}

@property(copy, nonatomic) NSArray *sections; // @synthesize sections=_sections;
@property(retain, nonatomic) NSIndexPath *maxIndexPath; // @synthesize maxIndexPath=_maxIndexPath;
@property(nonatomic) long long realTimeRowNumber; // @synthesize realTimeRowNumber=_realTimeRowNumber;
- (void).cxx_destruct;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (Class)cellClassForItem:(id)arg1 AtIndex:(id)arg2;
- (void)calculateRealTimeRowNumber;
- (void)updateFromKeyModel;
- (void)tableViewControllerDidLoadModel:(id)arg1;
- (id)sectionItemForIndex:(long long)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)init;

@end

