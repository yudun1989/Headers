//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "UIWebViewDelegate-Protocol.h"

@class NSString, UIWebView;

@interface KSPathOAuthViewController : UIViewController <UIWebViewDelegate>
{
    NSString *_clientID;
    NSString *_clientSecret;
    NSString *_callBackURL;
    CDUnknownBlockType _completion;
    UIWebView *_oAuthWebView;
}

@property(retain, nonatomic) UIWebView *oAuthWebView; // @synthesize oAuthWebView=_oAuthWebView;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(retain, nonatomic) NSString *callBackURL; // @synthesize callBackURL=_callBackURL;
@property(retain, nonatomic) NSString *clientSecret; // @synthesize clientSecret=_clientSecret;
@property(retain, nonatomic) NSString *clientID; // @synthesize clientID=_clientID;
- (void).cxx_destruct;
- (void)didTapBackNagigationButton:(id)arg1;
- (void)didReceiveMemoryWarning;
- (_Bool)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;
- (void)viewDidLoad;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

