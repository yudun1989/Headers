//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BDDownloadTask.h"

@class NSProgress, TTHttpTask;

@interface BDDownloadChromiumTask : BDDownloadTask
{
    TTHttpTask *_task;
    NSProgress *_downloadProgress;
    double _DNSDuration;
    double _connetDuration;
    double _sslDuration;
    double _sendDuration;
    double _waitDuration;
    double _receiveDuration;
}

@property(nonatomic) double receiveDuration; // @synthesize receiveDuration=_receiveDuration;
@property(nonatomic) double waitDuration; // @synthesize waitDuration=_waitDuration;
@property(nonatomic) double sendDuration; // @synthesize sendDuration=_sendDuration;
@property(nonatomic) double sslDuration; // @synthesize sslDuration=_sslDuration;
@property(nonatomic) double connetDuration; // @synthesize connetDuration=_connetDuration;
@property(nonatomic) double DNSDuration; // @synthesize DNSDuration=_DNSDuration;
@property(retain, nonatomic) NSProgress *downloadProgress; // @synthesize downloadProgress=_downloadProgress;
@property(retain, nonatomic) TTHttpTask *task; // @synthesize task=_task;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)callbackActionWithError:(id)arg1 Obj:(id)arg2 response:(id)arg3;
- (void)startDownload;
- (void)_cancel;
- (void)start;
- (id)initWithURL:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(nonatomic) long long expectedSize; // @dynamic expectedSize;

@end

