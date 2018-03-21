//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "aluNavigationBarAppearance-Protocol.h"

@class NSString, Reachability, UIButton;

@interface ALBBViewController : UIViewController <aluNavigationBarAppearance>
{
    _Bool _isNetWorkOK;
    NSString *_helpPageUrl;
    UIButton *_rightButton;
    Reachability *_internetReachability;
    Reachability *_wifiReachability;
}

@property(retain, nonatomic) Reachability *wifiReachability; // @synthesize wifiReachability=_wifiReachability;
@property(retain, nonatomic) Reachability *internetReachability; // @synthesize internetReachability=_internetReachability;
@property(retain, nonatomic) UIButton *rightButton; // @synthesize rightButton=_rightButton;
@property(copy, nonatomic) NSString *helpPageUrl; // @synthesize helpPageUrl=_helpPageUrl;
@property(nonatomic) _Bool isNetWorkOK; // @synthesize isNetWorkOK=_isNetWorkOK;
- (void).cxx_destruct;
- (id)helpPageButton;
- (void)initNoCaptcha:(CDUnknownBlockType)arg1;
- (void)setControllerBackgroundColor:(id)arg1;
- (id)viewController;
- (void)setNavBarRightBarCustomView:(id)arg1;
- (void)setNavBarCenterItemTitle:(id)arg1;
- (void)setNavBarLeftBarItemTitleColor:(id)arg1;
- (void)setNavBarLeftBarItemFont:(id)arg1;
- (void)setNavBarRightBarItemTitleColor:(id)arg1;
- (void)setNavBarRightBarItemFont:(id)arg1;
- (void)setNavBarRightBarItemTitle:(id)arg1;
- (void)setNavBarLeftBarItemTitle:(id)arg1;
- (void)setNavBarLeftBarItemImage:(id)arg1 forState:(unsigned long long)arg2;
- (void)setNavBarLeftBarItemHighLightImage:(id)arg1;
- (void)setNavBarLeftBarItemImage:(id)arg1;
- (void)updateNetWorkStatus;
- (void)reachabilityChanged:(id)arg1;
- (void)openHelpPage;
- (void)onBack;
- (void)removeRightButtonInNaviBar;
- (void)addRightButtonInNaviBarWithUrl:(id)arg1;
- (void)setupNaviBar;
- (void)setupNetwork;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

