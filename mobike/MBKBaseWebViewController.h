//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MBKBaseViewController.h"

#import "MBKWebViewDelegate-Protocol.h"
#import "SonicSessionDelegate-Protocol.h"
#import "UIWebViewDelegate-Protocol.h"

@class NSMutableArray, NSString, NSURL, UIWebView;

@interface MBKBaseWebViewController : MBKBaseViewController <SonicSessionDelegate, MBKWebViewDelegate, UIWebViewDelegate>
{
    struct _opaque_pthread_mutex_t _pluginLock;
    NSURL *_URL;
    CDUnknownBlockType _responseDataHandle;
    UIWebView *_webView;
    NSMutableArray *_loadedPlugins;
}

@property(retain, nonatomic) NSMutableArray *loadedPlugins; // @synthesize loadedPlugins=_loadedPlugins;
@property(retain, nonatomic) UIWebView *webView; // @synthesize webView=_webView;
@property(copy, nonatomic) CDUnknownBlockType responseDataHandle; // @synthesize responseDataHandle=_responseDataHandle;
@property(copy, nonatomic) NSURL *URL; // @synthesize URL=_URL;
- (void).cxx_destruct;
- (id)parseQueryString:(id)arg1;
- (void)clearCache;
- (id)appendPublicParameters;
- (void)assembleTargetURL:(id)arg1 query:(id)arg2 fragment:(id)arg3;
- (void)back;
- (void)loadTargetURL;
- (void)startLoadWebViewWithPriority:(long long)arg1;
- (id)initWithURLString:(id)arg1 query:(id)arg2 fragment:(id)arg3;
- (id)initWithURLString:(id)arg1 query:(id)arg2;
- (id)initWithURLString:(id)arg1;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)webViewDidFinishLoad:(id)arg1;
- (void)webViewDidStartLoad:(id)arg1;
- (_Bool)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;
- (void)webView:(id)arg1 didCreateJavaScriptContext:(id)arg2;
- (void)session:(id)arg1 requireWebViewReload:(id)arg2;
- (_Bool)shouldHideNavigationBarShadow;
- (void)dealloc;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (_Bool)specialHandleWebView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
