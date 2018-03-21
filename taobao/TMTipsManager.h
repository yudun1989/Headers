//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "MBProgressHUDDelegate-Protocol.h"

@class MBProgressHUD, NSMutableArray, NSString, NSTimer, TMShapeProgressView, UIWindow;

@interface TMTipsManager : NSObject <MBProgressHUDDelegate>
{
    _Bool _mute;
    _Bool _isLoading;
    NSMutableArray *_forbiddenTips;
    MBProgressHUD *_HUD;
    UIWindow *_maskWindow;
    NSTimer *_overTimer;
    TMShapeProgressView *_sharpProgressView;
}

+ (void)toast:(id)arg1 toView:(id)arg2;
+ (void)toastTransparency:(id)arg1 toView:(id)arg2 displaytime:(float)arg3 postion:(int)arg4;
+ (void)toast:(id)arg1 toView:(id)arg2 displaytime:(float)arg3 postion:(int)arg4;
+ (void)toast:(id)arg1 toView:(id)arg2 displaytime:(float)arg3;
+ (id)sharedManager;
@property(retain, nonatomic) TMShapeProgressView *sharpProgressView; // @synthesize sharpProgressView=_sharpProgressView;
@property(retain, nonatomic) NSTimer *overTimer; // @synthesize overTimer=_overTimer;
@property(retain, nonatomic) UIWindow *maskWindow; // @synthesize maskWindow=_maskWindow;
@property(retain, nonatomic) MBProgressHUD *HUD; // @synthesize HUD=_HUD;
@property(nonatomic) _Bool mute; // @synthesize mute=_mute;
- (void).cxx_destruct;
- (_Bool)isForbiddenTip:(id)arg1;
- (void)overTimerCallback:(id)arg1;
- (void)cleanUp:(_Bool)arg1;
- (void)postMultipleLinesMessage:(id)arg1;
- (void)delayShowMaskWindow;
- (void)postLoadingWithOverTime:(double)arg1;
- (void)postLoading;
- (void)postLoading:(id)arg1 overTime:(double)arg2;
- (void)postLoading:(id)arg1;
- (void)postSuccess:(id)arg1 overTime:(double)arg2;
- (void)postSuccess:(id)arg1;
- (void)postError:(id)arg1;
- (void)postError:(id)arg1 detailMessage:(id)arg2;
- (void)postOnlyText:(id)arg1 overTime:(double)arg2;
- (void)postOnlyText:(id)arg1;
- (void)postMessage:(id)arg1;
- (void)postMessage:(id)arg1 overTime:(double)arg2;
- (void)postMessage:(id)arg1 withImage:(id)arg2 overTime:(double)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

