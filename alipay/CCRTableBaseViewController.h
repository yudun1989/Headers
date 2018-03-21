//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CCRBaseViewController.h"

@class NSArray;

@interface CCRTableBaseViewController : CCRBaseViewController
{
    NSArray *_layoutControlArray;
}

@property(retain, nonatomic) NSArray *layoutControlArray; // @synthesize layoutControlArray=_layoutControlArray;
- (void).cxx_destruct;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)newCellObjectWithSEL:(SEL)arg1 cellIndex:(int)arg2 otherParam:(id)arg3;
- (id)cellObjectWithSEL:(SEL)arg1 CellIndex:(int)arg2 OtherParam:(id)arg3;
- (id)tableViewBaseCellWithTitle:(id)arg1 Info:(id)arg2 AccessoryType:(long long)arg3;
- (id)cellObjectAtIndexPath:(id)arg1;
- (id)findOldCellObject:(int)arg1;
- (void)didReceiveMemoryWarning;
- (void)layoutWillChange;
- (void)viewDidLoad;
- (id)init;

@end

