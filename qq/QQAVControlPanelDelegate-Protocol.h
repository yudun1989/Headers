//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/NSObject-Protocol.h>

@protocol QQAVControlPanelDelegate <NSObject>
- (_Bool)isPanelHideable;
- (void)onControlPanelChangeToVideo:(_Bool)arg1;
- (void)onControlPanelShow:(_Bool)arg1;

@optional
- (void)onFunChatAction;
- (void)onMSBackAction;
- (void)onControlPanelShow:(_Bool)arg1 withSmallViewMove:(_Bool)arg2;
- (void)onControlPanelAntiTouchCancel;
- (void)onControlPanelAntiTouchStop;
- (void)onControlPanelAntiTouchStart;
- (void)onDeviceLockAction;
- (_Bool)AnimateComplete:(int)arg1 nAntType:(int)arg2;
- (_Bool)isMemoryWarning;
- (void)onRechargeAction;
- (void)onPSTNCallAction;
- (void)onReturn;
- (void)OnDisableBeautify;
- (void)onDisableAddMem;
- (void)onBeautify:(float)arg1;
- (void)onTipsViewFrameChanged;
@end

