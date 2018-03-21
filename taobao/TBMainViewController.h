//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBTabController.h"

#import "ETFirstAlertDelegate-Protocol.h"
#import "TBMainVCInstanceProtocol-Protocol.h"
#import "UITabBarControllerDelegate-Protocol.h"

@class ETFirstInAlertViewController, NSArray, NSDictionary, NSString, UIColor;

@interface TBMainViewController : TBTabController <UITabBarControllerDelegate, ETFirstAlertDelegate, TBMainVCInstanceProtocol>
{
    _Bool _isViewAppeared;
    _Bool _isFromTaoMenu;
    NSArray *_VCItems;
    NSArray *_naviVCs;
    ETFirstInAlertViewController *_firsrInAlertViewController;
    id _memoryMonitor;
    UIColor *_festivalTabbarSelectedTextColor;
    UIColor *_festivalTabbarNormalTextColor;
    UIColor *_festivalTabbarBlurTintColor;
    UIColor *_festivalTabbarSeparatorColor;
    NSDictionary *_festivalTabbarIconfontMap;
    NSDictionary *_festivalTabbarImageMap;
}

@property(retain) NSDictionary *festivalTabbarImageMap; // @synthesize festivalTabbarImageMap=_festivalTabbarImageMap;
@property(retain) NSDictionary *festivalTabbarIconfontMap; // @synthesize festivalTabbarIconfontMap=_festivalTabbarIconfontMap;
@property(retain) UIColor *festivalTabbarSeparatorColor; // @synthesize festivalTabbarSeparatorColor=_festivalTabbarSeparatorColor;
@property(retain) UIColor *festivalTabbarBlurTintColor; // @synthesize festivalTabbarBlurTintColor=_festivalTabbarBlurTintColor;
@property(retain) UIColor *festivalTabbarNormalTextColor; // @synthesize festivalTabbarNormalTextColor=_festivalTabbarNormalTextColor;
@property(retain) UIColor *festivalTabbarSelectedTextColor; // @synthesize festivalTabbarSelectedTextColor=_festivalTabbarSelectedTextColor;
@property(retain, nonatomic) id memoryMonitor; // @synthesize memoryMonitor=_memoryMonitor;
@property(retain, nonatomic) ETFirstInAlertViewController *firsrInAlertViewController; // @synthesize firsrInAlertViewController=_firsrInAlertViewController;
@property(retain, nonatomic) NSArray *naviVCs; // @synthesize naviVCs=_naviVCs;
@property(nonatomic) _Bool isFromTaoMenu; // @synthesize isFromTaoMenu=_isFromTaoMenu;
@property _Bool isViewAppeared; // @synthesize isViewAppeared=_isViewAppeared;
@property(retain, nonatomic) NSArray *VCItems; // @synthesize VCItems=_VCItems;
- (void).cxx_destruct;
- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (long long)preferredInterfaceOrientationForPresentation;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotate;
- (void)initRootViewController:(id)arg1 atTabIndex:(id)arg2;
- (_Bool)throwBananeToMonkey:(id)arg1;
- (void)finishedDispalyFirstInAlert;
- (void)updateTabbarBadgeNotification:(id)arg1;
- (void)fromTaoMenu;
- (void)tabBarController:(id)arg1 didSelectViewController:(id)arg2;
- (_Bool)tabBarController:(id)arg1 shouldSelectViewController:(id)arg2;
- (id)fixedTBDocumentPath;
- (_Bool)showImageGuideView;
- (void)downBootFigureImage;
- (void)newBootFigureImageFolder;
- (id)checkNotDownBootFigureImage;
- (id)allBootFigureURL;
- (id)composeIconFont:(id)arg1 iconfont:(id)arg2 color:(id)arg3;
- (id)fakeInitVCWithURL:(id)arg1;
- (void)degradeViewControllerWithIndex:(long long)arg1;
- (void)postMainVCLaunchFinishNotificationOnce;
- (void)updateLazyCreateViewControllers;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)mainViewDidLoad;
- (void)addChildViewController:(id)arg1;
- (void)dealloc;
- (id)initWithViewControllerItems:(id)arg1;
- (void)recoverTabbarItemAtIndex:(long long)arg1;
- (void)replaceTabbarItemAtIndex:(long long)arg1 withTabbarItem:(id)arg2;
- (void)replaceViewControllerAtIndex:(long long)arg1 withVCItem:(id)arg2;
- (id)viewControllerWithVCItem:(id)arg1 shouldLazyLoading:(_Bool)arg2;
- (id)tabBizViewControllerWithVCItem:(id)arg1;
- (void)modifyTabbarItemAtIndex:(long long)arg1 withVCItem:(id)arg2;
- (id)tabBarItemWithVCItem:(id)arg1;
- (void)handleFestivalChanged:(id)arg1;
- (void)configTabbarFestivalStyle;
- (id)festivalTabbarSelectedImageWithIndex:(long long)arg1;
- (id)festivalTabbarNormalImageWithIndex:(long long)arg1;
- (id)festivalSelectedIconfontNameWithTag:(long long)arg1;
- (id)festivalNoramlIconfontNameWithTag:(long long)arg1;
- (void)loadFestivalTabbarIconfontMap;
- (void)loadFestivalTabbarImageMap;
- (void)resetTabbarItems;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

