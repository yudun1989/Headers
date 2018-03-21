//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QQViewController.h>

#import <QQMainProject/TBStoryVideoClipViewDelegate-Protocol.h>

@class NSString, QQStoryLocalMediaModel, TBStoryVideoClipView;
@protocol TBStoryVideoClipViewControllerDelegate;

@interface TBStoryVideoClipViewController : QQViewController <TBStoryVideoClipViewDelegate>
{
    id <TBStoryVideoClipViewControllerDelegate> _delegate;
    TBStoryVideoClipView *_clipView;
    QQStoryLocalMediaModel *_mediaModel;
}

@property(retain, nonatomic) QQStoryLocalMediaModel *mediaModel; // @synthesize mediaModel=_mediaModel;
@property(retain, nonatomic) TBStoryVideoClipView *clipView; // @synthesize clipView=_clipView;
@property(nonatomic) __weak id <TBStoryVideoClipViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)didEnterForeground;
- (void)didEnterBackground;
- (void)TBStoryVideoClipView:(id)arg1 nextBtnClickedWithVideoPath:(id)arg2 startTime:(double)arg3 endTime:(double)arg4;
- (void)TBStoryVideoClipView:(id)arg1 backBtnClicked:(id)arg2;
- (_Bool)prefersStatusBarHidden;
- (void)navigationBarHidden:(_Bool)arg1 animated:(_Bool)arg2;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)dealloc;
- (void)removeNotification;
- (void)reportData;
- (void)addNotification;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithLocalMediaModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

