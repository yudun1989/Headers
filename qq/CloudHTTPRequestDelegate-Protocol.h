//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/NSObject-Protocol.h>

@class NSData, NSDictionary, NSString, WYHTTPRequest;

@protocol CloudHTTPRequestDelegate <NSObject>
- (void)cloudHTTPRequest:(WYHTTPRequest *)arg1 didReceiveData:(NSData *)arg2;
- (void)cloudHTTPRequest:(WYHTTPRequest *)arg1 didFaileWithErrorCode:(long long)arg2;
- (void)cloudHTTPRequestDidFinished:(WYHTTPRequest *)arg1;

@optional
- (NSData *)cloudHTTPRequestBody:(WYHTTPRequest *)arg1;
- (NSString *)cloudHTTPRequestMethod:(WYHTTPRequest *)arg1;
- (unsigned long long)cloudHTTPRequestMaxRetryCount:(WYHTTPRequest *)arg1;
- (NSDictionary *)cloudHTTPRequestAdditionHeaders:(WYHTTPRequest *)arg1;
- (void)cloudHTTPRequest:(WYHTTPRequest *)arg1 didReceiveHeaders:(NSDictionary *)arg2;
@end

