//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBViewController.h"

#import "ATCLanLanSubaruReportMenuDelegate-Protocol.h"
#import "TBGuideHomeListViewDelegate-Protocol.h"
#import "TBModelStatusDelegate-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"

@class ATCLanLanHomeContentScrollView, ATCLanLanInterestSegmentControl, NSArray, NSDictionary, NSMutableDictionary, NSString, TBGuideBaseHomeView, TBGuideMenuRequest, TBModelStatusHandler, UIImageView, UIView;

@interface TBGuideHomePageViewController : TBViewController <UIScrollViewDelegate, TBModelStatusDelegate, TBGuideHomeListViewDelegate, ATCLanLanSubaruReportMenuDelegate>
{
    _Bool _guideImageViewIsQuit;
    NSArray *_menuItemList;
    TBGuideMenuRequest *_menuRequest;
    NSString *_backgroundUrl;
    NSString *_guideUrl;
    long long _currentSelectedIndex;
    NSString *_contentId;
    NSDictionary *_query;
    UIImageView *_guideImageView;
    TBModelStatusHandler *_handler;
    ATCLanLanInterestSegmentControl *_interestSegmentView;
    ATCLanLanHomeContentScrollView *_contentScrollView;
    TBGuideBaseHomeView *_currentHomeListView;
    NSMutableDictionary *_services;
    UIView *_searchTipView;
    NSString *_url;
    NSString *_expoInfo;
}

@property(copy, nonatomic) NSString *expoInfo; // @synthesize expoInfo=_expoInfo;
@property(copy, nonatomic) NSString *url; // @synthesize url=_url;
@property(retain, nonatomic) UIView *searchTipView; // @synthesize searchTipView=_searchTipView;
@property(retain, nonatomic) NSMutableDictionary *services; // @synthesize services=_services;
@property(retain, nonatomic) TBGuideBaseHomeView *currentHomeListView; // @synthesize currentHomeListView=_currentHomeListView;
@property(retain, nonatomic) ATCLanLanHomeContentScrollView *contentScrollView; // @synthesize contentScrollView=_contentScrollView;
@property(retain, nonatomic) ATCLanLanInterestSegmentControl *interestSegmentView; // @synthesize interestSegmentView=_interestSegmentView;
@property(retain, nonatomic) TBModelStatusHandler *handler; // @synthesize handler=_handler;
@property(nonatomic) _Bool guideImageViewIsQuit; // @synthesize guideImageViewIsQuit=_guideImageViewIsQuit;
@property(retain, nonatomic) UIImageView *guideImageView; // @synthesize guideImageView=_guideImageView;
@property(retain, nonatomic) NSDictionary *query; // @synthesize query=_query;
@property(retain, nonatomic) NSString *contentId; // @synthesize contentId=_contentId;
@property(nonatomic) long long currentSelectedIndex; // @synthesize currentSelectedIndex=_currentSelectedIndex;
@property(retain, nonatomic) NSString *guideUrl; // @synthesize guideUrl=_guideUrl;
@property(retain, nonatomic) NSString *backgroundUrl; // @synthesize backgroundUrl=_backgroundUrl;
@property(retain, nonatomic) TBGuideMenuRequest *menuRequest; // @synthesize menuRequest=_menuRequest;
@property(retain, nonatomic) NSArray *menuItemList; // @synthesize menuItemList=_menuItemList;
- (void).cxx_destruct;
- (void)dealloc;
- (void)subaruReportUnlikeActionWith:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (id)guideMenuItemNavigationController;
- (void)guideListViewScrollDown;
- (void)guideListViewScrollUp;
- (void)guideMenuItemShowUpdateTitleWithNumber:(int)arg1;
- (_Bool)guideMenuItemShouldScrollToTop:(id)arg1;
- (id)menuItemAtIndex:(long long)arg1;
- (id)getServiceWithMenuItem:(id)arg1 index:(long long)arg2;
- (void)hideError;
- (void)showError:(id)arg1;
- (SEL)selectorForError:(id)arg1;
- (id)modelStatusInfo;
- (struct CGRect)listContentRect;
- (void)onQuitCallBack:(id)arg1;
- (void)showGuideImageView;
- (id)loadInterestListAtIndex:(long long)arg1;
- (void)loadInterestListWhenScrollViewDidEnd;
- (void)selectInterestListAtIndex:(long long)arg1;
- (void)setCurrentListViewScrolToTop:(id)arg1;
- (void)buildInterestSegmentView;
- (long long)searchMenuItemList;
- (void)handleMenuRequest:(id)arg1 error:(id)arg2;
- (void)loadInterstMenuData;
- (id)utPageName;
- (void)onSearchCallBack:(id)arg1;
- (void)onTapSearchTip:(id)arg1;
- (void)guideListViewShowSearchTip;
- (void)configNavigation;
- (void)clickNavCenterItem:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewWillLayoutSubviews;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (id)initWithNavigatorURL:(id)arg1 query:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

