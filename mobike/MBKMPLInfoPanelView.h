//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class MBKBoardAccessoryView, MBKExpandSwitchView, MBKMarketPanel, MBKParkLotPanel, MBKRedPackageInstructionPanelView, MBKRedPacketHotHintParkLotPanel, MBKSpockPane, MSWeakTimer, NSNumber, NSString;

@interface MBKMPLInfoPanelView : UIView
{
    UIView *_autolayoutContiner;
    NSNumber *_hiddenAppearAnimationDuration;
    MBKExpandSwitchView *_container;
    MBKRedPackageInstructionPanelView *_redPackageInstructionPanel;
    MBKBoardAccessoryView *_awardedParkingInstructionPanel;
    MBKParkLotPanel *_parkLotPanel;
    MBKMarketPanel *_marketPanel;
    MBKRedPacketHotHintParkLotPanel *_redPacketHotHintParkLotPanel;
    MBKBoardAccessoryView *_bikeNeededPointPanel;
    MBKBoardAccessoryView *_giftBoxPanel;
    MBKSpockPane *_spockPanel;
    MSWeakTimer *_timer;
    long long _timeCount;
    NSString *_giftPanelUrl;
}

@property(retain, nonatomic) NSString *giftPanelUrl; // @synthesize giftPanelUrl=_giftPanelUrl;
@property(nonatomic) long long timeCount; // @synthesize timeCount=_timeCount;
@property(retain, nonatomic) MSWeakTimer *timer; // @synthesize timer=_timer;
@property(retain, nonatomic) MBKSpockPane *spockPanel; // @synthesize spockPanel=_spockPanel;
@property(retain, nonatomic) MBKBoardAccessoryView *giftBoxPanel; // @synthesize giftBoxPanel=_giftBoxPanel;
@property(retain, nonatomic) MBKBoardAccessoryView *bikeNeededPointPanel; // @synthesize bikeNeededPointPanel=_bikeNeededPointPanel;
@property(retain, nonatomic) MBKRedPacketHotHintParkLotPanel *redPacketHotHintParkLotPanel; // @synthesize redPacketHotHintParkLotPanel=_redPacketHotHintParkLotPanel;
@property(retain, nonatomic) MBKMarketPanel *marketPanel; // @synthesize marketPanel=_marketPanel;
@property(retain, nonatomic) MBKParkLotPanel *parkLotPanel; // @synthesize parkLotPanel=_parkLotPanel;
@property(retain, nonatomic) MBKBoardAccessoryView *awardedParkingInstructionPanel; // @synthesize awardedParkingInstructionPanel=_awardedParkingInstructionPanel;
@property(retain, nonatomic) MBKRedPackageInstructionPanelView *redPackageInstructionPanel; // @synthesize redPackageInstructionPanel=_redPackageInstructionPanel;
@property(retain, nonatomic) MBKExpandSwitchView *container; // @synthesize container=_container;
@property(retain, nonatomic) NSNumber *hiddenAppearAnimationDuration; // @synthesize hiddenAppearAnimationDuration=_hiddenAppearAnimationDuration;
@property(nonatomic) __weak UIView *autolayoutContiner; // @synthesize autolayoutContiner=_autolayoutContiner;
- (void).cxx_destruct;
- (void)redPacketStopClicked;
- (void)giftBoxPanelClicked;
- (void)didTapAwardedParkingInstructionPanel;
- (id)generateBikeNeededPointPanel;
- (id)generateAwardedParkingInstructionPanel;
- (void)show:(id)arg1;
- (void)hidePanel;
- (void)showRedpecketInfo;
- (void)updateProgress;
- (void)showMPLInfo:(id)arg1;
@property(readonly, nonatomic) _Bool isContentVisible;
- (id)initWithAutolayoutContainer:(id)arg1;

@end

