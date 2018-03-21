//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QTreasureBaseView.h>

#import <QQMainProject/QREHongbaoViewDelegate-Protocol.h>

@class ARMapItemInfo, ARPaddingLabel, CADisplayLink, CMAttitude, CMMotionManager, NSMutableDictionary, NSString, UIImageView;

@interface QTreasureGameView : QTreasureBaseView <QREHongbaoViewDelegate>
{
    CADisplayLink *_displayLink;
    CMMotionManager *_motionManager;
    ARPaddingLabel *_hintTextView;
    CMAttitude *_referenceAttitude;
    NSMutableDictionary *_audioPlayers;
    double _time;
    _Bool _clicked;
    _Bool _isUpdating;
    _Bool _isMotioning;
    _Bool _isAnimEnd;
    _Bool _isTreasureFound;
    _Bool _isCameraOpenFailed;
    int _type;
    int _poiType;
    NSString *_busiName;
    unsigned long long _poiID;
    unsigned long long _taskID;
    ARMapItemInfo *_item;
    NSString *_textIconPath;
    NSString *_logoPath;
    NSString *_iconPath;
    NSString *_topBG;
    UIImageView *_phoneImageView;
    UIImageView *_hintImageView;
}

@property(retain, nonatomic) UIImageView *hintImageView; // @synthesize hintImageView=_hintImageView;
@property(retain, nonatomic) UIImageView *phoneImageView; // @synthesize phoneImageView=_phoneImageView;
@property(nonatomic) _Bool isCameraOpenFailed; // @synthesize isCameraOpenFailed=_isCameraOpenFailed;
@property(nonatomic) _Bool isTreasureFound; // @synthesize isTreasureFound=_isTreasureFound;
@property(nonatomic) _Bool isAnimEnd; // @synthesize isAnimEnd=_isAnimEnd;
@property(nonatomic) _Bool isMotioning; // @synthesize isMotioning=_isMotioning;
@property(copy, nonatomic) NSString *topBG; // @synthesize topBG=_topBG;
@property(copy, nonatomic) NSString *iconPath; // @synthesize iconPath=_iconPath;
@property(copy, nonatomic) NSString *logoPath; // @synthesize logoPath=_logoPath;
@property(copy, nonatomic) NSString *textIconPath; // @synthesize textIconPath=_textIconPath;
@property(retain, nonatomic) ARMapItemInfo *item; // @synthesize item=_item;
@property(nonatomic) unsigned long long taskID; // @synthesize taskID=_taskID;
@property(nonatomic) unsigned long long poiID; // @synthesize poiID=_poiID;
@property(nonatomic) int poiType; // @synthesize poiType=_poiType;
@property(nonatomic) int type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *busiName; // @synthesize busiName=_busiName;
@property(nonatomic) _Bool isUpdating; // @synthesize isUpdating=_isUpdating;
- (void).cxx_destruct;
- (void)forceTreasureFound;
- (void)playAudio:(int)arg1 op:(int)arg2;
- (void)initMode;
- (void)switchMode:(int)arg1;
- (void)openHongbaoJumpToWallet:(id)arg1;
- (void)closeHongbao;
- (void)hideHint;
- (void)stopDeviceMotion;
- (void)startDeviceMotion;
- (void)initMotionManager;
- (void)updateDeviceMotion;
- (void)showView;
- (void)click:(_Bool)arg1;
- (void)onRecieve:(_Bool)arg1;
- (void)stopUpdating;
- (void)startUpdating;
- (struct Game *)createGame:(struct Platform *)arg1;
- (void)dealloc;
- (void)prepareContextAndGame;
- (void)hitImageViewAnimation;
- (void)onBecomeActive;
- (void)initHintView;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

