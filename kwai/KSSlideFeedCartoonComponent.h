//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "KSSlideFeedPhotoComponent.h"

@class KSFeedComponentsWrapperView, KSFeedImageAtlasLoader, NSMutableArray;

@interface KSSlideFeedCartoonComponent : KSSlideFeedPhotoComponent
{
    double _previousOffsetY;
    double _extremumOffsetY;
    _Bool _scrollUp;
    _Bool _didRecoverLastViewPoint;
    long long _lastTopPageIndex;
    long long _lastBottomPageIndex;
    _Bool _isAutoMovingUp;
    KSFeedComponentsWrapperView *_wrapperView;
    KSFeedImageAtlasLoader *_atlasLoader;
    NSMutableArray *_views;
    NSMutableArray *_cachedViews;
    long long _maxViewedPageIndex;
    vector_81097542 _viewLocations;
}

+ (_Bool)hasComponentWithViewModel:(id)arg1;
@property(nonatomic) long long maxViewedPageIndex; // @synthesize maxViewedPageIndex=_maxViewedPageIndex;
@property(nonatomic) _Bool isAutoMovingUp; // @synthesize isAutoMovingUp=_isAutoMovingUp;
@property(nonatomic) vector_81097542 viewLocations; // @synthesize viewLocations=_viewLocations;
@property(retain, nonatomic) NSMutableArray *cachedViews; // @synthesize cachedViews=_cachedViews;
@property(retain, nonatomic) NSMutableArray *views; // @synthesize views=_views;
@property(retain, nonatomic) KSFeedImageAtlasLoader *atlasLoader; // @synthesize atlasLoader=_atlasLoader;
@property(readonly, nonatomic) KSFeedComponentsWrapperView *wrapperView; // @synthesize wrapperView=_wrapperView;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)transitionAnimatingView;
- (void)cacheView:(id)arg1;
- (id)dequeueViewAtIndex:(long long)arg1;
- (void)preloadViewAtIndex:(long long)arg1;
- (void)layoutContentsIfNeeded;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (struct CGPoint)positionComponentFrom:(struct CGPoint)arg1;
- (void)componentFrameDidChange;
- (void)componentWillDisappear:(_Bool)arg1;
- (void)componentDidAppear:(_Bool)arg1;
- (void)componentWillAppear:(_Bool)arg1;
- (void)saveLastViewPoint;
- (void)recoverLastViewPointIfNeeded;
- (void)postPlayerLog;
- (void)showLikeAnimation;
- (void)resetComponentFrame;
- (id)viewForZoomingWithPincher:(id)arg1;
- (_Bool)supportsPinch;
- (_Bool)shouldPreviewWhenScrollOutOfScreen;
- (_Bool)shouldPauseWhenScrollOutOfScreen;
- (void)moveUpOnePage;
- (void)didTapMoveToCommentButton:(id)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithViewModel:(id)arg1;
- (void)dealloc;

@end

