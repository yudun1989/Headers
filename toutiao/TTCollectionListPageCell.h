//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

#import "ExploreMixedListBaseViewDelegate-Protocol.h"
#import "TTCollectionCell-Protocol.h"

@class ExploreMixedListView, NSString, TTCategory, TTCollectionPageViewController;
@protocol TTCollectionListPageCellDelegate;

@interface TTCollectionListPageCell : UICollectionViewCell <ExploreMixedListBaseViewDelegate, TTCollectionCell>
{
    id <TTCollectionListPageCellDelegate> _delegate;
    ExploreMixedListView *_listView;
    TTCategory *_category;
    unsigned long long _tabType;
    TTCollectionPageViewController *_pageVC;
}

@property(nonatomic) __weak TTCollectionPageViewController *pageVC; // @synthesize pageVC=_pageVC;
@property(nonatomic) unsigned long long tabType; // @synthesize tabType=_tabType;
@property(retain, nonatomic) TTCategory *category; // @synthesize category=_category;
@property(retain, nonatomic) ExploreMixedListView *listView; // @synthesize listView=_listView;
@property(nonatomic) __weak id <TTCollectionListPageCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
@property(nonatomic) __weak TTCollectionPageViewController *sourceViewController;
- (void)refreshData;
- (void)setupCellModel:(id)arg1 isDisplay:(_Bool)arg2;
- (void)didDisappear;
- (void)willDisappear;
- (void)didAppear;
- (void)willAppear;
- (void)leaveCategory;
- (void)enterCategory;
- (void)mixListViewCancelRequest:(id)arg1;
- (void)mixListViewFinishLoad:(id)arg1 isFinish:(_Bool)arg2 isUserPull:(_Bool)arg3;
- (void)mixListViewDidStartLoad:(id)arg1;
- (void)triggerPullRefresh;
- (void)refreshIfNeeded;
- (void)setHeaderView:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

