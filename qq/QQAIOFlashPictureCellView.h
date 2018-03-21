//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QQAIOCommonCellView.h>

@class QQAIOFlashPictureModel, UIImageView, UILabel, UIView;

@interface QQAIOFlashPictureCellView : QQAIOCommonCellView
{
    UIImageView *_maskImageView;
    UIView *_maskLoadingView;
    UIImageView *_bubbleImageView;
    UIImageView *_mosaicImageView;
    UIImageView *_defaultGrayImageView;
    UIImageView *_defaultWhiteImageView;
    UILabel *_defaultLabel;
    unsigned long long _currentState;
    unsigned long long _retryRefreshCount;
    QQAIOFlashPictureModel *_model;
}

- (void).cxx_destruct;
- (void)showFailImage;
- (void)showMosaicImageWithPath:(id)arg1;
- (void)setImageViewWithMessageModel:(id)arg1;
- (_Bool)isValidForTumbnailPicType:(id)arg1;
- (void)handleImageDownloadStateNotification:(id)arg1;
- (void)onMsgStateChange:(id)arg1;
- (struct CGRect)GetImageRect;
- (struct CGRect)getFlashImageRect;
- (void)hidePopupMenu;
- (void)showPopupMenu;
- (id)getMenuItems;
- (void)setProgressState;
- (void)preparePaopao:(id)arg1;
- (struct CGRect)GetFailIconRect;
- (_Bool)flashImageExist:(id)arg1;
- (_Bool)shouldDisplayMsgSendLoading;
- (struct CGRect)frameForMsgSendFail;
- (_Bool)shouldDisplayMsgSendFail;
- (void)willDrawBubble;
- (void)hideLoadingAnimaiton;
- (void)showLoadingAnimaiton;
- (id)pGetFlashThumbPicPathForAIO:(id)arg1;
- (void)setBubbleColor:(id)arg1;
- (void)drawBubble;
- (void)downloadGroupImg;
- (void)showThumailImage;
- (void)layoutViewsAsSender;
- (void)layoutViewsAsReceiver;
- (id)backgroundImageWithColor:(id)arg1 inOrOUt:(_Bool)arg2;
- (void)showFlashpicPreviewedImage;
- (void)resetFlashPicturePreviewed;
- (void)layoutViewWithState:(unsigned long long)arg1;
- (void)setAioModel:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 chatViewTable:(id)arg2;

@end

