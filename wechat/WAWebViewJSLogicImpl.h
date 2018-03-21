//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WAJSEventHandlerContextDelegate-Protocol.h"

@class NSMutableSet, NSString, UIView;
@protocol WAWebViewJSLogicDelegate, YYWebViewInterface;

@interface WAWebViewJSLogicImpl : NSObject <WAJSEventHandlerContextDelegate>
{
    UIView<YYWebViewInterface> *_webView;
    id <WAWebViewJSLogicDelegate> _delegate;
    NSString *_curRandomUUID;
    NSString *_curContextUUID;
    _Bool _isUseMd5ForJSAPI;
    NSMutableSet *_lstBaseEvents;
}

@property(retain, nonatomic) NSMutableSet *lstBaseEvents; // @synthesize lstBaseEvents=_lstBaseEvents;
@property(nonatomic) __weak UIView<YYWebViewInterface> *webView; // @synthesize webView=_webView;
@property(nonatomic) __weak id <WAWebViewJSLogicDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)printConsoleLog:(id)arg1;
- (id)GetWebViewPluginByName:(id)arg1;
- (void)performResult:(id)arg1 callid:(unsigned int)arg2;
- (void)endWithResult:(id)arg1 handler:(id)arg2 callbackID:(unsigned int)arg3;
- (void)endWithResult:(id)arg1 handler:(id)arg2;
- (id)getEventHandler:(id)arg1;
- (id)getWxaExternalInfo;
- (_Bool)isDebugAndVConsoleOpen;
- (unsigned int)getDebugModeType;
- (unsigned long long)getAppVersion;
- (id)getAppId;
- (void)checkUserAuthWithJSAPI:(id)arg1 handler:(CDUnknownBlockType)arg2 failHandler:(CDUnknownBlockType)arg3;
- (_Bool)checkRunModeOnWebview:(id)arg1;
- (id)getPermissionResultWithJSAPI:(id)arg1;
- (void)handleJSApiPostMessage:(id)arg1 forWebView:(id)arg2;
- (id)sha1:(id)arg1;
- (void)sendEventToJSBridge:(id)arg1 params:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)tryInjectDebugConsole;
- (id)getWebviewPreInjectJSStr:(_Bool)arg1;
- (id)getWebViewLaunchConfig;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

