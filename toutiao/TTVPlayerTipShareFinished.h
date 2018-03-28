//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "TTActivityShareSequenceChangedMessage-Protocol.h"
#import "TTVPlayerTipFinished-Protocol.h"

@class NSMutableArray, NSString, SSThemedLabel, SSThemedView, TTAlphaThemedButton, TTVVideoPlayerStateStore, TTVideoShareThemedButton;

@interface TTVPlayerTipShareFinished : UIView <TTActivityShareSequenceChangedMessage, TTVPlayerTipFinished>
{
    _Bool _isFullScreen;
    CDUnknownBlockType _finishAction;
    TTVVideoPlayerStateStore *_playerStateStore;
    TTVideoShareThemedButton *_qqZoneShare;
    TTVideoShareThemedButton *_qqShare;
    TTVideoShareThemedButton *_weixinMoment;
    TTVideoShareThemedButton *_weixinShare;
    NSMutableArray *_directShareButtons;
    TTAlphaThemedButton *_replayButton;
    TTAlphaThemedButton *_moreButton;
    SSThemedLabel *_shareLabel;
    SSThemedView *_leftLine;
    SSThemedView *_rightLine;
    UIView *_backView;
    UIView *_containerView;
    double _bannerHeight;
    long long _avaliableitems;
}

@property(nonatomic) long long avaliableitems; // @synthesize avaliableitems=_avaliableitems;
@property(nonatomic) double bannerHeight; // @synthesize bannerHeight=_bannerHeight;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) UIView *backView; // @synthesize backView=_backView;
@property(retain, nonatomic) SSThemedView *rightLine; // @synthesize rightLine=_rightLine;
@property(retain, nonatomic) SSThemedView *leftLine; // @synthesize leftLine=_leftLine;
@property(retain, nonatomic) SSThemedLabel *shareLabel; // @synthesize shareLabel=_shareLabel;
@property(retain, nonatomic) TTAlphaThemedButton *moreButton; // @synthesize moreButton=_moreButton;
@property(retain, nonatomic) TTAlphaThemedButton *replayButton; // @synthesize replayButton=_replayButton;
@property(retain, nonatomic) NSMutableArray *directShareButtons; // @synthesize directShareButtons=_directShareButtons;
@property(retain, nonatomic) TTVideoShareThemedButton *weixinShare; // @synthesize weixinShare=_weixinShare;
@property(retain, nonatomic) TTVideoShareThemedButton *weixinMoment; // @synthesize weixinMoment=_weixinMoment;
@property(retain, nonatomic) TTVideoShareThemedButton *qqShare; // @synthesize qqShare=_qqShare;
@property(retain, nonatomic) TTVideoShareThemedButton *qqZoneShare; // @synthesize qqZoneShare=_qqZoneShare;
@property(retain, nonatomic) TTVVideoPlayerStateStore *playerStateStore; // @synthesize playerStateStore=_playerStateStore;
@property(copy, nonatomic) CDUnknownBlockType finishAction; // @synthesize finishAction=_finishAction;
@property(nonatomic) _Bool isFullScreen; // @synthesize isFullScreen=_isFullScreen;
- (void).cxx_destruct;
- (void)message_shareActivitySequenceChanged;
- (id)imageByApplyingAlpha:(double)arg1 image:(id)arg2;
- (id)activityTitleWithActivity:(id)arg1;
- (id)activityImageNameWithActivity:(id)arg1;
- (void)disableInterface:(id)arg1;
- (void)setMoreButtonHidden;
- (void)layoutShareActionButtonsWithOriginY:(double)arg1;
- (void)layoutSubviews;
- (void)ttv_addMoreButton;
- (id)cellViewWithIndex:(int)arg1 image:(id)arg2 title:(id)arg3;
- (void)ttv_addShareActionButtons;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)replayButtonClicked:(id)arg1;
- (void)moreButtonClicked:(id)arg1;
- (void)ShareActionDidPress:(id)arg1;
- (void)ttv_kvo;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

