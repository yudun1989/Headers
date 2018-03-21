//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITabBarController.h>

#import "APGuideViewControllerDelegate-Protocol.h"
#import "DTLauncher-Protocol.h"
#import "UITabBarControllerDelegate-Protocol.h"

@class ALPLauncherControllerKVOHandler, APGuideViewController, LauncherOperation, LauncherWidgetFactory, NSArray, NSDate, NSString, UIBarButtonItem;
@protocol DTAutoTestDelegate;

@interface ALPLauncherController : UITabBarController <APGuideViewControllerDelegate, UITabBarControllerDelegate, DTLauncher>
{
    _Bool isShowGuideView;
    _Bool isStartGuideView;
    _Bool _languageChanged;
    _Bool _isFinishedInitNaviItem;
    NSArray *_widgets;
    LauncherWidgetFactory *_widgetFactory;
    APGuideViewController *_guideView;
    ALPLauncherControllerKVOHandler *_kvoHandler;
    id <DTAutoTestDelegate> _autoTestDelegate;
    CDUnknownBlockType _viewDidAppearBlock;
    CDUnknownBlockType _viewDidDisappearBlock;
    LauncherOperation *_operation;
    NSDate *_lastSelectDate;
    UIBarButtonItem *_leftFixedSpaceItem;
    UIBarButtonItem *_righFixedSpaceItem;
}

+ (void)setStaticLaunched:(_Bool)arg1;
@property(nonatomic) _Bool isFinishedInitNaviItem; // @synthesize isFinishedInitNaviItem=_isFinishedInitNaviItem;
@property(nonatomic) _Bool languageChanged; // @synthesize languageChanged=_languageChanged;
@property(retain, nonatomic) UIBarButtonItem *righFixedSpaceItem; // @synthesize righFixedSpaceItem=_righFixedSpaceItem;
@property(retain, nonatomic) UIBarButtonItem *leftFixedSpaceItem; // @synthesize leftFixedSpaceItem=_leftFixedSpaceItem;
@property(retain, nonatomic) NSDate *lastSelectDate; // @synthesize lastSelectDate=_lastSelectDate;
@property(retain, nonatomic) LauncherOperation *operation; // @synthesize operation=_operation;
@property(copy, nonatomic) CDUnknownBlockType viewDidDisappearBlock; // @synthesize viewDidDisappearBlock=_viewDidDisappearBlock;
@property(copy, nonatomic) CDUnknownBlockType viewDidAppearBlock; // @synthesize viewDidAppearBlock=_viewDidAppearBlock;
@property(retain, nonatomic) id <DTAutoTestDelegate> autoTestDelegate; // @synthesize autoTestDelegate=_autoTestDelegate;
@property(retain, nonatomic) ALPLauncherControllerKVOHandler *kvoHandler; // @synthesize kvoHandler=_kvoHandler;
@property(retain, nonatomic) APGuideViewController *guideView; // @synthesize guideView=_guideView;
@property(retain, nonatomic) LauncherWidgetFactory *widgetFactory; // @synthesize widgetFactory=_widgetFactory;
@property(retain, nonatomic) NSArray *widgets; // @synthesize widgets=_widgets;
- (void).cxx_destruct;
- (void)guideViewDidDismiss;
- (void)startGuideView;
- (id)_getSSAuthService;
- (id)_getUserInfo;
- (_Bool)isLoginState;
- (void)setCurrentTabTypeWithItem:(id)arg1;
- (void)montorTapSelected:(id)arg1;
- (void)tabBarController:(id)arg1 didSelectViewController:(id)arg2;
- (_Bool)tabBarController:(id)arg1 shouldSelectViewController:(id)arg2;
- (void)postDoubleClickNotification:(id)arg1;
- (_Bool)isDoubleClick;
- (void)handleTabbarDoubleClick:(id)arg1;
- (void)handleTabbarSwitch:(id)arg1;
- (long long)selectedWindgetIndex;
- (void)widgetDidStartWithIndex:(long long)arg1 options:(id)arg2 fromLaunch:(_Bool)arg3;
- (void)widgetWillStartWithIndex:(long long)arg1 options:(id)arg2 fromLaunch:(_Bool)arg3;
- (void)setSelectedWidgetByIndex:(long long)arg1;
- (id)selectedWidget;
- (void)setSelectedWidget:(id)arg1;
- (void)setSelectedIndex:(unsigned long long)arg1;
- (void)setMicroApplication:(id)arg1;
- (void)viewWillLayoutSubviews;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotate;
- (_Bool)switchTabWhenColdBoot;
- (void)refreshAppIconBadgeNumber;
- (void)backToHome;
- (void)receviceLanguageChangedNotification:(id)arg1;
- (void)userExitLogin:(id)arg1;
- (void)appWillResignActive;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)delayCommonNavigationItem;
- (void)initCommonNavigationItem;
- (void)initTabBarView;
- (void)changTabAndRegisterSomething:(id)arg1;
- (void)tabBarItemToastNotification:(id)arg1;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

