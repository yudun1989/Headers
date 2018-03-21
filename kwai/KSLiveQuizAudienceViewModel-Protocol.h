//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "KSLiveQuizViewModel-Protocol.h"

@class BFTask, KSLiveQuizMyAwardModel, KSQuizOption, KSQuizQuestion;

@protocol KSLiveQuizAudienceViewModel <KSLiveQuizViewModel>
@property(nonatomic) _Bool quizOutViewIsShown;
@property(readonly, nonatomic) long long totalReviveCard;
@property(readonly, nonatomic) long long availableReviveCard;
@property(retain, nonatomic) KSLiveQuizMyAwardModel *myAwardModel;
@property(nonatomic) long long involveStatus;
- (BFTask *)queryQuizMyAwardWithDelay:(unsigned int)arg1;
- (BFTask *)submitQuesitonTimeout:(KSQuizQuestion *)arg1;
- (BFTask *)submitQuesiton:(KSQuizQuestion *)arg1 withSelectOption:(KSQuizOption *)arg2;
- (BFTask *)syncQuizStatus;
@end

