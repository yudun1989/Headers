//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <QQMainProject/CmShowGameViewControllerDelegate-Protocol.h>
#import <QQMainProject/CmShowGameViewDelegate-Protocol.h>

@class CmShowGameView, CmShowGameViewController, NSString;

@interface CmShowGameManager : NSObject <CmShowGameViewControllerDelegate, CmShowGameViewDelegate>
{
    CmShowGameView *_cmShowGameView;
    CmShowGameViewController *_cmShowGameVC;
}

+ (id)sharedInstance;
@property(retain, nonatomic) CmShowGameView *cmShowGameView; // @synthesize cmShowGameView=_cmShowGameView;
- (_Bool)isCurrentGameViewContext:(void *)arg1;
- (void)destroyGameView:(id)arg1;
- (void)onCMShowGameVCRemove:(id)arg1;
- (void)onCMShowGameVCClose:(id)arg1;
- (void)onCMShowGameVCPackUp:(id)arg1;
- (void)packUpTimeOut;
- (void)addShareSessionId:(id)arg1 aioType:(int)arg2;
- (void)closeCmShowGame;
- (int)getCmShowGamePreviewState;
- (_Bool)enterCmShowGameWithGameID:(unsigned int)arg1 roomID:(unsigned long long)arg2 sessionId:(id)arg3 isCreator:(_Bool)arg4 gameMode:(int)arg5 aioType:(int)arg6 gameParam:(id)arg7 version:(id)arg8 fromType:(int)arg9 screenMode:(int)arg10 src:(int)arg11;
- (_Bool)enterCmShowGameWithGameID:(unsigned int)arg1 roomID:(unsigned long long)arg2 sessionId:(id)arg3 isCreator:(_Bool)arg4 gameMode:(int)arg5 aioType:(int)arg6 gameParam:(id)arg7 version:(id)arg8 fromType:(int)arg9 src:(int)arg10;
- (_Bool)webviewEnterCmShowGameWithGameID:(unsigned int)arg1 sessionId:(id)arg2 gameMode:(int)arg3 gameParam:(id)arg4 version:(id)arg5 screenMode:(unsigned int)arg6 src:(int)arg7;
- (_Bool)aioEnterCmShowGameWithGameID:(unsigned int)arg1 roomID:(unsigned long long)arg2 sessionId:(id)arg3 isCreator:(_Bool)arg4 gameMode:(int)arg5 aioType:(int)arg6 version:(id)arg7 shareArkInfo:(id)arg8 src:(int)arg9;
- (_Bool)enterSingleGameWithGameID:(unsigned int)arg1 gameParam:(id)arg2 version:(id)arg3 needStatusBarHide:(_Bool)arg4;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

