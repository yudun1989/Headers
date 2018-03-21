//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSNumber;

@protocol IYWRoamingService <NSObject>
@property(retain, nonatomic) NSNumber *localAutoRoamingCount;
@property(nonatomic) _Bool enableLocalAutoRoamingRecent;
- (void)refreshLastMessageForConversations:(NSArray *)arg1 completion:(void (^)(NSError *))arg2;
- (void)setDidReceiveRoamingAuthenticationChangllengeBlock:(void (^)(void (^)(NSString *)))arg1;
- (void)setDidReceiveRoamingAuthenticationChallengeBlock:(void (^)(void (^)(NSString *)))arg1;
- (void)setRoamingServiceState:(long long)arg1 completion:(void (^)(NSError *))arg2;
- (void)getRoamingServiceState:(void (^)(long long, NSError *))arg1;
@end

