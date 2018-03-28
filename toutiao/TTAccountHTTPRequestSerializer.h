//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TTHTTPRequestSerializerBase.h"

@class NSString;

@interface TTAccountHTTPRequestSerializer : TTHTTPRequestSerializerBase
{
    NSString *_defaultUserAgent;
}

+ (id)serializer;
@property(copy, nonatomic) NSString *defaultUserAgent; // @synthesize defaultUserAgent=_defaultUserAgent;
- (void).cxx_destruct;
- (void)applySessionKeyXToRequest:(id)arg1;
- (void)applyCookieHeaderFrom:(id)arg1 toRequest:(id)arg2;
- (void)applyCookieHeader:(id)arg1;
- (id)defaultUserAgentString;
- (void)buildRequestHeaders:(id)arg1 parameters:(id)arg2;
- (void)buildRequestHeaders:(id)arg1;
- (id)URLRequestWithURL:(id)arg1 params:(id)arg2 method:(id)arg3 constructingBodyBlock:(CDUnknownBlockType)arg4 commonParams:(id)arg5;

@end

