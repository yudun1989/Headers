//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class MQPBaseService, NSDictionary, NSString;

@protocol MQPServiceDelegate <NSObject>
- (void)service:(MQPBaseService *)arg1 finishedWithInfo:(NSDictionary *)arg2;

@optional
- (void)service:(MQPBaseService *)arg1 callAlipay:(NSDictionary *)arg2;
- (void)service:(MQPBaseService *)arg1 callWapWithUrl:(NSString *)arg2;
- (void)serviceOnResume:(MQPBaseService *)arg1;
- (void)serviceOnSuspend:(MQPBaseService *)arg1;
- (void)service:(MQPBaseService *)arg1 notifyMessage:(NSDictionary *)arg2;
- (void)service:(MQPBaseService *)arg1 start:(NSString *)arg2 options:(NSDictionary *)arg3 message:(NSDictionary *)arg4;
- (void)service:(MQPBaseService *)arg1 startedWithInfo:(NSDictionary *)arg2;
@end

