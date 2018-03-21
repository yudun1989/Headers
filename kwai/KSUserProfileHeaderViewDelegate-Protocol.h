//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class KSOwnerCount, KSUserProfileHeaderView, UIButton, UIImageView, UIView;

@protocol KSUserProfileHeaderViewDelegate <NSObject>
- (void)userProfileHeaderView:(KSUserProfileHeaderView *)arg1 hideLikeButton:(_Bool)arg2 useGridMode:(_Bool)arg3 ownerCount:(KSOwnerCount *)arg4 privateMode:(_Bool)arg5 isLoading:(_Bool)arg6;
- (void)userProfileHeaderView:(KSUserProfileHeaderView *)arg1 didTapRecommendEntryButton:(UIButton *)arg2 context:(id)arg3;
- (void)userProfileHeaderView:(KSUserProfileHeaderView *)arg1 didTapVIcon:(UIImageView *)arg2;
- (void)userProfileHeaderView:(KSUserProfileHeaderView *)arg1 didTapUserHeaderView:(UIView *)arg2;
- (void)userProfileHeaderView:(KSUserProfileHeaderView *)arg1 didTapInfoBtn:(UIButton *)arg2;
- (void)userProfileHeaderView:(KSUserProfileHeaderView *)arg1 didTapFollowUsersBtn:(UIButton *)arg2;
- (void)userProfileHeaderView:(KSUserProfileHeaderView *)arg1 didTapFansBtn:(UIButton *)arg2;
- (void)userProfileHeaderView:(KSUserProfileHeaderView *)arg1 didTapLikeBtn:(UIButton *)arg2;
- (void)userProfileHeaderView:(KSUserProfileHeaderView *)arg1 didTapPrivateBtn:(UIButton *)arg2;
- (void)userProfileHeaderView:(KSUserProfileHeaderView *)arg1 didTapProductionBtn:(UIButton *)arg2;
- (void)userProfileHeaderView:(KSUserProfileHeaderView *)arg1 didTapUnFollowBtn:(UIButton *)arg2;
- (void)userProfileHeaderView:(KSUserProfileHeaderView *)arg1 didTapFollowBtn:(UIButton *)arg2;
- (void)userProfileHeaderView:(KSUserProfileHeaderView *)arg1 didTapListModelBtn:(UIButton *)arg2;
- (void)userProfileHeaderView:(KSUserProfileHeaderView *)arg1 didTapBigModelBtn:(UIButton *)arg2;
- (void)userProfileHeaderView:(KSUserProfileHeaderView *)arg1 didTapSettingBtn:(UIButton *)arg2;
- (void)userProfileHeaderView:(KSUserProfileHeaderView *)arg1 didTapHeaderView:(UIImageView *)arg2;
@end

