//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TangramFlowLayout.h"

#import "UIScrollViewDelegate-Protocol.h"

@class NSMutableArray, NSString, UIImageView, UIScrollView, UIView;
@protocol TangramListPagingFlowLayoutDelegate;

@interface TangramScrollFlowLayout : TangramFlowLayout <UIScrollViewDelegate>
{
    _Bool _disableScroll;
    _Bool _animFinished;
    _Bool _isPaging;
    _Bool _needIgnoreScroll;
    id <TangramListPagingFlowLayoutDelegate> _pagingDelegate;
    UIView *_loadingView;
    double _offsetToLoadingView;
    long long _pagingIndex;
    long long _pagingLength;
    UIScrollView *_innerScrollView;
    double _preContentOffsetX;
    NSMutableArray *_pagingViews;
    UIView *_currentPaginView;
    UIImageView *_captureImageView;
    NSString *_subLayoutIndex;
}

@property(retain, nonatomic) NSString *subLayoutIndex; // @synthesize subLayoutIndex=_subLayoutIndex;
@property(nonatomic) _Bool needIgnoreScroll; // @synthesize needIgnoreScroll=_needIgnoreScroll;
@property(nonatomic) _Bool isPaging; // @synthesize isPaging=_isPaging;
@property(retain, nonatomic) UIImageView *captureImageView; // @synthesize captureImageView=_captureImageView;
@property(retain, nonatomic) UIView *currentPaginView; // @synthesize currentPaginView=_currentPaginView;
@property(retain, nonatomic) NSMutableArray *pagingViews; // @synthesize pagingViews=_pagingViews;
@property(nonatomic) _Bool animFinished; // @synthesize animFinished=_animFinished;
@property(nonatomic) double preContentOffsetX; // @synthesize preContentOffsetX=_preContentOffsetX;
@property(retain, nonatomic) UIScrollView *innerScrollView; // @synthesize innerScrollView=_innerScrollView;
@property(nonatomic) long long pagingLength; // @synthesize pagingLength=_pagingLength;
@property(nonatomic) long long pagingIndex; // @synthesize pagingIndex=_pagingIndex;
@property(nonatomic) _Bool disableScroll; // @synthesize disableScroll=_disableScroll;
@property(nonatomic) double offsetToLoadingView; // @synthesize offsetToLoadingView=_offsetToLoadingView;
@property(retain, nonatomic) UIView *loadingView; // @synthesize loadingView=_loadingView;
@property(nonatomic) __weak id <TangramListPagingFlowLayoutDelegate> pagingDelegate; // @synthesize pagingDelegate=_pagingDelegate;
- (void).cxx_destruct;
- (void)scrollViewDidScroll:(id)arg1;
- (void)showCaptureImage;
- (void)removeLoadingView;
- (void)seutpPagingItemView;
- (void)buildScrollView;
- (void)setItemModels:(id)arg1;
- (void)addSubview:(id)arg1;
- (void)showAnimationPaging:(long long)arg1;
- (double)absY;
- (void)captureImage;
- (id)pagingViewWithPagingIndex:(long long)arg1;
- (void)calculateLayout;
- (struct NSString *)layoutType;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

