//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class AMapNaviRoute, AMapNaviRoutePlanWorkPlatformView;

@protocol AMapNaviRoutePlanWorkPlatformViewDelegate <NSObject>

@optional
- (void)workPlatformView:(AMapNaviRoutePlanWorkPlatformView *)arg1 didSelectedRoute:(AMapNaviRoute *)arg2 isAutoSelect:(_Bool)arg3;
- (void)workPlatformViewStartGPSNaviBtnDidClick:(AMapNaviRoutePlanWorkPlatformView *)arg1;
- (void)workPlatformViewRetryBtnDidClick:(AMapNaviRoutePlanWorkPlatformView *)arg1;
- (void)workPlatformView:(AMapNaviRoutePlanWorkPlatformView *)arg1 originY:(float)arg2 deltaYFromMaxY:(float)arg3;
@end

