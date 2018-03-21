//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImageView, UILabel;
@protocol QZAlbumCoverViewDelegate;

@interface QZAlbumLoverInfoView : UIView
{
    UILabel *_loveInfoLabel;
    UIImageView *_leftLoverAvatar;
    UIImageView *_rightLoverAvatar;
    long long _leftLoverUin;
    long long _rightLoverUin;
    id <QZAlbumCoverViewDelegate> _delegate;
}

@property(nonatomic) __weak id <QZAlbumCoverViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (struct CGRect)toBeAddedLoverViewFrame;
- (void)onClickLoverAvatar:(id)arg1;
- (void)onClickRightLoverAvatarBg:(id)arg1;
- (void)updateRightAvatarView:(id)arg1 album:(id)arg2;
- (id)createAvatarViewWithUIN:(long long)arg1 frame:(struct CGRect)arg2 tag:(long long)arg3;
- (void)setLoversAvatarView:(id)arg1 isHost:(_Bool)arg2 selfUin:(long long)arg3;
- (void)setLoveInfoHidden:(_Bool)arg1;
- (void)updateLoverFont;
- (void)setLoverDays:(long long)arg1;
- (void)setLoversAlbumTitleFont:(id)arg1;
- (void)buildLoverInfoViewWithFrame:(struct CGRect)arg1 loveDays:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1 loveDays:(long long)arg2;

@end

