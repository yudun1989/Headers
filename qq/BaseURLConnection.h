//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableData, NSURLConnection;
@protocol BaseURLConnectionDelegate;

@interface BaseURLConnection : NSObject
{
    NSURLConnection *connection;
    id <BaseURLConnectionDelegate> _delegate;
    NSMutableData *_buf;
    long long _statusCode;
    int _xo;
}

- (void).cxx_destruct;
- (void)URLConnectionDidFinishLoading:(id)arg1;
- (void)URLConnectionDidFailWithError:(id)arg1;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (_Bool)connection:(id)arg1 canAuthenticateAgainstProtectionSpace:(id)arg2;
- (void)connection:(id)arg1 didReceiveAuthenticationChallenge:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (void)cancel;
- (void)post:(id)arg1 data:(id)arg2;
- (void)post:(id)arg1 bodyData:(id)arg2 host:(id)arg3;
- (void)post:(id)arg1 bodyData:(id)arg2;
- (void)get:(id)arg1;
- (id)initWithDelegate:(id)arg1;

// Remaining properties
@property(readonly, nonatomic) NSMutableData *buf; // @dynamic buf;
@property(nonatomic) __weak id <BaseURLConnectionDelegate> delegate; // @dynamic delegate;
@property(nonatomic) long long statusCode; // @dynamic statusCode;

@end

