//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSDictionary, UIViewController, UIWebView;

@protocol JSProtocol <NSObject>

@optional
- (void)getAlibaoCardInfo:(NSDictionary *)arg1 withCallback:(void (^)(NSString *, NSDictionary *))arg2 withWebView:(UIWebView *)arg3 withViewController:(UIViewController *)arg4;
- (void)getDeviceNetworkInfo:(NSDictionary *)arg1 withCallback:(void (^)(NSString *, NSDictionary *))arg2 withWebView:(UIWebView *)arg3 withViewController:(UIViewController *)arg4;
- (void)clearAlibaoCardCache:(NSDictionary *)arg1 withCallback:(void (^)(NSString *, NSDictionary *))arg2 withWebView:(UIWebView *)arg3 withViewController:(UIViewController *)arg4;
@end

