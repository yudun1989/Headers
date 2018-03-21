//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QZoneViewController.h>

#import <QQMainProject/QZLayerVideoViewDelegate-Protocol.h>
#import <QQMainProject/QZoneWebViewControllerDelegate-Protocol.h>
#import <QQMainProject/SKStoreProductViewControllerDelegate-Protocol.h>
#import <QQMainProject/UIGestureRecognizerDelegate-Protocol.h>

@class NSString, QZCImageView, QZLayerVideoView, QZSkStoreViewController, QZoneWebViewController, QzoneFeedModel, UIButton, UIImageView, UILabel, UIView;

@interface MQZoneGDTVideoLandingPageViewController : QZoneViewController <QZoneWebViewControllerDelegate, UIGestureRecognizerDelegate, QZLayerVideoViewDelegate, SKStoreProductViewControllerDelegate>
{
    QZLayerVideoView *videoView;
    QZoneWebViewController *webviewController;
    UIButton *backBtn;
    UIImageView *nav_bg;
    UIView *navCoverView;
    UILabel *titleLabel;
    QZCImageView *bigImageview;
    UIView *topCoverView;
    _Bool fullScreenEntered;
    _Bool _isAudioSessionObtained;
    _Bool isWebviewFull;
    _Bool isAppstoreFull;
    float topViewHeight;
    UIImageView *arrow_bg;
    UIImageView *arrowView;
    QzoneFeedModel *_feedModel;
    long long _landpageType;
    QZSkStoreViewController *_storeProductController;
    long long _landpageAnimationType;
}

@property(nonatomic) long long landpageAnimationType; // @synthesize landpageAnimationType=_landpageAnimationType;
@property(retain, nonatomic) QZSkStoreViewController *storeProductController; // @synthesize storeProductController=_storeProductController;
@property(nonatomic) long long landpageType; // @synthesize landpageType=_landpageType;
@property(retain, nonatomic) QzoneFeedModel *feedModel; // @synthesize feedModel=_feedModel;
- (void)setArrowFrameY:(float)arg1 alpha:(float)arg2;
- (void)webviewStartDownAnimation;
- (void)webviewStartUpAnimation;
- (void)storeStartDownAnimation;
- (void)storeStartUpAnimation;
- (void)startArrowAnimation;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

