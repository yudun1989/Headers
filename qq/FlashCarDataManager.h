//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <QQMainProject/ISCBusinessCallback-Protocol.h>
#import <QQMainProject/ISCListenerCallback-Protocol.h>

@class NSMutableDictionary, NSString, UIView;

@interface FlashCarDataManager : NSObject <ISCBusinessCallback, ISCListenerCallback>
{
    UIView *_flashCarMaskCover;
    NSMutableDictionary *_gameParam;
    _Bool _isSplashPreloaded;
    _Bool _isSplashShown;
    _Bool _isSplashFinished;
}

+ (id)GetInstance;
@property(nonatomic) _Bool isSplashFinished; // @synthesize isSplashFinished=_isSplashFinished;
@property(nonatomic) _Bool isSplashShown; // @synthesize isSplashShown=_isSplashShown;
@property(nonatomic) _Bool isSplashPreloaded; // @synthesize isSplashPreloaded=_isSplashPreloaded;
- (void)onCompleted:(unsigned long long)arg1 scid:(id)arg2 cfgScid:(id)arg3 from:(id)arg4 dlFrom:(int)arg5 result:(int)arg6 httpcode:(int)arg7;
- (_Bool)isFileExists:(unsigned long long)arg1 scid:(id)arg2;
- (_Bool)getItem:(unsigned long long)arg1 scid:(id)arg2 info:(id)arg3;
- (_Bool)deleteFiles:(unsigned long long)arg1 scid:(id)arg2;
- (_Bool)canUpdate:(unsigned long long)arg1 scid:(id)arg2 from:(id)arg3;
- (void)removeFlashCarMaskCover;
- (void)doPlayGame;
- (void)showFlashCarMaskCover;
- (void)onLoginSuccess;
- (void)downloadFlashCar;
- (void)notifyQQLbsGetLocFieldFail:(id)arg1;
- (void)notifyQQLbsGetLocFieldSucc:(id)arg1;
- (void)removeLbsNotices;
- (void)addLbsNotices;
- (void)getMapAddress;
- (id)captureScreenImage;
- (void)setGamePlayed;
- (_Bool)isGamePlayed;
- (_Bool)isGameResExist;
- (id)loadingImageRootPath;
- (id)screenImagePath;
- (id)fileRootPath;
- (void)ssoGameEventFirstFrame:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

