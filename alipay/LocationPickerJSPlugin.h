//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "BEELocationPickerDelegate-Protocol.h"
#import "BeeKeyBoardWindowDelegate-Protocol.h"
#import "DatePickerVCDelegate-Protocol.h"
#import "PSDPluginProtocol-Protocol.h"

@class BeeKeyBoardWindow, DatePickerPopView, NSString;

@interface LocationPickerJSPlugin : NSObject <PSDPluginProtocol, BEELocationPickerDelegate, DatePickerVCDelegate, BeeKeyBoardWindowDelegate>
{
    CDUnknownBlockType _callbackBlock;
    CDUnknownBlockType _callbackDatePickerBlock;
    DatePickerPopView *_datePickerView;
    DatePickerPopView *_optionsPickerView;
    CDUnknownBlockType _callbackOptionsPickerBlock;
    CDUnknownBlockType _keyBoardTrackerCallback;
    BeeKeyBoardWindow *_inputBox;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *name;
- (void)handleEvent:(id)arg1;
- (id)jsonToPOI:(id)arg1;
- (id)poiObjToDictionary:(id)arg1;
- (void)locationPicker:(id)arg1 poiDidSelected:(id)arg2;
- (void)locationPickerDidCancelled:(id)arg1;
- (void)selectedOptions:(id)arg1;
- (void)selectedDate:(id)arg1;
- (void)didClickSendBtn:(id)arg1;
- (void)dealloc;
- (void)loginDidFinished:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

