//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "KSLiveBaseAnchorViewController.h"

#import "KSVideoImageFullScreenViewControllerDelegate-Protocol.h"

@class KSFadeAnimation, KSLiveAnchorViewModel, KSNavAlertView, NSString, UIButton, UIImageView, UILabel, UIScrollView, UITapGestureRecognizer;

@interface KSLiveEndAnchorViewController : KSLiveBaseAnchorViewController <KSVideoImageFullScreenViewControllerDelegate>
{
    double _animationProgress;
    _Bool _viewDidAppeared;
    KSLiveAnchorViewModel *_liveAnchorViewModel;
    UIScrollView *_contentScrollView;
    UIImageView *_backgroundImageView;
    UIImageView *_liveCoverImageView;
    UIButton *_shareButton;
    UILabel *_endTitleLabel;
    UILabel *_yellowDiamondTitleLabel;
    UILabel *_yellowDiamondNumberLabel;
    UILabel *_giftTitleLabel;
    UILabel *_giftNumberLabel;
    UILabel *_redPacketLabel;
    UILabel *_redPacketNumberLabel;
    UILabel *_audienceTitleLabel;
    UILabel *_audienceNumberLabel;
    UILabel *_likeTitleLabel;
    UILabel *_likeNumberLabel;
    UILabel *_liveDurationTitleLabel;
    UILabel *_liveDurationNumberLabel;
    UIButton *_doneButton;
    KSFadeAnimation *_fadeAnimation;
    UIButton *_walletButton;
    UITapGestureRecognizer *_tapImageGesture;
    UIImageView *_previewView;
    KSNavAlertView *_navAlertView;
}

@property(nonatomic) _Bool viewDidAppeared; // @synthesize viewDidAppeared=_viewDidAppeared;
@property(retain, nonatomic) KSNavAlertView *navAlertView; // @synthesize navAlertView=_navAlertView;
@property(retain, nonatomic) UIImageView *previewView; // @synthesize previewView=_previewView;
@property(retain, nonatomic) UITapGestureRecognizer *tapImageGesture; // @synthesize tapImageGesture=_tapImageGesture;
@property(retain, nonatomic) UIButton *walletButton; // @synthesize walletButton=_walletButton;
@property(retain, nonatomic) KSFadeAnimation *fadeAnimation; // @synthesize fadeAnimation=_fadeAnimation;
@property(retain, nonatomic) UIButton *doneButton; // @synthesize doneButton=_doneButton;
@property(retain, nonatomic) UILabel *liveDurationNumberLabel; // @synthesize liveDurationNumberLabel=_liveDurationNumberLabel;
@property(retain, nonatomic) UILabel *liveDurationTitleLabel; // @synthesize liveDurationTitleLabel=_liveDurationTitleLabel;
@property(retain, nonatomic) UILabel *likeNumberLabel; // @synthesize likeNumberLabel=_likeNumberLabel;
@property(retain, nonatomic) UILabel *likeTitleLabel; // @synthesize likeTitleLabel=_likeTitleLabel;
@property(nonatomic) __weak UILabel *audienceNumberLabel; // @synthesize audienceNumberLabel=_audienceNumberLabel;
@property(nonatomic) __weak UILabel *audienceTitleLabel; // @synthesize audienceTitleLabel=_audienceTitleLabel;
@property(retain, nonatomic) UILabel *redPacketNumberLabel; // @synthesize redPacketNumberLabel=_redPacketNumberLabel;
@property(retain, nonatomic) UILabel *redPacketLabel; // @synthesize redPacketLabel=_redPacketLabel;
@property(retain, nonatomic) UILabel *giftNumberLabel; // @synthesize giftNumberLabel=_giftNumberLabel;
@property(retain, nonatomic) UILabel *giftTitleLabel; // @synthesize giftTitleLabel=_giftTitleLabel;
@property(retain, nonatomic) UILabel *yellowDiamondNumberLabel; // @synthesize yellowDiamondNumberLabel=_yellowDiamondNumberLabel;
@property(retain, nonatomic) UILabel *yellowDiamondTitleLabel; // @synthesize yellowDiamondTitleLabel=_yellowDiamondTitleLabel;
@property(retain, nonatomic) UILabel *endTitleLabel; // @synthesize endTitleLabel=_endTitleLabel;
@property(retain, nonatomic) UIButton *shareButton; // @synthesize shareButton=_shareButton;
@property(retain, nonatomic) UIImageView *liveCoverImageView; // @synthesize liveCoverImageView=_liveCoverImageView;
@property(retain, nonatomic) UIImageView *backgroundImageView; // @synthesize backgroundImageView=_backgroundImageView;
@property(retain, nonatomic) UIScrollView *contentScrollView; // @synthesize contentScrollView=_contentScrollView;
@property(retain, nonatomic) KSLiveAnchorViewModel *liveAnchorViewModel; // @synthesize liveAnchorViewModel=_liveAnchorViewModel;
- (void).cxx_destruct;
- (long long)preferredStatusBarStyle;
- (id)layoutReferViewForComponent:(id)arg1;
- (id)containerViewForComponent:(id)arg1;
- (void)addComponent:(id)arg1;
- (struct CGSize)sizeForVideoImageFullScreenViewController:(id)arg1 ofTargetView:(id)arg2;
- (_Bool)ks_shouldHandleBackPanGestureRecognizer:(id)arg1;
- (id)ks_navigationController:(id)arg1 animationControllerForOperation:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4;
- (void)didTapShareButton:(id)arg1;
- (void)didTapDoneButton:(id)arg1;
- (void)didClickWalletButton:(id)arg1;
- (_Bool)ks_showNavigationAlert:(id)arg1 type:(unsigned long long)arg2 duration:(id)arg3;
- (id)navButtonWithImage:(id)arg1 highlightImage:(id)arg2 action:(SEL)arg3;
- (void)videoImageFullScreenViewControllerDidClickedBackground:(id)arg1;
- (void)setupUI;
- (void)layoutLabels:(id)arg1 underLiveView:(id)arg2;
- (id)addTitleLabelWithTitle:(id)arg1;
- (id)addNumLabel;
- (id)addLineView;
- (void)updateLabels;
- (void)animationNumberChanges;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
