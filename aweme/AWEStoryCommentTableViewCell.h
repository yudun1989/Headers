//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

#import "TTTAttributedLabelDelegate-Protocol.h"

@class AWECommentModel, AWEStoryCommentTransitionManager, CAShapeLayer, NSString, TTTAttributedLabel, UIImageView, UILabel, UIView;

@interface AWEStoryCommentTableViewCell : UITableViewCell <TTTAttributedLabelDelegate>
{
    CDUnknownBlockType _longPressCellBlock;
    NSString *_itemID;
    AWEStoryCommentTransitionManager *_transitionManager;
    UIImageView *_avatarView;
    UILabel *_nameLabel;
    TTTAttributedLabel *_commentLabel;
    UILabel *_replyNameLabel;
    TTTAttributedLabel *_replyCommentLabel;
    CAShapeLayer *_verticalLayer;
    UILabel *_timeLabel;
    UIView *_sepView;
    AWECommentModel *_comment;
}

+ (id)_defaultImage;
+ (id)_verticalPathWithH:(double)arg1;
+ (void)preCaculateLayoutForComment:(id)arg1 width:(double)arg2;
+ (id)identifier;
+ (double)heightForComment:(id)arg1 width:(double)arg2;
@property(retain, nonatomic) AWECommentModel *comment; // @synthesize comment=_comment;
@property(retain, nonatomic) UIView *sepView; // @synthesize sepView=_sepView;
@property(retain, nonatomic) UILabel *timeLabel; // @synthesize timeLabel=_timeLabel;
@property(retain, nonatomic) CAShapeLayer *verticalLayer; // @synthesize verticalLayer=_verticalLayer;
@property(retain, nonatomic) TTTAttributedLabel *replyCommentLabel; // @synthesize replyCommentLabel=_replyCommentLabel;
@property(retain, nonatomic) UILabel *replyNameLabel; // @synthesize replyNameLabel=_replyNameLabel;
@property(retain, nonatomic) TTTAttributedLabel *commentLabel; // @synthesize commentLabel=_commentLabel;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) UIImageView *avatarView; // @synthesize avatarView=_avatarView;
@property(retain, nonatomic) AWEStoryCommentTransitionManager *transitionManager; // @synthesize transitionManager=_transitionManager;
@property(copy, nonatomic) NSString *itemID; // @synthesize itemID=_itemID;
@property(copy, nonatomic) CDUnknownBlockType longPressCellBlock; // @synthesize longPressCellBlock=_longPressCellBlock;
- (void).cxx_destruct;
- (void)_executeTapAlphaAnimation:(id)arg1 reverse:(_Bool)arg2;
- (void)layoutSubviews;
- (void)_refreshTimeLayout;
- (void)_refreshCommentLayout;
- (void)_refreshNameLayout;
- (void)_setupUI;
- (void)replyUserTapped:(id)arg1;
- (void)commentUserTapped:(id)arg1 type:(id)arg2;
- (void)commentUserNameTapped:(id)arg1;
- (void)commentUserAvatarTapped:(id)arg1;
- (void)selfLongPressed:(id)arg1;
- (void)attributedLabel:(id)arg1 didSelectLinkWithURL:(id)arg2;
- (void)configWithComment:(id)arg1;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

