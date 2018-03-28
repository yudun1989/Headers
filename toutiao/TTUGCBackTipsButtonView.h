//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SSWebViewBackButtonView.h"

@class TTBadgeNumberView, UILabel;

@interface TTUGCBackTipsButtonView : SSWebViewBackButtonView
{
    UILabel *_tipLabel;
    TTBadgeNumberView *_badgeNumberView;
}

@property(retain, nonatomic) TTBadgeNumberView *badgeNumberView; // @synthesize badgeNumberView=_badgeNumberView;
@property(retain, nonatomic) UILabel *tipLabel; // @synthesize tipLabel=_tipLabel;
- (void).cxx_destruct;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (long long)getBadgeNumber;
- (void)setTipsCount:(long long)arg1;
- (void)showCloseButton:(_Bool)arg1;
- (void)refreshLabelTextColor;
- (void)themeChanged:(id)arg1;
- (void)loadSubViews;
- (id)init;

@end

