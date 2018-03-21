//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QQAIOBaseBizAgent.h>

#import <QQMainProject/QQBannerTipViewDelegate-Protocol.h>

@class NSString, QQBannerTipView;

@interface QQAIOBannerTipsBizAgent : QQAIOBaseBizAgent <QQBannerTipViewDelegate>
{
    QQBannerTipView *_bannerTipView;
}

+ (void)reportWithOpsType:(id)arg1 opsName:(id)arg2;
@property(retain, nonatomic) QQBannerTipView *bannerTipView; // @synthesize bannerTipView=_bannerTipView;
- (void).cxx_destruct;
- (void)dealloc;
- (void)onTapedTIMAIOTopTipBanner;
- (void)gotoSettingVCShowLocationSwitch;
- (void)antiFraudTipsDidClick;
- (void)handleBookTipViewClick;
- (void)showBookReadingBackTipWithTitle:(id)arg1;
- (void)bannerButtonDidClick:(id)arg1 atIndex:(long long)arg2;
- (void)bannerTipViewDidClick:(id)arg1;
- (void)resetPosition;
- (_Bool)isBannerTipViewShowWithTag:(long long)arg1;
- (_Bool)isBannerTipViewShow;
- (void)dismissBannerTipViewWithTag:(long long)arg1;
- (void)dismissBannerTipView;
- (void)showBannerTipView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

