//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QZAvatarView.h>

@class NSString, QZFeedPhotoView, UIImageView, UIView;

@interface HeadIconThumbView : QZAvatarView
{
    UIImageView *_superPraise;
    QZFeedPhotoView *_avatarDeco;
    QZFeedPhotoView *_belowRightCorner;
    UIView *_headViewContainer;
    UIView *_iconViewContainer;
    _Bool needSuqare;
    _Bool needRedBonusPlay;
    _Bool _isHeadIconPlaying;
    _Bool _isHeadIconPlayStop;
    _Bool _needPlayRedBonusAnimate;
    NSString *_luckyMoneyPicUrl;
    long long _luckyMoneyUin;
}

@property(nonatomic) long long luckyMoneyUin; // @synthesize luckyMoneyUin=_luckyMoneyUin;
@property(retain, nonatomic) UIView *iconViewContainer; // @synthesize iconViewContainer=_iconViewContainer;
@property(retain, nonatomic) UIView *headViewContainer; // @synthesize headViewContainer=_headViewContainer;
@property(retain, nonatomic) NSString *luckyMoneyPicUrl; // @synthesize luckyMoneyPicUrl=_luckyMoneyPicUrl;
@property(nonatomic) _Bool needPlayRedBonusAnimate; // @synthesize needPlayRedBonusAnimate=_needPlayRedBonusAnimate;
- (void).cxx_destruct;
- (void)setupRedBonusHeadIconUin:(long long)arg1 redBonusUrl:(id)arg2;
- (void)initHeaderViewContainerWithFrame:(struct CGRect)arg1;
- (void)startRedBonusAnimate;
- (void)stopRedBonusAnimate;
- (void)resetHeadContainer:(id)arg1 offsetY:(double)arg2;
- (void)playHeadIcon:(id)arg1;
- (void)setDefaultImage:(id)arg1;
- (void)addClearCircle;
- (void)didPhotoThumbDownloadSuccess;
- (void)showBelowRightCorner:(id)arg1 medalType:(long long)arg2;
- (void)setBelowRightCornerHidden:(_Bool)arg1;
- (void)setAvatarDecoHidden:(_Bool)arg1;
- (void)showAvatarDeco:(long long)arg1 url:(id)arg2;
- (void)ensureBelowRightCorner;
- (void)ensureAvatarDecoView;
- (void)setHeadURL:(id)arg1;

@end

