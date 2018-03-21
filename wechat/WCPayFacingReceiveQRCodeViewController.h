//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCPayBaseViewController.h"

#import "ILinkEventExt-Protocol.h"
#import "IdleTimerUtilExt-Protocol.h"
#import "WCActionSheetDelegate-Protocol.h"
#import "WCPayFacingQRCodeImageViewDelegate-Protocol.h"
#import "WCPayNoticeBannerDelegate-Protocol.h"

@class MMUILabel, NSMutableArray, NSString, RichTextView, UIButton, UIColor, UIImage, UIImageView, UIView, WCPayBannerNotice, WCPayFacingQRCodeImageView, WCUIAlertView;
@protocol WCPayFacingReceiveQRCodeViewControllerDelegate;

@interface WCPayFacingReceiveQRCodeViewController : WCPayBaseViewController <IdleTimerUtilExt, WCPayNoticeBannerDelegate, ILinkEventExt, WCActionSheetDelegate, WCPayFacingQRCodeImageViewDelegate>
{
    UIButton *m_footerButton;
    id <WCPayFacingReceiveQRCodeViewControllerDelegate> m_delegate;
    double _oldBrightness;
    UIView *m_oTotalMoneyView;
    NSMutableArray *m_arrPayerInfoView;
    NSMutableArray *m_arrAnimationedMessageStruct;
    UIImage *m_oQRCodeImage;
    WCPayFacingQRCodeImageView *imageQRCodeBackgroundView;
    RichTextView *balanceRichTextView;
    UIView *m_oTotalMoneyBottomLine;
    NSMutableArray *m_arrPayerBottomLine;
    _Bool bDidBePoed;
    _Bool qrcodeIsAnimated;
    UIButton *toBalanceBtn;
    UIColor *originalBarTintColor;
    double introViewHeight;
    double bannerHeight;
    _Bool _bNeedRemoveReddotFromOtherView;
    WCUIAlertView *_screenShotAlert;
    WCPayBannerNotice *_m_bannerNotice;
    UIImageView *_detailReddotImgView;
    MMUILabel *_detailSubLabel;
}

@property(nonatomic) _Bool bNeedRemoveReddotFromOtherView; // @synthesize bNeedRemoveReddotFromOtherView=_bNeedRemoveReddotFromOtherView;
@property(retain, nonatomic) MMUILabel *detailSubLabel; // @synthesize detailSubLabel=_detailSubLabel;
@property(retain, nonatomic) UIImageView *detailReddotImgView; // @synthesize detailReddotImgView=_detailReddotImgView;
@property(retain, nonatomic) WCPayBannerNotice *m_bannerNotice; // @synthesize m_bannerNotice=_m_bannerNotice;
@property(retain, nonatomic) WCUIAlertView *screenShotAlert; // @synthesize screenShotAlert=_screenShotAlert;
@property(retain, nonatomic) WCPayFacingQRCodeImageView *imageQRCodeBackgroundView; // @synthesize imageQRCodeBackgroundView;
- (void).cxx_destruct;
- (id)genDetailEnteranceViewWithNeedBottomCorner:(_Bool)arg1;
- (id)getBizF2FHeadImageViewWithImageSize:(struct CGSize)arg1;
- (void)saveReceiveCodeImgToAlbumFromAlert;
- (void)userDidTakeScreenshot:(id)arg1;
- (void)showOpenSystemPushSoundTips;
- (void)showSetPushSoundResultSuccess:(_Bool)arg1 soundStatus:(_Bool)arg2;
- (void)reportLocation;
- (id)getNoticeBanner;
- (void)banner:(id)arg1 clickWithUrl:(id)arg2;
- (_Bool)useTransparentNavibar;
- (void)onIdleTimerUtilVoipQuit;
- (void)OnWCPayFacingQRCodeImageViewSaveButtonDone;
- (void)saveQRCodeImageButtonPress;
- (id)getSaveAlbumImageView;
- (id)getNewSaveAlbumImageView;
- (id)getLocalSaveAlbumImageViewV2;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)showActionList;
- (void)onClickToReceiveDetailButton;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)ShowPayerStartedPayMoneyAnimation:(id)arg1 OnlyChangedOldCell:(_Bool)arg2;
- (void)insertNewView:(id)arg1;
- (void)ShowReceivedMoneyAnimation:(id)arg1;
- (void)EndReceivedMoneyAnimation:(id)arg1;
- (void)RemoveMessageStructAndShowedMoney:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)refreshViewWithData:(id)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidBeDismissed:(_Bool)arg1;
- (void)viewDidBePresented:(_Bool)arg1;
- (void)viewDidBePoped:(_Bool)arg1;
- (void)viewDidBePushed:(_Bool)arg1;
- (void)viewDidLoad;
- (void)reloadTableView;
- (void)onRightBarButtonClick;
- (void)initNavigationBar;
- (void)OnLeftBarButtonDone;
- (id)getActionBarView;
- (void)initHeaderView;
- (id)getDisplayTruthNameInfo;
- (id)getDisplayNameInfo;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

