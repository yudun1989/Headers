//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

#import <QQMainProject/QQDynamicAvatarPlayerDelegate-Protocol.h>
#import <QQMainProject/QQDynamicAvatarServiceDelegate-Protocol.h>

@class CALayer, NSString, QQDynamicAvatarInfo, QQDynamicAvatarPlayer;
@protocol QQDynamicAvatarViewDelegate;

@interface QQDynamicAvatarView : UIButton <QQDynamicAvatarServiceDelegate, QQDynamicAvatarPlayerDelegate>
{
    QQDynamicAvatarPlayer *_player;
    CALayer *_layer;
    _Bool _resumeWhenViewWillAppear;
    QQDynamicAvatarInfo *_avatarInfo;
    NSString *_filePath;
    _Bool _isMuted;
    _Bool _isCycleplay;
    int _delayStartTime;
    unsigned long long _avatarSize;
    unsigned long long _avatarShape;
    unsigned long long _network;
    unsigned long long _sourceType;
    NSString *_identity;
    unsigned long long _identityType;
    id <QQDynamicAvatarViewDelegate> _delegate;
    CALayer *_maskLayer;
}

@property(retain, nonatomic) CALayer *maskLayer; // @synthesize maskLayer=_maskLayer;
@property(nonatomic) __weak id <QQDynamicAvatarViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) unsigned long long identityType; // @synthesize identityType=_identityType;
@property(readonly, copy, nonatomic) NSString *identity; // @synthesize identity=_identity;
@property(nonatomic) unsigned long long sourceType; // @synthesize sourceType=_sourceType;
@property(nonatomic) int delayStartTime; // @synthesize delayStartTime=_delayStartTime;
@property(nonatomic) _Bool isCycleplay; // @synthesize isCycleplay=_isCycleplay;
@property(nonatomic) _Bool isMuted; // @synthesize isMuted=_isMuted;
@property(nonatomic) unsigned long long network; // @synthesize network=_network;
@property(nonatomic) unsigned long long avatarShape; // @synthesize avatarShape=_avatarShape;
@property(nonatomic) unsigned long long avatarSize; // @synthesize avatarSize=_avatarSize;
- (void).cxx_destruct;
- (_Bool)shouldPlayOnce;
- (void)onAvatarPlayerFail:(id)arg1;
- (void)onAvatarPlayerEnd:(id)arg1;
- (void)onAvatarPlayerStart:(id)arg1;
- (void)onAvatarPlayer:(id)arg1 displayLayer:(id)arg2;
- (void)onRemoveAvatarViedoFile:(id)arg1 type:(unsigned long long)arg2 size:(unsigned long long)arg3;
- (void)loadVideo:(id)arg1 filePath:(id)arg2;
- (void)onFinishedDownloadAvatarViedoFile:(id)arg1 filePath:(id)arg2;
- (void)onFinishedRequestAvatarInfo:(id)arg1;
- (void)replay;
- (void)stopAndClearImmediately;
- (void)stopAndClear;
- (void)stopImmediately;
- (void)stop;
- (void)pause;
- (void)play;
@property(readonly, nonatomic) unsigned long long playStatus;
- (void)loadVideo;
- (void)configPlayer;
- (void)createPlayer;
- (void)removeAvatar;
- (void)loadAvatar;
- (void)forceResetAvatar;
- (void)resetAvatar:(id)arg1 type:(unsigned long long)arg2;
- (void)forceLoadAvatar:(id)arg1 type:(unsigned long long)arg2;
- (void)loadAvatar:(id)arg1 type:(unsigned long long)arg2;
- (void)loadNearbyAvatarByTinyId:(id)arg1;
- (void)loadNearbyAvatarByUin:(id)arg1;
- (void)loadQQAvatar:(id)arg1;
- (void)willMoveToWindow:(id)arg1;
- (void)dealloc;
- (void)initialize;
- (id)init;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

