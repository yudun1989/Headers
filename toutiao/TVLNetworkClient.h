//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSURLSession, NSURLSessionTask;

@interface TVLNetworkClient : NSObject
{
    NSURLSession *_session;
    NSURLSessionTask *_task;
}

@property(retain, nonatomic) NSURLSessionTask *task; // @synthesize task=_task;
@property(retain, nonatomic) NSURLSession *session; // @synthesize session=_session;
- (void).cxx_destruct;
- (void)invalidAndCancel;
- (void)cancel;
- (void)requestWithURL:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)init;

@end

