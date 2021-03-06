//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class HLRichLabel, KSFeedCommentViewModel, KSFoldableLabel, KSRoundedImageAsset, NSLayoutConstraint, NSString, UIImageView, UILabel;

@interface KSNewCommentContentView : UIView
{
    NSString *_errorObserveIdentifier;
    UIImageView *_avatarView;
    UIImageView *_makerView;
    HLRichLabel *_summaryView;
    KSFoldableLabel *_contentLabel;
    UILabel *_dateLabel;
    UIImageView *_errorPromptView;
    KSFeedCommentViewModel *_viewModel;
    KSRoundedImageAsset *_imageAsset;
    NSLayoutConstraint *_summaryHeightConstraint;
    NSLayoutConstraint *_contentHeightConstraint;
    UIView *_verticalLine;
}

@property(readonly, nonatomic) UIView *verticalLine; // @synthesize verticalLine=_verticalLine;
@property(retain, nonatomic) NSLayoutConstraint *contentHeightConstraint; // @synthesize contentHeightConstraint=_contentHeightConstraint;
@property(retain, nonatomic) NSLayoutConstraint *summaryHeightConstraint; // @synthesize summaryHeightConstraint=_summaryHeightConstraint;
@property(retain, nonatomic) KSRoundedImageAsset *imageAsset; // @synthesize imageAsset=_imageAsset;
@property(readonly, nonatomic) KSFeedCommentViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) UIImageView *errorPromptView; // @synthesize errorPromptView=_errorPromptView;
@property(readonly, nonatomic) UILabel *dateLabel; // @synthesize dateLabel=_dateLabel;
@property(readonly, nonatomic) KSFoldableLabel *contentLabel; // @synthesize contentLabel=_contentLabel;
@property(readonly, nonatomic) HLRichLabel *summaryView; // @synthesize summaryView=_summaryView;
@property(readonly, nonatomic) UIImageView *makerView; // @synthesize makerView=_makerView;
@property(readonly, nonatomic) UIImageView *avatarView; // @synthesize avatarView=_avatarView;
- (void).cxx_destruct;
- (void)applyAttributeConfiguration:(id)arg1;
- (void)setLabelsBackgroundColor:(id)arg1;
- (void)bindViewModel:(id)arg1;
- (void)layoutSubviews;
- (void)dealloc;
- (void)commonInit;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;

@end

