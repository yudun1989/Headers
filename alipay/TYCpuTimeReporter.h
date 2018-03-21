//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableSet;

@interface TYCpuTimeReporter : NSObject
{
    unsigned long long _reportedCount;
    NSMutableSet *_longTimeThreadSet;
}

@property(retain, nonatomic) NSMutableSet *longTimeThreadSet; // @synthesize longTimeThreadSet=_longTimeThreadSet;
@property(readonly, nonatomic) unsigned long long reportedCount; // @synthesize reportedCount=_reportedCount;
- (void).cxx_destruct;
- (_Bool)needDestroy;
- (void)checkHealthWithThread:(unsigned int)arg1 cpuusage:(float)arg2 cputime:(float)arg3 mainThreadTime:(float)arg4;
- (id)init;

@end

