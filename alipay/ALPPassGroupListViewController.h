//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ALPListViewController.h"

@class ALPPassGroupListModel, APExceptionView;

@interface ALPPassGroupListViewController : ALPListViewController
{
    _Bool _pageHasCacheData;
    APExceptionView *_emptyView;
    APExceptionView *_errorView;
}

@property(nonatomic) _Bool pageHasCacheData; // @synthesize pageHasCacheData=_pageHasCacheData;
@property(retain, nonatomic) APExceptionView *errorView; // @synthesize errorView=_errorView;
@property(retain, nonatomic) APExceptionView *emptyView; // @synthesize emptyView=_emptyView;
- (void).cxx_destruct;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)reload;
- (void)showModel:(id)arg1;
- (void)showError:(id)arg1 withModel:(id)arg2;
- (void)showNoResult:(id)arg1;
- (void)showLoading:(id)arg1;
- (void)findItemByPassId:(id)arg1 result:(CDUnknownBlockType)arg2;
- (void)passItemReadNotification:(id)arg1;
- (void)shareSuccessByNotifycation:(id)arg1;
- (void)cancelShareSuccessByNotifycation:(id)arg1;
- (void)presentSuccessByNotifycation:(id)arg1;
- (void)shouldDeleteByNotifycation:(id)arg1;
- (void)unregisteNotification;
- (void)registeNotification;
- (void)queryLocation;
- (void)loadCache;
@property(readonly, nonatomic) ALPPassGroupListModel *listModel;
- (id)pageSpm;
- (void)viewWillAppear:(_Bool)arg1;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithQuery:(id)arg1 params:(id)arg2;

@end

