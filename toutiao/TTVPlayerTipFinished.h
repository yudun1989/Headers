//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "TTVPlayerTipFinished-Protocol.h"

@class NSString, SSThemedButton, SSThemedLabel, TTVPlayerStateStore;

@interface TTVPlayerTipFinished : UIView <TTVPlayerTipFinished>
{
    CDUnknownBlockType _finishAction;
    TTVPlayerStateStore *_playerStateStore;
    SSThemedButton *_replayButton;
    SSThemedButton *_shareButton;
    SSThemedLabel *_replayLabel;
    SSThemedLabel *_shareLabel;
    SSThemedButton *_moreButton;
    UIView *_backView;
    UIView *_containerView;
    double _bannerHeight;
}

@property(nonatomic) double bannerHeight; // @synthesize bannerHeight=_bannerHeight;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) UIView *backView; // @synthesize backView=_backView;
@property(retain, nonatomic) SSThemedButton *moreButton; // @synthesize moreButton=_moreButton;
@property(retain, nonatomic) SSThemedLabel *shareLabel; // @synthesize shareLabel=_shareLabel;
@property(retain, nonatomic) SSThemedLabel *replayLabel; // @synthesize replayLabel=_replayLabel;
@property(retain, nonatomic) SSThemedButton *shareButton; // @synthesize shareButton=_shareButton;
@property(retain, nonatomic) SSThemedButton *replayButton; // @synthesize replayButton=_replayButton;
@property(retain, nonatomic) TTVPlayerStateStore *playerStateStore; // @synthesize playerStateStore=_playerStateStore;
@property(copy, nonatomic) CDUnknownBlockType finishAction; // @synthesize finishAction=_finishAction;
- (void).cxx_destruct;
- (void)ttv_addMoreButton;
- (void)disableInterface:(id)arg1;
- (void)moreButtonClicked:(id)arg1;
- (void)replayButtonClicked:(id)arg1;
- (void)shareButtonClicked:(id)arg1;
- (void)layoutSubviews;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)actionChangeCallbackWithAction:(id)arg1 state:(id)arg2;
- (void)ttv_kvo;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

