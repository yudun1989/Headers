//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "WXModuleProtocol-Protocol.h"

@class NSMutableDictionary, NSString, WXSDKInstance;

@interface WXTimerModule : NSObject <WXModuleProtocol>
{
    NSMutableDictionary *_timers;
    WXSDKInstance *weexInstance;
}

+ (id)wx_export_method_66;
+ (id)wx_export_method_65;
+ (id)wx_export_method_64;
+ (id)wx_export_method_63;
@property(nonatomic) __weak WXSDKInstance *weexInstance; // @synthesize weexInstance;
- (void).cxx_destruct;
- (id)timers;
- (void)createTimerWithCallback:(id)arg1 time:(double)arg2 target:(id)arg3 selector:(SEL)arg4 shouldRepeat:(_Bool)arg5;
- (void)dealloc;
- (void)clearInterval:(id)arg1;
- (void)clearTimeout:(id)arg1;
- (void)setInterval:(id)arg1 time:(double)arg2;
- (void)setTimeout:(id)arg1 time:(double)arg2;
- (void)createTimerWithCallback:(id)arg1 time:(double)arg2 shouldRepeat:(_Bool)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

