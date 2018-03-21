//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QQViewController.h>

#import <QQMainProject/MQZoneTableFootLoadingViewDelegate-Protocol.h>
#import <QQMainProject/MulMemSelBusiProcessDelegate-Protocol.h>
#import <QQMainProject/QQShareGroupMgrDelegate-Protocol.h>
#import <QQMainProject/UIAlertViewDelegate-Protocol.h>
#import <QQMainProject/UITableViewDataSource-Protocol.h>
#import <QQMainProject/UITableViewDelegate-Protocol.h>
#import <QQMainProject/UserSummaryNavBarItemDelagate-Protocol.h>

@class MQZoneTableFootLoadingView, NSMutableArray, NSString, ODRefreshControl, QQShareGroupMgr, QQShareGroupSelectorModel, QQStoryEmptyView, UIAlertView, UITableView, UserSummaryNavigationBar;
@protocol QQSSGThemeSelectorViewControllerDelegate;

@interface QQSSGThemeSelectorViewController : QQViewController <UITableViewDataSource, UITableViewDelegate, MQZoneTableFootLoadingViewDelegate, UserSummaryNavBarItemDelagate, QQShareGroupMgrDelegate, UIAlertViewDelegate, MulMemSelBusiProcessDelegate>
{
    UserSummaryNavigationBar *_userNavigationBar;
    UITableView *_tableView;
    ODRefreshControl *_refreshControl;
    MQZoneTableFootLoadingView *_loadMoreFooter;
    QQShareGroupMgr *_shareGroupMgr;
    _Bool _showAlertView;
    _Bool _isGroupListEnd;
    unsigned int _groupListPageSize;
    id <QQSSGThemeSelectorViewControllerDelegate> _delegate;
    unsigned long long _bizType;
    NSMutableArray *_dataSource;
    UIAlertView *_didSelectedAlertView;
    NSString *_nextCookie;
    NSString *_selfUnionID;
    QQShareGroupSelectorModel *_currentSelectedModel;
    NSMutableArray *_selectedModels;
    UIAlertView *_alertView;
    QQStoryEmptyView *_emptyView;
}

@property(retain, nonatomic) QQStoryEmptyView *emptyView; // @synthesize emptyView=_emptyView;
@property(retain, nonatomic) UIAlertView *alertView; // @synthesize alertView=_alertView;
@property(retain, nonatomic) NSMutableArray *selectedModels; // @synthesize selectedModels=_selectedModels;
@property(retain, nonatomic) QQShareGroupSelectorModel *currentSelectedModel; // @synthesize currentSelectedModel=_currentSelectedModel;
@property(nonatomic) _Bool isGroupListEnd; // @synthesize isGroupListEnd=_isGroupListEnd;
@property(retain, nonatomic) NSString *selfUnionID; // @synthesize selfUnionID=_selfUnionID;
@property(retain, nonatomic) NSString *nextCookie; // @synthesize nextCookie=_nextCookie;
@property(nonatomic) unsigned int groupListPageSize; // @synthesize groupListPageSize=_groupListPageSize;
@property(retain, nonatomic) UIAlertView *didSelectedAlertView; // @synthesize didSelectedAlertView=_didSelectedAlertView;
@property(retain, nonatomic) UserSummaryNavigationBar *userNavigationBar; // @synthesize userNavigationBar=_userNavigationBar;
@property(nonatomic) _Bool showAlertView; // @synthesize showAlertView=_showAlertView;
@property(retain, nonatomic) NSMutableArray *dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) unsigned long long bizType; // @synthesize bizType=_bizType;
@property(nonatomic) __weak id <QQSSGThemeSelectorViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)shareGroupMgr:(id)arg1 onShareGroupListInfo:(id)arg2 errorInfo:(id)arg3;
- (void)onBusinessProcessPopCancelMulMemSelector:(id)arg1 currentViewControllerClass:(id)arg2 selectedMember:(id)arg3;
- (void)onBusinessProcessWithSelectedMems:(id)arg1 currentViewControllerClass:(id)arg2 currentViewController:(id)arg3;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)createShareGroupNotification:(id)arg1;
- (void)loadNextPage;
- (void)tableFootLoadingViewDidTriggerLoading:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)dropViewDidBeginRefreshing:(id)arg1;
- (void)leftButtonClick:(id)arg1;
- (void)onClickNavBarRightButton:(id)arg1;
- (void)handleNavBarItemClick:(_Bool)arg1;
- (_Bool)isStoryBizType;
- (void)deselectAllModel;
- (id)filterDidSelectedModelFromDataSource;
- (id)modelWithIndexPath:(id)arg1;
- (void)stopLoadingWithErr:(_Bool)arg1;
- (void)hiddenLoadingMore:(_Bool)arg1;
- (void)requestUserShareGroupListWithCookie:(id)arg1;
- (void)stopRefreshCtrlAnimate:(_Bool)arg1 isShowFailedTips:(_Bool)arg2;
- (void)failedToConnect;
- (void)refreshDataRequest;
- (void)reloadData;
- (void)hideEmptyView;
- (void)showEmptyView;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)addObserver;
- (void)setNavitationTitle:(id)arg1;
- (void)addCustomNavigationBar;
- (void)createUI;
- (void)requestData;
- (void)loadDataFromCache;
- (id)initWithBizType:(unsigned long long)arg1 selectedGroups:(id)arg2;
- (id)initWithBizType:(unsigned long long)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

