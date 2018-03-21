//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSString, TBLiveInterComponentController, UIViewController;
@protocol TBLiveInterNavURLProtocol, TBLiveInterUserTrackProtocol, TBLiveInterWebViewAdapterProtocol;

@interface TBLInteractiveCenter : NSObject
{
    TBLiveInterComponentController *_componentControllder;
    id <TBLiveInterWebViewAdapterProtocol> _webViewAdapter;
    id <TBLiveInterUserTrackProtocol> _userTrakerAdapter;
    id <TBLiveInterNavURLProtocol> _navURLAdapter;
    NSString *_bizCode;
    UIViewController *_sourceViewController;
    NSMutableDictionary *_instanceMap;
}

+ (id)shareInstance;
@property(retain, nonatomic) NSMutableDictionary *instanceMap; // @synthesize instanceMap=_instanceMap;
@property(nonatomic) __weak UIViewController *sourceViewController; // @synthesize sourceViewController=_sourceViewController;
@property(copy, nonatomic) NSString *bizCode; // @synthesize bizCode=_bizCode;
@property(retain, nonatomic) id <TBLiveInterNavURLProtocol> navURLAdapter; // @synthesize navURLAdapter=_navURLAdapter;
@property(retain, nonatomic) id <TBLiveInterUserTrackProtocol> userTrakerAdapter; // @synthesize userTrakerAdapter=_userTrakerAdapter;
@property(retain, nonatomic) id <TBLiveInterWebViewAdapterProtocol> webViewAdapter; // @synthesize webViewAdapter=_webViewAdapter;
@property(retain, nonatomic) TBLiveInterComponentController *componentControllder; // @synthesize componentControllder=_componentControllder;
- (void).cxx_destruct;
- (id)getNavURLAdapter;
- (id)getUserTrackAdapter;
- (id)getWebViewAdapter;
- (void)didRenderViewSuccess:(id)arg1 view:(id)arg2;
- (void)removeAllComponent;
- (void)onPowerMessage:(id)arg1 msgDict:(id)arg2;
- (void)cancel:(id)arg1;
- (void)registerInstance:(id)arg1 withData:(id)arg2 callBack:(CDUnknownBlockType)arg3;
- (void)registerInstanceWithBizCode:(id)arg1 topic:(id)arg2 withData:(id)arg3 viewController:(id)arg4 callBack:(CDUnknownBlockType)arg5;

@end

