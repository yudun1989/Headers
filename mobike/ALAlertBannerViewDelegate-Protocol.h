//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class ALAlertBanner, UIView;

@protocol ALAlertBannerViewDelegate <NSObject>
- (void)alertBannerDidHide:(ALAlertBanner *)arg1 inView:(UIView *)arg2;
- (void)alertBannerWillHide:(ALAlertBanner *)arg1 inView:(UIView *)arg2;
- (void)alertBannerDidShow:(ALAlertBanner *)arg1 inView:(UIView *)arg2;
- (void)alertBannerWillShow:(ALAlertBanner *)arg1 inView:(UIView *)arg2;
- (void)hideAlertBanner:(ALAlertBanner *)arg1 forced:(_Bool)arg2;
- (void)showAlertBanner:(ALAlertBanner *)arg1 hideAfter:(double)arg2;
@end

