//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, TTWendaAnswerCellViewModel;

@interface TTWendaAnswerCellLayoutModel : NSObject
{
    _Bool _isFollowButtonHidden;
    _Bool _isBottomLabelAndLineHidden;
    _Bool _isExpanded;
    _Bool _needCalculateLayout;
    TTWendaAnswerCellViewModel *_viewModel;
    long long _answerLayoutType;
    double _cellCacheHeight;
    double _contentLabelHeight;
    double _questionLabelHeight;
    double _quoteViewHeight;
    double _actionViewHeight;
    double _bottomLabelHeight;
    double _imagesBgViewHeight;
    NSArray *_imageViewRects;
    long long _answerLinesCount;
    long long _displayImageCount;
    long long _maxImageCount;
    double _cellWidth;
}

+ (double)feedAnswerAbstractContentLineSpace;
+ (double)feedAnswerAbstractContentLineHeight;
+ (double)feedAnswerAbstractContentFontSize;
+ (double)feedAnswerTitleContentLineHeight;
+ (double)feedAnswerTitleContentFontSize;
+ (double)feedQuestionTitleContentLineHeight;
+ (double)feedQuestionTitleContentFontSize;
+ (id)getCellLayoutModelFromOrderedData:(id)arg1;
@property(nonatomic) double cellWidth; // @synthesize cellWidth=_cellWidth;
@property(nonatomic) _Bool needCalculateLayout; // @synthesize needCalculateLayout=_needCalculateLayout;
@property(nonatomic) _Bool isExpanded; // @synthesize isExpanded=_isExpanded;
@property(nonatomic) _Bool isBottomLabelAndLineHidden; // @synthesize isBottomLabelAndLineHidden=_isBottomLabelAndLineHidden;
@property(nonatomic) _Bool isFollowButtonHidden; // @synthesize isFollowButtonHidden=_isFollowButtonHidden;
@property(nonatomic) long long maxImageCount; // @synthesize maxImageCount=_maxImageCount;
@property(nonatomic) long long displayImageCount; // @synthesize displayImageCount=_displayImageCount;
@property(nonatomic) long long answerLinesCount; // @synthesize answerLinesCount=_answerLinesCount;
@property(retain, nonatomic) NSArray *imageViewRects; // @synthesize imageViewRects=_imageViewRects;
@property(nonatomic) double imagesBgViewHeight; // @synthesize imagesBgViewHeight=_imagesBgViewHeight;
@property(nonatomic) double bottomLabelHeight; // @synthesize bottomLabelHeight=_bottomLabelHeight;
@property(nonatomic) double actionViewHeight; // @synthesize actionViewHeight=_actionViewHeight;
@property(nonatomic) double quoteViewHeight; // @synthesize quoteViewHeight=_quoteViewHeight;
@property(nonatomic) double questionLabelHeight; // @synthesize questionLabelHeight=_questionLabelHeight;
@property(nonatomic) double contentLabelHeight; // @synthesize contentLabelHeight=_contentLabelHeight;
@property(nonatomic) double cellCacheHeight; // @synthesize cellCacheHeight=_cellCacheHeight;
@property(nonatomic) long long answerLayoutType; // @synthesize answerLayoutType=_answerLayoutType;
@property(retain, nonatomic) TTWendaAnswerCellViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void).cxx_destruct;
- (void)settingFontSizeChanged:(id)arg1;
- (void)addNotification;
- (double)horizontalPadding;
- (double)calculateActionViewLayout;
- (double)calculateBottomLabelLayout;
- (double)calculateQuoteViewLayout;
- (double)calculateAnswerImagesViewLayout;
- (double)calculateContentLabelLayout;
- (double)calculateAnswerLabelLayout;
- (double)calculateQuestionLabelLayout;
- (double)calculateRecommendCardViewLayout;
- (double)calculateUserInfoViewLayout;
- (double)calculateTotalCellHeightUgcStyle;
- (double)calculateTotalCellHeightNotUgcStyle;
- (void)calculateLayoutIfNeedWithCellWidth:(double)arg1;
- (_Bool)showBottomSepView;
- (_Bool)showTopSepView;
- (id)initWithOrderedData:(id)arg1;
- (void)dealloc;

@end

