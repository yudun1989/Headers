//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, TBMPBPlayerOptions, TBMPBPlayerView, UIImageView;

@interface TBLiveGoodsVideoPlayer : UIView
{
    NSString *_accountId;
    NSString *_videoId;
    NSString *_feedId;
    _Bool _playerAutoPlay;
    NSString *_recommendType;
    UIView *_replayView;
    UIView *_errorView;
    TBMPBPlayerView *_mediaPlayerView;
    TBMPBPlayerOptions *_mediaPlayerOptions;
    CDUnknownBlockType _PlayTimeObservation;
    CDUnknownBlockType _didEndPlay;
    CDUnknownBlockType _didFirstRender;
    CDUnknownBlockType _willStartPlay;
    CDUnknownBlockType _didSuspendPlay;
    UIImageView *_coverImgeView;
    long long _duration;
}

@property(nonatomic) long long duration; // @synthesize duration=_duration;
@property(retain, nonatomic) UIImageView *coverImgeView; // @synthesize coverImgeView=_coverImgeView;
@property(copy, nonatomic) CDUnknownBlockType didSuspendPlay; // @synthesize didSuspendPlay=_didSuspendPlay;
@property(copy, nonatomic) CDUnknownBlockType willStartPlay; // @synthesize willStartPlay=_willStartPlay;
@property(copy, nonatomic) CDUnknownBlockType didFirstRender; // @synthesize didFirstRender=_didFirstRender;
@property(copy, nonatomic) CDUnknownBlockType didEndPlay; // @synthesize didEndPlay=_didEndPlay;
@property(copy, nonatomic) CDUnknownBlockType PlayTimeObservation; // @synthesize PlayTimeObservation=_PlayTimeObservation;
@property(retain, nonatomic) TBMPBPlayerOptions *mediaPlayerOptions; // @synthesize mediaPlayerOptions=_mediaPlayerOptions;
@property(retain, nonatomic) TBMPBPlayerView *mediaPlayerView; // @synthesize mediaPlayerView=_mediaPlayerView;
@property(retain, nonatomic) UIView *errorView; // @synthesize errorView=_errorView;
@property(retain, nonatomic) UIView *replayView; // @synthesize replayView=_replayView;
@property(nonatomic) _Bool playerAutoPlay; // @synthesize playerAutoPlay=_playerAutoPlay;
@property(copy, nonatomic) NSString *recommendType; // @synthesize recommendType=_recommendType;
- (void).cxx_destruct;
- (void)clickRetryButton;
- (void)clickReplayButton;
- (void)showErrorView:(_Bool)arg1;
- (void)showReplayView:(_Bool)arg1;
- (void)setMediaPlayerViewCallback;
- (void)setMediaPlayerDataCallback;
- (void)didFirstVideoFrameRender;
- (void)setupVideoPlayerWithMediaUrl:(id)arg1;
- (void)refreshWithMediaURL:(id)arg1 accountId:(id)arg2 videoId:(id)arg3 feedId:(id)arg4 coverImg:(id)arg5 firstCell:(_Bool)arg6;
- (void)refreshWithCoverImageUrl:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

