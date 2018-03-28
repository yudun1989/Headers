//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SSThemedView.h"

@class SSThemedButton, SSThemedLabel, WDListViewModel;

@interface WDSecondaryQuestionTipsView : SSThemedView
{
    WDListViewModel *_viewModel;
    SSThemedLabel *_tipsLabel;
    SSThemedLabel *_titleLabel;
    SSThemedButton *_reasonButton;
    double _topMargin;
}

@property(nonatomic) double topMargin; // @synthesize topMargin=_topMargin;
@property(retain, nonatomic) SSThemedButton *reasonButton; // @synthesize reasonButton=_reasonButton;
@property(retain, nonatomic) SSThemedLabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) SSThemedLabel *tipsLabel; // @synthesize tipsLabel=_tipsLabel;
@property(retain, nonatomic) WDListViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void).cxx_destruct;
- (struct CGRect)frameForTitleLabel;
- (struct CGPoint)originForTipsLabel;
- (void)reasonButtonClicked:(id)arg1;
- (void)primaryTaped:(id)arg1;
- (void)refreshContent:(id)arg1;
- (void)refreshTitleLabel;
- (void)layoutLabels;
- (void)reload;
- (void)themeChanged:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 viewModel:(id)arg2;

@end

