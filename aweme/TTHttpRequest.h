//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSData, NSDictionary, NSString, NSURL;

@interface TTHttpRequest : NSObject
{
    _Bool _followRedirect;
    NSString *_HTTPMethod;
    NSURL *_URL;
    double _timeoutInterval;
    NSData *_HTTPBody;
    NSDictionary *_allHTTPHeaderFields;
}

@property _Bool followRedirect; // @synthesize followRedirect=_followRedirect;
@property(copy) NSDictionary *allHTTPHeaderFields; // @synthesize allHTTPHeaderFields=_allHTTPHeaderFields;
@property(copy) NSData *HTTPBody; // @synthesize HTTPBody=_HTTPBody;
@property double timeoutInterval; // @synthesize timeoutInterval=_timeoutInterval;
@property(copy) NSURL *URL; // @synthesize URL=_URL;
@property(copy) NSString *HTTPMethod; // @synthesize HTTPMethod=_HTTPMethod;
- (void).cxx_destruct;
- (id)init;

@end
