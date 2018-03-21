//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "TBLiveMessageManagerDelegate-Protocol.h"
#import "WXModuleProtocol-Protocol.h"

@class NSString, TBLiveVideoEngine, WXSDKInstance;

@interface WXRDMLiveModule : NSObject <TBLiveMessageManagerDelegate, WXModuleProtocol>
{
    _Bool _liveModelGetted;
    WXSDKInstance *weexInstance;
    TBLiveVideoEngine *_liveVideoEngine;
    CDUnknownBlockType _msgCallback;
}

+ (id)wx_export_method_65;
+ (id)wx_export_method_64;
+ (id)wx_export_method_62;
+ (id)wx_export_method_60;
+ (id)wx_export_method_59;
@property(copy, nonatomic) CDUnknownBlockType msgCallback; // @synthesize msgCallback=_msgCallback;
@property(retain, nonatomic) TBLiveVideoEngine *liveVideoEngine; // @synthesize liveVideoEngine=_liveVideoEngine;
@property(nonatomic) _Bool liveModelGetted; // @synthesize liveModelGetted=_liveModelGetted;
@property(nonatomic) __weak WXSDKInstance *weexInstance; // @synthesize weexInstance;
- (void).cxx_destruct;
- (void)dealloc;
- (void)leaveRoom;
- (void)getLiveDataModel:(CDUnknownBlockType)arg1;
- (id)generateLiveModel;
- (id)statusMap;
- (void)commentManagerDidUpdateUserStateMassage:(id)arg1;
- (void)didReceiveMessageWithTradeShow:(id)arg1;
- (void)didReceiveChangeSceneNotification:(id)arg1;
- (void)sendStudioMessage:(id)arg1 type:(id)arg2;
- (void)sendMessage:(id)arg1 nick:(id)arg2 msg:(id)arg3;
- (void)enterRoom:(id)arg1 host:(id)arg2 statusCallback:(CDUnknownBlockType)arg3 msgCallback:(CDUnknownBlockType)arg4;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

