//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@interface TBVPMStatisticsInfo : NSObject
{
    double adPlayDuration;
    double videoPlayDuration;
    double bufferLatency;
    double videoFirstFrameDuration;
    double videoFrameRate;
    double avgVideoBitrate;
    double avgKeyFrameSize;
    double impairmentFrequency;
    double impairmentDuration;
    double impairmentDegree;
    double duration;
    double adUrlReqTime;
    double adPlayerPrepare;
    double videoUrlReqTime;
    double videoPlayerPrepare;
    double seekDuration;
    double cdnUrlReqDuration;
    double seekCount;
    double videoLocalCacheSize;
    NSMutableDictionary *extStatisticsData;
}

+ (id)shareInstance;
@property(retain, nonatomic) NSMutableDictionary *extStatisticsData; // @synthesize extStatisticsData;
@property(nonatomic) double videoLocalCacheSize; // @synthesize videoLocalCacheSize;
@property(nonatomic) double seekCount; // @synthesize seekCount;
@property(nonatomic) double cdnUrlReqDuration; // @synthesize cdnUrlReqDuration;
@property(nonatomic) double seekDuration; // @synthesize seekDuration;
@property(nonatomic) double videoPlayerPrepare; // @synthesize videoPlayerPrepare;
@property(nonatomic) double videoUrlReqTime; // @synthesize videoUrlReqTime;
@property(nonatomic) double adPlayerPrepare; // @synthesize adPlayerPrepare;
@property(nonatomic) double adUrlReqTime; // @synthesize adUrlReqTime;
@property(nonatomic) double duration; // @synthesize duration;
@property(nonatomic) double impairmentDegree; // @synthesize impairmentDegree;
@property(nonatomic) double impairmentDuration; // @synthesize impairmentDuration;
@property(nonatomic) double impairmentFrequency; // @synthesize impairmentFrequency;
@property(nonatomic) double avgKeyFrameSize; // @synthesize avgKeyFrameSize;
@property(nonatomic) double avgVideoBitrate; // @synthesize avgVideoBitrate;
@property(nonatomic) double videoFrameRate; // @synthesize videoFrameRate;
@property(nonatomic) double videoFirstFrameDuration; // @synthesize videoFirstFrameDuration;
@property(nonatomic) double bufferLatency; // @synthesize bufferLatency;
@property(nonatomic) double videoPlayDuration; // @synthesize videoPlayDuration;
@property(nonatomic) double adPlayDuration; // @synthesize adPlayDuration;
- (void).cxx_destruct;
- (id)toMeasureValueSet;
- (id)toDictionary;

@end

