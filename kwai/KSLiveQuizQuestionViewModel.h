//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class KSLiveQuizAudioManager, NSArray, NSAttributedString, NSString;
@protocol KSLiveQuizViewModel;

@interface KSLiveQuizQuestionViewModel : NSObject
{
    _Bool _showHideBtn;
    _Bool _isLoading;
    _Bool _showRevived;
    int _leftTime;
    KSLiveQuizAudioManager *_audioManager;
    NSAttributedString *_message;
    NSString *_questionContent;
    NSArray *_optionList;
    NSArray *_actions;
    NSAttributedString *_revivedCount;
    NSAttributedString *_note;
    NSObject<KSLiveQuizViewModel> *_quizViewModel;
    long long _headerState;
    long long _reviveCardState;
    long long _reviveCardCount;
    CDUnknownBlockType _closeBlock;
}

@property(copy, nonatomic) CDUnknownBlockType closeBlock; // @synthesize closeBlock=_closeBlock;
@property(nonatomic) _Bool showRevived; // @synthesize showRevived=_showRevived;
@property(nonatomic) long long reviveCardCount; // @synthesize reviveCardCount=_reviveCardCount;
@property(nonatomic) long long reviveCardState; // @synthesize reviveCardState=_reviveCardState;
@property(nonatomic) long long headerState; // @synthesize headerState=_headerState;
@property(nonatomic) int leftTime; // @synthesize leftTime=_leftTime;
@property(nonatomic) _Bool isLoading; // @synthesize isLoading=_isLoading;
@property(nonatomic) _Bool showHideBtn; // @synthesize showHideBtn=_showHideBtn;
@property(readonly, nonatomic) NSObject<KSLiveQuizViewModel> *quizViewModel; // @synthesize quizViewModel=_quizViewModel;
@property(copy, nonatomic) NSAttributedString *note; // @synthesize note=_note;
@property(copy, nonatomic) NSAttributedString *revivedCount; // @synthesize revivedCount=_revivedCount;
@property(copy, nonatomic) NSArray *actions; // @synthesize actions=_actions;
@property(copy, nonatomic) NSArray *optionList; // @synthesize optionList=_optionList;
@property(copy, nonatomic) NSString *questionContent; // @synthesize questionContent=_questionContent;
@property(copy, nonatomic) NSAttributedString *message; // @synthesize message=_message;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *dialogElementName;
- (_Bool)canPlayAudioEffect;
- (double)answerInterval;
@property(readonly, nonatomic) KSLiveQuizAudioManager *audioManager; // @synthesize audioManager=_audioManager;
- (void)viewDidAppear;
- (void)viewWillAppear;
- (void)buildQuestionContent;
- (void)hideAction;
- (void)closeAction;

@end

