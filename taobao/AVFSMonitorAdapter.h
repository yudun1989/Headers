//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@interface AVFSMonitorAdapter : NSObject
{
    NSMutableDictionary *_adapters;
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)sharedManager;
@property(retain, nonatomic) NSMutableDictionary *adapters; // @synthesize adapters=_adapters;
- (void).cxx_destruct;
- (Class)classPerformProtocol:(id)arg1;
- (void)registerAdapter:(Class)arg1 forProtocol:(id)arg2;
- (id)init;

@end

