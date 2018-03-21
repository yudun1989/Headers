//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "MCOfficialDataSourceDelegate-Protocol.h"
#import "TBMCLabelHeaderIteamViewDelegate-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"

@class MCOfficialContentFragment, NSMutableArray, NSString, TBMCLabelHeaderView, UIScrollView;
@protocol MCOfficialDataSourceProtocol;

@interface TBMCInnerOfficialViewController : UIViewController <UIScrollViewDelegate, TBMCLabelHeaderIteamViewDelegate, MCOfficialDataSourceDelegate>
{
    NSString *_msgTypeId;
    MCOfficialContentFragment *_currentFragment;
    NSMutableArray *_fragmentList;
    UIScrollView *_scrollView;
    TBMCLabelHeaderView *_hv;
    id <MCOfficialDataSourceProtocol> _officialDataSource;
    long long _pageNO;
}

@property(nonatomic) long long pageNO; // @synthesize pageNO=_pageNO;
@property(nonatomic) __weak id <MCOfficialDataSourceProtocol> officialDataSource; // @synthesize officialDataSource=_officialDataSource;
@property(retain, nonatomic) TBMCLabelHeaderView *hv; // @synthesize hv=_hv;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) NSMutableArray *fragmentList; // @synthesize fragmentList=_fragmentList;
@property(retain, nonatomic) MCOfficialContentFragment *currentFragment; // @synthesize currentFragment=_currentFragment;
@property(retain, nonatomic) NSString *msgTypeId; // @synthesize msgTypeId=_msgTypeId;
- (void).cxx_destruct;
- (id)spmCntWithConfig:(id)arg1;
- (id)spmUrlWithConfig:(id)arg1;
- (id)getConfigWithModuleSPM:(id)arg1 pageName:(id)arg2 moduleSPM_A:(id)arg3 moduleSPM_B:(id)arg4;
- (id)handler;
- (void)scrollViewDidScroll:(id)arg1;
- (void)click:(id)arg1;
- (void)updateUnreadCount;
- (void)setupTabbar;
- (void)setupScrollView;
- (void)setupFragment;
- (void)officalAccountInfoUpdated:(id)arg1;
- (void)reflushStyle;
- (_Bool)tbfestival_isFestivalEnable;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithNavigatorURL:(id)arg1 query:(id)arg2 nativeParams:(id)arg3;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

