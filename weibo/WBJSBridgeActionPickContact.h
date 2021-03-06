//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBJSBridgeAction.h"

#import "WBContactAtPersonViewControllerDelegate-Protocol.h"
#import "WBJSBridgeContactPickerControllerDelegate-Protocol.h"

@class NSString;

@interface WBJSBridgeActionPickContact : WBJSBridgeAction <WBContactAtPersonViewControllerDelegate, WBJSBridgeContactPickerControllerDelegate>
{
}

- (void)jsbridge_contactPickerControllerDidCancel:(id)arg1;
- (void)jsbridge_contactPickerController:(id)arg1 didPickContacts:(id)arg2;
- (void)atPersonViewControllerDidCancel:(id)arg1;
- (void)atPersonViewController:(id)arg1 didSelectAtPersonWithName:(id)arg2;
- (void)atPersonViewController:(id)arg1 didSelectAtPersonWithContact:(id)arg2;
- (void)callbackWithCancelled;
- (void)callbackWithContacts:(id)arg1;
- (void)startAction;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

