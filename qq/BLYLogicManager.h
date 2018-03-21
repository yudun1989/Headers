//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSOperationQueue;

@interface BLYLogicManager : NSObject
{
    _Bool _sentryActived;
    NSOperationQueue *_queue;
    unsigned long long _count;
    double _sentryInterval;
}

+ (id)sharedManager;
@property(nonatomic) double sentryInterval; // @synthesize sentryInterval=_sentryInterval;
@property(nonatomic) _Bool sentryActived; // @synthesize sentryActived=_sentryActived;
- (void).cxx_destruct;
- (void)sentryActionIfNeed;
- (void)executeEmergencyLogic:(id)arg1;
- (void)addLogic:(id)arg1;
@property unsigned long long count; // @synthesize count=_count;
@property(retain) NSOperationQueue *queue; // @synthesize queue=_queue;
- (id)init;

@end

