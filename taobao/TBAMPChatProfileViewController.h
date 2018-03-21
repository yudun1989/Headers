//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBViewController.h"

#import "MCRecentContactDataSourceDelegate-Protocol.h"
#import "MUKTitleSwitchCellDelegate-Protocol.h"
#import "TBGroupCreatDelegate-Protocol.h"
#import "TBGroupInfoFriendsCellDelegate-Protocol.h"
#import "TBIMMessageServiceDelegate-Protocol.h"
#import "TBIMUserServiceDelegate-Protocol.h"
#import "TBNavigatorBehaviorProtocol-Protocol.h"
#import "UIActionSheetDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSMutableArray, NSString, TBDingTalkUserProfileTableDelegate, TBDingTalkUserProfileViewModel, TBIMGroupTitleView, UITableView;
@protocol MCRecentContactDataSourceProtocol, MCSessionDO, TBIMMessageServiceAdapter, TBIMUserAdapter, TBIMUserServiceAdapter;

@interface TBAMPChatProfileViewController : TBViewController <UIActionSheetDelegate, UITableViewDataSource, UITableViewDelegate, TBGroupInfoFriendsCellDelegate, TBGroupCreatDelegate, TBIMMessageServiceDelegate, MCRecentContactDataSourceDelegate, TBIMUserServiceDelegate, MUKTitleSwitchCellDelegate, TBNavigatorBehaviorProtocol>
{
    NSString *_userId;
    NSString *_sessionId;
    long long _bizSubId;
    UITableView *_tableView;
    id <TBIMUserAdapter> _user;
    id <MCRecentContactDataSourceProtocol> _sessionService;
    id <MCSessionDO> _sessionAdapter;
    id <TBIMUserServiceAdapter> _userAdapter;
    id <TBIMMessageServiceAdapter> _messageService;
    NSMutableArray *_userArray;
    _Bool _isRemind;
    TBIMGroupTitleView *_titleView;
    NSMutableArray *_itemImageList;
    int _servicesType;
    _Bool _isDingTalk;
    TBDingTalkUserProfileTableDelegate *_delegate;
    TBDingTalkUserProfileViewModel *_viewModel;
    _Bool _showGoodList;
}

@property(nonatomic) _Bool showGoodList; // @synthesize showGoodList=_showGoodList;
- (void).cxx_destruct;
- (void)deleteGuide;
- (void)confirmDeleteGuide;
- (void)showSettingActionSheet:(id)arg1;
- (void)UserChange:(id)arg1;
- (void)requestGroupShareList;
- (id)uniquePageIdForNavigatorBehavior;
- (void)cleanMessageRecord;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)createGroupVC:(id)arg1 commitAction:(id)arg2;
- (void)createGroupAction;
- (void)receiveMessage;
- (void)preventMessage;
- (void)cellItemDeleteAtIndex:(long long)arg1;
- (void)cellItemClickAtIndex:(long long)arg1;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)titleSwitchCell:(id)arg1 switchChange:(_Bool)arg2;
- (void)sessionChange:(id)arg1;
- (void)sessionAdd:(id)arg1;
- (void)messageLoadShareItemMessageResult:(id)arg1 andMsg:(id)arg2;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)updateTitleLabelWithIsRemind:(_Bool)arg1;
- (void)reflushStyle;
- (void)initUserAdapter;
- (void)initTableView;
- (void)setupNavigation;
- (void)initChatItemData;
- (id)initWithNavigatorURL:(id)arg1 query:(id)arg2 nativeParams:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

