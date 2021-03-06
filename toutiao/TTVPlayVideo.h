//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "TTMovieStoreAction-Protocol.h"

@class NSObject, NSString, TTThemeImageView, TTVDemandPlayer, TTVDemanderTrackerManager, TTVVideoPlayerModel;
@protocol TTVPlayVideoDelegate;

@interface TTVPlayVideo : UIView <TTMovieStoreAction>
{
    NSObject<TTVPlayVideoDelegate> *_delegate;
    TTVDemandPlayer *_player;
    TTVVideoPlayerModel *_playerModel;
    TTThemeImageView *_logoImageView;
}

+ (id)currentPlayingPlayVideo;
+ (void)setCurrentPlayingPlayVideo:(id)arg1;
+ (void)removeAll;
+ (void)removeExcept:(id)arg1;
@property(retain, nonatomic) TTThemeImageView *logoImageView; // @synthesize logoImageView=_logoImageView;
@property(retain, nonatomic) TTVVideoPlayerModel *playerModel; // @synthesize playerModel=_playerModel;
@property(readonly, nonatomic) TTVDemandPlayer *player; // @synthesize player=_player;
@property(nonatomic) __weak NSObject<TTVPlayVideoDelegate> *delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (_Bool)isStopped;
- (_Bool)isAdMovie;
- (void)exitFullScreen:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)stop;
- (void)stopWithFinishedBlock:(CDUnknownBlockType)arg1;
- (void)willMoveToSuperview:(id)arg1;
- (void)removeFromSuperview;
@property(readonly, nonatomic) TTVDemanderTrackerManager *commonTracker;
- (void)layoutSubviews;
- (id)logoImageModel:(id)arg1;
- (void)setVideoLargeImageDict:(id)arg1;
- (void)ttv_addPlayer;
- (void)resetPlayerModel:(id)arg1;
- (void)ttv_kvo;
- (void)TTSFExitFullScreenNotification:(id)arg1;
- (void)TTSFContinueVideoNotification:(id)arg1;
- (void)TTSFPauseVideoNotification:(id)arg1;
- (void)strongPushNotificationWillHideNotification:(id)arg1;
- (void)strongPushNotificationWillShowNotification:(id)arg1;
- (void)skStoreViewDidDisappear:(id)arg1;
- (void)skStoreViewDidAppear:(id)arg1;
- (void)appointAlertViewHide:(id)arg1;
- (void)appointAlertViewShow:(id)arg1;
- (void)ttv_closeRedPackert:(id)arg1;
- (void)ttv_openRedPackert:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 playerModel:(id)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

