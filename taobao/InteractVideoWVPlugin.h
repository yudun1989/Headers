//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WVDynamicHandler.h"

#import "DWPlayerLifecycleProtocol-Protocol.h"
#import "WVBridgeProtocol-Protocol.h"

@class DWInstance, NSString, UIViewController;
@protocol WVBridgeContext;

@interface InteractVideoWVPlugin : WVDynamicHandler <DWPlayerLifecycleProtocol, WVBridgeProtocol>
{
    DWInstance *_instance;
    UIViewController *_webViewController;
}

+ (unsigned long long)instanceScope;
@property(nonatomic) __weak UIViewController *webViewController; // @synthesize webViewController=_webViewController;
@property(retain, nonatomic) DWInstance *instance; // @synthesize instance=_instance;
- (void).cxx_destruct;
- (id)parseDictToJSONString:(id)arg1;
- (void)closeWebView:(id)arg1;
- (void)debugTbMediaPlayer:(id)arg1 withCallback:(CDUnknownBlockType)arg2 withWebView:(id)arg3 withViewController:(id)arg4;
- (void)commitAlarm:(id)arg1 withCallback:(CDUnknownBlockType)arg2 withWebView:(id)arg3 withViewController:(id)arg4;
- (void)utExpose:(id)arg1 withCallback:(CDUnknownBlockType)arg2 withWebView:(id)arg3 withViewController:(id)arg4;
- (void)getUTParams:(id)arg1 withCallback:(CDUnknownBlockType)arg2 withWebView:(id)arg3 withViewController:(id)arg4;
- (void)getConfig:(id)arg1 withCallback:(CDUnknownBlockType)arg2 withWebView:(id)arg3 withViewController:(id)arg4;
- (void)getJsData:(id)arg1 withCallback:(CDUnknownBlockType)arg2 withWebView:(id)arg3 withViewController:(id)arg4;
- (void)syncData:(id)arg1 withCallback:(CDUnknownBlockType)arg2 withWebView:(id)arg3 withViewController:(id)arg4;
- (void)setPenetrateAlpha:(id)arg1 withCallback:(CDUnknownBlockType)arg2 withWebView:(id)arg3 withViewController:(id)arg4;
- (void)closeInteractVideo:(id)arg1 withCallback:(CDUnknownBlockType)arg2 withWebView:(id)arg3 withViewController:(id)arg4;
- (void)openInteractVideo:(id)arg1 withCallback:(CDUnknownBlockType)arg2 withWebView:(id)arg3 withViewController:(id)arg4;
- (void)closeWebViewLayer:(id)arg1 withCallback:(CDUnknownBlockType)arg2 withWebView:(id)arg3 withViewController:(id)arg4;
- (void)onVideoClose;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(nonatomic) __weak id <WVBridgeContext> context;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

