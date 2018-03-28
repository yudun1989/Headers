//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "WDAnswerServiceProtocol-Protocol.h"

@class NSArray, NSDictionary, NSMutableArray, NSString, TTActionSheetController, WDForwardStructModel, WDProfitStructModel, WDQuestionEntity, WDShareProfitStructModel;
@protocol WDModuleStructModel;

@interface WDListViewModel : NSObject <WDAnswerServiceProtocol>
{
    _Bool _listPageneedReturn;
    _Bool _canAnswer;
    _Bool _canGetRedPacket;
    _Bool _showRewardView;
    _Bool _showShareRewardView;
    _Bool _excellentCommentShow;
    _Bool _inputCommentEnable;
    _Bool _loadMoreHasMore;
    _Bool _isLoading;
    _Bool _isFinish;
    _Bool _isFailure;
    _Bool _latelyHasException;
    NSString *_qID;
    NSDictionary *_apiParameter;
    NSDictionary *_gdExtJson;
    NSArray<WDModuleStructModel> *_tabModelArray;
    WDQuestionEntity *_questionEntity;
    NSMutableArray *_dataModelsArray;
    NSMutableArray *_inviteUserModels;
    unsigned long long _questionRelatedStatus;
    NSString *_relatedQuestionTitle;
    NSString *_relatedQuestionSchema;
    NSString *_relatedReasonUrl;
    WDForwardStructModel *_repostParams;
    WDProfitStructModel *_profitModel;
    WDShareProfitStructModel *_shareProfitModel;
    long long _inputCommentShowInterval;
    CDUnknownBlockType _editBlock;
    CDUnknownBlockType _deleteBlock;
    CDUnknownBlockType _closeBlock;
    NSString *_channelSchema;
    double _offset;
    double _startTime;
    TTActionSheetController *_actionSheetController;
    long long _maxTitleLineCount;
}

