//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class UIView;

@protocol ATEventInterceptProtocol <NSObject>
- (void)exposePerformanceForView:(UIView *)arg1 beginTime:(double)arg2 commitCost:(double)arg3;
- (_Bool)isTargetView:(UIView *)arg1;
- (_Bool)shouldInterceptExposureEventOfView:(UIView *)arg1;
- (_Bool)shouldInterceptEventOfView:(UIView *)arg1 touchPhase:(long long)arg2;
@end

