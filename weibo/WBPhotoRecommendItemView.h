//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

#import "WBVideoPlayerSourceView-Protocol.h"

@class NSDictionary, NSString, UIImage, UIImageView, UILabel, WBPhotoRecommendItem, WBStatus, WBTimelinePageInfo;
@protocol WBMediaPlaybackItem;

@interface WBPhotoRecommendItemView : UIButton <WBVideoPlayerSourceView>
{
    WBPhotoRecommendItem *_recommendItem;
    UIImageView *_contentImageView;
    UIImage *_flagImage;
    NSString *_maskTitle;
    UIImageView *_flagImageView;
    UILabel *_maskTitleLabel;
}

@property(retain, nonatomic) UILabel *maskTitleLabel; // @synthesize maskTitleLabel=_maskTitleLabel;
@property(retain, nonatomic) UIImageView *flagImageView; // @synthesize flagImageView=_flagImageView;
@property(copy, nonatomic) NSString *maskTitle; // @synthesize maskTitle=_maskTitle;
@property(retain, nonatomic) UIImage *flagImage; // @synthesize flagImage=_flagImage;
@property(retain, nonatomic) UIImageView *contentImageView; // @synthesize contentImageView=_contentImageView;
@property(retain, nonatomic) WBPhotoRecommendItem *recommendItem; // @synthesize recommendItem=_recommendItem;
- (void).cxx_destruct;
- (void)didPressVideoInWBVideoPlayerControllView;
@property(readonly, nonatomic) _Bool videoPlayer_shouldEnterFullScreen;
@property(readonly, nonatomic) _Bool videoPlayer_gifVideo;
@property(readonly, nonatomic) _Bool videoPlayer_videoTimelineDisabled;
@property(readonly, nonatomic) WBStatus *mediaPlaybackStatus;
@property(readonly, nonatomic) WBTimelinePageInfo *mediaPlaybackAnalysisPageInfo;
@property(readonly, nonatomic) NSDictionary *mediaPlaybackExtraLogParameters;
- (id)mediaPlaybackPlaceholderImageURL;
- (id)mediaPlaybackPlaceholderWithLoadedStatus:(_Bool *)arg1;
- (_Bool)vp_inlineVideoShouldEnterFullScreen;
- (_Bool)vp_shouldPresentVideoTimeline;
@property(readonly, nonatomic) _Bool supportsInlineMediaPlayback;
@property(readonly, nonatomic) id <WBMediaPlaybackItem> mediaPlaybackItem;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)setHighlighted:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

