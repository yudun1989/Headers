//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TTUGCBaseCellView.h"

#import "TTShareManagerDelegate-Protocol.h"
#import "TTVDemandPlayerDelegate-Protocol.h"
#import "TTVFeedPlayMovie-Protocol.h"

@class Article, ExploreOrderedData, NSArray, NSDictionary, NSMutableDictionary, NSString, SSThemedButton, SSThemedLabel, SSThemedView, TTHighlightedView, TTShareManager, TTThreadImageViewCell, TTUGCAttributedLabel, TTVPlayVideo;

@interface TTUGCU13VideoCellView : TTUGCBaseCellView <TTVDemandPlayerDelegate, TTShareManagerDelegate, TTVFeedPlayMovie>
{
    _Bool _isFowardedVideo;
    ExploreOrderedData *_orderedData;
    Article *_article;
    NSDictionary *_commonV3Extra;
    TTThreadImageViewCell *_picView;
    SSThemedButton *_playButton;
    TTVPlayVideo *_movieView;
    SSThemedView *_forwardedItemBackgroundView;
    TTHighlightedView *_forwardedItemContainerView;
    TTUGCAttributedLabel *_forwardedItemContentLabel;
    NSArray *_forwardedItemImageViews;
    SSThemedLabel *_forwardedItemStatusLabel;
    NSMutableDictionary *_videoShareLogDic;
    TTShareManager *_shareManager;
}

@property(retain, nonatomic) TTShareManager *shareManager; // @synthesize shareManager=_shareManager;
@property(retain, nonatomic) NSMutableDictionary *videoShareLogDic; // @synthesize videoShareLogDic=_videoShareLogDic;
@property(nonatomic) _Bool isFowardedVideo; // @synthesize isFowardedVideo=_isFowardedVideo;
@property(retain, nonatomic) SSThemedLabel *forwardedItemStatusLabel; // @synthesize forwardedItemStatusLabel=_forwardedItemStatusLabel;
@property(retain, nonatomic) NSArray *forwardedItemImageViews; // @synthesize forwardedItemImageViews=_forwardedItemImageViews;
@property(retain, nonatomic) TTUGCAttributedLabel *forwardedItemContentLabel; // @synthesize forwardedItemContentLabel=_forwardedItemContentLabel;
@property(retain, nonatomic) TTHighlightedView *forwardedItemContainerView; // @synthesize forwardedItemContainerView=_forwardedItemContainerView;
@property(retain, nonatomic) SSThemedView *forwardedItemBackgroundView; // @synthesize forwardedItemBackgroundView=_forwardedItemBackgroundView;
@property(retain, nonatomic) TTVPlayVideo *movieView; // @synthesize movieView=_movieView;
@property(retain, nonatomic) SSThemedButton *playButton; // @synthesize playButton=_playButton;
@property(retain, nonatomic) TTThreadImageViewCell *picView; // @synthesize picView=_picView;
@property(copy, nonatomic) NSDictionary *commonV3Extra; // @synthesize commonV3Extra=_commonV3Extra;
@property(retain, nonatomic) Article *article; // @synthesize article=_article;
@property(retain, nonatomic) ExploreOrderedData *orderedData; // @synthesize orderedData=_orderedData;
- (void).cxx_destruct;
- (id)categoryID;
- (id)logPb;
- (id)enterFrom;
- (id)videoArticle;
- (unsigned long long)cellSubStyle;
- (unsigned long long)cellStyle;
- (void)cell_attachMovieView:(id)arg1;
- (id)cell_detachMovieView;
- (_Bool)cell_hasMovieView;
- (_Bool)cell_isMovieFullScreen;
- (_Bool)cell_isPlayingMovie;
- (void)cellInListWillDisappear:(long long)arg1;
- (void)invalidateMovieView;
- (void)stopMovieViewPlay:(id)arg1;
- (id)v3EnterFrom;
- (void)shareLogV3WithEventName:(id)arg1 params:(id)arg2;
- (void)shareManager:(id)arg1 completedWith:(id)arg2 sharePanel:(id)arg3 error:(id)arg4 desc:(id)arg5;
- (id)imageWithView:(id)arg1;
- (id)wechatTimelineCotentItem;
- (id)videoShareImage;
- (id)videoShareUrl;
- (id)videoShareDesc;
- (id)videoTimeLineTitle;
- (id)videoShareTitle;
- (void)directShareActionWithActivityType:(id)arg1;
- (void)playingDirectShareActionWithActivityType:(id)arg1;
- (void)playFinishDirectShareActionWithActivityType:(id)arg1;
- (struct CGRect)ttv_movieViewFrameAfterExitFullscreen;
- (void)actionChangeCallbackWithAction:(id)arg1;
- (void)playerPlaybackState:(long long)arg1;
- (void)movieViewPlayFinished;
- (void)removeMovieViewNotification;
- (void)registerMovieViewNotification;
- (void)addTrackExtra;
- (void)addUrlTracker;
- (void)ttv_configADFinishedView:(id)arg1;
- (void)playButtonClicked;
- (void)layoutVideoComponent;
- (void)layoutForwardedItemStatusComponent;
- (void)layoutForwardedItemComponent;
@property(readonly, nonatomic) double videoStartY;
- (void)themeChanged:(id)arg1;
- (void)refreshWithLayoutModel:(id)arg1;
- (void)layoutComponents;
- (void)stopPlayVideo;
- (void)willAppear;
- (void)didDisappear;
- (void)createComponents;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

