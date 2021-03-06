//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "KSMusicPlaybackController.h"

#import "AVAudioPlayerDelegate-Protocol.h"

@class KSLiveMusicLyricsController, KSMixSwitchableBgmPlayer, KSMusicResourceManager, KSYAudioMixer, NSLayoutConstraint, NSString, NSTimer;
@protocol KSLiveMusicControllerDelegate;

@interface KSLiveMusicController : KSMusicPlaybackController <AVAudioPlayerDelegate>
{
    _Bool _displayLyrics;
    KSMusicResourceManager *_musicResource;
    KSMixSwitchableBgmPlayer *_player;
    NSTimer *_lyricsTimer;
    KSLiveMusicLyricsController *_lyricsTimeStampController;
    NSLayoutConstraint *_playerControlHeightConstraint;
    NSLayoutConstraint *_lyricsControlHeightConstraint;
    double _lyricsHeight;
    KSYAudioMixer *_audioMixer;
    id _earphoneStateObserver;
}

@property(retain, nonatomic) id earphoneStateObserver; // @synthesize earphoneStateObserver=_earphoneStateObserver;
@property(readonly, nonatomic) KSYAudioMixer *audioMixer; // @synthesize audioMixer=_audioMixer;
@property(nonatomic) double lyricsHeight; // @synthesize lyricsHeight=_lyricsHeight;
@property(retain, nonatomic) NSLayoutConstraint *lyricsControlHeightConstraint; // @synthesize lyricsControlHeightConstraint=_lyricsControlHeightConstraint;
@property(retain, nonatomic) NSLayoutConstraint *playerControlHeightConstraint; // @synthesize playerControlHeightConstraint=_playerControlHeightConstraint;
@property(nonatomic) _Bool displayLyrics; // @synthesize displayLyrics=_displayLyrics;
@property(retain, nonatomic) KSLiveMusicLyricsController *lyricsTimeStampController; // @synthesize lyricsTimeStampController=_lyricsTimeStampController;
@property(retain, nonatomic) NSTimer *lyricsTimer; // @synthesize lyricsTimer=_lyricsTimer;
@property(retain, nonatomic) KSMixSwitchableBgmPlayer *player; // @synthesize player=_player;
@property(retain, nonatomic) KSMusicResourceManager *musicResource; // @synthesize musicResource=_musicResource;
- (void).cxx_destruct;
- (void)showLyrics:(_Bool)arg1 animated:(_Bool)arg2;
- (void)updatePlayerControlConstraints:(_Bool)arg1;
- (void)didReceiveBgmPlayerStateChanged:(id)arg1;
- (_Bool)playing;
- (void)resume;
- (void)pause;
- (void)didClickOriginalSoundButton:(id)arg1;
- (void)didClickLyricsButton:(id)arg1;
- (void)didClickPlay:(id)arg1;
- (void)didClickPause:(id)arg1;
- (void)setupAudioPlayer;
- (void)playWithAvailableResource:(id)arg1;
- (void)checkLyricsPlayingWithAvailableResource:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)setupLyrics;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithAudioMixer:(id)arg1 camera:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) __weak id <KSLiveMusicControllerDelegate> delegate; // @dynamic delegate;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

