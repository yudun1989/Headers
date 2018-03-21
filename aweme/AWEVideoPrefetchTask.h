//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "AWEVideoCacheRequestTaskDelegate-Protocol.h"

@class AWEVideoCachePrefetchTask, NSString, NSURL;
@protocol AWEVideoPrefetchTaskDelegate;

@interface AWEVideoPrefetchTask : NSObject <AWEVideoCacheRequestTaskDelegate>
{
    AWEVideoCachePrefetchTask *_requestTask;
    NSURL *_videoURL;
    NSString *_videoURLKey;
    unsigned long long _prefetchSize;
    long long _state;
    id <AWEVideoPrefetchTaskDelegate> _delegate;
    double _prefetchBeginTime;
}

+ (id)taskWithURLString:(id)arg1 size:(unsigned long long)arg2 queue:(id)arg3;
@property(nonatomic) double prefetchBeginTime; // @synthesize prefetchBeginTime=_prefetchBeginTime;
@property(nonatomic) __weak id <AWEVideoPrefetchTaskDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long state; // @synthesize state=_state;
@property(nonatomic) unsigned long long prefetchSize; // @synthesize prefetchSize=_prefetchSize;
@property(copy, nonatomic) NSString *videoURLKey; // @synthesize videoURLKey=_videoURLKey;
@property(retain, nonatomic) NSURL *videoURL; // @synthesize videoURL=_videoURL;
@property(retain, nonatomic) AWEVideoCachePrefetchTask *requestTask; // @synthesize requestTask=_requestTask;
- (void).cxx_destruct;
- (void)requestTask:(id)arg1 didFailWithError:(id)arg2;
- (void)requestTaskDidFinishLoading:(id)arg1;
- (void)requestTask:(id)arg1 didReceiveResponse:(id)arg2;
- (void)requestTask:(id)arg1 didReceiveWiredData:(id)arg2;
- (void)requestTask:(id)arg1 didReceiveData:(id)arg2;
- (void)cancelPrefetch;
- (_Bool)startPrefetch;
- (id)taskWithURLString:(id)arg1 size:(unsigned long long)arg2 queue:(id)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

