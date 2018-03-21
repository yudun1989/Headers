//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "TBAppStatusMonitorProxyHandlerProtocol-Protocol.h"

@class NSDate, NSString, TBAppStatusMonitor, TBAppStatusMonitorOnline, TBAppStatusMonitorTLogOnline, UIViewController;

@interface TBAppStatusMonitorProxyHandler : NSObject <TBAppStatusMonitorProxyHandlerProtocol>
{
    NSDate *_lastClickDate;
    TBAppStatusMonitor *_appStatusMonitor;
    TBAppStatusMonitorOnline *_appStatusMonitorOnline;
    TBAppStatusMonitorTLogOnline *_appStatusMonitorTLogOnline;
    UIViewController *_lastPushVC;
}

+ (id)shareInstance;
@property(nonatomic) __weak UIViewController *lastPushVC; // @synthesize lastPushVC=_lastPushVC;
@property(retain, nonatomic) TBAppStatusMonitorTLogOnline *appStatusMonitorTLogOnline; // @synthesize appStatusMonitorTLogOnline=_appStatusMonitorTLogOnline;
@property(retain, nonatomic) TBAppStatusMonitorOnline *appStatusMonitorOnline; // @synthesize appStatusMonitorOnline=_appStatusMonitorOnline;
@property(nonatomic) __weak TBAppStatusMonitor *appStatusMonitor; // @synthesize appStatusMonitor=_appStatusMonitor;
@property(retain, nonatomic) NSDate *lastClickDate; // @synthesize lastClickDate=_lastClickDate;
- (void).cxx_destruct;
- (id)getPageURLWithViewController:(id)arg1;
- (void)triggerMonitorHomePage:(id)arg1;
- (void)handleDidPopFromVC:(id)arg1 toVC:(id)arg2;
- (void)handleAppStatusMonitor:(long long)arg1 fromVC:(id)arg2 toVC:(id)arg3 parameter:(id)arg4;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

