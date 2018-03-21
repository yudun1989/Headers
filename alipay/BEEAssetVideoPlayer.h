//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class MPMoviePlayerController, NSURL, UIButton;
@protocol BEEAssetVideoPlayerDelegate;

@interface BEEAssetVideoPlayer : UIView
{
    MPMoviePlayerController *_playerController;
    UIButton *_playButton;
    UIView *_playView;
    _Bool _hideControls;
    id <BEEAssetVideoPlayerDelegate> _delegate;
    NSURL *_url;
}

@property(nonatomic) _Bool hideControls; // @synthesize hideControls=_hideControls;
@property(retain, nonatomic) NSURL *url; // @synthesize url=_url;
@property(nonatomic) __weak id <BEEAssetVideoPlayerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)updateBrowserControllerHideControls:(_Bool)arg1;
- (_Bool)dismissVideoPreviewIfNeed;
- (void)stop;
- (void)pause;
- (void)play;
- (void)moviePlayerPlaybackStateChange:(id)arg1;
- (void)behindClicked:(id)arg1;
- (void)didClickedButton:(id)arg1;
- (void)touchUpOutside:(id)arg1;
- (void)touchDown:(id)arg1;
- (void)buildPlayButton;
- (void)buildPlayerView:(id)arg1;
- (void)dealloc;
- (id)init;

@end

