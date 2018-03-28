//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SSThemedView.h"

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"
#import "UIViewControllerErrorHandler-Protocol.h"

@class ArticleMomentDiggManager, NSString, SSThemedTableView;

@interface TTArticleMomentDigUsersView : SSThemedView <UITableViewDataSource, UITableViewDelegate, UIViewControllerErrorHandler>
{
    _Bool _isBanShowAuthor;
    _Bool _isLoading;
    ArticleMomentDiggManager *_diggManger;
    SSThemedTableView *_listView;
    NSString *_groupId;
    NSString *_categoryName;
    NSString *_fromPage;
    NSString *_commentID;
    unsigned long long _loadOffset;
}

@property(nonatomic) _Bool isLoading; // @synthesize isLoading=_isLoading;
@property(nonatomic) unsigned long long loadOffset; // @synthesize loadOffset=_loadOffset;
@property(retain, nonatomic) NSString *commentID; // @synthesize commentID=_commentID;
@property(nonatomic) _Bool isBanShowAuthor; // @synthesize isBanShowAuthor=_isBanShowAuthor;
@property(copy, nonatomic) NSString *fromPage; // @synthesize fromPage=_fromPage;
@property(copy, nonatomic) NSString *categoryName; // @synthesize categoryName=_categoryName;
@property(copy, nonatomic) NSString *groupId; // @synthesize groupId=_groupId;
@property(retain, nonatomic) SSThemedTableView *listView; // @synthesize listView=_listView;
@property(retain, nonatomic) ArticleMomentDiggManager *diggManger; // @synthesize diggManger=_diggManger;
- (void).cxx_destruct;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)loadMoreData;
- (void)refreshData;
- (_Bool)tt_hasValidateData;
- (id)userForIndex:(unsigned long long)arg1;
- (id)currentMomentDiggUsers;
- (void)refreshListUI;
- (void)leftButtonClicked;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 commentID:(id)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

