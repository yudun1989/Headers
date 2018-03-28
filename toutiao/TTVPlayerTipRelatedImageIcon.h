//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TTVPlayerTipRelatedView.h"

#import "TTVPlayerTipRelatedIconItemDelegate-Protocol.h"
#import "TTVSwipeViewDataSource-Protocol.h"
#import "TTVSwipeViewDelegate-Protocol.h"

@class NSArray, NSString, NSTimer, StyledPageControl, TTVSwipeView;

@interface TTVPlayerTipRelatedImageIcon : TTVPlayerTipRelatedView <TTVSwipeViewDelegate, TTVSwipeViewDataSource, TTVPlayerTipRelatedIconItemDelegate>
{
    NSArray *_items;
    NSTimer *_timer;
    TTVSwipeView *_swipeView;
    StyledPageControl *_pageControl;
}

@property(retain, nonatomic) StyledPageControl *pageControl; // @synthesize pageControl=_pageControl;
@property(retain, nonatomic) TTVSwipeView *swipeView; // @synthesize swipeView=_swipeView;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(retain, nonatomic) NSArray *items; // @synthesize items=_items;
- (void).cxx_destruct;
- (void)relatedItemClicked:(id)arg1;
- (void)swipeView:(id)arg1 didSelectItemAtIndex:(long long)arg2;
- (void)swipeViewCurrentItemIndexDidChange:(id)arg1;
- (id)swipeView:(id)arg1 viewForItemAtIndex:(long long)arg2 reusingView:(id)arg3;
- (struct CGSize)swipeViewItemSize:(id)arg1;
- (long long)numberOfItemsInSwipeView:(id)arg1;
- (void)layoutSubviews;
- (void)sendRelatedViewShowTrackAtIndex:(id)arg1;
- (void)setEntitys:(id)arg1;
- (void)timeChange;
- (void)pauseTimer;
- (void)startTimer;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

