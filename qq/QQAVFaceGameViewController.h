//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <QQMainProject/QQAVFaceGameGuidViewDelegate-Protocol.h>
#import <QQMainProject/QQAVFaceGameViewReportDelegate-Protocol.h>

@class NSString, QQAVFaceGameGuidView, QQAVFaceGamePreview, QQAVFaceGameRedBagView, QQAVFaceGameView;
@protocol QQAVFaceGameReportDelegate;

@interface QQAVFaceGameViewController : UIViewController <QQAVFaceGameGuidViewDelegate, QQAVFaceGameViewReportDelegate>
{
    QQAVFaceGameRedBagView *_redBagView;
    QQAVFaceGameView *_gameView;
    QQAVFaceGamePreview *_preview;
    QQAVFaceGameGuidView *_guidView;
    _Bool _isCountDown;
    _Bool _needStartCountDown;
    _Bool _isGameReady;
    _Bool _needCheckGuid;
    id <QQAVFaceGameReportDelegate> _delegate;
}

@property(nonatomic) __weak id <QQAVFaceGameReportDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)reportDC898:(id)arg1 EntryType:(long long)arg2 resv4:(id)arg3;
- (void)onQQAVFaceGameGuidViewClose:(_Bool)arg1;
- (id)gameView;
- (id)hookButtons;
- (void)onRecordBarShow:(_Bool)arg1 height:(double)arg2;
- (void)showRegBagPreview;
- (void)hideGamePreview;
- (void)showGamePreview;
- (void)onFaceGameFrameSyncInfo;
- (void)onFaceGameHitInfo:(id)arg1;
- (void)onFaceGameCountDown;
- (void)onFaceGameReady;
- (void)checkPlayGuid;
- (void)onFaceGameStart;
- (void)recieveRedBag;
- (void)stopFaceGame;
- (void)startFaceGame;
- (void)sendRedBag;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

