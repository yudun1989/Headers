//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SSThemedTableViewCell.h"

#import "TTUGCAttributedLabelDelegate-Protocol.h"

@class DetailActionRequestManager, NSArray, NSDictionary, NSString, SSThemedButton, TTActionSheetController, TTAsyncCornerImageView, TTAsyncLabel, TTCommentDetailCellLayout, TTCommentDetailReplyCommentModel, TTDiggButton, TTUGCAttributedLabel, TTUserInfoView;
@protocol TTCommentDetailCellDelegate;

@interface TTCommentDetailCell : SSThemedTableViewCell <TTUGCAttributedLabelDelegate>
{
    _Bool _impressionShown;
    _Bool _isBanShowAuthor;
    _Bool _hasQuotedContent;
    id <TTCommentDetailCellDelegate> _delegate;
    NSString *_source;
    NSDictionary *_commentTrackDictionary;
    TTCommentDetailReplyCommentModel *_commentModel;
    TTCommentDetailCellLayout *_layout;
    TTAsyncCornerImageView *_avatarView;
    TTUserInfoView *_nameView;
    TTDiggButton *_digButton;
    TTAsyncLabel *_userInfoLabel;
    TTAsyncLabel *_timeLabel;
    TTUGCAttributedLabel *_contentLabel;
    SSThemedButton *_deleteButton;
    DetailActionRequestManager *_actionManager;
    NSArray *_menuItems;
    TTActionSheetController *_actionSheetController;
}

@property(retain, nonatomic) TTActionSheetController *actionSheetController; // @synthesize actionSheetController=_actionSheetController;
@property(retain, nonatomic) NSArray *menuItems; // @synthesize menuItems=_menuItems;
@property(retain, nonatomic) DetailActionRequestManager *actionManager; // @synthesize actionManager=_actionManager;
@property(nonatomic) _Bool hasQuotedContent; // @synthesize hasQuotedContent=_hasQuotedContent;
@property(retain, nonatomic) SSThemedButton *deleteButton; // @synthesize deleteButton=_deleteButton;
@property(retain, nonatomic) TTUGCAttributedLabel *contentLabel; // @synthesize contentLabel=_contentLabel;
@property(retain, nonatomic) TTAsyncLabel *timeLabel; // @synthesize timeLabel=_timeLabel;
@property(retain, nonatomic) TTAsyncLabel *userInfoLabel; // @synthesize userInfoLabel=_userInfoLabel;
@property(retain, nonatomic) TTDiggButton *digButton; // @synthesize digButton=_digButton;
@property(retain, nonatomic) TTUserInfoView *nameView; // @synthesize nameView=_nameView;
@property(retain, nonatomic) TTAsyncCornerImageView *avatarView; // @synthesize avatarView=_avatarView;
@property(retain, nonatomic) TTCommentDetailCellLayout *layout; // @synthesize layout=_layout;
@property(retain, nonatomic) TTCommentDetailReplyCommentModel *commentModel; // @synthesize commentModel=_commentModel;
@property(copy, nonatomic) NSDictionary *commentTrackDictionary; // @synthesize commentTrackDictionary=_commentTrackDictionary;
@property(copy, nonatomic) NSString *source; // @synthesize source=_source;
@property(nonatomic) _Bool isBanShowAuthor; // @synthesize isBanShowAuthor=_isBanShowAuthor;
@property(nonatomic) _Bool impressionShown; // @synthesize impressionShown=_impressionShown;
@property(nonatomic) __weak id <TTCommentDetailCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)resetContentLabelBackgroundColor;
- (void)changeContentLabelBackgroundColor;
- (void)hideMenu;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)reportComment:(id)arg1;
- (void)customCopy:(id)arg1;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (void)willHideMenu;
- (void)handleLongPress:(id)arg1;
- (_Bool)canBecomeFirstResponder;
- (_Bool)isDetailComment;
- (id)_trackerSource;
- (void)themeChanged:(id)arg1;
- (void)attributedLabel:(id)arg1 didSelectLinkWithURL:(id)arg2;
- (void)digButtonOnClick:(id)arg1;
- (void)deleteButtonOnClick:(id)arg1;
- (void)replyButtonOnClick:(id)arg1;
- (void)nameViewOnClick:(id)arg1;
- (void)avatarViewOnClick:(id)arg1;
- (void)refreshDeleteButton;
- (void)refreshContent;
- (void)refreshUserInfo;
- (void)refreshDigButton;
- (void)refreshTimeLabel;
- (void)refreshNameView;
- (void)refreshAvatarView;
- (void)tt_refreshConditionWithLayout:(id)arg1 model:(id)arg2;
- (void)setupViews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

