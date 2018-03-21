//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "FavSightViewDelegate-Protocol.h"

@class FavSightView, MMUILabel, MMWebImageView, NSString, SightIconView, SimpleImgInfo, UIImageView;
@protocol FavSightViewDelegate;

@interface MMFullScreenItemView : UIView <FavSightViewDelegate>
{
    SightIconView *m_sightIconView;
    MMUILabel *m_hintLabel;
    _Bool m_isItemShowing;
    FavSightView *sightView;
    UIImageView *imageView;
    MMWebImageView *gifView;
    _Bool _isReady;
    SimpleImgInfo *_imgInfo;
    id <FavSightViewDelegate> _delegate;
}

@property(nonatomic) __weak id <FavSightViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool isReady; // @synthesize isReady=_isReady;
@property(retain, nonatomic) SimpleImgInfo *imgInfo; // @synthesize imgInfo=_imgInfo;
- (void).cxx_destruct;
- (void)onFavSightSizeDidChange:(id)arg1;
- (void)restartDownload;
- (void)onExitFullScreen;
- (void)updateImage:(id)arg1;
- (void)setSightDownFail;
- (void)setSightDownFinsh;
- (void)setSightFinishedLength:(int)arg1 TotalLength:(int)arg2;
- (void)setVideoAutoPlayAfterDownload:(_Bool)arg1;
- (void)HideDataExpiredView;
- (void)FavDataExpiredViewResize;
- (void)showFavDataExpiredView;
- (void)releaseContentView;
- (void)onClick;
- (_Bool)isItemShowing;
- (void)onHide;
- (void)onShow;
- (void)showIconView;
- (void)hideIconView;
- (void)initContentView:(id)arg1;
- (void)setContentMode:(long long)arg1;
- (void)layoutSubviews;
- (void)setFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

