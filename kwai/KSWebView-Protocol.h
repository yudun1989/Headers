//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, NSURL, NSURLRequest, UIScrollView;
@protocol KSWebViewDelegate;

@protocol KSWebView <NSObject>
@property(nonatomic) id <KSWebViewDelegate> ksWebViewDelegate;
@property(readonly, nonatomic) UIScrollView *scrollView;
@property(readonly, nonatomic, getter=isLoading) _Bool loading;
@property(readonly, nonatomic) _Bool canGoForward;
@property(readonly, nonatomic) _Bool canGoBack;
@property(readonly, nonatomic) NSURL *currentURL;
- (NSString *)ks_evaluateJavaScript:(NSString *)arg1;
- (NSString *)titleOfHTMLHead;
- (void)ks_goForward;
- (void)ks_goBack;
- (void)ks_stopLoading;
- (void)ks_reload;
- (void)ks_loadHTMLString:(NSString *)arg1 baseURL:(NSURL *)arg2;
- (void)ks_loadRequest:(NSURLRequest *)arg1;
@end

