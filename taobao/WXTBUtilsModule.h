//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "WXModuleProtocol-Protocol.h"

@class NSString, WXSDKInstance;

@interface WXTBUtilsModule : NSObject <WXModuleProtocol>
{
}

+ (long long)serverTimestamp;
+ (_Bool)prefetchMtopSwitchOn;
+ (id)wx_export_method_19;
+ (id)wx_export_method_18;
+ (id)wx_export_method_17;
- (void)prefetchMtopSwitchOn:(CDUnknownBlockType)arg1;
- (void)getNetworkStatus:(CDUnknownBlockType)arg1;
- (void)getServerTimestamp:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) __weak WXSDKInstance *weexInstance;

@end

