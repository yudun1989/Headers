//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "YWServiceImplProtocol-Protocol.h"

@class NSDictionary, NSString;

@protocol YWConnectorHandlerProtocol <YWServiceImplProtocol>
- (void)handleEvent:(NSString *)arg1 path:(NSString *)arg2 params:(NSDictionary *)arg3 resultBlock:(void (^)(YWConnectorHandlerResultObject *))arg4;

@optional
- (NSDictionary *)handlerConfiguration;
@end

