//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FBView.h"

#import "VIBNTPLDelegate-Protocol.h"

@class ImmPayPwd, NSDictionary, NSMutableDictionary, NSMutableSet, NSString, VIFastModuleRequest;

@interface VIPayPluginView : FBView <VIBNTPLDelegate>
{
    ImmPayPwd *_pwdInputView;
    NSMutableDictionary *_tplCallbacks;
    CDUnknownBlockType _callback;
    unsigned long long _startTime;
    VIFastModuleRequest *_request;
    NSMutableSet *_relModuleNames;
    NSDictionary *_config;
}

@property(retain, nonatomic) NSDictionary *config; // @synthesize config=_config;
@property(retain, nonatomic) NSMutableSet *relModuleNames; // @synthesize relModuleNames=_relModuleNames;
@property(retain, nonatomic) VIFastModuleRequest *request; // @synthesize request=_request;
- (void).cxx_destruct;
- (void)logWithDuration:(unsigned long long)arg1 params:(id)arg2 seed:(id)arg3 ucId:(id)arg4;
- (void)sendData:(id)arg1 action:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (void)sendMsgChangeToPWDWithData:(id)arg1;
- (void)sentMsgVerifyResult:(id)arg1;
- (void)sendMsg:(id)arg1;
- (void)sendRPCData:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)sendStatus:(id)arg1 forType:(id)arg2 params:(id)arg3;
- (void)onPwdConfirmed;
- (void)onPwdUpdated:(long long)arg1;
- (void)initPWDViewWithType:(_Bool)arg1;
- (id)invoke:(id)arg1 withParam:(id)arg2;
- (void)sendPWDStatus:(id)arg1 withType:(_Bool)arg2;
- (void)viStartWithValue:(id)arg1;
- (void)updateRect;
- (void)viRpcResponseWithValue:(id)arg1;
- (void)viClosePageWithValue:(id)arg1;
- (void)dealloc;
- (void)payStatusWithValue:(id)arg1;
- (void)handleSRCWithValue:(id)arg1;
- (void)updateAttr:(id)arg1 withValue:(id)arg2;
- (id)initWithNode:(struct fb_node *)arg1 withDocument:(id)arg2 withView:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

