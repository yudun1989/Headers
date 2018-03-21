//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BEEPagingTableController.h"

@class CLInviteManager, COMQueryCommunityResp, NSMutableArray, NSString, UIView;

@interface CLMemberListController : BEEPagingTableController
{
    long long _pageNum;
    long long _version;
    _Bool _hasNextPage;
    NSString *_communityId;
    NSString *_mySceneName;
    COMQueryCommunityResp *_resultInfo;
    CLInviteManager *_inviteMrg;
    NSMutableArray *_memberListData;
    UIView *_footerView;
}

@property(retain, nonatomic) UIView *footerView; // @synthesize footerView=_footerView;
@property(retain, nonatomic) NSMutableArray *memberListData; // @synthesize memberListData=_memberListData;
- (void).cxx_destruct;
- (void)onRightButtonClicked:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (_Bool)shouldSkipRpcSaveToCache:(id)arg1;
- (id)cacheKey;
- (_Bool)hasNextPage;
- (void)loadSuccess:(id)arg1;
- (id)resultErrorMsg:(id)arg1;
- (_Bool)isResultSuccess:(id)arg1;
- (id)loadOnline;
- (void)viewDidLoad;
- (id)initWithResultInfo:(id)arg1 mySceneName:(id)arg2;

@end

