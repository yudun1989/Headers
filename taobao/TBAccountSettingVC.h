//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBViewController.h"

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSArray, NSString, TBConfigurableSettingCell, TBConfigurableSettingModel, UITableView;

@interface TBAccountSettingVC : TBViewController <UITableViewDataSource, UITableViewDelegate>
{
    _Bool _canChangeNick;
    UITableView *_tableView;
    NSArray *_configurableSettingCells;
    TBConfigurableSettingModel *_settingModel;
    double _lastTimeSelectedRow;
    TBConfigurableSettingCell *_memberNameCell;
}

@property(retain, nonatomic) TBConfigurableSettingCell *memberNameCell; // @synthesize memberNameCell=_memberNameCell;
@property(nonatomic) _Bool canChangeNick; // @synthesize canChangeNick=_canChangeNick;
@property(nonatomic) double lastTimeSelectedRow; // @synthesize lastTimeSelectedRow=_lastTimeSelectedRow;
@property(retain, nonatomic) TBConfigurableSettingModel *settingModel; // @synthesize settingModel=_settingModel;
@property(retain, nonatomic) NSArray *configurableSettingCells; // @synthesize configurableSettingCells=_configurableSettingCells;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
- (void).cxx_destruct;
- (id)pageUserInfo;
- (long long)helpInfoCellHeight:(id)arg1;
- (long long)helpInfoLabelHeight:(id)arg1;
- (long long)helpInfoLabelWidth;
- (_Bool)hasHelpInfo:(long long)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayHeaderView:(id)arg2 forSection:(long long)arg3;
- (void)tableView:(id)arg1 willDisplayFooterView:(id)arg2 forSection:(long long)arg3;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)showSafeCodeManagerView;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)backItemClicked:(id)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

