//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBPageInfoBaseCardView.h"

#import "WBCommonButtonViewDelegate-Protocol.h"

@class NSString, WBCommonButtonModel, WBCommonButtonStyleArticleQAGlaceView, WBCommonButtonView, WBContactAvatarView, WBContentImageView, WBTimelineLargeCardTextView, WBTimelineScreenNameLabel, WBUser;

@interface WBPageInfoArticleQAGlanceView : WBPageInfoBaseCardView <WBCommonButtonViewDelegate>
{
    WBUser *user;
    double userInfoLeftTextWidth;
    double userInfoLeftTextHeight;
    double userInfoRightTextWidth;
    double userInfoRightTextHeight;
    double descriptionTextActualWidth;
    double descriptionTextActualHeight;
    double screenNameActualWidth;
    double commonButtonViewWidth;
    WBContactAvatarView *_avatarView;
    WBTimelineScreenNameLabel *_screenNameLabel;
    WBCommonButtonStyleArticleQAGlaceView *_commonButton;
    WBContentImageView *_typeIconView;
    WBContentImageView *_cornerIconView;
    WBTimelineLargeCardTextView *_userInfoLeftTextView;
    WBTimelineLargeCardTextView *_userInfoRightTextView;
    WBTimelineLargeCardTextView *_descriptionView;
    WBCommonButtonModel *_followButtonModel;
    WBCommonButtonModel *_answerButtonModel;
    WBCommonButtonView *_answerButton;
}

+ (id)_linesArrayWithPageInfo:(id)arg1;
+ (id)_linesArrayWithUserInfoRightText:(id)arg1;
+ (id)_linesArrayWithUserInfoLeftText:(id)arg1;
+ (unsigned long long)timelinePageInfoViewBorderStyle;
+ (struct UIEdgeInsets)timelineBackgroundBorderEdgeInsetsWithPageInfo:(id)arg1;
+ (_Bool)timelineNeedsBackgroundBorder;
+ (_Bool)timelineIntegratable;
+ (double)heightConstraintToWidth:(double)arg1 forPageInfo:(id)arg2 displayType:(long long)arg3;
@property(retain, nonatomic) WBCommonButtonView *answerButton; // @synthesize answerButton=_answerButton;
@property(retain, nonatomic) WBCommonButtonModel *answerButtonModel; // @synthesize answerButtonModel=_answerButtonModel;
@property(retain, nonatomic) WBCommonButtonModel *followButtonModel; // @synthesize followButtonModel=_followButtonModel;
@property(retain, nonatomic) WBTimelineLargeCardTextView *descriptionView; // @synthesize descriptionView=_descriptionView;
@property(retain, nonatomic) WBTimelineLargeCardTextView *userInfoRightTextView; // @synthesize userInfoRightTextView=_userInfoRightTextView;
@property(retain, nonatomic) WBTimelineLargeCardTextView *userInfoLeftTextView; // @synthesize userInfoLeftTextView=_userInfoLeftTextView;
@property(retain, nonatomic) WBContentImageView *cornerIconView; // @synthesize cornerIconView=_cornerIconView;
@property(retain, nonatomic) WBContentImageView *typeIconView; // @synthesize typeIconView=_typeIconView;
@property(retain, nonatomic) WBCommonButtonStyleArticleQAGlaceView *commonButton; // @synthesize commonButton=_commonButton;
@property(retain, nonatomic) WBTimelineScreenNameLabel *screenNameLabel; // @synthesize screenNameLabel=_screenNameLabel;
@property(retain, nonatomic) WBContactAvatarView *avatarView; // @synthesize avatarView=_avatarView;
- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (_Bool)_isFollowedByFollowButtonModel:(id)arg1;
- (void)_loadImageURL:(id)arg1 completed:(CDUnknownBlockType)arg2;
- (void)_updateAvatarImageViewWithCoverShadowShouldDraw:(_Bool)arg1 shadowShouldDraw:(_Bool)arg2 pageInfo:(id)arg3;
- (void)_updateCommonButtonViewWidth;
- (void)_buildUserInfoLeftRightText:(id *)arg1 userInfoRightText:(id *)arg2 userScreenNameFoundInPageTitle:(_Bool *)arg3;
- (void)resetCommonButtonViewFrame:(struct CGSize)arg1;
- (void)clearViewsForAsyncLoading;
- (void)updateViewWithPageInfo:(id)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (Class)contentImageViewClass;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

