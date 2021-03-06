//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton, UILabel, WBContactAvatarView, WBStatus, WBUser;

@interface WBVideoSocialPlayerPlayingAuthorContentView : UIView
{
    _Bool _applyingFollowOperation;
    _Bool _showDetailFollowerCount;
    WBStatus *_status;
    WBUser *_displayUser;
    UIView *_topSeperatorView;
    WBContactAvatarView *_avatarView;
    UILabel *_screenNameLabel;
    UILabel *_followersCountLabel;
    UIButton *_followButton;
    UIButton *_maskButton;
    UIView *_bottomSeperatorView;
}

@property(retain, nonatomic) UIView *bottomSeperatorView; // @synthesize bottomSeperatorView=_bottomSeperatorView;
@property(nonatomic) _Bool showDetailFollowerCount; // @synthesize showDetailFollowerCount=_showDetailFollowerCount;
@property(nonatomic) _Bool applyingFollowOperation; // @synthesize applyingFollowOperation=_applyingFollowOperation;
@property(retain, nonatomic) UIButton *maskButton; // @synthesize maskButton=_maskButton;
@property(retain, nonatomic) UIButton *followButton; // @synthesize followButton=_followButton;
@property(retain, nonatomic) UILabel *followersCountLabel; // @synthesize followersCountLabel=_followersCountLabel;
@property(retain, nonatomic) UILabel *screenNameLabel; // @synthesize screenNameLabel=_screenNameLabel;
@property(retain, nonatomic) WBContactAvatarView *avatarView; // @synthesize avatarView=_avatarView;
@property(retain, nonatomic) UIView *topSeperatorView; // @synthesize topSeperatorView=_topSeperatorView;
@property(retain, nonatomic) WBUser *displayUser; // @synthesize displayUser=_displayUser;
@property(retain, nonatomic) WBStatus *status; // @synthesize status=_status;
- (void).cxx_destruct;
- (void)didFollowUser:(_Bool)arg1;
- (void)followButtonPressed:(id)arg1;
- (void)maskButtonPressed;
- (void)avatarViewPressed:(id)arg1;
- (void)updateFollowButton:(_Bool)arg1;
- (void)updateDisplay;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

