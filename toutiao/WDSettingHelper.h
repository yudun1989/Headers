//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "Singleton-Protocol.h"

@class NSDictionary, NSString;

@interface WDSettingHelper : NSObject <Singleton>
{
    _Bool _isStautsBarStyleDefault;
    NSDictionary *_settingDict;
    long long _listAnswerHasImgTextMaxLineCount;
}

+ (id)defaultWendaDetailURLHosts;
+ (id)wendaDetailURLHosts;
+ (void)saveWenDaDetailUrlHosts:(id)arg1;
+ (id)savedWendaInfoDict;
+ (void)saveWendaAppInfoDict:(id)arg1;
@property(nonatomic) _Bool isStautsBarStyleDefault; // @synthesize isStautsBarStyleDefault=_isStautsBarStyleDefault;
@property(nonatomic) long long listAnswerHasImgTextMaxLineCount; // @synthesize listAnswerHasImgTextMaxLineCount=_listAnswerHasImgTextMaxLineCount;
@property(retain, nonatomic) NSDictionary *settingDict; // @synthesize settingDict=_settingDict;
- (void).cxx_destruct;
- (_Bool)isFeedHeaderTextType;
- (unsigned long long)wendaDetailHeaderViewStyle;
- (long long)wdAnswerDetailShowSlideType;
- (void)wdSetDetailStatusBarStyleIsDefault:(_Bool)arg1;
- (_Bool)wdDetailStatusBarStyleIsDefault;
- (_Bool)wdDetailNewPushDisabled;
- (_Bool)wdDetailShowMode;
- (id)postQuestionTagPlaceHolder;
- (_Bool)isDescRequired;
- (long long)minQuestionDescCharaterNumber;
- (long long)maxQuestionDescCharaterNumber;
- (id)postQuestionDescPlaceHolder;
- (id)wendaPostQuestionHintSchema;
- (id)wendaPostQuestionHintTitle;
- (long long)minQuestionTitleCharaterNumber;
- (long long)maxQuestionTitleCharaterNumber;
- (id)wendaPostQuestionPlaceHolder;
- (id)wendaPostFirstHintArray;
- (id)wendaCategoryPlaceHolder;
- (_Bool)isPostAnswerVideo;
- (_Bool)isQuestionShowPicture;
- (_Bool)isQuestionShareRewardUserViewShow;
- (_Bool)isQuestionRewardUserViewShow;
- (_Bool)isWenSwithOpen;
- (id)wendaQuestionReportSetting;
- (id)wendaAnswerReportSetting;
- (id)minAnswerLengthText;
- (id)listMoreAnswerCountText;
- (id)quickPostAnswerPlaceholder;
- (id)postAnswerPlaceholder;
- (id)listQuestionHeaderAnswerCountText;
- (id)listSectionTitleText;
- (long long)listInputCommentShowInterval;
- (_Bool)isListInputCommentEnable;
- (_Bool)isListExcellentCommentShow;
- (long long)listCellExcellentCommentContentMaxLine;
- (long long)minAnswerTextLength;
- (long long)listAnswerHasImgTextMaxCount;
- (long long)moreListAnswerTextMaxCount;
- (long long)listCellContentMaxLine;
- (double)pageStayErrorTime;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

