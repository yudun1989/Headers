//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSURLSession, NSURLSessionConfiguration;

@interface TencentLBSLiteSessionManager : NSObject
{
    NSURLSession *_session;
    NSURLSessionConfiguration *_sessionConfiguration;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSURLSessionConfiguration *sessionConfiguration; // @synthesize sessionConfiguration=_sessionConfiguration;
@property(retain, nonatomic) NSURLSession *session; // @synthesize session=_session;
- (void).cxx_destruct;
- (void)dataTaskWithRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)initWithSessionConfiguration:(id)arg1;
- (id)init;

@end

