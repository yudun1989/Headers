//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QQAIORichImageCellView.h>

#import <QQMainProject/UIAlertViewDelegate-Protocol.h>

@class CAGradientLayer, CALayer, CAShapeLayer, FAModel, NSString, QQAIOFileImgModel, QQAIOVideoCellTipsView, QQAnimatedRevealMaskView, QQTwinkleCircleProgressView, UILabel, UITextView, UIView;

@interface QQAIOFileImageCellView : QQAIORichImageCellView <UIAlertViewDelegate>
{
    UIView *_infoView;
    UITextView *_nameTextView;
    UILabel *_sizeLabel;
    CAGradientLayer *_infoMaskLayer;
    QQAIOVideoCellTipsView *_failTipsView;
    QQAIOFileImgModel *_fRichModel;
    FAModel *_fileModel;
    FAModel *_wyModel;
    QQTwinkleCircleProgressView *_progressView;
    QQAnimatedRevealMaskView *_revealMaskView;
    struct CGPoint _thumbCenter;
    CALayer *_highlightLayer;
    CAShapeLayer *_borderLayer;
    NSString *_gifFilePath;
}

@property(retain, nonatomic) NSString *gifFilePath; // @synthesize gifFilePath=_gifFilePath;
- (double)bubbleTailOffset;
- (void)showMask:(_Bool)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)setProgress:(double)arg1 animated:(_Bool)arg2;
- (void)showProgress:(_Bool)arg1 animated:(_Bool)arg2;
- (void)showLoadingView:(_Bool)arg1;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)internalResendFile;
- (void)onFailButtonClick;
- (void)menuActionCancelSendImage:(id)arg1;
- (void)menuActionSendToPC:(id)arg1;
- (void)menuActionRecall:(id)arg1;
- (void)menuActionCollect:(id)arg1;
- (void)alertViewClicked:(long long)arg1;
- (void)onSavetoWeiYunRes:(id)arg1;
- (void)saveFileToWeiyun;
- (id)getBaseChatViewController;
- (void)menuActionSendToWY:(id)arg1;
- (void)forwardFile;
- (void)menuActionForwardTo:(id)arg1;
- (id)getMenuItems;
- (void)onStatusChange:(id)arg1;
- (void)onThumbnailDone:(_Bool)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)hideFailTipsView;
- (void)showFailTipsViewWithTip:(id)arg1 image:(id)arg2;
- (void)loadGIF;
- (_Bool)showFileSize;
- (void)drawFileInfo;
- (struct CGRect)visibleImageFrame;
- (void)updateUI:(_Bool)arg1;
- (void)drawContent:(struct CGRect)arg1;
- (_Bool)shouldDrawTail;
- (id)bubbleMask:(struct CGRect)arg1 isSelf:(_Bool)arg2;
- (void)updateBorderLayer:(_Bool)arg1;
- (void)willDrawBubble;
- (void)willDrawBubbleSubViews;
- (_Bool)shouldDisplayMsgSendFail;
- (_Bool)shouldDisplayMsgSendLoading;
- (void)adjustRichCellViewPaopao;
- (void)updateThumbView;
- (void)loadThumb;
- (void)layoutViewsAsSender;
- (void)layoutViewsAsReceiver;
- (void)drawCellView;
- (void)prepareForReuse;
- (void)setHighlighted:(_Bool)arg1;
- (void)viewDidAppear;
- (id)getChatImageMetaInfo;
- (void)setAioModel:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 chatViewTable:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

