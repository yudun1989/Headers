//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QQPushBannerView.h>

@class NSString, UIButton, UIImage, UIImageView, UILabel;

@interface QQPushBannerView_ArkBannerTip : QQPushBannerView
{
    UIImageView *_arkIconImageView;
    UILabel *_arkContentLabel;
    UIButton *_checkOtherButton;
    NSString *_arkContent;
    UIImage *_arkIconImage;
}

@property(retain, nonatomic) UIImage *arkIconImage; // @synthesize arkIconImage=_arkIconImage;
@property(retain, nonatomic) NSString *arkContent; // @synthesize arkContent=_arkContent;
- (void)updateArkIcon;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 delegate:(id)arg2;
- (void)didArkBannerTipCancel;
- (void)didArkBannerTipDown;
- (void)didArkBannerTipChecked;

@end

