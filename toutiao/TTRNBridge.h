//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "RCTBridgeModule-Protocol.h"
#import "TTAccountMulticastProtocol-Protocol.h"

@class NSMutableDictionary, NSString, RCTBridge, TTRNView;
@protocol OS_dispatch_queue;

@interface TTRNBridge : NSObject <TTAccountMulticastProtocol, RCTBridgeModule>
{
    RCTBridge *_bridge;
    TTRNView *_rnView;
    CDUnknownBlockType _loginCallback;
    NSMutableDictionary *_methodHandlers;
    CDUnknownBlockType _dislikeCallback;
}

+ (id)__rct_export__79515;
+ (id)__rct_export__64414;
+ (id)__rct_export__46413;
+ (id)__rct_export__45212;
+ (id)__rct_export__37311;
+ (id)__rct_export__36510;
+ (id)__rct_export__3589;
+ (id)__rct_export__3298;
+ (id)__rct_export__3107;
+ (id)__rct_export__2966;
+ (id)__rct_export__2875;
+ (id)__rct_export__2634;
+ (id)__rct_export__2433;
+ (id)__rct_export__2302;
+ (id)__rct_export__2041;
+ (id)__rct_export__1920;
+ (void)load;
+ (id)moduleName;
+ (id)__rct_export__170;
+ (id)__rct_export__420;
+ (id)__rct_export__292;
+ (id)__rct_export__211;
+ (id)__rct_export__170;
@property(copy, nonatomic) CDUnknownBlockType dislikeCallback; // @synthesize dislikeCallback=_dislikeCallback;
@property(retain, nonatomic) NSMutableDictionary *methodHandlers; // @synthesize methodHandlers=_methodHandlers;
@property(copy, nonatomic) CDUnknownBlockType loginCallback; // @synthesize loginCallback=_loginCallback;
@property(nonatomic) __weak TTRNView *rnView; // @synthesize rnView=_rnView;
@property(readonly, nonatomic) __weak RCTBridge *bridge; // @synthesize bridge=_bridge;
- (void).cxx_destruct;
- (void)blockUnblockUserNotification:(id)arg1;
- (void)pgcArticleDonateFinishedNotification:(id)arg1;
- (void)concernCareStatusChangedNotification:(id)arg1;
- (void)forumLikeStatusChangedNotification:(id)arg1;
- (void)relationActionNotification:(id)arg1;
- (void)subscribeStatusChangedNotification:(id)arg1;
- (void)registerStatusRelatedNotification;
- (void)observe:(id)arg1 selector:(SEL)arg2;
- (void)addEventListener;
- (void)registerPageStateChange:(id)arg1;
- (void)request:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)close;
- (void)doMediaUnLike:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)doMediaLike:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)subscribe:(_Bool)arg1 params:(id)arg2;
- (void)addressBookChanged:(id)arg1;
- (void)fontSizeChanged:(id)arg1;
- (void)themeChanged:(id)arg1;
- (void)invokeJSWithEventID:(id)arg1 parameters:(id)arg2;
- (void)removeAccountNotification;
- (void)addAccountNotification;
- (void)notificationDidAuthCompletion:(id)arg1;
- (void)cancelLogin:(id)arg1;
- (void)loginClosed:(id)arg1;
- (void)onAccountStatusChanged:(long long)arg1 platform:(id)arg2;
- (void)refreshFeedList;
- (void)syncFeedInterestWords:(id)arg1;
- (void)login:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)canvasLog:(id)arg1;
- (void)isWifi:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)showFormDialog:(id)arg1;
- (void)openUrlLink:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)downloadApp:(id)arg1;
- (void)callNativePhone:(id)arg1;
- (void)open:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)toast:(id)arg1;
- (void)log_v3:(id)arg1;
- (void)log:(id)arg1;
- (void)ReportPageStatus:(id)arg1;
- (void)registerCommonHandlers;
- (id)constantsToExport;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *methodQueue;
- (id)init;
- (void)dealloc;
- (void)openCommodity:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)call:(id)arg1 params:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (void)unregisterAllHandlers;
- (void)registerHandler:(CDUnknownBlockType)arg1 forMethod:(id)arg2;
- (void)dislikeConfirmed;
- (void)showDislike:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)panelDislike;
- (void)panelClose;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

