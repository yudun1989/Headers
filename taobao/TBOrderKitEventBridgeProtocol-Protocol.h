//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class TBOrderResult;

@protocol TBOrderKitEventBridgeProtocol <NSObject>

@optional
- (void)processCheckEventWithResult:(TBOrderResult *)arg1;
- (void)processCurrentViewURLEventWithResult:(TBOrderResult *)arg1;
- (void)processURLEventWithResult:(TBOrderResult *)arg1;
- (void)processNativeURLEventWithResult:(TBOrderResult *)arg1;
- (void)processToastEventWithResult:(TBOrderResult *)arg1;
- (void)processAlertEventWithResult:(TBOrderResult *)arg1;
- (void)processMtopEventWithResult:(TBOrderResult *)arg1;
- (void)processNativeEventWithResult:(TBOrderResult *)arg1;
@end

