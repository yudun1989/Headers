//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, TBCartNetworkCommand;

@protocol TBCartNetworkProtocol <NSObject>
- (void)clearCartNetworkCacheWithAPI:(NSString *)arg1 ver:(NSString *)arg2 successHandler:(void (^)(void))arg3 failHandler:(void (^)(void))arg4;
- (void)requestNetworkServiceWithCommand:(TBCartNetworkCommand *)arg1;
@end

