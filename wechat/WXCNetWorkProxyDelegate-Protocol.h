//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSData, NSString;

@protocol WXCNetWorkProxyDelegate <NSObject>
- (NSString *)getWxUserName;
- (_Bool)proxySendRequest:(int)arg1 reqData:(NSData *)arg2 cmd:(int)arg3;
- (_Bool)isProxyInit;
@end

