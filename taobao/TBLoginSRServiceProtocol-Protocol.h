//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSDictionary, NSURL;

@protocol TBLoginSRServiceProtocol <NSObject>
- (void)handleRequestFromTaobaoMainPage:(NSDictionary *)arg1;
- (_Bool)canHandleRequestFromTaobaoMainPage:(NSDictionary *)arg1;
- (void)getHavanaSsoToken:(void (^)(id, NSError *, NSDictionary *))arg1;
- (void)trustLoginWithURL:(NSURL *)arg1;
- (void)watchKitExtensionRequestAutoLoginWithTimeout:(int)arg1 completionHandler:(void (^)(NSDictionary *, NSError *))arg2;
- (void)watchKitExtensionRequestCurrentSessionWithTimeout:(int)arg1 completionHandler:(void (^)(NSDictionary *, NSError *))arg2;
- (void)loginWithLoginOption:(int)arg1 completionHandler:(void (^)(_Bool, NSDictionary *))arg2 cancelationHandler:(void (^)(void))arg3;
- (void)generateLoginTokenForOtherSessionWithCompletionHandler:(void (^)(NSString *, void (^)(NSError *, long long, void (^)(void))))arg1;
- (void)refreshCookiesOrDoLoginWithUrl:(NSDictionary *)arg1 completionHandler:(void (^)(_Bool))arg2 cancelationHandler:(void (^)(void))arg3;
- (void)fixPCCookiesWithCompletionBlock:(void (^)(_Bool))arg1;
- (_Bool)isValidLogin;
- (void)logout;
- (void)forceAuthenticateWithCompletion:(void (^)(_Bool))arg1;
- (void)authenticateWithCompletion:(void (^)(_Bool))arg1 cancelation:(void (^)(void))arg2;
- (void)authenticateWithCompletion:(void (^)(_Bool))arg1;
@end

