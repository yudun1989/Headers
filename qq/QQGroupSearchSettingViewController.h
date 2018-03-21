//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QQViewController.h>

#import <QQMainProject/QUIActionSheetDelegate-Protocol.h>
#import <QQMainProject/UITableViewDataSource-Protocol.h>
#import <QQMainProject/UITableViewDelegate-Protocol.h>

@class NSMutableArray, NSString, QQGroupSettingModel, QQGroupSettingUploadRightsEngine, QQSwitch, UITableView;

@interface QQGroupSearchSettingViewController : QQViewController <UITableViewDataSource, UITableViewDelegate, QUIActionSheetDelegate>
{
    UITableView *_tableView;
    QQSwitch *_gSearchSwitchBtn;
    QQGroupSettingUploadRightsEngine *_engine;
    NSMutableArray *_sectionRow;
    QQGroupSettingModel *_groupModel;
    NSMutableArray *_dataFoots;
    _Bool _shouldAlert;
}

- (void).cxx_destruct;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)onTroopInfoUpdated:(id)arg1;
- (void)resetGroupSettingModel;
- (void)groupProfileChanged:(id)arg1;
- (void)joinGroupVerify;
- (void)editGroupProfile;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (id)groupSearchWordingWithIndex:(long long)arg1;
- (void)setVoiceOverStrForGroupSearch:(id)arg1;
- (void)searchModeSetting:(id)arg1;
- (id)createSearchModeBtn:(id)arg1 model:(id)arg2;
- (void)onRequestGroupSearch:(id)arg1 gCodeflag:(_Bool)arg2 gNameflag:(_Bool)arg3;
- (void)showJoinGroupAlert;
- (void)searchSettingNotification:(id)arg1;
- (void)onSwitchGCodeSearch:(id)arg1;
- (id)createGSearchBtn:(id)arg1 model:(id)arg2;
- (_Bool)canGNameSearch;
- (_Bool)canGCodeSearch;
- (_Bool)isGroupCanSearch;
- (id)tableView:(id)arg1 model:(id)arg2 cellIdentifier:(id)arg3;
- (void)loadData;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithGroupSettingModel:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

