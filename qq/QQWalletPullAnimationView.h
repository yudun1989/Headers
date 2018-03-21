//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSMutableDictionary, NSMutableSet, NSTimer, QQFooterTextTableView, QQWalletImageDownloader, QQWalletPullAnimation, UIImageView, UIViewController;
@protocol QQWalletPullAnimationViewDelegate;

@interface QQWalletPullAnimationView : UIView
{
    QQFooterTextTableView *_fatherTableView;
    double _screenWidth;
    _Bool _isAnimating;
    double _progress;
    double _originY;
    QQWalletImageDownloader *_imageDownloader;
    NSMutableSet *_undownloadImageSet;
    NSMutableDictionary *_downloadedImage;
    QQWalletPullAnimation *_pull;
    _Bool _readyAnimate;
    _Bool _configUIOK;
    NSTimer *_stopAnimationTimer;
    struct CGPoint _lastContentOffset;
    UIImageView *_breathImageView;
    _Bool _needShowBreathAfterConfigUI;
    _Bool _hasBanner;
    UIImageView *_backgroundImageView;
    UIImageView *_leftImageView;
    UIImageView *_rightImageView;
    UIImageView *_finishImageView;
    id <QQWalletPullAnimationViewDelegate> _delegate;
    UIViewController *_fatherVC;
}

@property(nonatomic) _Bool hasBanner; // @synthesize hasBanner=_hasBanner;
@property(nonatomic) __weak UIViewController *fatherVC; // @synthesize fatherVC=_fatherVC;
@property(nonatomic) __weak id <QQWalletPullAnimationViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIImageView *finishImageView; // @synthesize finishImageView=_finishImageView;
@property(retain, nonatomic) UIImageView *rightImageView; // @synthesize rightImageView=_rightImageView;
@property(retain, nonatomic) UIImageView *leftImageView; // @synthesize leftImageView=_leftImageView;
@property(retain, nonatomic) UIImageView *backgroundImageView; // @synthesize backgroundImageView=_backgroundImageView;
- (void).cxx_destruct;
- (void)downloader:(id)arg1 didFailWithError:(id)arg2 forURL:(id)arg3;
- (void)downloader:(id)arg1 didDownloadImage:(id)arg2 forURL:(id)arg3;
- (void)scrollSlowEnd;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)endPullAnimation;
- (void)beginPullAnimation;
- (id)pullGuideBreathKey;
- (void)forbidAutoPullAndBreathGuide;
- (void)showBreathAnimationGuideIfNeed;
- (void)didMoveToSuperview;
- (void)showAutoPullGuideIfNeed;
- (void)willMoveToSuperview:(id)arg1;
- (void)configUI;
- (id)getAnimationImagesFrom:(id)arg1;
- (id)initWithPullAnimation:(id)arg1;

@end

