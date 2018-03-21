//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSData, NSError, NSString, NSURLRequest, NSURLResponse, PSDURLProtocolProcessor;

@protocol PSDURLProtocolProcessorDelegate <NSObject>
- (void)PSDURLProtocolProcessor:(PSDURLProtocolProcessor *)arg1 didFailWithError:(NSError *)arg2;
- (void)PSDURLProtocolProcessor:(PSDURLProtocolProcessor *)arg1 didFinishLoading:(NSData *)arg2 receiveDataLength:(unsigned long long)arg3;
- (void)PSDURLProtocolProcessor:(PSDURLProtocolProcessor *)arg1 didLoadData:(NSData *)arg2;
- (void)PSDURLProtocolProcessor:(PSDURLProtocolProcessor *)arg1 didReceiveResponse:(NSURLResponse *)arg2;
- (void)PSDURLProtocolProcessor:(PSDURLProtocolProcessor *)arg1 wasRedirectedToRequest:(NSURLRequest *)arg2 redirectResponse:(NSURLResponse *)arg3 receiveData:(NSData *)arg4;
- (void)PSDURLProtocolProcessor:(PSDURLProtocolProcessor *)arg1 startLoading:(NSURLRequest *)arg2;
- (void)PSDURLProtocolProcessor:(PSDURLProtocolProcessor *)arg1 willStartLoading:(NSURLRequest *)arg2 channelId:(NSString *)arg3;
@end

