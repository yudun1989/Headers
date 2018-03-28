//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface TTVideoUploaderConfig : NSObject
{
    double _suggestedTimeIntervalForOneSlice;
    long long _defaultVideoSliceBytes;
    long long _maxVideoSliceBytes;
    long long _minVideoSliceBytes;
    long long _sliceMaxRetryCount;
    long long _taskMaxRetryCount;
}

@property(nonatomic) long long taskMaxRetryCount; // @synthesize taskMaxRetryCount=_taskMaxRetryCount;
@property(nonatomic) long long sliceMaxRetryCount; // @synthesize sliceMaxRetryCount=_sliceMaxRetryCount;
@property(nonatomic) long long minVideoSliceBytes; // @synthesize minVideoSliceBytes=_minVideoSliceBytes;
@property(nonatomic) long long maxVideoSliceBytes; // @synthesize maxVideoSliceBytes=_maxVideoSliceBytes;
@property(nonatomic) long long defaultVideoSliceBytes; // @synthesize defaultVideoSliceBytes=_defaultVideoSliceBytes;
@property(nonatomic) double suggestedTimeIntervalForOneSlice; // @synthesize suggestedTimeIntervalForOneSlice=_suggestedTimeIntervalForOneSlice;
- (id)init;

@end

