//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QQViewController.h>

#import <QQMainProject/PLStroyVideoImportPlayViewDelegate-Protocol.h>
#import <QQMainProject/PLVideoClipViewDelegate-Protocol.h>

@class AVURLAsset, NSString, PLCommonLoadingView, PLStroyVideoImportPlayView, PLVideoClipView, UIImageView;

@interface PLVideoClipViewController : QQViewController <PLVideoClipViewDelegate, PLStroyVideoImportPlayViewDelegate>
{
    NSString *_videoOutPath;
    CDUnknownBlockType _completion;
    AVURLAsset *_asset;
    PLVideoClipView *_clipView;
    PLStroyVideoImportPlayView *_playerView;
    double _startTime;
    double _endTime;
    PLCommonLoadingView *_loadingView;
    UIImageView *_coverImageView;
}

@property(retain, nonatomic) UIImageView *coverImageView; // @synthesize coverImageView=_coverImageView;
@property(retain, nonatomic) PLCommonLoadingView *loadingView; // @synthesize loadingView=_loadingView;
@property(nonatomic) double endTime; // @synthesize endTime=_endTime;
@property(nonatomic) double startTime; // @synthesize startTime=_startTime;
@property(retain, nonatomic) PLStroyVideoImportPlayView *playerView; // @synthesize playerView=_playerView;
@property(retain, nonatomic) PLVideoClipView *clipView; // @synthesize clipView=_clipView;
@property(retain, nonatomic) AVURLAsset *asset; // @synthesize asset=_asset;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(retain, nonatomic) NSString *videoOutPath; // @synthesize videoOutPath=_videoOutPath;
- (_Bool)isSupportRightDragToGoBack;
- (void)finishChangeStartTime:(double)arg1 duration:(double)arg2;
- (void)startChangeStartTime:(double)arg1 duration:(double)arg2;
- (void)onPlayerDidPlay;
- (void)onPlayChangedWithTime:(double)arg1;
- (void)hideLoadingView;
- (void)showLoadingView;
- (id)generateThumbImage:(id)arg1;
- (void)finishAction;
- (void)backAction;
- (void)viewDidLayoutSubviews;
- (void)initBar;
- (void)destoryPlayer;
- (void)initPlayer;
- (void)applicationWillResignActive:(id)arg1;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)dealloc;
- (void)viewDidLoad;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (id)initWithAsset:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

