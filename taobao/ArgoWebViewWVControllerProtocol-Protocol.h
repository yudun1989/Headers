//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, UIView;
@protocol WVWebViewProtocol;

@protocol ArgoWebViewWVControllerProtocol <NSObject>
@property _Bool isShowLoadingBox;
@property(retain) UIView<WVWebViewProtocol> *webView;
@property(retain) UIView *view;
- (void)setWebViewDidFailLoadBlock:(void (^)(void))arg1;
- (void)setWebViewDidFinishLoadBlock:(void (^)(UIWebView *))arg1;
- (void)setWebViewDidStartLoadBlock:(void (^)(UIWebView *))arg1;
- (void)removeFromParentViewController;
- (void)loadPageByUrl:(NSString *)arg1;
- (void)registeHandler:(NSString *)arg1 withClassName:(NSString *)arg2 handler:(void (^)(NSString *, void (^)(NSString *, NSDictionary *)))arg3;
- (void)stopUsePullRefresh;
- (void)webViewStopLoading;

@optional
- (void)setWebViewShouldStartLoadWithRequestBlock:(_Bool (^)(UIWebView *, NSURLRequest *, long long))arg1;
- (void)setWebViewDidFailWithErrorBlock:(void (^)(UIWebView *, NSError *))arg1;
@end

