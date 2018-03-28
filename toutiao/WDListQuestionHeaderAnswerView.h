//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SSThemedView.h"

@class SSThemedLabel, WDListViewModel;

@interface WDListQuestionHeaderAnswerView : SSThemedView
{
    WDListViewModel *_viewModel;
    SSThemedLabel *_followAnswerLabel;
    SSThemedLabel *_answerCountLabel;
    SSThemedLabel *_middleDotLabel;
    SSThemedLabel *_followCountLabel;
}

@property(retain, nonatomic) SSThemedLabel *followCountLabel; // @synthesize followCountLabel=_followCountLabel;
@property(retain, nonatomic) SSThemedLabel *middleDotLabel; // @synthesize middleDotLabel=_middleDotLabel;
@property(retain, nonatomic) SSThemedLabel *answerCountLabel; // @synthesize answerCountLabel=_answerCountLabel;
@property(retain, nonatomic) SSThemedLabel *followAnswerLabel; // @synthesize followAnswerLabel=_followAnswerLabel;
@property(retain, nonatomic) WDListViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void).cxx_destruct;
- (void)updateFrame;
- (void)updateContent;
- (void)fontChanged;
- (void)addAllSubviews;
- (void)reload;
- (void)themeChanged:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 viewModel:(id)arg2;
- (void)dealloc;

@end

