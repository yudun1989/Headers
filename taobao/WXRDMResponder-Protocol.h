//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class EZCollider, EZEntity;

@protocol WXRDMResponder <NSObject>
- (void)sendTouchUp:(EZEntity *)arg1;
- (void)sendTouchDown:(EZEntity *)arg1;
- (void)sendTap:(EZEntity *)arg1;
- (void)sendCollisionEvent:(EZCollider *)arg1 intersect:(_Bool)arg2;
- (void)sendEventWithEntity:(EZEntity *)arg1 pickSuccess:(_Bool)arg2;
@end

