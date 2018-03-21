//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSDictionary, NSMutableArray, NSTimer, QZCFrameAnimationView, QZCImageView, QZJAdBannerMultiBanner, QZVideoPlayerView, QZVideoSectionInfo, UIImageView;
@protocol QZQZLiveSquareViewDelegate;

@interface QZLiveSquareView : UIView
{
    int _xo;
    double _cellBgAlpha;
    unsigned long long _type;
    QZJAdBannerMultiBanner *_liveInfo;
    QZCImageView *_coverView;
    UIView *_blurView;
    QZVideoPlayerView *_playerView;
    QZVideoSectionInfo *_sectionInfo;
    double _startPlayTime;
    _Bool _isStartPlay;
    _Bool _playIsTerminated;
    NSTimer *_timer;
    NSTimer *_waitingTimer;
    UIImageView *_liveLogoView;
    UIImageView *_playIcon;
    QZCFrameAnimationView *_soundDynamicEffectIcon;
    NSMutableArray *_animImagePaths;
    id <QZQZLiveSquareViewDelegate> _playerDelegate;
    _Bool _isReportedSeq0;
    _Bool _canReportSeq1;
    double _currentPlayTime;
    NSDictionary *_reportDic;
}

- (_Bool)stringIsInBlackList:(id)arg1;
- (unsigned long long)createPlayID;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *animImagePaths; // @dynamic animImagePaths;
@property(retain, nonatomic) UIView *blurView; // @dynamic blurView;
@property(retain, nonatomic) QZCImageView *coverView; // @dynamic coverView;
@property(retain, nonatomic) QZJAdBannerMultiBanner *liveInfo; // @dynamic liveInfo;
@property(retain, nonatomic) UIImageView *liveLogoView; // @dynamic liveLogoView;
@property(retain, nonatomic) UIImageView *playIcon; // @dynamic playIcon;
@property(retain, nonatomic) QZVideoPlayerView *playerView; // @dynamic playerView;
@property(retain, nonatomic) QZVideoSectionInfo *sectionInfo; // @dynamic sectionInfo;
@property(retain, nonatomic) QZCFrameAnimationView *soundDynamicEffectIcon; // @dynamic soundDynamicEffectIcon;

@end

