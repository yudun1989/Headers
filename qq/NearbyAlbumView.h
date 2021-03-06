//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <QQMainProject/CycleScrollViewDataSource-Protocol.h>
#import <QQMainProject/CycleScrollViewDelegate-Protocol.h>
#import <QQMainProject/NUSPhotoActionViewDelegate-Protocol.h>
#import <QQMainProject/NearbyNewBaseInfoClickActionDelegate-Protocol.h>
#import <QQMainProject/NearbyNewPagingScrollViewItemDelegate-Protocol.h>
#import <QQMainProject/NearbyVideoAuthSummaryViewDelegate-Protocol.h>
#import <QQMainProject/QUIAlertViewDelegate-Protocol.h>
#import <QQMainProject/UIAlertViewDelegate-Protocol.h>

@class NSArray, NSMutableArray, NSString, NUSPhotoActionView, NUSPlayButton, NearbyAlbumEditView, NearbyAlbumInfoComponent, NearbyBaseInfoView, NearbyBigPhotoHeadView, NearbyCycleScrollView, NearbyNewBaseInfoView, NearbyUserSummaryViewController, NearbyVideoAuthSummaryView, QQAlertView, QQWaitingView, UIAlertView, UIImageView, UIPageControl, USZanLoveAnimationView, UserSummaryZanButton;

@interface NearbyAlbumView : UIView <NUSPhotoActionViewDelegate, UIAlertViewDelegate, QUIAlertViewDelegate, CycleScrollViewDataSource, CycleScrollViewDelegate, NearbyVideoAuthSummaryViewDelegate, NearbyNewBaseInfoClickActionDelegate, NearbyNewPagingScrollViewItemDelegate>
{
    double _offset;
    NearbyUserSummaryViewController *_parentViewController;
    NearbyAlbumInfoComponent *_albumInfoComponent;
    UserSummaryZanButton *_zanButton;
    int _xo;
    NearbyBigPhotoHeadView *_bigPhotoHeadView;
    NearbyBaseInfoView *_baseInfoView;
    NearbyNewBaseInfoView *_newBaseInfoView;
    UIView *_albumTipsView;
    QQWaitingView *_waitingView;
    NearbyCycleScrollView *_pagingScrollView;
    UIPageControl *_pageControl;
    NearbyAlbumEditView *_albumEditView;
    struct CGPoint _longPressOriginPoint;
    struct CGPoint _hitTestingCellOriginCenter;
    _Bool _isScaleBigPhoto;
    _Bool _isScaling;
    UIView *_bgView;
    USZanLoveAnimationView *_zanLoveAnimationView;
    int _alreadyPlayedZanLoveCount;
    _Bool _needStopZanLoveAnimation;
    QQAlertView *_alertView;
    long long _videoDesIndex;
    NUSPlayButton *_playBtn;
    NearbyVideoAuthSummaryView *_videoAuthSummaryView;
    UIImageView *_recZanHint;
    UIAlertView *_alert;
    NSMutableArray *_latestCVInfos;
    NSArray *_marPhotos;
    _Bool _isDownloading;
    _Bool _isDownloadOverTime;
    _Bool _isZanLoveAniForMasterReady;
    _Bool _editing;
    _Bool _videoPickBtnEnable;
    NUSPhotoActionView *_photoActionView;
}

