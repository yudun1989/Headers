//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol TTChatroomMovieViewDelegate <NSObject>

@optional
- (void)retryButtonClickedStatus:(long long)arg1;
- (void)replayButtonClicked;
- (void)shareButtonClicked;
- (_Bool)shouldPlayWhenViewWillAppear;
- (_Bool)shouldStopMovieWhenInBackground;
- (_Bool)shouldResumePlayWhenActive;
- (_Bool)shouldDisableUserInteraction;
- (struct CGRect)movieViewFrameAfterExitFullscreen;
- (_Bool)shouldShowDetailButton;
- (void)showDetailButtonClicked;
@end

