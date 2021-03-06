//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AliDetailVideoBaseControl.h"

#import "AliDetailVideoPlayerViewDelegate-Protocol.h"

@class NSMutableDictionary, NSString, UIButton, UIView;

@interface AliDetailVideoMiniControl : AliDetailVideoBaseControl <AliDetailVideoPlayerViewDelegate>
{
    CDUnknownBlockType _videoEndPlayingHandler;
    UIButton *_closeButton;
    UIView *_customOperationView;
    NSMutableDictionary *_exposeFlagDic;
}

@property(retain, nonatomic) NSMutableDictionary *exposeFlagDic; // @synthesize exposeFlagDic=_exposeFlagDic;
@property(retain, nonatomic) UIView *customOperationView; // @synthesize customOperationView=_customOperationView;
@property(retain, nonatomic) UIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(copy, nonatomic) CDUnknownBlockType videoEndPlayingHandler; // @synthesize videoEndPlayingHandler=_videoEndPlayingHandler;
- (void).cxx_destruct;
- (void)commitLegacyCloseUserTrackEvent;
- (void)commitVideoTapUserTrack;
- (void)commitVideoExposureUserTrackIfNeeded;
- (void)commitVideoTapToCloseUserTrack;
- (void)disableVideosFunctions;
- (void)playerViewWillPause:(id)arg1;
- (void)playerViewDidEndPlaying:(id)arg1;
- (void)playerViewWillPlay:(id)arg1;
- (void)touchVideo:(id)arg1;
- (void)tapCloseMiniVideo;
- (_Bool)isMyTaobaoSettingAutoPlayEnable;
- (_Bool)isWifiAutoPlayEnabled:(_Bool)arg1;
- (id)sourceForMini;
- (void)customizeVideo;
- (void)readNeededInfoForSourceMemento:(id)arg1;
- (void)restoreFromMemento:(id)arg1 srcMemento:(id)arg2;
- (id)createMemento;
- (void)didSetupContent;
- (unsigned long long)viewState;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

