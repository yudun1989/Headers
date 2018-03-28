//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SSThemedTableViewCell.h"

#import "UIGestureRecognizerDelegate-Protocol.h"
#import "WDListCellBaseProtocol-Protocol.h"
#import "WDWendaListCellActionFooterViewDelegate-Protocol.h"
#import "WDWendaListCellInputCommentViewDelegate-Protocol.h"
#import "WDWendaListCellUserHeaderViewDelegate-Protocol.h"

@class NSDictionary, NSString, SSThemedLabel, SSThemedView, TTImageView, WDAnswerEntity, WDListCellLayoutModel, WDListCellViewModel, WDListTagImageView, WDWendaListCellActionFooterView, WDWendaListCellExcellentCommentView, WDWendaListCellInputCommentView, WDWendaListCellPureCharacterView, WDWendaListCellUserHeaderView;
@protocol WDListCellActionDelegate, WDListCellLayoutModelBaseProtocol;

@interface WDWendaListLightSingleImageCell : SSThemedTableViewCell <WDWendaListCellUserHeaderViewDelegate, WDWendaListCellActionFooterViewDelegate, UIGestureRecognizerDelegate, WDWendaListCellInputCommentViewDelegate, WDListCellBaseProtocol>
{
    _Bool _isViewHighlighted;
    _Bool _isSelfFollow;
    _Bool _needSendRedPackFlag;
    id <WDListCellActionDelegate> _delegate;
    double _inputViewTop;
    WDWendaListCellInputCommentView *_inputView;
    WDWendaListCellUserHeaderView *_headerView;
    WDWendaListCellActionFooterView *_actionView;
    WDWendaListCellPureCharacterView *_characterView;
    WDWendaListCellExcellentCommentView *_commentView;
    WDListTagImageView *_answerImageView;
    TTImageView *_rewardIconImageView;
    SSThemedLabel *_rewardLabel;
    SSThemedLabel *_bottomLabel;
    SSThemedView *_lineView;
    SSThemedView *_footerView;
    WDListCellLayoutModel *_cellLayoutModel;
    NSDictionary *_gdExtJson;
    NSDictionary *_apiParams;
    double _cellWidth;
}

@property(nonatomic) _Bool needSendRedPackFlag; // @synthesize needSendRedPackFlag=_needSendRedPackFlag;
@property(nonatomic) _Bool isSelfFollow; // @synthesize isSelfFollow=_isSelfFollow;
@property(nonatomic) _Bool isViewHighlighted; // @synthesize isViewHighlighted=_isViewHighlighted;
@property(nonatomic) double cellWidth; // @synthesize cellWidth=_cellWidth;
@property(copy, nonatomic) NSDictionary *apiParams; // @synthesize apiParams=_apiParams;
@property(copy, nonatomic) NSDictionary *gdExtJson; // @synthesize gdExtJson=_gdExtJson;
@property(retain, nonatomic) WDListCellLayoutModel *cellLayoutModel; // @synthesize cellLayoutModel=_cellLayoutModel;
@property(retain, nonatomic) SSThemedView *footerView; // @synthesize footerView=_footerView;
@property(retain, nonatomic) SSThemedView *lineView; // @synthesize lineView=_lineView;
@property(retain, nonatomic) SSThemedLabel *bottomLabel; // @synthesize bottomLabel=_bottomLabel;
@property(retain, nonatomic) SSThemedLabel *rewardLabel; // @synthesize rewardLabel=_rewardLabel;
@property(retain, nonatomic) TTImageView *rewardIconImageView; // @synthesize rewardIconImageView=_rewardIconImageView;
@property(retain, nonatomic) WDListTagImageView *answerImageView; // @synthesize answerImageView=_answerImageView;
@property(retain, nonatomic) WDWendaListCellExcellentCommentView *commentView; // @synthesize commentView=_commentView;
@property(retain, nonatomic) WDWendaListCellPureCharacterView *characterView; // @synthesize characterView=_characterView;
@property(retain, nonatomic) WDWendaListCellActionFooterView *actionView; // @synthesize actionView=_actionView;
@property(retain, nonatomic) WDWendaListCellUserHeaderView *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) WDWendaListCellInputCommentView *inputView; // @synthesize inputView=_inputView;
@property(nonatomic) double inputViewTop; // @synthesize inputViewTop=_inputViewTop;
@property(nonatomic) __weak id <WDListCellActionDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)diggAnimationWith:(id)arg1;
@property(readonly, nonatomic) WDAnswerEntity *ansEntity;
@property(readonly, nonatomic) WDListCellViewModel *cellViewModel;
- (id)getSuitableFinishBackViewWithCurrentContext;
- (id)largeImageUrls;
- (void)onTapAnswerImageView:(id)arg1;
- (void)answerForwardToUGCSuccess:(id)arg1;
- (void)followNotification:(id)arg1;
- (void)themeChanged:(id)arg1;
- (void)listCellInputCommentViewTriggerInput;
- (void)listCellActionFooterViewForwardButtonClick;
- (void)listCellActionFooterViewCommentButtonClick;
- (void)listCellActionFooterViewDiggButtonClick:(id)arg1;
- (void)listCellUserHeaderViewFollowButtonClick:(id)arg1;
- (void)listCellUserHeaderViewAvatarClick;
- (void)addObserveNotification;
- (void)addObserveKVO;
- (void)createSubviewsIfNeeded;
- (void)refreshForwardCount;
- (void)refreshCommentCount;
- (void)refreshDiggCount;
- (void)refreshBottomLabelContent;
- (void)refreshFollowButtonState;
- (void)refreshIntroLabelContent;
- (void)updateFollowStateWithNewIsFollowing:(_Bool)arg1;
- (void)refreshFooterViewLayout:(double)arg1;
- (double)refreshInputViewContentAndLayout:(double)arg1;
- (double)refreshCommentViewContentAndLayout:(double)arg1;
- (double)refreshLineViewLayoutWithTop:(double)arg1;
- (double)refreshActionViewContentAndLayout:(double)arg1;
- (double)refreshBottomViewContentAndLayout:(double)arg1;
- (double)refreshAnswerImageContentAndLayout:(double)arg1;
- (double)refreshAnswerTextContentAndLayout:(double)arg1;
- (double)refreshUserInfoViewContentAndLayout;
- (void)refreshSubviewsContentAndLayout;
- (void)refreshWithCellLayoutModel:(id)arg1 cellWidth:(double)arg2;
@property(readonly, nonatomic) id <WDListCellLayoutModelBaseProtocol> layoutModel;
- (void)cellDidSelected;
- (void)prepareForReuse;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 gdExtJson:(id)arg3 apiParams:(id)arg4;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

