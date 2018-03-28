//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ExploreArticleCellView.h"

@class SSThemedButton, SSThemedLabel, TTImageView, UIView;

@interface TTMeiNvTitleLargePicHuoShanCellView : ExploreArticleCellView
{
    long long type;
    TTImageView *_pic;
    SSThemedButton *_playButton;
    SSThemedLabel *_countLabel;
    UIView *_sepLineView;
    UIView *_bottomView;
}

+ (double)heightForData:(id)arg1 cellWidth:(double)arg2 listType:(unsigned long long)arg3;
@property(retain, nonatomic) UIView *bottomView; // @synthesize bottomView=_bottomView;
@property(retain, nonatomic) UIView *sepLineView; // @synthesize sepLineView=_sepLineView;
@property(retain, nonatomic) SSThemedLabel *countLabel; // @synthesize countLabel=_countLabel;
@property(retain, nonatomic) SSThemedButton *playButton; // @synthesize playButton=_playButton;
@property(retain, nonatomic) TTImageView *pic; // @synthesize pic=_pic;
- (void).cxx_destruct;
- (id)extraValueDic;
- (void)layoutPic;
- (void)updatePic;
- (void)updateCountLabel;
- (void)updateTitleLabel;
- (void)layoutInfoBarSubViews;
- (void)cellInListWillDisappear:(long long)arg1;
- (void)didEndDisplaying;
- (void)playButtonClicked;
- (void)refreshUI;
- (void)themeChanged:(id)arg1;
- (void)refreshWithData:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

@end

