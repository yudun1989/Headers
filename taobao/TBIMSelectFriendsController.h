//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MUKSearchCommonViewContoller.h"

#import "MUKSearchCommonViewContollerDelegate-Protocol.h"
#import "TBIMRelationServiceDelegate-Protocol.h"

@class HUDActivityView, NSArray, NSMutableArray, NSString, TBModelStatusHandler, UIView;
@protocol TBIMSelectFriendsControllerDelegate;

@interface TBIMSelectFriendsController : MUKSearchCommonViewContoller <MUKSearchCommonViewContollerDelegate, TBIMRelationServiceDelegate>
{
    id <TBIMSelectFriendsControllerDelegate> _delegate;
    NSArray *_ignoreIds;
    NSMutableArray *_selectedData;
    NSMutableArray *_users;
    NSMutableArray *_searchResultList;
    HUDActivityView *_hudView;
    TBModelStatusHandler *_handler;
    UIView *_emptyView;
}

@property(retain, nonatomic) UIView *emptyView; // @synthesize emptyView=_emptyView;
@property(retain, nonatomic) TBModelStatusHandler *handler; // @synthesize handler=_handler;
@property(retain, nonatomic) HUDActivityView *hudView; // @synthesize hudView=_hudView;
@property(retain, nonatomic) NSMutableArray *searchResultList; // @synthesize searchResultList=_searchResultList;
@property(retain, nonatomic) NSMutableArray *users; // @synthesize users=_users;
@property(retain, nonatomic) NSMutableArray *selectedData; // @synthesize selectedData=_selectedData;
@property(retain, nonatomic) NSArray *ignoreIds; // @synthesize ignoreIds=_ignoreIds;
@property(nonatomic) __weak id <TBIMSelectFriendsControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (long long)selectedCount;
- (void)cellDidSelecte:(id)arg1 withCellModel:(id)arg2;
- (void)cellReused:(id)arg1 withCellModel:(id)arg2;
- (id)cellWithCellModel:(id)arg1 tableView:(id)arg2 isShowTableView:(_Bool)arg3;
- (id)sectionHeaderViewForSection:(long long)arg1 isShowTableView:(_Bool)arg2;
- (double)sectionHeaderViewHeightForSection:(long long)arg1 isShowTableView:(_Bool)arg2;
- (void)selectDataVCConfirm:(id)arg1;
- (void)selectDataVCCancel:(id)arg1;
- (id)navgationBarCenterTitle;
- (id)searchDataWithKey:(id)arg1;
- (id)showData;
- (void)taoFriendDataUpdate:(id)arg1;
- (void)filterUser:(id)arg1 completeBlock:(CDUnknownBlockType)arg2;
- (void)friendDidDeselectedAtIndex:(unsigned long long)arg1;
- (void)friendDidSelectedAtIndex:(unsigned long long)arg1;
- (void)didMeetLimitSelectionNumber;
- (void)initData;
- (void)stopLoadingHud;
- (void)startLoadingHud;
- (void)gotoAddFriend;
- (void)showEmptyView;
- (void)requestFriendData;
- (void)refleshFriendData:(id)arg1;
- (void)innerRefleshFriendData:(id)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

