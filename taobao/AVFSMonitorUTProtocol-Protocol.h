//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSDictionary, NSString;

@protocol AVFSMonitorUTProtocol <NSObject>
+ (void)commitWithModule:(NSString *)arg1 monitorPoint:(NSString *)arg2 dimensionValueSet:(NSDictionary *)arg3 measureValueSet:(NSDictionary *)arg4;
+ (void)registerWithModule:(NSString *)arg1 monitorPoint:(NSString *)arg2 measureSet:(NSArray *)arg3 dimensionSet:(NSArray *)arg4;
+ (void)commitFailWithPage:(NSString *)arg1 monitorPoint:(NSString *)arg2 errorCode:(NSString *)arg3 errorMsg:(NSString *)arg4 arg:(NSString *)arg5;
+ (void)commitSuccessWithPage:(NSString *)arg1 monitorPoint:(NSString *)arg2 arg:(NSString *)arg3;
@end
