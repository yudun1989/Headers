//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MGBaseCountdownView.h"

@class UILabel;

@interface MGCountDownTextView : MGBaseCountdownView
{
    UILabel *_numLabel;
}

@property(retain, nonatomic) UILabel *numLabel; // @synthesize numLabel=_numLabel;
- (void).cxx_destruct;
- (id)changeWithString:(id)arg1 timeSize:(long long)arg2;
- (void)timerChangeAndViewAnimation:(double)arg1;
- (void)creatCountDownView;

@end

