//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MCBasePresenter.h"

#import "MCSelectItemSelectModelDelegate-Protocol.h"
#import "MCShareItemSelectInterface-Protocol.h"
#import "MCShareItemSelectViewDataSource-Protocol.h"
#import "MCShareItemSelectViewDelegate-Protocol.h"

@class HUDActivityView, MCSelectItemSelectModel, MCShareItemSelectView, NSMutableArray, NSString;

@interface MCShareItemSelectPresenter : MCBasePresenter <MCSelectItemSelectModelDelegate, MCShareItemSelectInterface, MCShareItemSelectViewDelegate, MCShareItemSelectViewDataSource>
{
    MCSelectItemSelectModel *_shareItemSelectModel;
    MCShareItemSelectView *_shareItemSelectView;
    HUDActivityView *_hudLoadingView;
    NSMutableArray *_statusHandlers;
}

@property(retain, nonatomic) NSMutableArray *statusHandlers; // @synthesize statusHandlers=_statusHandlers;
@property(retain, nonatomic) HUDActivityView *hudLoadingView; // @synthesize hudLoadingView=_hudLoadingView;
@property(retain, nonatomic) MCShareItemSelectView *shareItemSelectView; // @synthesize shareItemSelectView=_shareItemSelectView;
@property(retain, nonatomic) MCSelectItemSelectModel *shareItemSelectModel; // @synthesize shareItemSelectModel=_shareItemSelectModel;
- (void).cxx_destruct;
- (_Bool)addShareItemObject:(id)arg1 error:(id *)arg2;
- (id)handlerAtIndex:(unsigned long long)arg1;
- (void)loadSelectPage;
- (void)shareItemModel:(id)arg1 loadFailAtTabIndex:(unsigned long long)arg2 withError:(id)arg3;
- (void)shareItemModel:(id)arg1 loadFinishAtTabIndex:(unsigned long long)arg2 withData:(id)arg3;
- (void)shareItemSelectView:(id)arg1 commitItemWithIdentifiers:(id)arg2;
- (void)shareItemSelectView:(id)arg1 deleteItemFromSelectionBarWithIdentifier:(id)arg2;
- (void)shareItemSelectView:(id)arg1 clickItemForRow:(long long)arg2 inContentTab:(unsigned long long)arg3;
- (void)shareItemSelectView:(id)arg1 willDisplayRow:(long long)arg2 forContentTab:(unsigned long long)arg3;
- (void)shareItemSelectView:(id)arg1 selectTabIndex:(unsigned long long)arg2;
- (unsigned long long)maxCommitItemNumberForShareItemSelectView:(id)arg1;
- (id)shareItemSelectView:(id)arg1 itemObjectForRow:(unsigned long long)arg2 inContentTab:(unsigned long long)arg3;
- (long long)shareItemSelectView:(id)arg1 numberOfRowsInContentTab:(unsigned long long)arg2;
- (id)shareItemSelectView:(id)arg1 titleForTabIndex:(unsigned long long)arg2;
- (unsigned long long)selectedTabIndexOfShareItemSelectView:(id)arg1;
- (unsigned long long)contentTabNumberOfShareItemSelectView:(id)arg1;
- (_Bool)addShareObject:(id)arg1 error:(id *)arg2;
- (void)setMaxSelectCount:(long long)arg1;
- (long long)maxSelectCount;
- (id)selectedShareItemList;
- (void)setSelectedTabIndex:(unsigned long long)arg1;
- (void)refreshDataAndUI;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)getView;
- (id)initWithFrame:(struct CGRect)arg1 baseVC:(id)arg2 bizKey:(id)arg3 tabContents:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

