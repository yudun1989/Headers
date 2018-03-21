//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "IStatusBarDelegate-Protocol.h"
#import "UIWebViewDelegate-Protocol.h"

@class NSString, UIWebView;
@protocol AFEWebGuideViewDelegate;

@interface AFEWebGuideView : UIView <IStatusBarDelegate, UIWebViewDelegate>
{
    _Bool _loaded;
    UIView *_view;
    UIWebView *_webView;
    id <AFEWebGuideViewDelegate> _webGuideViewDelegate;
    NSString *_userName;
    long long _cnt;
}

@property(nonatomic) long long cnt; // @synthesize cnt=_cnt;
@property(retain, nonatomic) NSString *userName; // @synthesize userName=_userName;
@property(nonatomic) __weak id <AFEWebGuideViewDelegate> webGuideViewDelegate; // @synthesize webGuideViewDelegate=_webGuideViewDelegate;
@property(nonatomic) _Bool loaded; // @synthesize loaded=_loaded;
@property(nonatomic) __weak UIWebView *webView; // @synthesize webView=_webView;
@property(retain, nonatomic) UIView *view; // @synthesize view=_view;
- (void).cxx_destruct;
- (void)onButtonCancel;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)webViewDidFinishLoad:(id)arg1;
- (_Bool)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;
- (void)setURL:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

