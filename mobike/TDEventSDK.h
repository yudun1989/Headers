//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface TDEventSDK : NSObject
{
}

+ (void)enterForeground:(id)arg1;
+ (void)enterBackground:(id)arg1;
+ (void)addArpEvent;
+ (void)addAppListEvent;
+ (void)onEvent:(id)arg1 eventLabel:(id)arg2 eventParam:(id)arg3 submoduleType:(long long)arg4;
+ (void)onReceiveDeepLink:(id)arg1;
+ (void)initWithSubmoduleType:(unsigned long long)arg1;

@end

