//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PPChatBaseController.h"

#import "UIActionSheetDelegate-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"

@class AUQRCodeView, NSString, PPChatSetting, UIImage;

@interface PPChatQRCodeController : PPChatBaseController <UIActionSheetDelegate, UIGestureRecognizerDelegate>
{
    _Bool _isLoading;
    _Bool _isViewAppeared;
    PPChatSetting *_publicAccount;
    UIImage *_qrImage;
    AUQRCodeView *_auQrView;
}

@property(retain, nonatomic) AUQRCodeView *auQrView; // @synthesize auQrView=_auQrView;
@property(nonatomic) _Bool isViewAppeared; // @synthesize isViewAppeared=_isViewAppeared;
@property(nonatomic) _Bool isLoading; // @synthesize isLoading=_isLoading;
@property(retain, nonatomic) UIImage *qrImage; // @synthesize qrImage=_qrImage;
@property(retain, nonatomic) PPChatSetting *publicAccount; // @synthesize publicAccount=_publicAccount;
- (void).cxx_destruct;
- (void)actionSheet:(id)arg1 didDismissWithButtonIndex:(long long)arg2;
- (void)image:(id)arg1 didFinishSavingWithError:(id)arg2 contextInfo:(void *)arg3;
- (void)saveToAlbum;
- (void)showActionSheet;
- (void)onZhiButtonClicked:(id)arg1;
- (void)onQrCodeImageLongPressed:(id)arg1;
- (void)onRightBarButtonClicked;
- (void)initUI;
- (void)checkHUD;
- (void)viewDidAppear:(_Bool)arg1;
- (void)showRetry;
- (void)loadImage;
- (void)viewDidLoad;
- (id)initWithPublicAccount:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

