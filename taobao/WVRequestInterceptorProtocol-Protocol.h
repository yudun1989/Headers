//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSURLRequest, UIView, WVNavigation;
@protocol WVWebViewProtocol;

@protocol WVRequestInterceptorProtocol <NSObject>
- (_Bool)webView:(UIView<WVWebViewProtocol> *)arg1 canInterceptRequest:(NSURLRequest *)arg2 withNavigation:(WVNavigation *)arg3;
@end

