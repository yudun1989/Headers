//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <QQMainProject/UIScrollViewDelegate-Protocol.h>

@class ClickRecordViewController, NSString, QQBaseChatViewController, QQCircleWaveNotifyView, QQMaskView, QQPushToTalkView, UIActivityIndicatorView, UIButton, UIImageView, UIScrollView;

@interface QQAudioInputView : UIView <UIScrollViewDelegate>
{
    UIScrollView *_contentView;
    UIImageView *_pageDot;
    UIButton *_leftPageButton;
    UIButton *_middlePageButton;
    UIButton *_rightPageButton;
    ClickRecordViewController *_normalRecordViewController;
    ClickRecordViewController *_voiceChangeRecordViewController;
    QQPushToTalkView *_pttView;
    UIActivityIndicatorView *_indicator;
    long long _currentPage;
    _Bool _onlyShowPttView;
    int _xo;
    QQBaseChatViewController *_chatViewController;
    QQMaskView *_maskView;
    QQCircleWaveNotifyView *_babyQNotifyView;
}

@property(nonatomic) _Bool onlyShowPttView; // @synthesize onlyShowPttView=_onlyShowPttView;
@property(nonatomic) long long currentPage; // @synthesize currentPage=_currentPage;
- (void)onlyShowPttView:(_Bool)arg1;
- (void)checkShowedBabyQNotify;
- (void)hideBabyQNotify;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)dismissNewRedPoint;
- (void)configAccessibilityLabelForPageButtons:(id)arg1;
- (void)scrollToPage:(long long)arg1;
- (long long)currentDisplayPage;
- (void)showVoiceChangePanel;
- (void)unBlockMask;
- (void)blockMask;
- (void)bringMaskViewToFrontIfNeeded;
- (void)onHideMask;
- (void)onShowMask;
- (void)hideMask;
- (void)showMask;
- (void)scrollViewDidScroll:(id)arg1;
- (_Bool)isSupportRightDragToGoBack;
- (void)onRightPageButtonClick;
- (void)onMiddlePageButtonClick;
- (void)onLeftPageButtonClick;
- (void)createRootScrollView;
- (void)stopAnimation;
- (void)showAnimation;
- (void)unregisterNotification;
- (void)registerNotification;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 chatViewController:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) ClickRecordViewController *normalRecordViewController; // @dynamic normalRecordViewController;
@property(retain, nonatomic) QQPushToTalkView *pttView; // @dynamic pttView;
@property(readonly) Class superclass;
@property(retain, nonatomic) ClickRecordViewController *voiceChangeRecordViewController; // @dynamic voiceChangeRecordViewController;

@end

