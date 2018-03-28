//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "TTFWebViewProtocol-Protocol.h"
#import "YSWebViewDelegate-Protocol.h"

@class JSContext, NSString, SSWebViewContainer, UIView;
@protocol UIWebViewDelegate;

@interface TTFantasyWebviewAdaptor : NSObject <TTFWebViewProtocol, YSWebViewDelegate>
{
    id <UIWebViewDelegate> _delegate;
    SSWebViewContainer *_webviewContainer;
}

@property(retain, nonatomic) SSWebViewContainer *webviewContainer; // @synthesize webviewContainer=_webviewContainer;
@property(nonatomic) __weak id <UIWebViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)registerDeviceInfoBridge;
- (void)registerSecurityBridge;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2;
- (_Bool)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;
- (void)webViewDidFinishLoad:(id)arg1;
- (void)webViewDidStartLoad:(id)arg1;
@property(readonly, nonatomic) JSContext *jsContext;
@property(readonly, nonatomic) UIView *realView;
- (void)goBack;
- (_Bool)canGoBack;
- (void)loadRequest:(id)arg1;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

