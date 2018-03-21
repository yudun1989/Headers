//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QQViewController.h>

#import <QQMainProject/DynamicButtonClickDelegate-Protocol.h>
#import <QQMainProject/QQDynamicMoreDidChangeDelegate-Protocol.h>
#import <QQMainProject/SimpleAlertViewDelegate-Protocol.h>
#import <QQMainProject/UIActionSheetDelegate-Protocol.h>
#import <QQMainProject/UIAlertViewDelegate-Protocol.h>
#import <QQMainProject/UIDocumentInteractionControllerDelegate-Protocol.h>
#import <QQMainProject/UITableViewDataSource-Protocol.h>
#import <QQMainProject/UITableViewDelegate-Protocol.h>

@class HeadButtonLongPress, NSMutableArray, NSString, NSTimer, QQAvatarView, QQReportLogModel, QQUnreadTagCountManager, UIImageView, UISearchBar, UITableView;

@interface QQRecommendViewController : QQViewController <UITableViewDelegate, UITableViewDataSource, UIAlertViewDelegate, UIActionSheetDelegate, SimpleAlertViewDelegate, DynamicButtonClickDelegate, UIDocumentInteractionControllerDelegate, QQDynamicMoreDidChangeDelegate>
{
    NSMutableArray *_dataSources;
    _Bool _showNew;
    UIImageView *_rightButtonFlagView;
    NSTimer *_CallPluginTimer;
    _Bool _hasPushNotifiction;
    _Bool _needReloadData;
    _Bool _bHasChangedPluginData;
    NSMutableArray *_pluginIDArray;
    QQUnreadTagCountManager *_unreadTagCountManager;
    _Bool _isDisplayFormClickTab;
    UISearchBar *_dynamicSearchBar;
    UITableView *_tableView;
    QQReportLogModel *_logModel;
    HeadButtonLongPress *_headButton;
    _Bool _is6Plus;
    QQAvatarView *_qzoneHeadView;
    _Bool _viewDidShown;
    _Bool _firstDisplayFlag;
    _Bool _fromGuiderView;
}

@property(nonatomic) _Bool fromGuiderView; // @synthesize fromGuiderView=_fromGuiderView;
- (void)setThemeBackground;
- (void)actionCampusCircleClicked:(id)arg1;
- (void)updateAllPeopleVote:(id)arg1;
- (void)updateCampusCircleRedPointInfoForItem:(id)arg1;
- (void)updateRedPointDynamicTabForCampusCircle;
- (_Bool)isPluginEnabled:(unsigned long long)arg1;
- (void)reportMoreButton:(long long)arg1;
- (void)layouRightButtonRedPoint:(id)arg1 subViews:(id)arg2;
- (id)tableView:(id)arg1 redPointPathForIndex:(id)arg2;
- (id)redPointTableView;
- (void)groupActivityOnLoad;
- (void)qqDynamicSearchRecommendedWordUpdateNotification:(id)arg1;
- (void)activeFTSEntrance:(_Bool)arg1;
- (void)searchBarBookmarkButtonClicked:(id)arg1;
- (_Bool)searchBarShouldBeginEditing:(id)arg1;
- (_Bool)isGameIDWeb:(id)arg1;
- (void)showView;
- (void)showNewIcon;
- (void)notifyNearbyUnreadCountUpdate;
- (int)nearbyUnreadCount;
- (void)dealloc;
- (void)readinjoyReportWithItem:(id)arg1;
- (void)clearReadInjoyItem:(id)arg1;
- (void)setReadInJoySendFailed:(id)arg1;
- (void)setReadInJoyRedPoint:(id)arg1 tips:(id)arg2;
- (void)setReadInJoyNew:(id)arg1;
- (void)setReadInJoyNumber:(id)arg1 unreadCount:(unsigned long long)arg2;
- (void)readInjoyInit:(id)arg1;
- (void)onReadInJoyPushUpdate:(id)arg1;
- (void)checkRedPointUnreadCount;
- (void)onFeedUnreadNumberUpdate:(id)arg1;
- (void)onStoryCommonConfigUpdate:(id)arg1;
- (void)onGroupReddotUpdated:(id)arg1;
- (void)onCleanStoryNumberRedPoint:(id)arg1;
- (void)onGroupCleanNumberRedPoint:(id)arg1;
- (void)onPluginDataRefresh;
- (void)popViewControllerWithAccountChange;
- (void)onAccountLogout;
- (void)clickBottomTab;
- (void)reportQZoneFeedHint:(_Bool)arg1;
- (void)onWillEnterForeground;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)tribeEntryExposion;
- (void)requestGetIsCompleteNearbyUserSummary;
- (void)loadPersonalTheme;
- (void)reloadAppearance;
- (void)reloadData;
- (void)viewWillAppear:(_Bool)arg1;
- (void)printPluginDataSource;
- (void)checkShowTabBarHint;
- (void)actionMoreCell:(id)arg1;
- (void)dynamicMoreDidChangePluginData;
- (void)dynamicMoreDidChangePluginDataChange:(id)arg1;
- (void)ArrangeCell:(id)arg1;
- (void)dataSourceInit;
- (void)onQZoneDidShow:(id)arg1;
- (id)getPluginPicUrl:(id)arg1;
- (void)showNearbyGroupViewController;
- (void)actionCell:(id)arg1;
- (id)getWapUrl:(id)arg1;
- (void)loadExternalWap:(id)arg1;
- (void)checkIfNew:(id)arg1;
- (void)handleDynamicTopItems:(long long)arg1;
- (void)storyClickUpload;
- (void)storyShowUpload;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (void)setItemTipsText:(id)arg1 labelFrame:(struct CGRect)arg2 contentWidth:(double)arg3 contentFont:(id)arg4 cellItem:(id)arg5 tableViewCell:(id)arg6;
- (void)checkShowHintInCell:(id)arg1 item:(id)arg2;
- (void)resetStoryRedNum:(id)arg1;
- (void)updateStoryCurrentRedDot:(id)arg1;
- (unsigned int)getStoryID;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)onHeadButtonClick;
- (void)checkForPluginShowTabBarHint;
- (void)checkRedPointForNearby:(id)arg1;
- (void)reportExposure;
- (void)showDynamicMore;
- (void)drawSubView;
- (void)showNearbyEntrance;
- (int)viewTag;
- (void)loadView;
- (_Bool)isSupportFullScreenLayout;
- (void)updateUnreadTagCountManagerFilter;
- (void)updateToNewDynamicVC;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) HeadButtonLongPress *headButton; // @dynamic headButton;
@property(retain, nonatomic) QQReportLogModel *logModel; // @dynamic logModel;
@property(readonly) Class superclass;
@property(retain, nonatomic) UITableView *tableView; // @dynamic tableView;

@end
