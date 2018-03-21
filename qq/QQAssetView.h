//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class ICloudView, QQAnimatedRevealMaskView, QQAsset, QQTwinkleCircleProgressView, SelectedView, UIActivityIndicatorView, UIImage, UIImageView, UILabel;
@protocol QQAssetViewDelegate;

@interface QQAssetView : UIView
{
    _Bool _selected;
    _Bool _locate;
    QQAsset *_asset;
    UIImageView *_imageView;
    SelectedView *_selectedView;
    UIImageView *_locateBGView;
    UIView *_maskView;
    UIImageView *_videoIcon;
    UILabel *_videoDurationLabel;
    UIImageView *_videoInfoBg;
    UIImageView *_gifIcon;
    id <QQAssetViewDelegate> _delegate;
    UIImage *_unSlectedImage;
    _Bool _isAsyncLoad;
    long long _index;
    int _xo;
    QQTwinkleCircleProgressView *_progressView;
    QQAnimatedRevealMaskView *_revealMaskView;
    _Bool _bDownloadingMaskShow;
    ICloudView *_iCloudView;
    UIActivityIndicatorView *_activityView;
}

@property(retain, nonatomic) UIActivityIndicatorView *activityView; // @synthesize activityView=_activityView;
- (void)resetProgressView;
- (void)setProgress:(double)arg1;
- (void)showProgressView:(_Bool)arg1;
- (void)hideActivityView;
- (void)showActivityView;
- (void)modifySeletedViewLocation:(float)arg1;
- (void)refreshAssetImageRecentPicIfNotExist;
- (void)setAsset:(id)arg1 selected:(_Bool)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
@property(nonatomic) _Bool locate; // @dynamic locate;
@property(nonatomic) _Bool selected; // @dynamic selected;
- (_Bool)accessibilityScroll:(long long)arg1;
- (void)setAssetIndex:(int)arg1;
- (void)showSelectedView:(_Bool)arg1;
- (void)showICloudView:(_Bool)arg1;
- (void)assetIcon:(id)arg1;
- (void)refreshAssetImageTableIfNotExist;
- (void)setAsset:(id)arg1 selected:(_Bool)arg2 locate:(_Bool)arg3;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 showCheckCycle:(_Bool)arg2;

// Remaining properties
@property(retain, nonatomic) QQAsset *asset; // @dynamic asset;
@property(nonatomic) id <QQAssetViewDelegate> delegate; // @dynamic delegate;
@property(retain, nonatomic) UIImageView *imageView; // @dynamic imageView;
@property(nonatomic) long long index; // @dynamic index;
@property(nonatomic) _Bool isAsyncLoad; // @dynamic isAsyncLoad;
@property(retain, nonatomic) SelectedView *selectedView; // @dynamic selectedView;

@end

