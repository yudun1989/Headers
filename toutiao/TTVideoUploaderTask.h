//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSError, NSString, NSURL;

@interface TTVideoUploaderTask : NSObject
{
    long long _state;
    NSString *_taskID;
    NSURL *_videoFilePath;
    NSError *_error;
    long long _countOfBytesSent;
    long long _countOfTotalBytes;
    long long _videoSliceBytes;
}

@property(readonly, nonatomic) long long videoSliceBytes; // @synthesize videoSliceBytes=_videoSliceBytes;
@property(readonly, nonatomic) long long countOfTotalBytes; // @synthesize countOfTotalBytes=_countOfTotalBytes;
@property(readonly, nonatomic) long long countOfBytesSent; // @synthesize countOfBytesSent=_countOfBytesSent;
@property(readonly, nonatomic) NSError *error; // @synthesize error=_error;
@property(readonly, nonatomic) NSURL *videoFilePath; // @synthesize videoFilePath=_videoFilePath;
@property(readonly, copy, nonatomic) NSString *taskID; // @synthesize taskID=_taskID;
@property(readonly, nonatomic) long long state; // @synthesize state=_state;
- (void).cxx_destruct;

@end

