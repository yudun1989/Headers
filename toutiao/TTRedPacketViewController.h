//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SSViewControllerBase.h"

#import "CAAnimationDelegate-Protocol.h"
#import "TTRedPacketViewWrapperDelegate-Protocol.h"

@class FRRedpackStructModel, FRRedpacketOpenResultStructModel, NSString, SSThemedButton, SSThemedLabel, SSThemedView, TTRedPacketTrackModel, TTRedPacketViewWrapper, UIImage, UIImageView, UITapGestureRecognizer, UIViewController;

@interface TTRedPacketViewController : SSViewControllerBase <CAAnimationDelegate, TTRedPacketViewWrapperDelegate>
{
    _Bool _expand;
    UIImage *_backingImage;
    TTRedPacketViewWrapper *_innerWrapper;
    SSThemedView *_customNaviBar;
    SSThemedView *_redPacketInformationView;
    SSThemedLabel *_nameLabel;
    SSThemedLabel *_descriptionLabel;
    SSThemedLabel *_moneyLabel;
    SSThemedButton *_withdrawButton;
    SSThemedButton *_redPacketRuleButton;
    SSThemedLabel *_hasFollowedLabel;
    FRRedpackStructModel *_redpacket;
    long long _style;
    TTRedPacketTrackModel *_trackModel;
    FRRedpacketOpenResultStructModel *_resultData;
    UIViewController *_fromController;
    UIImageView *_screenShotImageView;
    long long _originBarStyle;
    UITapGestureRecognizer *_bottomRecognier;
}

@property(retain, nonatomic) UITapGestureRecognizer *bottomRecognier; // @synthesize bottomRecognier=_bottomRecognier;
@property(nonatomic) long long originBarStyle; // @synthesize originBarStyle=_originBarStyle;
@property(nonatomic) _Bool expand; // @synthesize expand=_expand;
@property(retain, nonatomic) UIImageView *screenShotImageView; // @synthesize screenShotImageView=_screenShotImageView;
@property(nonatomic) __weak UIViewController *fromController; // @synthesize fromController=_fromController;
@property(retain, nonatomic) FRRedpacketOpenResultStructModel *resultData; // @synthesize resultData=_resultData;
@property(retain, nonatomic) TTRedPacketTrackModel *trackModel; // @synthesize trackModel=_trackModel;
@property(nonatomic) long long style; // @synthesize style=_style;
@property(retain, nonatomic) FRRedpackStructModel *redpacket; // @synthesize redpacket=_redpacket;
@property(retain, nonatomic) SSThemedLabel *hasFollowedLabel; // @synthesize hasFollowedLabel=_hasFollowedLabel;
@property(retain, nonatomic) SSThemedButton *redPacketRuleButton; // @synthesize redPacketRuleButton=_redPacketRuleButton;
@property(retain, nonatomic) SSThemedButton *withdrawButton; // @synthesize withdrawButton=_withdrawButton;
@property(retain, nonatomic) SSThemedLabel *moneyLabel; // @synthesize moneyLabel=_moneyLabel;
@property(retain, nonatomic) SSThemedLabel *descriptionLabel; // @synthesize descriptionLabel=_descriptionLabel;
@property(retain, nonatomic) SSThemedLabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) SSThemedView *redPacketInformationView; // @synthesize redPacketInformationView=_redPacketInformationView;
@property(retain, nonatomic) SSThemedView *customNaviBar; // @synthesize customNaviBar=_customNaviBar;
@property(retain, nonatomic) TTRedPacketViewWrapper *innerWrapper; // @synthesize innerWrapper=_innerWrapper;
@property(retain, nonatomic) UIImage *backingImage; // @synthesize backingImage=_backingImage;
- (void).cxx_destruct;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)redPacketClickAvatar;
- (void)redPacketClickRules;
- (void)redPacketClickOpenButton;
- (void)redPacketClickCloseButton;
- (id)obtainBottomFollowText;
- (void)bottomRecognierTap:(id)arg1;
- (void)onClickRedPacketRuleButton:(id)arg1;
- (void)onClickWithDrawButton:(id)arg1;
- (void)requestOpenRedPacketWithLogin:(_Bool)arg1;
- (void)showBackgroundImage;
- (void)checkUserLoginState;
- (void)showRedPacketDetail;
- (void)expandRedPacket;
- (void)backButtonClicked;
- (void)setupRedPacketInformationView;
- (void)setupCustomNavigationBar;
- (void)dealloc;
- (void)customThemeChanged:(id)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)ontaps:(id)arg1;
- (void)viewDidLoad;
- (id)initWithStyle:(long long)arg1 redpacket:(id)arg2 track:(id)arg3 viewController:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

