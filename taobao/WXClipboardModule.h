//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "WXModuleProtocol-Protocol.h"

@class NSString, WXSDKInstance;

@interface WXClipboardModule : NSObject <WXModuleProtocol>
{
}

+ (id)wx_export_method_25;
+ (id)wx_export_method_24;
- (void)getString:(CDUnknownBlockType)arg1;
- (void)setString:(id)arg1;
- (id)targetExecuteQueue;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) __weak WXSDKInstance *weexInstance;

@end

