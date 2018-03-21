//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QQViewController.h>

#import <QQMainProject/AvatarServiceDelegate-Protocol.h>
#import <QQMainProject/UITableViewDataSource-Protocol.h>
#import <QQMainProject/UITableViewDelegate-Protocol.h>

@class BabyQTableDelegateAndDataSource, NSArray, NSMutableArray, NSString, NSTimer, QQBubbleTipsView, QQFriendSelectedViewController, QUIActionSheet, UIButton, UILabel, UITableView, UserSummaryModel, UserSummaryViewController;

@interface UserSummaryMoreViewController : QQViewController <AvatarServiceDelegate, UITableViewDataSource, UITableViewDelegate>
{
    UITableView *_tableview;
    NSMutableArray *_itemArray;
    UIButton *_delFriendBt;
    UIButton *_reportItBt;
    UILabel *_reportItLabel;
    int _summaryEntry;
    QUIActionSheet *_actionSheet;
    _Bool _isUIBusy;
    _Bool _isDeleteRequesting;
    _Bool _isEimPage;
    _Bool _isQDPage;
    long long _curUin;
    UserSummaryModel *_model;
    unsigned long long _groupUin;
    int _type;
    NSTimer *_timer;
    NSArray *_tableViewData;
    _Bool _friend;
    UserSummaryViewController *_topViewController;
    QQViewController *_campusCircleWebVC;
    NSString *_qdCorpUrl;
    BabyQTableDelegateAndDataSource *_babyQTableDelegateAndDataSource;
    QQBubbleTipsView *_bcardTipsView;
    QQFriendSelectedViewController *_currentFriendSelectVC;
}

+ (id)getMenuName:(int)arg1;
@property(nonatomic) __weak QQFriendSelectedViewController *currentFriendSelectVC; // @synthesize currentFriendSelectVC=_currentFriendSelectVC;
@property(retain, nonatomic) QQBubbleTipsView *bcardTipsView; // @synthesize bcardTipsView=_bcardTipsView;
@property(nonatomic) _Bool friend; // @synthesize friend=_friend;
@property(retain, nonatomic) BabyQTableDelegateAndDataSource *babyQTableDelegateAndDataSource; // @synthesize babyQTableDelegateAndDataSource=_babyQTableDelegateAndDataSource;
@property(retain, nonatomic) NSString *qdCorpUrl; // @synthesize qdCorpUrl=_qdCorpUrl;
@property(retain, nonatomic) QQViewController *campusCircleWebVC; // @synthesize campusCircleWebVC=_campusCircleWebVC;
@property(retain, nonatomic) UserSummaryViewController *topViewController; // @synthesize topViewController=_topViewController;
@property(nonatomic) _Bool isQDPage; // @synthesize isQDPage=_isQDPage;
- (void).cxx_destruct;
- (void)didLoadImage:(id)arg1 identity:(id)arg2 type:(int)arg3 size:(int)arg4 shape:(int)arg5 avatarInfo:(id)arg6;
- (void)onBabyQSwitchNotification:(id)arg1;
- (id)getFaceFromCache:(long long)arg1 isSmall:(_Bool)arg2 isRound:(_Bool)arg3;
- (void)actionRecommendFriend;
- (id)getVersion;
- (unsigned int)sourceIdWithSummaryType:(int)arg1;
- (int)getEntry;
- (int)getReserve2;
- (void)resetUIBusy;
- (_Bool)isFriendMaskWithUin:(id)arg1;
- (_Bool)isFriendUnCommon:(id)arg1;
- (void)onFriendListUpdatedNotification:(id)arg1;
- (void)onResponseSummaryNotification:(id)arg1;
- (void)DelFriendRequestTimeOut:(id)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)reportIllegalUser;
- (void)ActionOnDeleteFriend:(id)arg1;
- (void)requestToDeleteFriend;
- (void)showDeleteSheet;
- (void)shieldMsg;
- (void)blockFriendMsg;
- (void)saveToAddressBook;
- (void)moveGroup;
- (void)qstorySetting;
- (void)setupQzone;
- (_Bool)onEditViewModifyValue:(id)arg1 value:(id)arg2;
- (_Bool)shouldShowBusinessCardIcon;
- (id)string:(id)arg1 ByRemoveSuffix:(id)arg2;
- (id)getRemarkContentForSize:(struct CGSize)arg1 font:(id)arg2;
- (id)getBCardModel;
- (void)ActionOnModifyRemark:(id)arg1;
- (void)actionPushSpecailCareSetting;
- (void)actionOnSetUncommonFriend;
- (void)goToCardRemark;
- (id)removeSpaceAndNewline:(id)arg1;
- (void)openDetailInfo;
- (void)didSelectRowAtMoreViewController:(long long)arg1;
- (void)delFriendsBtAction;
- (void)reportItAction;
- (void)switchControlAction:(id)arg1;
- (void)selectCustomTableView:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)createCustomTableViewCell:(id)arg1 indexPath:(id)arg2;
- (id)createTableViewFootView;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)getCustomTableViewNumber:(long long)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)setSectionData:(id)arg1;
- (void)dealloc;
- (void)scrollViewDidScroll:(id)arg1;
- (void)showBCardTipsIfNeededAtIndexpath:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)preLoadOCSPlugins;
- (void)viewDidLoad;
- (void)setupFooterViewForBabyQ;
- (void)loadView;
- (id)init;

// Remaining properties
@property(nonatomic) long long curUin; // @dynamic curUin;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) unsigned long long groupUin; // @dynamic groupUin;
@property(readonly) unsigned long long hash;
@property(nonatomic) _Bool isEimPage; // @dynamic isEimPage;
@property(retain, nonatomic) NSMutableArray *itemArray; // @dynamic itemArray;
@property(retain, nonatomic) UserSummaryModel *model; // @dynamic model;
@property(nonatomic) int summaryEntry; // @dynamic summaryEntry;
@property(readonly) Class superclass;
@property(nonatomic) int type; // @dynamic type;

@end

