//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class QQLockDictionary;

@interface QQARFacePerformance : NSObject
{
    QQLockDictionary *_lockDic;
}

+ (id)sharedInstance;
- (void)cleanAll;
- (void)printDictionary:(id)arg1;
- (void)doReportWithEventName:(id)arg1 keys:(id)arg2;
- (void)doReportWithEventName:(id)arg1 key:(id)arg2;
- (void)doReportWithEventName:(id)arg1 key:(id)arg2 success:(_Bool)arg3;
- (void)doReportWithEventName:(id)arg1 key:(id)arg2 param:(id)arg3 success:(_Bool)arg4;
- (double)getCost:(id)arg1;
- (void)remove:(id)arg1;
- (void)stop:(id)arg1;
- (void)start:(id)arg1;
- (void)dealloc;
- (id)init;

@end

