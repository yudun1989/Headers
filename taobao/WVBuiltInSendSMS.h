//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WVDynamicHandler.h"

#import "MFMessageComposeViewControllerDelegate-Protocol.h"

@class NSString;
@protocol WVBridgeCallbackContext;

@interface WVBuiltInSendSMS : WVDynamicHandler <MFMessageComposeViewControllerDelegate>
{
    id <WVBridgeCallbackContext> _callbackContext;
}

@property(retain, nonatomic) id <WVBridgeCallbackContext> callbackContext; // @synthesize callbackContext=_callbackContext;
- (void).cxx_destruct;
- (void)messageComposeViewController:(id)arg1 didFinishWithResult:(long long)arg2;
- (void)sendSMS:(id)arg1 withWVBridgeContext:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

