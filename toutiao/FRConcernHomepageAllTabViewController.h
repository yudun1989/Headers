//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SSViewControllerBase.h"

#import "FRConcernHomepageChildViewControllerProtocol-Protocol.h"
#import "FRPageStayManagerDelegate-Protocol.h"

@class FRConcernTabStructModel, NSDate, NSDictionary, NSString, SSViewBase, UIScrollView, UITableView;
@protocol FRConcernHomepageViewControllerProtocol;

@interface FRConcernHomepageAllTabViewController : SSViewControllerBase <FRPageStayManagerDelegate, FRConcernHomepageChildViewControllerProtocol>
{
    _Bool _isViewAppear;
    _Bool _isShowing;
    _Bool _isFirstAppearAndShowing;
    _Bool _specialConcernPage;
    id <FRConcernHomepageViewControllerProtocol> _concernHomepageViewController;
    NSString *_concernID;
    FRConcernTabStructModel *_concernTabStructModel;
    long long _index;
    NSDictionary *_extraTracks;
    SSViewBase *_mixedListView;
    UITableView *_tableView;
    NSDate *_lastRefreshDate;
}

@property(nonatomic) _Bool specialConcernPage; // @synthesize specialConcernPage=_specialConcernPage;
@property(retain, nonatomic) NSDate *lastRefreshDate; // @synthesize lastRefreshDate=_lastRefreshDate;
@property(nonatomic) _Bool isFirstAppearAndShowing; // @synthesize isFirstAppearAndShowing=_isFirstAppearAndShowing;
@property(nonatomic) _Bool isShowing; // @synthesize isShowing=_isShowing;
@property(nonatomic) _Bool isViewAppear; // @synthesize isViewAppear=_isViewAppear;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) SSViewBase *mixedListView; // @synthesize mixedListView=_mixedListView;
@property(copy, nonatomic) NSDictionary *extraTracks; // @synthesize extraTracks=_extraTracks;
@property(nonatomic) long long index; // @synthesize index=_index;
@property(retain, nonatomic) FRConcernTabStructModel *concernTabStructModel; // @synthesize concernTabStructModel=_concernTabStructModel;
@property(copy, nonatomic) NSString *concernID; // @synthesize concernID=_concernID;
@property(nonatomic) __weak id <FRConcernHomepageViewControllerProtocol> concernHomepageViewController; // @synthesize concernHomepageViewController=_concernHomepageViewController;
- (void).cxx_destruct;
- (void)pageStayRecorderWithTimeInterval:(long long)arg1 pageDisappearType:(unsigned long long)arg2;
- (void)trackEvent:(id)arg1 forLabel:(id)arg2 extraDict:(id)arg3 containExtra:(_Bool)arg4;
- (void)trackEvent:(id)arg1 forLabel:(id)arg2 containExtra:(_Bool)arg3;
- (void)trackEvent:(id)arg1 forLabel:(id)arg2;
- (void)childViewControllerDidDisappear;
- (void)childViewControllerDidAppear;
- (void)refreshWithUserClick:(_Bool)arg1;
@property(readonly, nonatomic) UIScrollView *scrollView;
- (void)didReceiveMemoryWarning;
- (void)setIsViewAppear:(_Bool)arg1 andIsShowing:(_Bool)arg2;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithConcernID:(id)arg1 concernTabStructModel:(id)arg2 threadListStructModel:(id)arg3 atIndex:(long long)arg4 specialConcernPage:(_Bool)arg5 extraTracks:(id)arg6 apiParameters:(id)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

