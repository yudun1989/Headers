//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class APExceptionView, NSArray, NSString, UITableView;

@interface O2OPGoodsListViewController : UIViewController <UITableViewDelegate, UITableViewDataSource>
{
    NSString *_type;
    NSArray *_goodsList;
    UITableView *_tableView;
    APExceptionView *_exceptionView;
}

@property(retain, nonatomic) APExceptionView *exceptionView; // @synthesize exceptionView=_exceptionView;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(copy, nonatomic) NSArray *goodsList; // @synthesize goodsList=_goodsList;
@property(copy, nonatomic) NSString *type; // @synthesize type=_type;
- (void).cxx_destruct;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

