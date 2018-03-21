//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSError, TBLiveWebViewLoader, UIView;

@protocol TBLiveWebViewLoaderDelegate <NSObject>

@optional
- (void)webViewLoader:(TBLiveWebViewLoader *)arg1 didCloseWebView:(UIView *)arg2;
- (void)webViewLoader:(TBLiveWebViewLoader *)arg1 didTimeOutRenderWebView:(UIView *)arg2;
- (void)webViewLoader:(TBLiveWebViewLoader *)arg1 didFailedRenderWebView:(UIView *)arg2 error:(NSError *)arg3;
- (void)webViewLoader:(TBLiveWebViewLoader *)arg1 didSuccessRenderWebView:(UIView *)arg2;
- (void)webViewLoader:(TBLiveWebViewLoader *)arg1 didFailedLoadWebView:(UIView *)arg2 error:(NSError *)arg3;
- (void)webViewLoader:(TBLiveWebViewLoader *)arg1 didFinishLoadWebView:(UIView *)arg2;
- (void)webViewLoader:(TBLiveWebViewLoader *)arg1 didStartLoadWebView:(UIView *)arg2;
- (void)webViewLoader:(TBLiveWebViewLoader *)arg1 didAddWebView:(UIView *)arg2;
@end