+ (void)sendDetailTimeIntervalMonitorForService:(id)arg1 startTime:(double)arg2 extraData:(id)arg3;
+ (id)uploadGdExtJsonQid:(id)arg1 gdExtJson:(id)arg2;
+ (void)requestForQuestionID:(id)arg1 apiParam:(id)arg2 gdExtJson:(id)arg3 offset:(long long)arg4 finishBlock:(CDUnknownBlockType)arg5;
+ (void)trackEvent:(id)arg1 label:(id)arg2 gdExtJson:(id)arg3;
@property(nonatomic) long long maxTitleLineCount; // @synthesize maxTitleLineCount=_maxTitleLineCount;
@property(retain, nonatomic) TTActionSheetController *actionSheetController; // @synthesize actionSheetController=_actionSheetController;
@property(nonatomic) double startTime; // @synthesize startTime=_startTime;
@property(nonatomic) _Bool latelyHasException; // @synthesize latelyHasException=_latelyHasException;
@property(nonatomic) double offset; // @synthesize offset=_offset;
@property(nonatomic) _Bool isFailure; // @synthesize isFailure=_isFailure;
@property(nonatomic) _Bool isFinish; // @synthesize isFinish=_isFinish;
@property(nonatomic) _Bool isLoading; // @synthesize isLoading=_isLoading;
@property(nonatomic) _Bool loadMoreHasMore; // @synthesize loadMoreHasMore=_loadMoreHasMore;
@property(copy, nonatomic) NSString *channelSchema; // @synthesize channelSchema=_channelSchema;
@property(copy, nonatomic) CDUnknownBlockType closeBlock; // @synthesize closeBlock=_closeBlock;
@property(copy, nonatomic) CDUnknownBlockType deleteBlock; // @synthesize deleteBlock=_deleteBlock;
@property(copy, nonatomic) CDUnknownBlockType editBlock; // @synthesize editBlock=_editBlock;
@property(nonatomic) long long inputCommentShowInterval; // @synthesize inputCommentShowInterval=_inputCommentShowInterval;
@property(nonatomic) _Bool inputCommentEnable; // @synthesize inputCommentEnable=_inputCommentEnable;
@property(nonatomic) _Bool excellentCommentShow; // @synthesize excellentCommentShow=_excellentCommentShow;
@property(retain, nonatomic) WDShareProfitStructModel *shareProfitModel; // @synthesize shareProfitModel=_shareProfitModel;
@property(nonatomic) _Bool showShareRewardView; // @synthesize showShareRewardView=_showShareRewardView;
@property(retain, nonatomic) WDProfitStructModel *profitModel; // @synthesize profitModel=_profitModel;
@property(nonatomic) _Bool showRewardView; // @synthesize showRewardView=_showRewardView;
@property(nonatomic) _Bool canGetRedPacket; // @synthesize canGetRedPacket=_canGetRedPacket;
@property(retain, nonatomic) WDForwardStructModel *repostParams; // @synthesize repostParams=_repostParams;
@property(copy, nonatomic) NSString *relatedReasonUrl; // @synthesize relatedReasonUrl=_relatedReasonUrl;
@property(copy, nonatomic) NSString *relatedQuestionSchema; // @synthesize relatedQuestionSchema=_relatedQuestionSchema;
@property(copy, nonatomic) NSString *relatedQuestionTitle; // @synthesize relatedQuestionTitle=_relatedQuestionTitle;
@property(nonatomic) _Bool canAnswer; // @synthesize canAnswer=_canAnswer;
@property(nonatomic) unsigned long long questionRelatedStatus; // @synthesize questionRelatedStatus=_questionRelatedStatus;
@property(retain, nonatomic) NSMutableArray *inviteUserModels; // @synthesize inviteUserModels=_inviteUserModels;
@property(retain, nonatomic) NSMutableArray *dataModelsArray; // @synthesize dataModelsArray=_dataModelsArray;
@property(retain, nonatomic) WDQuestionEntity *questionEntity; // @synthesize questionEntity=_questionEntity;
@property(copy, nonatomic) NSArray<WDModuleStructModel> *tabModelArray; // @synthesize tabModelArray=_tabModelArray;
@property(nonatomic) _Bool listPageneedReturn; // @synthesize listPageneedReturn=_listPageneedReturn;
@property(copy, nonatomic) NSDictionary *gdExtJson; // @synthesize gdExtJson=_gdExtJson;
@property(copy, nonatomic) NSDictionary *apiParameter; // @synthesize apiParameter=_apiParameter;
@property(copy, nonatomic) NSString *qID; // @synthesize qID=_qID;
- (void).cxx_destruct;
- (void)answerStatusChangedWithAnsId:(id)arg1 actionType:(unsigned long long)arg2 error:(id)arg3;
- (long long)defaultNumberOfLines;
- (id)moreListAnswersTitle;
- (id)detailExtraInfoWith:(id)arg1;
- (id)uniqueIDArray;
- (id)answerIDArray;
- (void)transNewAnswerModelToEntityAndAppendToList:(id)arg1;
- (void)_clear;
- (void)closePage;
- (void)followQuestionWithFinishBlock:(CDUnknownBlockType)arg1;
- (void)deleteQuestionWithFinishBlock:(CDUnknownBlockType)arg1;
- (void)loadMoreFinishBlock:(CDUnknownBlockType)arg1;
- (void)requestFinishBlock:(CDUnknownBlockType)arg1;
- (void)reportQuestion;
- (void)refresh;
- (_Bool)showInviteScrollView;
- (_Bool)canEditTags;
- (_Bool)isSelf;
- (_Bool)hasTags;
- (_Bool)hasAnswers;
- (_Bool)hasNiceAnswers;
- (_Bool)hasMore;
- (void)dealloc;
- (id)initWithQid:(id)arg1 gdExtJson:(id)arg2 apiParameter:(id)arg3 needReturn:(_Bool)arg4;
- (id)wd_shareItems;
- (id)wd_customItems;
- (void)forwardToWeitoutiao;
- (id)weiTouTiaoItem;
- (id)reportItem;
- (id)editItem;
- (id)deleteItem;
- (id)adPromotionItem;
- (id)shareImage;
- (id)shareUrl;
- (id)shareDesc;
- (id)shareTitle;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

