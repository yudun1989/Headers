//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBViewController.h"

#import "TBIMShareCellDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"
#import "UITextFieldDelegate-Protocol.h"

@class NSMutableArray, NSString, TBModelStatusHandler, UITableView, UITextField;
@protocol ShareItemDelegate, TBChatShareItemSearchDelegate;

@interface TBChatShareItemSearchViewController : TBViewController <UITextFieldDelegate, UITableViewDataSource, UITableViewDelegate, TBIMShareCellDelegate>
{
    _Bool _isSingleSelected;
    id <ShareItemDelegate> _delegate;
    id <ShareItemDelegate> _defaultDelegate;
    id <TBChatShareItemSearchDelegate> _chatShareItemSearchDelegat;
    TBModelStatusHandler *_innerStatusHandler;
    UITextField *_searchTextField;
    UITableView *_tableView;
    NSMutableArray *_itemDataList;
}

@property(retain, nonatomic) NSMutableArray *itemDataList; // @synthesize itemDataList=_itemDataList;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) UITextField *searchTextField; // @synthesize searchTextField=_searchTextField;
@property(retain, nonatomic) TBModelStatusHandler *innerStatusHandler; // @synthesize innerStatusHandler=_innerStatusHandler;
@property(nonatomic) _Bool isSingleSelected; // @synthesize isSingleSelected=_isSingleSelected;
@property(nonatomic) __weak id <TBChatShareItemSearchDelegate> chatShareItemSearchDelegat; // @synthesize chatShareItemSearchDelegat=_chatShareItemSearchDelegat;
@property(nonatomic) __weak id <ShareItemDelegate> defaultDelegate; // @synthesize defaultDelegate=_defaultDelegate;
@property(nonatomic) __weak id <ShareItemDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)checkButtonTapped:(id)arg1 event:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)textFieldDidBeginEditing:(id)arg1;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (id)handlerStatus;
- (void)handleResultData:(id)arg1 ignoreEmpty:(_Bool)arg2;
- (void)loadDataWithKeyword:(id)arg1;
- (void)setupViews;
- (void)viewDidLoad;
- (id)initWithDelegate:(id)arg1 defaultDelegate:(id)arg2 chatShareItemSearchDelegate:(id)arg3 isSingleSelected:(_Bool)arg4;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

