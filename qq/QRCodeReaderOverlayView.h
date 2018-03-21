//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <QQMainProject/ARDelegateForMask-Protocol.h>

@class ARCardPromotion, ARScanLineView, LOTAnimationView, NSString, QQOlympicScanView, UIActivityIndicatorView, UIButton, UIImageView, UILabel;

@interface QRCodeReaderOverlayView : UIView <ARDelegateForMask>
{
    UIView *_customContentView;
    int _QRUItype;
    int _xo;
    _Bool _flag;
    _Bool _isStopAnimation;
    _Bool _QRCodeUINeedHideForStarFace;
    unsigned long long _customUIType;
    UIView *_bgView;
    UILabel *_analyLabel;
    UIActivityIndicatorView *_activityIndicatorView;
    ARScanLineView *_scanRectView;
    UILabel *_tipsLabel;
    LOTAnimationView *_lottieAnimationView;
    UIButton *_lightButton;
    UILabel *_lightLabel;
    _Bool _hasReportTorchOpen;
    _Bool _hasReportTorchClose;
    _Bool _uiNeedHidden;
    LOTAnimationView *_cardIconLottieView;
    UILabel *_arCardLabel;
    int _decodeType;
    ARCardPromotion *_promotion;
    UIButton *_btMYQR;
    UILabel *_loly;
    UIButton *_discoverBtn;
    UIImageView *_questionImgView;
    UIImageView *_borderImgView;
    UILabel *_discoverLab;
    UIImageView *_redPointView;
    QQOlympicScanView *_olyScanView;
    struct CGRect _scanRect;
}

@property(retain, nonatomic) QQOlympicScanView *olyScanView; // @synthesize olyScanView=_olyScanView;
@property(retain, nonatomic) UIImageView *redPointView; // @synthesize redPointView=_redPointView;
@property(retain, nonatomic) UILabel *discoverLab; // @synthesize discoverLab=_discoverLab;
@property(retain, nonatomic) UIImageView *borderImgView; // @synthesize borderImgView=_borderImgView;
@property(retain, nonatomic) UIImageView *questionImgView; // @synthesize questionImgView=_questionImgView;
@property(retain, nonatomic) UIButton *discoverBtn; // @synthesize discoverBtn=_discoverBtn;
@property struct CGRect scanRect; // @synthesize scanRect=_scanRect;
@property(retain, nonatomic) UILabel *loly; // @synthesize loly=_loly;
@property(retain, nonatomic) UIButton *btMYQR; // @synthesize btMYQR=_btMYQR;
@property(nonatomic) int decodeType; // @synthesize decodeType=_decodeType;
@property(nonatomic) __weak ARCardPromotion *promotion; // @synthesize promotion=_promotion;
- (void).cxx_destruct;
- (void)touchesLightCancel:(id)arg1;
- (void)willResignActive;
- (void)touchesLightDown:(id)arg1;
- (void)stopEletricTorchAnimation;
- (void)viewAnimationAlphaValues:(id)arg1 keyTimes:(id)arg2 duration:(double)arg3 view:(id)arg4 animationName:(id)arg5 needHidden:(_Bool)arg6;
- (void)initLightLabelWord:(id)arg1 color:(id)arg2;
- (void)initLightButtonTextOFF:(_Bool)arg1;
- (void)initLightButton;
- (void)onShowElectricTorch:(_Bool)arg1;
- (void)onOnlyRecogModeEnterSuccess;
- (void)onSDKPrepared;
- (void)onSDKNotPrepared;
- (void)onShowTips:(_Bool)arg1;
- (void)onReceiveLost:(int)arg1;
- (void)hideQRCodeUI;
- (void)showQRCodeUI;
- (void)onReceiveRecg:(id)arg1;
@property(nonatomic) int QRUItype; // @dynamic QRUItype;
- (void)addFitToolbar;
- (void)onStarFaceLost;
- (void)hideQRCodeUIAnimation;
- (void)onStarFaceRecg;
- (void)touchesCancle:(id)arg1;
- (void)touchesDown:(id)arg1;
- (void)showMyQRCodeWord;
- (void)stopQuestionShakeAnimation;
- (void)startQuestionShakeAnimation;
- (void)stopBorderAppearAnimation;
- (void)startBorderAppearAnimation;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)stopQuestionAppearAnimation;
- (void)startQuestionAppearAnimation;
- (void)stopDiscoverAnimation;
- (void)startDiscoverAnimation;
- (void)onDiscoverBtnClicked:(id)arg1;
- (void)touchesCancleForDiscover:(id)arg1;
- (void)touchesDownForDiscover:(id)arg1;
- (void)showDiscoverLab;
- (void)createDiscoverWithTarget:(id)arg1 action:(SEL)arg2;
- (void)initFitToolbarWithTarget:(id)arg1 action:(SEL)arg2;
- (void)removeAnalyingView;
- (void)addAnalyingView;
- (void)openGuidePage:(id)arg1;
- (double)getTipLabY;
- (void)viewDidAppear;
- (void)viewWillAppear;
@property(retain, nonatomic) UIView *customContentView; // @dynamic customContentView;
- (void)dealloc;
- (void)initScanRectView;
- (void)initARCardUI;
- (void)initFocusTipsView:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 customUIType:(unsigned long long)arg2 target:(id)arg3 action:(SEL)arg4 isNearFile:(_Bool)arg5 animated:(_Bool)arg6 decodeType:(int)arg7 promotion:(id)arg8;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

