//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "OrderRateCommitProtocol-Protocol.h"
#import "TBIPhotoBrowserViewDelegate-Protocol.h"
#import "TBRatePublishTableViewDelegate-Protocol.h"

@class HUDActivityView, NSMutableArray, NSString, TBCameraSetting, TBRateCommitOpView, TBRatePublishTableView;

@interface TBRatePublishBaseViewController : UIViewController <TBIPhotoBrowserViewDelegate, OrderRateCommitProtocol, TBRatePublishTableViewDelegate>
{
    TBRatePublishTableView *_tableView;
    TBCameraSetting *_cameraSetting;
    NSMutableArray *_pics;
    TBRateCommitOpView *_commitOpView;
    long long _currentTagIndex;
    HUDActivityView *_dataLoadingView;
}

@property(retain, nonatomic) HUDActivityView *dataLoadingView; // @synthesize dataLoadingView=_dataLoadingView;
@property(nonatomic) long long currentTagIndex; // @synthesize currentTagIndex=_currentTagIndex;
@property(retain, nonatomic) TBRateCommitOpView *commitOpView; // @synthesize commitOpView=_commitOpView;
@property(retain, nonatomic) NSMutableArray *pics; // @synthesize pics=_pics;
@property(retain, nonatomic) TBCameraSetting *cameraSetting; // @synthesize cameraSetting=_cameraSetting;
@property(retain, nonatomic) TBRatePublishTableView *tableView; // @synthesize tableView=_tableView;
- (void).cxx_destruct;
- (void)buttonInput;
- (void)doRateItem;
- (void)reloadDatas;
- (void)editPhotoFinished:(id)arg1 index:(long long)arg2;
- (void)editPhoto:(id)arg1;
- (void)selectedArrayShouleEdit:(id)arg1 currentIndex:(long long)arg2;
- (void)selectedArrayShouldRemove:(id)arg1;
- (void)buildCommitOpView:(id)arg1;
- (void)browsePics:(id)arg1 imageIndex:(long long)arg2 tagIndex:(long long)arg3;
- (void)showActivityLoadingView:(id)arg1;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

