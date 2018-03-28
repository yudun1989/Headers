//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TTFollowThemeButton.h"

@class SSThemedImageView, SSThemedLabel;

@interface TTFollowThemeButtonImp : TTFollowThemeButton
{
    _Bool _beFollowed;
    _Bool _loading;
    _Bool _followed;
    int _constHeight;
    int _constWidth;
    long long _followedType;
    long long _unfollowedType;
    long long _followedMutualType;
    SSThemedLabel *_followLabel;
    SSThemedImageView *_loadingView;
    SSThemedImageView *_redPacketImageView;
}

@property(retain, nonatomic) SSThemedImageView *redPacketImageView; // @synthesize redPacketImageView=_redPacketImageView;
@property(retain, nonatomic) SSThemedImageView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) SSThemedLabel *followLabel; // @synthesize followLabel=_followLabel;
- (void)setFollowedMutualType:(long long)arg1;
- (long long)followedMutualType;
- (long long)unfollowedType;
- (void)setFollowedType:(long long)arg1;
- (long long)followedType;
- (_Bool)followed;
- (_Bool)isLoading;
- (int)constWidth;
- (_Bool)beFollowed;
- (void).cxx_destruct;
- (void)layoutSubviewsWithWidth:(int)arg1;
- (void)tryFitColor;
- (void)setHighlighted:(_Bool)arg1;
- (void)refreshFollowedMutualUI;
- (void)refreshFollowedUI;
- (void)refreshUnfollowedUI;
- (void)refreshLoadingUI;
- (void)refreshUI;
- (void)stopLoading:(CDUnknownBlockType)arg1;
- (void)startLoading;
- (void)setUnfollowedType:(long long)arg1;
- (void)setBeFollowed:(_Bool)arg1;
- (void)setFollowed:(_Bool)arg1;
- (id)initWithUnfollowedType:(long long)arg1 followedType:(long long)arg2 followedMutualType:(long long)arg3;
- (id)initWithUnfollowedType:(long long)arg1 followedType:(long long)arg2;
- (void)setConstWidth:(int)arg1;
- (void)setConstHeight:(int)arg1;
- (int)constHeight;

@end

