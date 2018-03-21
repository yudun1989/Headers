//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <QQMainProject/MCTempManagerDelegate-Protocol.h>
#import <QQMainProject/UIGestureRecognizerDelegate-Protocol.h>
#import <QQMainProject/UIScrollViewDelegate-Protocol.h>

@class NSArray, NSMutableArray, NSString, UIImageView, UILongPressGestureRecognizer, UIScrollView, UITapGestureRecognizer;
@protocol AVFilterScrViewDelegate;

@interface AVFilterScrView : UIView <UIScrollViewDelegate, MCTempManagerDelegate, UIGestureRecognizerDelegate>
{
    UIImageView *_currentFilter;
    UIImageView *_previusFilter;
    UIImageView *_nextFilter;
    UIImageView *_newGuideView;
    UITapGestureRecognizer *_tapGesture;
    UILongPressGestureRecognizer *_longPressGestureStart;
    UILongPressGestureRecognizer *_longPressGestureStop;
    long long _currentFilterIndex;
    long long _recordCurrentFilterIndex;
    _Bool _isSwiping;
    NSMutableArray *_imageScrArray;
    _Bool _isAntiTouchLockMode;
    _Bool _isGroup;
    _Bool _isDiscuss;
    _Bool _isInMultiScreenMode;
    id <AVFilterScrViewDelegate> _delegate;
    UIScrollView *_coreView;
    NSArray *_filterTempArray;
    double _currentVideoItemBeginTime;
}

@property(nonatomic) double currentVideoItemBeginTime; // @synthesize currentVideoItemBeginTime=_currentVideoItemBeginTime;
@property(retain, nonatomic) NSArray *filterTempArray; // @synthesize filterTempArray=_filterTempArray;
@property(retain, nonatomic) UIScrollView *coreView; // @synthesize coreView=_coreView;
@property(nonatomic) _Bool isInMultiScreenMode; // @synthesize isInMultiScreenMode=_isInMultiScreenMode;
@property(nonatomic) _Bool isDiscuss; // @synthesize isDiscuss=_isDiscuss;
@property(nonatomic) _Bool isGroup; // @synthesize isGroup=_isGroup;
@property(nonatomic) _Bool isAntiTouchLockMode; // @synthesize isAntiTouchLockMode=_isAntiTouchLockMode;
@property(nonatomic) id <AVFilterScrViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)insertGridItem:(id)arg1;
- (void)downloadResourceFinish:(id)arg1;
- (void)downloadResourceFail:(id)arg1;
- (void)dealloc;
- (void)dataReportFilterUse;
- (id)getFilterInfoWithMinDuration:(int)arg1;
- (void)scrollFilterViewToRenderingFilter;
- (void)scrollFilterViewToComic:(_Bool)arg1;
- (id)getCurrentAVFilterPath;
- (void)onSelectItemDone;
- (void)endScroll;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)p_loadUI;
- (void)updateFilterView:(_Bool)arg1 inInLeft:(_Bool)arg2;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)hideFilterAnimation;
- (void)delayHiddenFilter:(_Bool)arg1;
- (void)loadFilterList;
- (void)onSingleTouch;
- (void)tapHandle:(id)arg1;
- (void)onLongPress:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)setLongPressGestureEnabled:(_Bool)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

