//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WVDynamicHandler.h"

#import "ABPeoplePickerNavigationControllerDelegate-Protocol.h"
#import "CNContactPickerDelegate-Protocol.h"

@class NSString, UIViewController;
@protocol WVBridgeCallbackContext;

@interface WVBuiltInContactPicker : WVDynamicHandler <ABPeoplePickerNavigationControllerDelegate, CNContactPickerDelegate>
{
    id <WVBridgeCallbackContext> _callbackContext;
    UIViewController *_picker;
}

@property(retain, nonatomic) UIViewController *picker; // @synthesize picker=_picker;
@property(retain, nonatomic) id <WVBridgeCallbackContext> callbackContext; // @synthesize callbackContext=_callbackContext;
- (void).cxx_destruct;
- (void)releaseInstance;
- (void)contactPickerDidCancel:(id)arg1;
- (void)contactPicker:(id)arg1 didSelectContactProperty:(id)arg2;
- (void)peoplePickerNavigationControllerDidCancel:(id)arg1;
- (_Bool)peoplePickerNavigationController:(id)arg1 shouldContinueAfterSelectingPerson:(void *)arg2;
- (void)peoplePickerNavigationController:(id)arg1 didSelectPerson:(void *)arg2 property:(int)arg3 identifier:(int)arg4;
- (_Bool)peoplePickerNavigationController:(id)arg1 shouldContinueAfterSelectingPerson:(void *)arg2 property:(int)arg3 identifier:(int)arg4;
- (void)choose:(id)arg1 withWVBridgeContext:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

