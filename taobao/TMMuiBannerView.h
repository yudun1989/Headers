//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "TMMuiPagingViewDataSource-Protocol.h"
#import "TMMuiPagingViewDelegate-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"

@class NSString, TMMuiPagingView, TMPageControl;
@protocol TMMuiBannerViewDataSource, TMMuiBannerViewDelegate;

@interface TMMuiBannerView : UIView <TMMuiPagingViewDelegate, TMMuiPagingViewDataSource, UIScrollViewDelegate>
{
    _Bool _isCache;
    TMMuiPagingView *_pagingView;
    id <TMMuiBannerViewDataSource> _bannerViewDataSource;
    id <TMMuiBannerViewDelegate> _bannerViewDelegate;
    TMPageControl *_pageControl;
    double _shufflingTime;
    NSString *_timerSubscribeName;
}

@property(retain, nonatomic) NSString *timerSubscribeName; // @synthesize timerSubscribeName=_timerSubscribeName;
@property(nonatomic) _Bool isCache; // @synthesize isCache=_isCache;
@property(nonatomic) double shufflingTime; // @synthesize shufflingTime=_shufflingTime;
@property(retain, nonatomic) TMPageControl *pageControl; // @synthesize pageControl=_pageControl;
@property(nonatomic) __weak id <TMMuiBannerViewDelegate> bannerViewDelegate; // @synthesize bannerViewDelegate=_bannerViewDelegate;
@property(nonatomic) __weak id <TMMuiBannerViewDataSource> bannerViewDataSource; // @synthesize bannerViewDataSource=_bannerViewDataSource;
@property(retain, nonatomic) TMMuiPagingView *pagingView; // @synthesize pagingView=_pagingView;
- (void).cxx_destruct;
- (void)startAutoScroll;
- (void)stopAutoScroll;
- (void)pagingView:(id)arg1 isDraggingTo:(unsigned long long)arg2;
- (_Bool)pagingView:(id)arg1 willRecycledView:(id)arg2;
- (void)pagingViewWillBeginDragging:(id)arg1;
- (void)pagingView:(id)arg1 didMoveFromPage:(unsigned long long)arg2 toPage:(unsigned long long)arg3;
- (id)pagingView:(id)arg1 pageAtIndex:(unsigned long long)arg2;
- (unsigned long long)numberOfPagesInPagingView:(id)arg1;
- (void)reloadData;
- (void)setCurrentPageIndex:(unsigned long long)arg1 animated:(_Bool)arg2;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)willMoveToWindow:(id)arg1;
- (unsigned long long)outputBannerIndexFromPagingViewIndex:(unsigned long long)arg1;
- (void)setCurrentBannerIndex:(unsigned long long)arg1 animated:(_Bool)arg2;
@property(readonly, nonatomic) unsigned long long currBannerIndex;
- (void)jumpToNextPage;
- (void)onPanGestureRecognizer:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

