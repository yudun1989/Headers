//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WVDynamicHandler.h"

#import "RPPreviewViewControllerDelegate-Protocol.h"

@class AVPlayer, NSDate, NSString, UIViewController;

@interface WVScreenRecorder : WVDynamicHandler <RPPreviewViewControllerDelegate>
{
    _Bool _vibrating;
    UIViewController *_previewViewController;
    CDUnknownBlockType _fetchCompletion;
    AVPlayer *_ringPlayer;
    NSString *_previousCategory;
    NSDate *_recordBeginDate;
    NSDate *_recordEndDate;
}

+ (void)disposeSystemVibrate;
+ (void)playSystemVibrate;
+ (_Bool)ReplayKitSupported;
+ (void)loadReplayKit;
+ (unsigned long long)instanceScope;
@property(retain, nonatomic) NSDate *recordEndDate; // @synthesize recordEndDate=_recordEndDate;
@property(retain, nonatomic) NSDate *recordBeginDate; // @synthesize recordBeginDate=_recordBeginDate;
@property(copy, nonatomic) NSString *previousCategory; // @synthesize previousCategory=_previousCategory;
@property(nonatomic) _Bool vibrating; // @synthesize vibrating=_vibrating;
@property(retain, nonatomic) AVPlayer *ringPlayer; // @synthesize ringPlayer=_ringPlayer;
@property(copy, nonatomic) CDUnknownBlockType fetchCompletion; // @synthesize fetchCompletion=_fetchCompletion;
@property(retain, nonatomic) UIViewController *previewViewController; // @synthesize previewViewController=_previewViewController;
- (void).cxx_destruct;
- (void)stopRing;
- (void)playRing:(id)arg1;
- (void)runLoopTheRing:(id)arg1;
- (void)stopRing:(id)arg1 withWVBridgeContext:(id)arg2;
- (void)startRing:(id)arg1 withWVBridgeContext:(id)arg2;
- (void)getDefaultVideoPath:(id)arg1 withWVBridgeContext:(id)arg2;
- (void)getDefaultRingPath:(id)arg1 withWVBridgeContext:(id)arg2;
- (void)setAudioCategoryBack:(id)arg1 withWVBridgeContext:(id)arg2;
- (void)setAudioCategoryPlayback:(id)arg1 withWVBridgeContext:(id)arg2;
- (void)closeVibrator:(_Bool)arg1;
- (void)openVibrator;
- (void)vibrateStop:(id)arg1 withWVBridgeContext:(id)arg2;
- (void)vibrateStart:(id)arg1 withWVBridgeContext:(id)arg2;
- (void)captureScreen:(id)arg1 withWVBridgeContext:(id)arg2;
- (void)previewControllerDidFinish:(id)arg1;
- (id)cachePathForUrl:(id)arg1 fileType:(id)arg2;
- (void)showRecordPreview:(id)arg1 withWVBridgeContext:(id)arg2;
- (void)stopRecordScreen:(id)arg1 withWVBridgeContext:(id)arg2;
- (void)stopRecord;
- (void)startRecordScreen:(id)arg1 withWVBridgeContext:(id)arg2;
- (void)recordScreenSupported:(id)arg1 withWVBridgeContext:(id)arg2;
- (void)requestPermissions:(id)arg1 withWVBridgeContext:(id)arg2;
- (void)queryPermission:(id)arg1 withWVBridgeContext:(id)arg2;
- (void)resumeWithContext:(id)arg1;
- (void)pauseWithContext:(id)arg1;
- (void)resetWithContext:(id)arg1 withNextRequest:(id)arg2;
- (void)applicationWillEnterForeground:(id)arg1;
- (void)applicationWillResignActive:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

