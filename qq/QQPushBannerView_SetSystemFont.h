//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QQPushBannerView.h>

@class UIButton, UIImageView, UILabel;

@interface QQPushBannerView_SetSystemFont : QQPushBannerView
{
    UIImageView *_backgroundImageView;
    UIImageView *_fontIconImageView;
    UIButton *_closeButton;
    UILabel *_contentLabel;
}

- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 delegate:(id)arg2;
- (void)didCloseButtonClicked;
- (void)didPushBannerClicked;

@end

