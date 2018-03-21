//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBViewController.h"

#import "TBIMEmoticonPackCellDelegate-Protocol.h"
#import "TBIMEmoticonServiceDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSMutableArray, NSString, TBModelStatusHandler, UITableView;
@protocol TBIMEmoticonServiceAdapter;

@interface TBIMEmoticonSettingViewControl : TBViewController <UITableViewDataSource, UITableViewDelegate, TBIMEmoticonServiceDelegate, TBIMEmoticonPackCellDelegate>
{
    id <TBIMEmoticonServiceAdapter> _emoticonService;
    TBModelStatusHandler *_handler;
    UITableView *_tableView;
    NSMutableArray *_emoticonList;
}

@property(retain, nonatomic) NSMutableArray *emoticonList; // @synthesize emoticonList=_emoticonList;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
- (void).cxx_destruct;
- (id)handler;
- (void)addEmoticon;
- (void)showEmptyTip:(_Bool)arg1;
- (void)emoticonPackCellStatusClick:(id)arg1 status:(unsigned long long)arg2;
- (void)emoticonPackRemoved:(id)arg1;
- (void)emoticonPackAdd:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)viewDidUnload;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

