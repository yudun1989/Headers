//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSOperation.h>

#import "NSURLConnectionDelegate-Protocol.h"

@class NSMutableData, NSString, NSURLConnection, NSURLRequest;

@interface AMapSearchNetworkOperation : NSOperation <NSURLConnectionDelegate>
{
    _Bool _finished;
    _Bool _executing;
    NSURLRequest *_request;
    CDUnknownBlockType _completionHandler;
    NSMutableData *_receivedData;
    NSURLConnection *_connection;
    long long _expectedSize;
}

@property(nonatomic) long long expectedSize; // @synthesize expectedSize=_expectedSize;
@property(retain, nonatomic) NSURLConnection *connection; // @synthesize connection=_connection;
@property(retain, nonatomic) NSMutableData *receivedData; // @synthesize receivedData=_receivedData;
@property(copy) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(retain, nonatomic) NSURLRequest *request; // @synthesize request=_request;
@property(nonatomic, getter=isExecuting) _Bool executing; // @synthesize executing=_executing;
@property(nonatomic, getter=isFinished) _Bool finished; // @synthesize finished=_finished;
- (void).cxx_destruct;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (_Bool)isConcurrent;
- (void)cancel;
- (void)start;
- (void)done;
- (void)reset;
- (void)invokeDelegateWithData:(id)arg1 error:(id)arg2;
- (id)initWithRequest:(id)arg1 comletionBlock:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

