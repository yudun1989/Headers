//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SmthSSOLoginViewController.h"

#import "aluSSOGuidePageAppearacne-Protocol.h"

@class NSString, UIButton, UIImageView;

@interface SmthTaobaoLoginViewController : SmthSSOLoginViewController <aluSSOGuidePageAppearacne>
{
    int _alipayBtWidth;
    UIButton *_alipayBt;
    UIImageView *_alipayImgView;
}

@property(nonatomic) int alipayBtWidth; // @synthesize alipayBtWidth=_alipayBtWidth;
@property(retain, nonatomic) UIImageView *alipayImgView; // @synthesize alipayImgView=_alipayImgView;
@property(retain, nonatomic) UIButton *alipayBt; // @synthesize alipayBt=_alipayBt;
- (void).cxx_destruct;
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
- (void)closeSSOLoginPage;
- (void)openHelpPage;
- (void)addRightButtonInNaviBarWithUrl:(id)arg1;
- (void)createSubView;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

