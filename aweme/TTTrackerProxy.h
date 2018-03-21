//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray;
@protocol OS_dispatch_queue;

@interface TTTrackerProxy : NSObject
{
    NSObject<OS_dispatch_queue> *_processingQueue;
    _Bool _isDescending;
    NSArray *_blackListv1;
    NSArray *_blackListv3;
    long long _connection;
    long long _throttleSendingTimes;
}

+ (void)modifyImmediateSendingInterval;
+ (void)modifyImmediateSendingIntervalIfNeeded;
+ (id)transOriginDataToStringData:(id)arg1 isV3Format:(_Bool)arg2;
+ (id)immediateUploadURLString;
+ (id)batchUploadURLString;
+ (id)baseURLString;
+ (_Bool)needEncrypt;
+ (id)generatedPostParamsWithTrack:(id)arg1;
+ (id)generatedHeaderFieldWithPolicy:(long long)arg1;
+ (void)customURLString:(id *)arg1 forType:(long long)arg2;
+ (id)modifiedUploadURLStringWithPolicy:(long long)arg1;
+ (id)sharedProxy;
@property(nonatomic) _Bool isDescending; // @synthesize isDescending=_isDescending;
@property(nonatomic) long long throttleSendingTimes; // @synthesize throttleSendingTimes=_throttleSendingTimes;
@property(nonatomic) long long connection; // @synthesize connection=_connection;
@property(copy, nonatomic) NSArray *blackListv3; // @synthesize blackListv3=_blackListv3;
@property(copy, nonatomic) NSArray *blackListv1; // @synthesize blackListv1=_blackListv1;
- (void).cxx_destruct;
- (long long)supposedSendingThreshold;
- (void)modifyThresholdIfNeeded;
- (void)actualSendTrack:(id)arg1 trackerIDs:(id)arg2 v3TrackIDs:(id)arg3 URLString:(id)arg4 headerField:(id)arg5 postParams:(id)arg6 needEncrypt:(_Bool)arg7 policy:(long long)arg8;
- (void)sendImmediateEvent:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)startSendTrack:(id)arg1 trackIDs:(id)arg2 v3TrackIDs:(id)arg3 policy:(long long)arg4;
- (id)saveData:(id)arg1 isV3Format:(_Bool)arg2;
- (void)_startHandleTrack:(id)arg1 policy:(long long)arg2 isV3Format:(_Bool)arg3;
- (void)startHandleTrack:(id)arg1 policy:(long long)arg2 isV3Format:(_Bool)arg3;
- (id)keyForTrackType:(long long)arg1;
- (long long)connectionType;
- (void)connectionChanged:(id)arg1;
- (void)dealloc;
- (id)init;

@end

