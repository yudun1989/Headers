//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QQViewController.h>

#import <QQMainProject/GetTroopMemberProtocol-Protocol.h>
#import <QQMainProject/GetTroopRemarkProtocol-Protocol.h>
#import <QQMainProject/QUIActionSheetDelegate-Protocol.h>
#import <QQMainProject/UITableViewDataSource-Protocol.h>
#import <QQMainProject/UITableViewDelegate-Protocol.h>

@class NSMutableArray, NSString, QQGroupSettingModel, QQGroupSettingUploadRightsEngine, QQSwitch, UITableView;

@interface QQGroupMemberPermissionSettingViewController : QQViewController <UITableViewDataSource, UITableViewDelegate, GetTroopMemberProtocol, GetTroopRemarkProtocol, QUIActionSheetDelegate>
{
    UITableView *_tableView;
    _Bool _ifChoosedPay;
    QQSwitch *_tempSwitchBtn;
    QQSwitch *_discussSwitchBtn;
    QQSwitch *_openInviteSwitch;
    QQSwitch *_fileUploadRightsSwitch;
    QQSwitch *_albumUploadRightsSwitch;
    QQGroupSettingUploadRightsEngine *_engine;
    _Bool _isRefreshing;
    NSMutableArray *_sectionRow;
    QQGroupSettingModel *_groupModel;
    NSMutableArray *_dataFoots;
    _Bool _isQidianGroup;
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
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)openInviteNotification:(id)arg1;
- (void)onGetSettingJoinGroupResult:(id)arg1;
- (void)onTroopInfoUpdated:(id)arg1;
- (void)onAlbumUploadRightsCheck:(id)arg1;
- (id)albumUploadRightsSetting:(id)arg1 model:(id)arg2;
- (void)onFileUploadRightsCheck:(id)arg1;
- (id)fileUploadRightsSetting:(id)arg1 model:(id)arg2;
- (void)showShortTips:(id)arg1;
- (void)resetGroupSettingModel;
- (void)onSwitchAnonymousGroupMsg:(id)arg1;
- (id)createDiscussGroupSetting:(id)arg1 model:(id)arg2;
- (id)createTempConversationSetting:(id)arg1 model:(id)arg2;
- (id)createinviteOption:(id)arg1 model:(id)arg2;
- (void)onSwitchOpenInvite:(id)arg1;
- (id)createOpenInviteBtn:(id)arg1 model:(id)arg2;
- (id)tableView:(id)arg1 model:(id)arg2 cellIdentifier:(id)arg3;
- (id)groupInviteFriendsTitle:(int)arg1;
- (void)refreshQQGroupMemberList;
- (void)setVoiceOverStrForGroupSearch:(id)arg1;
- (void)inviteOption:(id)arg1;
- (int)inviteFriendsVerifyType;
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

