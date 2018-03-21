//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBMCScrollView.h"

@class TBDetailHomeViewModel, UILabel;

@interface TBDetailHomeScrollView : TBMCScrollView
{
    TBDetailHomeViewModel *_homeViewModel;
    UILabel *_arrowLabel;
    UILabel *_tipsLabel;
}

@property(retain, nonatomic) UILabel *tipsLabel; // @synthesize tipsLabel=_tipsLabel;
@property(retain, nonatomic) UILabel *arrowLabel; // @synthesize arrowLabel=_arrowLabel;
@property(retain, nonatomic) TBDetailHomeViewModel *homeViewModel; // @synthesize homeViewModel=_homeViewModel;
- (void).cxx_destruct;
- (void)setTopHint:(id)arg1 transform:(struct CGAffineTransform)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

