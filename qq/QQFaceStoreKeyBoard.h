//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QQFaceKeyBoard.h>

#import <QQMainProject/QQBannerTipViewDelegate-Protocol.h>
#import <QQMainProject/QQFaceStoreDownloadViewDelegate-Protocol.h>
#import <QQMainProject/QQLoadObserver-Protocol.h>
#import <QQMainProject/UIAlertViewDelegate-Protocol.h>

@class NSString, QQFaceItemAndPageClass, QQFaceTabBar, QQPushBannerView_OSUpgrade;

@interface QQFaceStoreKeyBoard : QQFaceKeyBoard <QQLoadObserver, QQBannerTipViewDelegate, QQFaceStoreDownloadViewDelegate, UIAlertViewDelegate>
{
    QQFaceTabBar *_tabBar;
    QQFaceItemAndPageClass *_leftInfo;
    QQFaceItemAndPageClass *_middleInfo;
    QQFaceItemAndPageClass *_rightInfo;
    int _xo;
    QQFaceItemAndPageClass *_currentPageInfo;
    QQPushBannerView_OSUpgrade *_OSUpgradeBanner;
    id _textDelegate;
}

@property(nonatomic) id textDelegate; // @synthesize textDelegate=_textDelegate;
@property(retain, nonatomic) QQPushBannerView_OSUpgrade *OSUpgradeBanner; // @synthesize OSUpgradeBanner=_OSUpgradeBanner;
@property(retain, nonatomic) QQFaceItemAndPageClass *currentPageInfo; // @synthesize currentPageInfo=_currentPageInfo;
- (void)addQutuSettingButtonOnClick;
- (void)customFaceSettingButtonOnClick;
- (long long)getFacePanelBusinessType:(int)arg1;
- (id)getBusinessDiffPageView:(id)arg1;
- (id)viewWithPageInfo:(id)arg1;
- (id)lastPageInfo:(id)arg1;
- (id)nextPageInfo:(id)arg1;
- (_Bool)isVipOutData:(id)arg1;
- (id)updateViewWithInfo:(id)arg1;
- (id)downloadViewWithInfo:(id)arg1;
- (id)downloadView:(id)arg1;
- (id)storeFrameView:(id)arg1;
- (id)smallEmojiFrameView:(id)arg1;
- (id)magicFrameView;
- (id)systemFrameView;
- (id)emojiFrameView;
- (id)QQFrameVIew;
- (id)customFrameView;
- (id)recommendFrameView:(id)arg1;
- (void)saveEmojiUpdateInfo:(id)arg1;
- (_Bool)isSupportRightDragToGoBack;
- (void)sendDragedFace:(id)arg1;
- (void)onUpdate:(id)arg1;
- (void)onDownload:(id)arg1;
- (void)onCheckDetail:(id)arg1;
- (void)onCancelDownload:(id)arg1;
- (id)gifPathWithQQFaceID:(unsigned long long)arg1;
- (id)imagePathForCell:(id)arg1;
- (void)onFacePanelShowed:(unsigned int)arg1;
- (void)bannerButtonDidClick:(id)arg1 atIndex:(long long)arg2;
- (void)DIYBannerShowView:(id)arg1;
- (void)dealRecommendFramViewShow:(id)arg1 view3:(id)arg2 showingView:(id)arg3;
- (void)loadViewsWithItem:(id)arg1;
- (void)loadPagesWithTabType:(int)arg1;
- (void)loadPagesWithData:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)updateScrollView;
- (void)scrollViewDidScroll:(id)arg1;
- (_Bool)updateTabBar;
- (void)updatePageNumWithDelay:(float)arg1;
- (void)dealData;
- (void)uploadRecommendDisplayInfo:(id)arg1;
- (_Bool)updatePageControl;
- (void)setPageControl;
- (void)setPageControlWithDelay:(double)arg1;
- (void)storeLastTab:(long long)arg1;
- (void)loadLastSelectedTabTo:(long long *)arg1;
- (void)uniLogUpload:(id)arg1;
- (void)dealloc;
- (id)initSystemEmojiKeyBoardWithTabBar:(id)arg1;
- (id)initSmallEmojiKeyBoardWithTabBar:(id)arg1;
- (id)initWithTabBar:(id)arg1;
- (void)onAutoDownloadSucc:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) QQFaceItemAndPageClass *leftInfo; // @dynamic leftInfo;
@property(retain, nonatomic) QQFaceItemAndPageClass *middleInfo; // @dynamic middleInfo;
@property(retain, nonatomic) QQFaceItemAndPageClass *rightInfo; // @dynamic rightInfo;
@property(readonly) Class superclass;

@end

