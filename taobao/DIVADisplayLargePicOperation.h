//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSOperation.h>

@class NSURL;

@interface DIVADisplayLargePicOperation : NSOperation
{
    _Bool _executing;
    _Bool _finished;
    _Bool _isStarted;
    _Bool _isTaskCancel;
    NSURL *_picUrl;
    CDUnknownBlockType _downloadCompletion;
    CDUnknownBlockType _progressBlock;
}

@property(nonatomic) _Bool isTaskCancel; // @synthesize isTaskCancel=_isTaskCancel;
@property(nonatomic) _Bool isStarted; // @synthesize isStarted=_isStarted;
@property(copy, nonatomic) CDUnknownBlockType progressBlock; // @synthesize progressBlock=_progressBlock;
@property(copy, nonatomic) CDUnknownBlockType downloadCompletion; // @synthesize downloadCompletion=_downloadCompletion;
@property(retain, nonatomic) NSURL *picUrl; // @synthesize picUrl=_picUrl;
@property(nonatomic, getter=isFinished) _Bool finished; // @synthesize finished=_finished;
@property(nonatomic, getter=isExecuting) _Bool executing; // @synthesize executing=_executing;
- (void).cxx_destruct;
- (void)cancelInternal;
- (void)cancelTask;
- (id)getFileCachePath:(id)arg1;
- (void)downloadFinished:(id)arg1;
- (void)loadDivaFailedWithError:(id)arg1;
- (void)downloadLargePicWithUrl:(id)arg1;
- (void)start;
- (void)dealloc;

@end

