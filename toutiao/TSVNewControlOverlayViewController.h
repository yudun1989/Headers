//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "TSVControlOverlayViewController-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"

@class CAGradientLayer, NSString, TSVAvatarImageView, TSVControlOverlayViewModel, TSVDebugInfoView, TSVEventPassthroughView, TSVHorizontalVideoActionViewController, TSVTagInfoView, TSVTopBarViewController, TSVVerticalVideoActionViewController, TTFollowThemeButton, TTUGCAttributedLabel, UIButton, UIView;

@interface TSVNewControlOverlayViewController : UIViewController <UIGestureRecognizerDelegate, TSVControlOverlayViewController>
{
    TSVControlOverlayViewModel *viewModel;
    TSVTopBarViewController *_topBarViewController;
    TSVEventPassthroughView *_bottomContainerView;
    CAGradientLayer *_bottomGradientLayer;
    UIView *_videoInfoContainerView;
    UIButton *_writeCommentButton;
    TTUGCAttributedLabel *_titleLabel;
    UIView *_userInfoContainerView;
    TSVAvatarImageView *_avatarImageView;
    UIButton *_userNameButton;
    TTFollowThemeButton *_followButton;
    UIView *_normalTagContainerView;
    TSVTagInfoView *_activityTagView;
    TSVVerticalVideoActionViewController *_verticalVideoActionViewController;
    TSVHorizontalVideoActionViewController *_horizontalVideoActionViewController;
    TSVDebugInfoView *_debugInfoView;
}

@property(retain, nonatomic) TSVDebugInfoView *debugInfoView; // @synthesize debugInfoView=_debugInfoView;
@property(retain, nonatomic) TSVHorizontalVideoActionViewController *horizontalVideoActionViewController; // @synthesize horizontalVideoActionViewController=_horizontalVideoActionViewController;
@property(retain, nonatomic) TSVVerticalVideoActionViewController *verticalVideoActionViewController; // @synthesize verticalVideoActionViewController=_verticalVideoActionViewController;
@property(retain, nonatomic) TSVTagInfoView *activityTagView; // @synthesize activityTagView=_activityTagView;
@property(retain, nonatomic) UIView *normalTagContainerView; // @synthesize normalTagContainerView=_normalTagContainerView;
@property(retain, nonatomic) TTFollowThemeButton *followButton; // @synthesize followButton=_followButton;
@property(retain, nonatomic) UIButton *userNameButton; // @synthesize userNameButton=_userNameButton;
@property(retain, nonatomic) TSVAvatarImageView *avatarImageView; // @synthesize avatarImageView=_avatarImageView;
@property(retain, nonatomic) UIView *userInfoContainerView; // @synthesize userInfoContainerView=_userInfoContainerView;
@property(retain, nonatomic) TTUGCAttributedLabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIButton *writeCommentButton; // @synthesize writeCommentButton=_writeCommentButton;
@property(retain, nonatomic) UIView *videoInfoContainerView; // @synthesize videoInfoContainerView=_videoInfoContainerView;
@property(retain, nonatomic) CAGradientLayer *bottomGradientLayer; // @synthesize bottomGradientLayer=_bottomGradientLayer;
@property(retain, nonatomic) TSVEventPassthroughView *bottomContainerView; // @synthesize bottomContainerView=_bottomContainerView;
@property(retain, nonatomic) TSVTopBarViewController *topBarViewController; // @synthesize topBarViewController=_topBarViewController;
@property(retain, nonatomic) TSVControlOverlayViewModel *viewModel; // @synthesize viewModel;
- (void).cxx_destruct;
- (void)activityTagDidClick:(id)arg1;
- (void)userNameButtonDidClick:(id)arg1;
- (void)avatarViewDidClick:(id)arg1;
- (void)followButtonDidClick:(id)arg1;
- (void)writeCommentButtonDidClick:(id)arg1;
- (void)didDoubleTap:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

