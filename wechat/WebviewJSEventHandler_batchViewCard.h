//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WebviewJSEventHandlerBase.h"

#import "WCBatchViewCardHelpDelegate-Protocol.h"

@class NSString, WCBatchViewCardHelper;

@interface WebviewJSEventHandler_batchViewCard : WebviewJSEventHandlerBase <WCBatchViewCardHelpDelegate>
{
    WCBatchViewCardHelper *_viewCardHelp;
}

@property(retain, nonatomic) WCBatchViewCardHelper *viewCardHelp; // @synthesize viewCardHelp=_viewCardHelp;
- (void).cxx_destruct;
- (void)onBatchViewCardReturn;
- (id)getDelegateViewController;
- (void)handleJSEvent:(id)arg1 HandlerFacade:(id)arg2 ExtraData:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

