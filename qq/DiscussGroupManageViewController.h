//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QQViewController.h>

#import <QQMainProject/DiscussGroupLinkShareDelegate-Protocol.h>
#import <QQMainProject/IDiscussGroupManageView-Protocol.h>
#import <QQMainProject/MemUnitViewDelegate-Protocol.h>
#import <QQMainProject/MulMemSelBusiProcessDelegate-Protocol.h>
#import <QQMainProject/QQGroupSettingInitialHeadViewDelegate-Protocol.h>
#import <QQMainProject/QQGroupSettingViewMembersDelegate-Protocol.h>
#import <QQMainProject/QUIActionSheetDelegate-Protocol.h>
#import <QQMainProject/UITableViewDataSource-Protocol.h>
#import <QQMainProject/UITableViewDelegate-Protocol.h>
#import <QQMainProject/UserSummaryNavBarItemDelagate-Protocol.h>

@class MemView, NSMutableArray, NSString, NSTimer, QQGroupLinkShareController, QQGroupSettingInitialHeadView, QUIActionSheet, UIActivityIndicatorView, UIButton, UIColor, UIImage, UILabel, UINavigationController, UITableView, UIView, UserSummaryNavigationBar;

@interface DiscussGroupManageViewController : QQViewController <MulMemSelBusiProcessDelegate, QQGroupSettingInitialHeadViewDelegate, UserSummaryNavBarItemDelagate, QQGroupSettingViewMembersDelegate, DiscussGroupLinkShareDelegate, UITableViewDelegate, UITableViewDataSource, QUIActionSheetDelegate, IDiscussGroupManageView, MemUnitViewDelegate>
{
    int _manageType;
    long long _groupCode;
    NSMutableArray *_memDataSource;
    NSMutableArray *_memUinArray;
    UITableView *_tableView;
    MemView *_memView;
    UILabel *_titleLable;
    UILabel *_countUILable;
    UIView *_modifyNameView;
    UILabel *_groupName;
    UIButton *_moreButton;
    _Bool _isNeedReload;
    _Bool _notifyLoad;
    _Bool _isInit;
    _Bool _isDelState;
    NSTimer *_timer;
    NSString *_groupNameText;
    QUIActionSheet *_actionSheet;
    NSString *_shareUrl;
    int _shareUrlRequestSeqNum;
    int _batchUserNickReqSeqNum;
    UIActivityIndicatorView *_HUD;
    QQGroupLinkShareController *_groupLinkShareController;
    int _userGroupPermission;
    NSString *_turnToGroupTitle;
    NSString *_turnToGroupSubTitle;
    _Bool _shadeDone;
    _Bool _isCleanRecord;
    int _qrCodeFromTag;
    QQGroupSettingInitialHeadView *_headerView;
    UserSummaryNavigationBar *_userSummaryNavigationBar;
    UINavigationController *_navi;
    UIImage *_oriNavbarImage;
    UIColor *_oriNavbarColor;
}

@property(nonatomic) int qrCodeFromTag; // @synthesize qrCodeFromTag=_qrCodeFromTag;
@property(retain, nonatomic) UIColor *oriNavbarColor; // @synthesize oriNavbarColor=_oriNavbarColor;
@property(retain, nonatomic) UIImage *oriNavbarImage; // @synthesize oriNavbarImage=_oriNavbarImage;
@property(nonatomic) _Bool isCleanRecord; // @synthesize isCleanRecord=_isCleanRecord;
@property(nonatomic) _Bool shadeDone; // @synthesize shadeDone=_shadeDone;
@property(retain, nonatomic) UINavigationController *navi; // @synthesize navi=_navi;
@property(retain, nonatomic) UserSummaryNavigationBar *userSummaryNavigationBar; // @synthesize userSummaryNavigationBar=_userSummaryNavigationBar;
@property(retain, nonatomic) QQGroupSettingInitialHeadView *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) NSString *groupNameText; // @synthesize groupNameText=_groupNameText;
- (void)rightBarButtonClicked;
- (void)onBusinessProcessWithSelectedMems:(id)arg1 currentViewControllerClass:(id)arg2 currentViewController:(id)arg3;
- (void)handleTurnGroupAction;
- (void)quitDiscussGroupFailed:(long long)arg1;
- (void)quitDiscussGroupSucess:(long long)arg1;
- (void)refreshChangeDiscussName;
- (void)refreshDiscussName:(long long)arg1;
- (void)refreshDiscussMemberList:(long long)arg1;
- (long long)disGrpUin;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)hideCellLoadingTips;
- (void)showCellLoadingTips:(id)arg1;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)didHeadTouch:(id)arg1;
- (void)touchMemberCellHandler:(id)arg1;
- (void)clickAddButton;
- (void)handleAddDisGroupMember:(id)arg1;
- (void)handleMultiMemberAudio:(id)arg1;
- (void)doSelectedFriends:(id)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)tipOffDiscuss;
- (void)didGetCreateGroupRespond:(id)arg1;
- (void)createGroupMsg:(unsigned long long)arg1 groupName:(id)arg2;
- (void)requestCreateGroupTimeout;
- (void)sendCreateGroupRequest;
- (void)sendCreateGroupRequestFailed;
- (id)stringLossyAllowedWithStringNew:(id)arg1 WithLength:(unsigned long long)arg2;
- (void)leftButtonClick:(id)arg1;
- (void)deleteOver;
- (void)setDiscussFavoriteCallBack:(id)arg1;
- (void)DeleteSelfGroupInfo:(id)arg1;
- (void)setVoiceChannel:(_Bool)arg1;
- (void)goToModelType;
- (void)showAlert:(id)arg1 title:(id)arg2;
- (void)clickSwitch:(id)arg1;
- (_Bool)isSelfCreator;
- (id)getDiscussInfo;
- (void)handleVideoChatStart;
- (void)forwardToQRCard;
- (void)onClickGroupNameLabel;
- (void)qrCodeDidClick;
- (void)shareQrCode:(id)arg1;
- (void)actionDiscussGroupShare:(id)arg1;
- (void)requestDiscussGroupShareUrl:(long long)arg1;
- (void)showDiscussGroupLinkActionFromHeadView;
- (void)showDiscussGroupLinkActionSheet;
- (void)clearHistory;
- (void)quitAction;
- (void)showRecentFileRecords;
- (void)goToHistoryView;
- (void)setChatCover;
- (void)loadMemArray;
- (id)getDiscussUin;
- (void)dealloc;
- (void)handleNavBarItemClick:(_Bool)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)onForceOffLineNotify;
- (void)modifyNavigationState;
- (void)navigationBarThemeIfAlpha:(_Bool)arg1;
- (void)adjustRightBarButtonItemTitleColor:(_Bool)arg1;
- (void)navigationBarHandle;
- (void)appWillEnterForegroundNotification;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)layoutViewsIfNeeds:(id)arg1;
- (void)loadTurnToGroupInfo;
- (_Bool)amIInGroup:(unsigned long long)arg1;
- (void)onDiscussNameUpdate:(id)arg1;
- (void)updateHeaderView;
- (void)loadView;
- (id)initWithGroupCode:(long long)arg1;
- (id)initAddDiscussGroup:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
