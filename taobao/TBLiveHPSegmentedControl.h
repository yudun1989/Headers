//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBLiveSegmentedControl.h"

@class UIButton;

@interface TBLiveHPSegmentedControl : TBLiveSegmentedControl
{
    long long _startColor;
    long long _endColor;
    long long _highLightColor;
    UIButton *_lastSelectedBTN;
}

- (void).cxx_destruct;
- (void)scrollToFrameVisible:(struct CGRect)arg1;
- (void)setIndicatorViewBGColor;
- (void)setBGColor;
- (void)buttonSelect:(id)arg1;
- (void)setupView;

@end

