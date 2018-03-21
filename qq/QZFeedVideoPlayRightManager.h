//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <QQMainProject/QZFeedVideoEventFrequencyControllerDelegate-Protocol.h>

@class NSArray, NSMutableArray, NSString, QZFeedVideoEventFrequencyController, UIScrollView, UITableViewCell;
@protocol QZFeedVideoPlayRightManagerDelegate;

@interface QZFeedVideoPlayRightManager : NSObject <QZFeedVideoEventFrequencyControllerDelegate>
{
    struct CGPoint _contentOffset;
    unsigned long long _inertialDirection;
    double _scrollVelocity;
    double _lastTime;
    _Bool _isFingerOn;
    QZFeedVideoEventFrequencyController *_frequencyController;
    unsigned long long _updatePlayRightOpMask;
    _Bool _isScrolling;
    _Bool _isDisappear;
    _Bool _isResignActive;
    _Bool _isEnterBackground;
    _Bool _isDisableControlEvent;
    _Bool _hasRefreshEvent;
    _Bool _disablePauseWhenHoldAndDisableControlEvent;
    id <QZFeedVideoPlayRightManagerDelegate> _delegate;
    unsigned long long _videoPlayScene;
    UIScrollView *_tableView;
    NSMutableArray *_currentCells;
    NSArray *_currentCellInfoModels;
    UITableViewCell *_havePlayRightCell;
    struct CGRect _actDisplayArea;
}

+ (id)playRightManagerWithPlayScene:(unsigned long long)arg1 tableView:(id)arg2 delegate:(id)arg3;
@property(nonatomic) __weak UITableViewCell *havePlayRightCell; // @synthesize havePlayRightCell=_havePlayRightCell;
@property(retain, nonatomic) NSArray *currentCellInfoModels; // @synthesize currentCellInfoModels=_currentCellInfoModels;
@property(retain, nonatomic) NSMutableArray *currentCells; // @synthesize currentCells=_currentCells;
@property(nonatomic) _Bool disablePauseWhenHoldAndDisableControlEvent; // @synthesize disablePauseWhenHoldAndDisableControlEvent=_disablePauseWhenHoldAndDisableControlEvent;
@property(nonatomic) __weak UIScrollView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) struct CGRect actDisplayArea; // @synthesize actDisplayArea=_actDisplayArea;
@property(nonatomic) unsigned long long videoPlayScene; // @synthesize videoPlayScene=_videoPlayScene;
@property(nonatomic) __weak id <QZFeedVideoPlayRightManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)currentFeedVideoView;
- (id)currentPlayingFeedVideoView;
- (double)isFingerOn;
- (double)getScrollSpeed;
- (id)buildFVCellInfoModels:(id)arg1;
- (void)feedVideoView:(id)arg1 checkPlayStateWithEvent:(unsigned long long)arg2 playRight:(_Bool)arg3;
- (void)groupCellVideoViews:(id)arg1 cellInfo:(id)arg2 checkPlayStateWithEvent:(unsigned long long)arg3 playRight:(_Bool)arg4;
- (void)cellInfo:(id)arg1 checkPlayStateWithEvent:(unsigned long long)arg2 playRight:(_Bool)arg3;
- (void)updateAllPlayRightWithEventInner:(unsigned long long)arg1;
- (void)updateCurrentPlayRightInfo:(id)arg1;
- (unsigned long long)scrollDirection;
- (id)tryFindHavePlayRightCellInfoModel:(_Bool)arg1;
- (void)playRightEventHander:(unsigned long long)arg1 opMask:(unsigned long long)arg2;
- (void)updateAllPlayRightWithEvent:(unsigned long long)arg1;
- (_Bool)checkEventValid:(unsigned long long)arg1;
- (void)resetPlayRight;
- (void)clear;
- (void)removeCell:(id)arg1 needStop:(_Bool)arg2;
- (void)addCell:(id)arg1;
- (void)qzSKStoreDidDisappear;
- (void)qzSKStoreWillAppear;
- (void)dealloc;
- (id)initWithVideoPlayScene:(unsigned long long)arg1 tableView:(id)arg2 delegate:(id)arg3;
- (void)calculatePlayRightCellNormal:(id)arg1 completeHandler:(CDUnknownBlockType)arg2;
- (void)calculatePlayRightCellBaseOnDirection:(id)arg1 currentPlayRightCellInfoModel:(id)arg2 completeHandler:(CDUnknownBlockType)arg3;
- (id)resortCellInfoModelsBaseOnDirection:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

