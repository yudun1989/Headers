//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "TTResponsePreProcessorProtocol-Protocol.h"

@class NSString, TTHTTPsControlTrackInfoList, TTHttpRequest;

@interface TTDefaultResponsePreprocessor : NSObject <TTResponsePreProcessorProtocol>
{
    _Bool _needsRetry;
    _Bool _alertHijack;
    _Bool _shouldFallbackToHTTP;
    TTHttpRequest *_retryRequest;
    unsigned long long _retryTimes;
    unsigned long long _httpRetryCount;
    TTHTTPsControlTrackInfoList *_trackInfoList;
}

+ (id)processor;
@property(retain, nonatomic) TTHTTPsControlTrackInfoList *trackInfoList; // @synthesize trackInfoList=_trackInfoList;
@property(nonatomic) unsigned long long httpRetryCount; // @synthesize httpRetryCount=_httpRetryCount;
@property(nonatomic) _Bool shouldFallbackToHTTP; // @synthesize shouldFallbackToHTTP=_shouldFallbackToHTTP;
@property(nonatomic) unsigned long long retryTimes; // @synthesize retryTimes=_retryTimes;
@property(retain, nonatomic) TTHttpRequest *retryRequest; // @synthesize retryRequest=_retryRequest;
@property(nonatomic) _Bool alertHijack; // @synthesize alertHijack=_alertHijack;
@property(nonatomic) _Bool needsRetry; // @synthesize needsRetry=_needsRetry;
- (void).cxx_destruct;
- (void)sendApplogInfoIfNeeded;
- (void)finishPreprocess;
- (void)preprocessWithResponse:(id)arg1 responseObject:(id *)arg2 error:(id *)arg3 ForRequest:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

