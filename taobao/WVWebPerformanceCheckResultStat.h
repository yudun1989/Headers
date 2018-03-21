//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "WVMonitorInfoProtocol-Protocol.h"

@class NSString;

@interface WVWebPerformanceCheckResultStat : NSObject <WVMonitorInfoProtocol>
{
    double _score;
    NSString *_url;
    NSString *_version;
    NSString *_result;
    NSString *_bizCode;
}

+ (id)monitorMeasureRange;
+ (id)monitorPoint;
@property(copy, nonatomic) NSString *bizCode; // @synthesize bizCode=_bizCode;
@property(copy, nonatomic) NSString *result; // @synthesize result=_result;
@property(copy, nonatomic) NSString *version; // @synthesize version=_version;
@property(copy, nonatomic) NSString *url; // @synthesize url=_url;
@property(nonatomic) double score; // @synthesize score=_score;
- (void).cxx_destruct;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

