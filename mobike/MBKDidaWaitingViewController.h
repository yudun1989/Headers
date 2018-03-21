//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MBKBaseViewController.h"

@class LOTAnimationView, MBKCarHailingOrder, MBKDidaWaitingViewModel, MBKOrderListTopHeaderView, UILabel;

@interface MBKDidaWaitingViewController : MBKBaseViewController
{
    MBKCarHailingOrder *_order;
    LOTAnimationView *_estimatingImageView;
    UILabel *_contentLabel;
    MBKOrderListTopHeaderView *_headerView;
    MBKDidaWaitingViewModel *_viewModel;
}

+ (void)load;
@property(retain, nonatomic) MBKDidaWaitingViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) MBKOrderListTopHeaderView *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) UILabel *contentLabel; // @synthesize contentLabel=_contentLabel;
@property(retain, nonatomic) LOTAnimationView *estimatingImageView; // @synthesize estimatingImageView=_estimatingImageView;
@property(retain, nonatomic) MBKCarHailingOrder *order; // @synthesize order=_order;
- (void).cxx_destruct;
- (void)setupViewModel;
- (void)buildUI;
- (void)updateSubViews;
- (void)updateHeaderView;
- (void)refreshView;
- (_Bool)shouldHideNavigationBarShadow;
- (void)addNavigationBar;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;

@end

