//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray;
@protocol OS_dispatch_queue;

@interface TBSDKUTUtility : NSObject
{
    NSObject<OS_dispatch_queue> *_logQueue;
    NSMutableArray *_utCacheArray;
}

+ (void)writeUtLogByDemoteSpdy:(id)arg1 withUrl:(id)arg2;
+ (id)shareInstance;
@property(retain, nonatomic) NSMutableArray *utCacheArray; // @synthesize utCacheArray=_utCacheArray;
- (void).cxx_destruct;
- (void)writeUtLogByFileUploaded:(id)arg1;
- (void)writeUtLogByHomeKey:(id)arg1;
- (void)writeUTLog:(id)arg1;
- (void)onOneTimesFinished:(id)arg1;
- (void)onError:(id)arg1;
- (void)onWriteResponseCache:(id)arg1 withCacheSize:(long long)arg2;
- (void)onHitedRequestCache:(id)arg1;
- (void)onRequestCache;
- (void)onRequestEnd:(id)arg1 withContentLength:(int)arg2 withError:(id)arg3;
- (void)onRequestStart:(id)arg1;
- (void)onTcpLinkTime:(long long)arg1 withEndDate:(long long)arg2;
- (void)onDnsParseTime:(id)arg1;
- (_Bool)setUT;
- (id)init;

@end