@property(retain, nonatomic) NUSPhotoActionView *photoActionView; // @synthesize photoActionView=_photoActionView;
@property(nonatomic) _Bool videoPickBtnEnable; // @synthesize videoPickBtnEnable=_videoPickBtnEnable;
@property(nonatomic) _Bool editing; // @synthesize editing=_editing;
- (void).cxx_destruct;
- (double)viewHeight;
- (void)onClickItem:(id)arg1;
- (void)adjustScrollViewFrameForNearBy;
- (id)itemsByRow:(long long)arg1;
- (long long)pageNums;
- (void)onFansLabelClicked;
- (void)onFollowsLabelClicked;
- (void)handleCVDownloadComplete:(id)arg1 completeMask:(int)arg2;
- (void)handleCVDownloadOverTime;
- (void)downloadCustomVoteResourceIfNeed:(id)arg1;
- (void)onResponseSummaryNotification:(id)arg1;
- (void)onStartVideoChatNotification:(id)arg1;
- (void)receivedDownloadFailedNotification:(id)arg1;
- (void)onVideoAuthUpdateProfile:(id)arg1;
- (void)jumpToRecordPage;
- (void)onTapVideoAuthSummaryView:(id)arg1 videoAuthModel:(id)arg2 isHost:(_Bool)arg3 isAuth:(_Bool)arg4;
- (void)videoAuthSummaryViewOnLayout:(id)arg1;
- (void)reloadVideoAuthSummaryView;
- (void)loadVideoAuthSummaryView;
- (void)checkRecZanHint;
- (void)checkHintForZanButton:(id)arg1;
- (void)dealloc;
- (void)VCWillDisappear:(id)arg1;
- (void)doZanLoveAnimation:(int)arg1 index:(int)arg2;
- (void)playZanLoveAnimationForMaster;
- (void)playZanLoveAnimtaionForPay;
- (void)playZanLoveAnimtaionForGuest;
- (void)prepareZanLoveAnimtaion:(int)arg1;
- (void)nearbyZanAction:(_Bool)arg1;
- (void)showNearbyZanLimitAlert:(id)arg1 tag:(long long)arg2;
- (void)onZanButtonClick:(id)arg1;
- (void)loadZanButton;
- (void)reloadPayZanButton;
- (void)reloadZanButton;
- (void)onPlayClick:(id)arg1;
- (void)reloadPlayButtonWithZanBtn:(id)arg1 photoActionBtn:(id)arg2;
- (void)loadPlayButtonWithZanRect:(struct CGRect)arg1;
- (void)photoActionViewTrigger:(id)arg1;
- (void)reloadPhotoActionView;
- (void)loadPhotoActionView;
- (void)waitingViewDidStopLoading:(id)arg1;
- (void)waitingViewDidStartLoading:(id)arg1;
- (void)deleteItemIndex:(long long)arg1;
- (void)deleteItemAnimated:(_Bool)arg1;
- (void)setHeadPhoto:(long long)arg1;
- (void)setHeadPhoto;
- (void)removeAlbumTipsView;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)clickBigPhotoIndex:(long long)arg1;
- (void)clickBigPhoto:(id)arg1;
- (id)getEditView;
- (id)getCycleScrollView;
- (id)getCustomHeadAreaView;
- (void)layoutSubviews;
@property(nonatomic) __weak NearbyAlbumInfoComponent *albumInfoComponent; // @dynamic albumInfoComponent;
- (_Bool)isFromFaceScoreWeb;
- (void)showBigCustomHead;
- (void)showBaseInfo:(_Bool)arg1;
- (void)reloadEditView;
- (void)reloadData;
- (void)reloadBaseInfo;
- (void)showLoading;
- (void)showBigPhotoHeadView;
- (void)reloadBigPhotoArea;
@property(nonatomic) double offset; // @dynamic offset;
- (void)setMarPhotos:(id)arg1;
- (void)cycleScrollViewDidEndDecelerating:(id)arg1;
- (void)cycleScrollViewWillBeginDragging:(id)arg1;
- (void)cycleScrollView:(id)arg1 didScrollToItemAtIndex:(long long)arg2;
- (id)CycleScrollView:(id)arg1 viewForItemAtIndex:(long long)arg2;
- (long long)numberOfItemsInCycleScrollView:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 parentViewController:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) __weak NearbyUserSummaryViewController *parentViewController; // @dynamic parentViewController;
@property(readonly) Class superclass;
@property(retain, nonatomic) UserSummaryZanButton *zanButton; // @dynamic zanButton;

@end

