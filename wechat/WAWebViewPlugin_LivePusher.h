//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WAWebViewPlugin_embedView.h"

#import "TXLivePushJSAdapterDelegate-Protocol.h"

@class NSString, TXLivePushJSAdapter, UIView;

@interface WAWebViewPlugin_LivePusher : WAWebViewPlugin_embedView <TXLivePushJSAdapterDelegate>
{
    unsigned int _pusherId;
    TXLivePushJSAdapter *_pusher;
    UIView *_preview;
    CDUnknownBlockType _operateCallback;
}

@property(copy, nonatomic) CDUnknownBlockType operateCallback; // @synthesize operateCallback=_operateCallback;
@property(nonatomic) unsigned int pusherId; // @synthesize pusherId=_pusherId;
@property(retain, nonatomic) UIView *preview; // @synthesize preview=_preview;
@property(retain, nonatomic) TXLivePushJSAdapter *pusher; // @synthesize pusher=_pusher;
- (void).cxx_destruct;
- (_Bool)handleEvent:(unsigned long long)arg1 userInfo:(id)arg2;
- (void)onInsertLogView:(unsigned int)arg1;
- (void)onPusherDidTakeSnapshot:(id)arg1 pusherId:(unsigned int)arg2;
- (void)onPushNetStatus:(id)arg1 pusherId:(unsigned int)arg2;
- (void)onPushEvent:(int)arg1 evtMsg:(id)arg2 pusherId:(unsigned int)arg3 param:(id)arg4;
- (_Bool)removeLivePusher:(unsigned int)arg1;
- (void)operateLivePusher:(unsigned int)arg1 type:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)updateLivePusher:(unsigned int)arg1 configs:(id)arg2;
- (void)updateLivePusher:(unsigned int)arg1 pos:(struct CGRect)arg2 configs:(id)arg3;
- (unsigned int)insertLivePusher:(unsigned int)arg1 parentId:(unsigned int)arg2 pos:(struct CGRect)arg3 configs:(id)arg4;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

