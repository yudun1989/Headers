//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSOperation.h>

#import "TTForumPostThreadOperationProtocol-Protocol.h"
#import "TTVideoUploadClientProtocol-Protocol.h"

@class FRUploadImageManager, NSString, TTForumPostThreadTask;

@interface TTForumPostVideoOperation : NSOperation <TTVideoUploadClientProtocol, TTForumPostThreadOperationProtocol>
{
    _Bool _executing;
    _Bool _finished;
    _Bool _cancellable;
    NSString *_taskID;
    NSString *_concernID;
    long long _taskType;
    unsigned long long _state;
    unsigned long long _cancelHint;
    TTForumPostThreadTask *_task;
    CDUnknownBlockType _stateUpdatedBlock;
    CDUnknownBlockType _successBlock;
    CDUnknownBlockType _failureBlock;
    CDUnknownBlockType _cancelledBlock;
    FRUploadImageManager *_uploadImageManager;
    long long _startTime;
    unsigned long long _startUploadTime;
}

@property(nonatomic) unsigned long long startUploadTime; // @synthesize startUploadTime=_startUploadTime;
@property(nonatomic) long long startTime; // @synthesize startTime=_startTime;
@property(retain, nonatomic) FRUploadImageManager *uploadImageManager; // @synthesize uploadImageManager=_uploadImageManager;
@property(copy, nonatomic) CDUnknownBlockType cancelledBlock; // @synthesize cancelledBlock=_cancelledBlock;
@property(copy, nonatomic) CDUnknownBlockType failureBlock; // @synthesize failureBlock=_failureBlock;
@property(copy, nonatomic) CDUnknownBlockType successBlock; // @synthesize successBlock=_successBlock;
@property(copy, nonatomic) CDUnknownBlockType stateUpdatedBlock; // @synthesize stateUpdatedBlock=_stateUpdatedBlock;
@property(retain, nonatomic) TTForumPostThreadTask *task; // @synthesize task=_task;
@property(nonatomic) unsigned long long cancelHint; // @synthesize cancelHint=_cancelHint;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
@property(readonly, nonatomic) _Bool cancellable; // @synthesize cancellable=_cancellable;
- (_Bool)isFinished;
- (_Bool)isExecuting;
@property(nonatomic) long long taskType; // @synthesize taskType=_taskType;
@property(copy, nonatomic) NSString *concernID; // @synthesize concernID=_concernID;
@property(copy, nonatomic) NSString *taskID; // @synthesize taskID=_taskID;
- (void).cxx_destruct;
- (void)uploadProgressDidUpdate:(long long)arg1;
- (void)uploadDidFinish:(id)arg1 error:(id)arg2;
- (void)postVideoThread;
- (void)uploadCoverImage;
- (void)uploadVideo;
- (void)beginTask;
- (void)cancelWithHint:(unsigned long long)arg1;
- (void)done;
- (_Bool)isConcurrent;
- (_Bool)isAsynchronous;
- (void)setExecuting:(_Bool)arg1;
- (void)setFinished:(_Bool)arg1;
- (void)start;
- (void)callSuccessBlockForTask:(id)arg1;
- (void)callFailureBlockForTask:(id)arg1 error:(id)arg2;
- (void)callCancelledBlockForTask:(id)arg1 cancelHint:(unsigned long long)arg2;
- (void)callStateUpdatedBlockForTask:(id)arg1 lastState:(unsigned long long)arg2 currentState:(unsigned long long)arg3;
- (void)updateToState:(unsigned long long)arg1;
- (id)initWithPostThreadTaskID:(id)arg1 concernID:(id)arg2 suggestedTask:(id)arg3 stateUpdatedBlock:(CDUnknownBlockType)arg4 successBlock:(CDUnknownBlockType)arg5 cancelledBlock:(CDUnknownBlockType)arg6 failureBlock:(CDUnknownBlockType)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

