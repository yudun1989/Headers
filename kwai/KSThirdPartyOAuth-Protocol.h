//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSDate, NSDictionary, NSString;

@protocol KSThirdPartyOAuth <NSObject>
+ (_Bool)isAvailable;
+ (_Bool)isNativeAvailable;
@property(readonly, nonatomic) NSDictionary *OAuthParams;
@property(readonly, nonatomic) NSString *platformName;
- (NSDate *)lastUseOAuthDate;
- (void)logout;
- (void)loginWithSuccess:(void (^)(NSString *, NSString *))arg1 failure:(void (^)(NSError *))arg2;
@end

