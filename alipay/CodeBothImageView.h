//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "OSPChannelDlgDelegate-Protocol.h"

@class AUActionSheetAnimation, NSString, OSPBarcodeView, OSPChannelCtr, QRCodeImageView, UIImageView, UILabel;

@interface CodeBothImageView : UIView <OSPChannelDlgDelegate>
{
    UIImageView *backgroundImgView;
    UIView *channelBgView;
    OSPBarcodeView *_barcodeImageView;
    QRCodeImageView *_qrcodeImageView;
    AUActionSheetAnimation *_payChannelPage;
    OSPChannelCtr *_channelCtr;
    UILabel *_descLabel;
    OSPChannelCtr *_shortcutBtn;
}

@property(retain, nonatomic) OSPChannelCtr *shortcutBtn; // @synthesize shortcutBtn=_shortcutBtn;
@property(retain, nonatomic) UILabel *descLabel; // @synthesize descLabel=_descLabel;
@property(retain, nonatomic) OSPChannelCtr *channelCtr; // @synthesize channelCtr=_channelCtr;
@property(retain, nonatomic) AUActionSheetAnimation *payChannelPage; // @synthesize payChannelPage=_payChannelPage;
@property(retain, nonatomic) QRCodeImageView *qrcodeImageView; // @synthesize qrcodeImageView=_qrcodeImageView;
@property(retain, nonatomic) OSPBarcodeView *barcodeImageView; // @synthesize barcodeImageView=_barcodeImageView;
- (void).cxx_destruct;
- (void)dealloc;
- (void)onClose;
- (void)setDescTips:(id)arg1;
- (void)removeFloatDlg;
- (void)onShortcutBtnClick;
- (void)showPayChannelPage;
- (void)setPreChannelModel:(id)arg1;
- (void)removeFullCode;
- (void)updateWithCode:(id)arg1;
- (void)setPayChannelDisplay:(_Bool)arg1;
- (void)setShortcutModel:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

