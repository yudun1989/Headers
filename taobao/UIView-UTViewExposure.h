//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@interface UIView (UTViewExposure)
+ (void)doSwizzleForUTViewExposure;
- (void)utexposure_setCenter:(struct CGPoint)arg1;
- (void)utexposure_didMoveToWindow;
- (void)utexposure_setHidden:(_Bool)arg1;
@property(nonatomic) unsigned long long utExposureShowing; // @dynamic utExposureShowing;
- (void)setUtExposureNotificationHandler:(id)arg1;
- (id)utExposureNotificationHandler;
@end

