//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/FullScreenVideoTableViewCell.h>

#import <QQMainProject/FullVideoStateViewDelegate-Protocol.h>
#import <QQMainProject/QQReadInJoyVideoCellShareDelegate-Protocol.h>
#import <QQMainProject/QQReadInJoyVideoViewDelegate-Protocol.h>
#import <QQMainProject/UICollectionViewDataSource-Protocol.h>
#import <QQMainProject/UICollectionViewDelegate-Protocol.h>

@class NSString, QQReadInJoyVideoView, UIButton, UICollectionView;
@protocol BarrageWebViewDelegate, FullScreenPublicVideoCellDelegate;

@interface FullScreenPublicVideoTableViewCell : FullScreenVideoTableViewCell <QQReadInJoyVideoCellShareDelegate, QQReadInJoyVideoViewDelegate, FullVideoStateViewDelegate, UICollectionViewDataSource, UICollectionViewDelegate>
{
    _Bool _reloadVideoSouce;
    _Bool _needHintTip;
    QQReadInJoyVideoView *_videoView;
    UIButton *_followButton;
    CDUnknownBlockType _followCompletion;
    UICollectionView *_labelsCollectionView;
    id <BarrageWebViewDelegate> _barrageViewdelegate;
    id <FullScreenPublicVideoCellDelegate> _publicVideoCellDelegate;
}

@property(nonatomic) _Bool needHintTip; // @synthesize needHintTip=_needHintTip;
@property(nonatomic) __weak id <FullScreenPublicVideoCellDelegate> publicVideoCellDelegate; // @synthesize publicVideoCellDelegate=_publicVideoCellDelegate;
@property(nonatomic) __weak id <BarrageWebViewDelegate> barrageViewdelegate; // @synthesize barrageViewdelegate=_barrageViewdelegate;
@property(nonatomic, getter=isReloadVideoSouce) _Bool reloadVideoSouce; // @synthesize reloadVideoSouce=_reloadVideoSouce;
@property(retain, nonatomic) UICollectionView *labelsCollectionView; // @synthesize labelsCollectionView=_labelsCollectionView;
@property(copy, nonatomic) CDUnknownBlockType followCompletion; // @synthesize followCompletion=_followCompletion;
@property(retain, nonatomic) UIButton *followButton; // @synthesize followButton=_followButton;
@property(retain, nonatomic) QQReadInJoyVideoView *videoView; // @synthesize videoView=_videoView;
- (void).cxx_destruct;
- (void)report8AD0;
- (void)report8ACF;
- (void)report8ACE;
- (void)report8ACD;
- (id)getReportDictionary;
- (id)getvideoDebugInfo;
- (void)mediaPlayer:(id)arg1 didChangeStateTo:(int)arg2;
- (void)barrageViewPlayStateChange:(int)arg1;
- (void)mediaPlayer:(id)arg1 progressUpdated:(double)arg2 duration:(double)arg3;
- (void)onPlayVideoErrorWithErrorCode:(long long)arg1;
- (void)playerView:(id)arg1 parentView:(id)arg2 onEnterFullScreen:(_Bool)arg3;
- (void)onNatureSizeLoaded:(struct CGSize)arg1;
- (void)onEndPlayVideo;
- (void)onStopPlayVideo:(double)arg1 currentImage:(id)arg2 articleID:(unsigned long long)arg3;
- (void)onStopPlayVideo:(double)arg1 currentImage:(id)arg2;
- (void)hiddenTitleLabel:(_Bool)arg1 animation:(_Bool)arg2;
- (void)hitTestStageView:(_Bool)arg1;
- (void)onStartPlayVideo;
- (_Bool)shouldPlayVideo:(id)arg1;
- (void)onStateViewHidden:(_Bool)arg1;
- (void)onSliderEndSeek;
- (void)volumnButtonDidSelect:(_Bool)arg1;
- (void)zoomButtonDidSelect:(_Bool)arg1;
- (void)onViewDoubleTap;
- (void)onPlayButtonDidClick:(id)arg1;
- (void)onViewSingleTap;
- (void)tapOnLikeButton:(id)arg1;
- (_Bool)shouldActiveFullScreen;
- (void)dismissBiuGuidanceAnimated:(_Bool)arg1;
- (void)showBiuGuidance;
- (void)showVideoInfo;
- (void)setVideoCoverContentMode:(long long)arg1;
- (void)setVideoGravityMode:(id)arg1;
- (void)setStateViewHidden:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setStateViewHidden;
- (void)setCenterButtonSelected:(_Bool)arg1;
- (_Bool)isPlayingVideo;
- (void)stopVideo;
- (void)pauseVideo;
- (void)resumePlayVideo;
- (void)setVideoPlayMode:(int)arg1;
- (void)playVideo;
- (void)followButtonDidClick:(id)arg1;
- (void)updateFollow;
- (void)setVideoTitlePlayCount;
- (void)setCommentCount:(unsigned long long)arg1;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)setCellStyle:(unsigned long long)arg1;
- (void)initVideoView:(id)arg1;
- (void)setCellModel:(id)arg1;
- (_Bool)shouldResponseToLongPress;
- (_Bool)canDelayGetNick;
- (void)resetVideoView:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)setFullScreen:(_Bool)arg1;
- (id)getVideoviewInfo;
- (id)getVideoInnerId;
- (id)getVideoId;
- (int)getVideoState;
- (void)setBarrageViewDelegate:(id)arg1;
- (id)getBarrageViewParent;
- (double)getVideoPlayTime;
- (double)getVideoWatchTime;
- (double)getVideoTotalTime;
- (double)getCurrentVolum;
- (struct CGSize)getVideoSize;
- (void)setMuted:(_Bool)arg1;
- (_Bool)isStateViewSelected;
- (id)getVideoStateView;
- (id)getVideoTitle;
- (id)getVideoView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

