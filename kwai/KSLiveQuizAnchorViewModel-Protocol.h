//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "KSLiveQuizViewModel-Protocol.h"

@class BFTask, KSQuizQuestion, KSQuizSheet;

@protocol KSLiveQuizAnchorViewModel <KSLiveQuizViewModel>
@property(readonly, nonatomic) double sentSummaryTimestamp;
@property(readonly, nonatomic) int leftTime;
- (void)sheetSelected:(KSQuizSheet *)arg1;
- (void)changeToNextQuestion;
- (BFTask *)reviewPublishForQuestion:(KSQuizQuestion *)arg1;
- (BFTask *)queryReviewForQuestion:(KSQuizQuestion *)arg1;
- (BFTask *)askQuestion:(KSQuizQuestion *)arg1;
- (BFTask *)startQuiz;
- (BFTask *)fetchLiveSheets;
@end

