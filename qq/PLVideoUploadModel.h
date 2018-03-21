//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NoRetainTimer;
@protocol PLVideoUploadDelegate;

@interface PLVideoUploadModel : NSObject
{
    _Bool _enableTimeout;
    _Bool _timeoutRunning;
    id _userData;
    id <PLVideoUploadDelegate> _delegate;
    unsigned long long _retryTimes;
    unsigned long long _uploadSeq;
    CDUnknownBlockType _timeoutCallBack;
    NoRetainTimer *_timer;
}

@property(retain, nonatomic) NoRetainTimer *timer; // @synthesize timer=_timer;
@property(copy, nonatomic) CDUnknownBlockType timeoutCallBack; // @synthesize timeoutCallBack=_timeoutCallBack;
@property(nonatomic) _Bool timeoutRunning; // @synthesize timeoutRunning=_timeoutRunning;
@property(nonatomic) _Bool enableTimeout; // @synthesize enableTimeout=_enableTimeout;
@property(nonatomic) unsigned long long uploadSeq; // @synthesize uploadSeq=_uploadSeq;
@property(nonatomic) unsigned long long retryTimes; // @synthesize retryTimes=_retryTimes;
@property(nonatomic) __weak id <PLVideoUploadDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) id userData; // @synthesize userData=_userData;
- (void).cxx_destruct;
- (void)stopTimer;
- (unsigned long long)getTimeoutFromOffline;
- (void)startTimer;
- (void)timeoutFunc;
- (void)resumeTimeout;
- (void)pauseTimeout;
- (void)cancelTimeOut;
- (void)startTimeOutTickWithCallBack:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)init;

@end

