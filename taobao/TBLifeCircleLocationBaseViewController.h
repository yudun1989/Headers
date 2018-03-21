//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBViewController.h"

@class TBLifeCircleLocationErrorView, TBLifeCircleLocationItem;

@interface TBLifeCircleLocationBaseViewController : TBViewController
{
    TBLifeCircleLocationItem *_location;
    TBLifeCircleLocationErrorView *_notEnabedView;
}

@property(retain, nonatomic) TBLifeCircleLocationErrorView *notEnabedView; // @synthesize notEnabedView=_notEnabedView;
@property(retain, nonatomic) TBLifeCircleLocationItem *location; // @synthesize location=_location;
- (void).cxx_destruct;
- (_Bool)tbfestival_isFestivalEnable;
- (void)dealloc;
- (void)viewDidLoad;
- (void)doRequestBiz;
- (void)performOnUpdateLocationFailedOnMainThread;
- (void)onUpdateLocationFailed;
- (void)performUpdateLocationOnMainThread:(id)arg1;
- (void)onUpdateLocation:(id)arg1;
- (void)loadLocationBiz;
- (void)onAddressInfoChange:(id)arg1;
- (void)onBackgroundResume;
- (void)viewWillAppear:(_Bool)arg1;
- (id)initWithNavigatorURL:(id)arg1 query:(id)arg2;

@end

