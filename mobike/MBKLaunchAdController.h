//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "Mobike_Controller.h"

@class MBKAdModel, UIView, UIWindow;

@interface MBKLaunchAdController : Mobike_Controller
{
    UIView *_adView;
    UIWindow *_window;
    MBKAdModel *_adModel;
    unsigned long long _countDownDuration;
}

+ (void)load;
+ (id)sharedInstance;
@property(nonatomic) unsigned long long countDownDuration; // @synthesize countDownDuration=_countDownDuration;
@property(retain, nonatomic) MBKAdModel *adModel; // @synthesize adModel=_adModel;
@property(retain, nonatomic) UIWindow *window; // @synthesize window=_window;
@property(retain, nonatomic) UIView *adView; // @synthesize adView=_adView;
- (void).cxx_destruct;
- (double)getAdImageViewHeight;
- (id)getBgdImageName;
- (void)adImageViewTap:(id)arg1;
- (void)removeAdView;
- (void)skipButtonTap;
- (int)getAlreadyShowCount:(id)arg1;
- (_Bool)isSameDay:(id)arg1 date2:(id)arg2;
- (id)getAdImageView;
- (void)setupAdViewWithWindow:(id)arg1;

@end

