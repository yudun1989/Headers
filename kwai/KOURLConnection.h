//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSURLConnectionDataDelegate-Protocol.h"

@class NSMutableData, NSString, NSURLConnection, NSURLResponse;

@interface KOURLConnection : NSObject <NSURLConnectionDataDelegate>
{
    NSURLConnection *_internalConnection;
    CDUnknownBlockType _completionHandler;
    NSMutableData *_data;
    NSURLResponse *_response;
}

+ (id)connectionWithRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void).cxx_destruct;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)cancel;
- (id)initWithRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

