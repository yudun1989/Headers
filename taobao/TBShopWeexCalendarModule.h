//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "WXModuleProtocol-Protocol.h"

@class NSString, WXSDKInstance;

@interface TBShopWeexCalendarModule : NSObject <WXModuleProtocol>
{
}

+ (id)wx_export_method_18;
+ (id)wx_export_method_16;
+ (id)wx_export_method_14;
- (void)cancelReminder:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)addReminder:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)checkReminder:(id)arg1 callback:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) __weak WXSDKInstance *weexInstance;

@end

