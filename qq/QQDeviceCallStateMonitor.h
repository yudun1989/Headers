//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class CTCallCenter;

@interface QQDeviceCallStateMonitor : NSObject
{
    CTCallCenter *_callCenter;
}

+ (id)getInstance;
- (void).cxx_destruct;
- (void)detectCall;
- (_Bool)isIPhoneCallMode;
- (void)stopDetectCall;
- (void)startDetectCall;
- (id)init;

@end

