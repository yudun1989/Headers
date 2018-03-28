//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray, NSTimer, TTIMMsgFrequencyControl;
@protocol OS_dispatch_queue;

@interface TTIMMsgQueueManager : NSObject
{
    _Bool _lock;
    NSMutableArray *_mWriteQueue;
    NSMutableArray *_mWaitingQueue;
    NSMutableArray *_mRetryQueue;
    NSMutableArray *_mReadQueue;
    NSObject<OS_dispatch_queue> *_queue;
    NSTimer *_timer;
    TTIMMsgFrequencyControl *_mFreqCongrol;
}

+ (id)sharedInstance;
@property(retain, nonatomic) TTIMMsgFrequencyControl *mFreqCongrol; // @synthesize mFreqCongrol=_mFreqCongrol;
@property(nonatomic) _Bool lock; // @synthesize lock=_lock;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) NSMutableArray *mReadQueue; // @synthesize mReadQueue=_mReadQueue;
@property(retain, nonatomic) NSMutableArray *mRetryQueue; // @synthesize mRetryQueue=_mRetryQueue;
@property(retain, nonatomic) NSMutableArray *mWaitingQueue; // @synthesize mWaitingQueue=_mWaitingQueue;
@property(retain, nonatomic) NSMutableArray *mWriteQueue; // @synthesize mWriteQueue=_mWriteQueue;
- (void).cxx_destruct;
- (void)notifyMsg:(id)arg1;
- (void)setupTimer;
- (int)calculateInsertIndex:(id)arg1;
- (void)checkRetryQueue;
- (void)checkWaitingQueue;
- (void)checkQueueStatus;
- (void)readFromWS;
- (void)writeToWS;
- (void)run;
- (void)onReceiveHttpMsg:(id)arg1;
- (void)onReceiveWSMsg:(id)arg1;
- (void)insertMsgToWrite:(id)arg1;
- (void)sendMessage:(id)arg1 config:(id)arg2;
- (void)sendMessage:(id)arg1;
- (void)onAppDidEnterBackground_:(id)arg1;
- (void)onAppDidBecomeActive_:(id)arg1;
- (void)clearMsgs;
- (void)addObservers;
- (void)dealloc;
- (id)init;

@end

