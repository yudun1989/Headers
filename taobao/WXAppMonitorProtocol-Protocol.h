//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WXModuleProtocol-Protocol.h"

@class NSDictionary, NSString;

@protocol WXAppMonitorProtocol <WXModuleProtocol>
- (void)commitAppMonitorAlarm:(NSString *)arg1 monitorPoint:(NSString *)arg2 success:(_Bool)arg3 errorCode:(NSString *)arg4 errorMsg:(NSString *)arg5 arg:(NSString *)arg6;
- (void)commitAppMonitorArgs:(NSDictionary *)arg1;
@end

