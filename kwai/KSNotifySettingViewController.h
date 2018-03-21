//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "KSBaseSettingViewController.h"

@class KSLoadingView, KSNotifySettingViewModel;

@interface KSNotifySettingViewController : KSBaseSettingViewController
{
    KSLoadingView *_loadingView;
    KSNotifySettingViewModel *_viewModel;
}

@property(retain, nonatomic) KSNotifySettingViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) KSLoadingView *loadingView; // @synthesize loadingView=_loadingView;
- (void).cxx_destruct;
- (id)_blankFooterItem;
- (id)_blankHeaderItem;
- (void)_configItemsWithSwithItems:(id)arg1;
- (void)_getNotifySwitchConfigs;
- (void)viewWillAppear:(_Bool)arg1;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;

@end

