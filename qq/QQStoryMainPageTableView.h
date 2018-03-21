//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableView.h>

#import <QQMainProject/MQZoneTableFootLoadingViewDelegate-Protocol.h>

@class MQZoneTableFootLoadingView, NSMutableArray, NSString, ODRefreshControl, QQStoryGreetingsCell, QQStoryMainPageTableViewData, QQStorySelfCell, QQStoryViewController;

@interface QQStoryMainPageTableView : UITableView <MQZoneTableFootLoadingViewDelegate>
{
    _Bool _inScroll;
    _Bool _scrollDownside;
    QQStoryViewController *_controller;
    ODRefreshControl *_odRefreshControl;
    MQZoneTableFootLoadingView *_loadMoreFooter;
    double _currentOffsetY;
    QQStorySelfCell *_selfStoryCell;
    QQStoryGreetingsCell *_greetingsCell;
    QQStoryMainPageTableViewData *_dataSourceAndDelegate;
}

+ (void)setLastTimeOffset:(struct CGPoint)arg1;
+ (struct CGPoint)lastTimeOffset;
@property(retain, nonatomic) QQStoryMainPageTableViewData *dataSourceAndDelegate; // @synthesize dataSourceAndDelegate=_dataSourceAndDelegate;
@property(retain, nonatomic) QQStoryGreetingsCell *greetingsCell; // @synthesize greetingsCell=_greetingsCell;
@property(retain, nonatomic) QQStorySelfCell *selfStoryCell; // @synthesize selfStoryCell=_selfStoryCell;
@property(nonatomic, getter=isScrollDownside) _Bool scrollDownside; // @synthesize scrollDownside=_scrollDownside;
@property(nonatomic, getter=isInScroll) _Bool inScroll; // @synthesize inScroll=_inScroll;
@property(nonatomic) double currentOffsetY; // @synthesize currentOffsetY=_currentOffsetY;
@property(retain, nonatomic) MQZoneTableFootLoadingView *loadMoreFooter; // @synthesize loadMoreFooter=_loadMoreFooter;
@property(retain, nonatomic) ODRefreshControl *odRefreshControl; // @synthesize odRefreshControl=_odRefreshControl;
@property(nonatomic) __weak QQStoryViewController *controller; // @synthesize controller=_controller;
- (void).cxx_destruct;
- (struct CGPoint)currentOffset;
- (void)tableFootLoadingViewDidTriggerLoading:(id)arg1;
- (void)scrollStoryViewToTop;
- (void)isHiddenLoadingMore:(_Bool)arg1;
- (void)stopRefreshCtrlAnimate:(_Bool)arg1 isShowFailedTips:(_Bool)arg2;
- (_Bool)stopLoadMoreFooter;
- (void)dropViewDidBeginRefreshing:(id)arg1;
- (void)checkAndLoadMore;
@property(retain, nonatomic) NSMutableArray *dataArray;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

