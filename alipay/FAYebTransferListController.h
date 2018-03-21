//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BEEFunctionTableController.h"

#import "BEEWithSubTitleActionWindowDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class BEEWithSubTitleActionWindow, FACTransToYebRecordModel, NSMutableArray, NSString, UIButton, UIImageView, UILabel, UIView;

@interface FAYebTransferListController : BEEFunctionTableController <UITableViewDelegate, UITableViewDataSource, BEEWithSubTitleActionWindowDelegate>
{
    _Bool _needRefresh;
    NSMutableArray *_dataByYearArray;
    NSMutableArray *_yearIndexArray;
    _Bool _hasNextPage;
    NSString *_oppositeUserId;
    UIView *_captionView;
    UIView *_bottomView;
    UIButton *_yebButton;
    UILabel *_titleLabel;
    UILabel *_transferInfoLabel;
    UIButton *_amountButton;
    UIButton *_transferButton;
    UIButton *_createAccountButton;
    UIView *_createAccountView;
    UIImageView *_arrowIcon;
    NSMutableArray *_listData;
    BEEWithSubTitleActionWindow *_window;
    FACTransToYebRecordModel *_selectedRecode;
}

@property(retain, nonatomic) FACTransToYebRecordModel *selectedRecode; // @synthesize selectedRecode=_selectedRecode;
@property(retain, nonatomic) BEEWithSubTitleActionWindow *window; // @synthesize window=_window;
@property(retain, nonatomic) NSMutableArray *listData; // @synthesize listData=_listData;
@property(nonatomic) _Bool hasNextPage; // @synthesize hasNextPage=_hasNextPage;
@property(retain, nonatomic) UIImageView *arrowIcon; // @synthesize arrowIcon=_arrowIcon;
@property(retain, nonatomic) UIView *createAccountView; // @synthesize createAccountView=_createAccountView;
@property(retain, nonatomic) UIButton *createAccountButton; // @synthesize createAccountButton=_createAccountButton;
@property(retain, nonatomic) UIButton *transferButton; // @synthesize transferButton=_transferButton;
@property(retain, nonatomic) UIButton *amountButton; // @synthesize amountButton=_amountButton;
@property(retain, nonatomic) UILabel *transferInfoLabel; // @synthesize transferInfoLabel=_transferInfoLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIButton *yebButton; // @synthesize yebButton=_yebButton;
@property(retain, nonatomic) UIView *bottomView; // @synthesize bottomView=_bottomView;
@property(retain, nonatomic) UIView *captionView; // @synthesize captionView=_captionView;
@property(retain, nonatomic) NSString *oppositeUserId; // @synthesize oppositeUserId=_oppositeUserId;
- (void).cxx_destruct;
- (void)fundRemoved;
- (void)needRefreshRecords;
- (void)createAccountHandler;
- (void)totalAmountHandler;
- (void)openYebHandler;
- (void)transferHandler;
- (void)didClickActionWindow:(id)arg1 model:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)findModelByIndexPath:(id)arg1;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)createDateStr:(long long)arg1;
- (void)fillTableViewCell:(id)arg1 contentWithModel:(id)arg2;
- (void)reloadContent;
- (void)loadException:(int)arg1 info:(id)arg2 retry:(_Bool)arg3;
- (void)groupData:(id)arg1;
- (id)loadData;
- (void)loadSuccess:(id)arg1;
- (void)dealloc;
- (void)viewWillAppear:(_Bool)arg1;
- (id)emptyText;
- (id)loadOnline;
- (id)cacheKey;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

