//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TTHTTPRequestSerializerBase.h"

@interface AWELiveNetworkRequestSerializer : TTHTTPRequestSerializerBase
{
}

+ (id)preprocessRequest:(id)arg1 parameters:(id)arg2;
+ (id)serializer;
- (id)URLRequestWithURL:(id)arg1 headerField:(id)arg2 params:(id)arg3 method:(id)arg4 constructingBodyBlock:(CDUnknownBlockType)arg5 commonParams:(id)arg6;
- (id)URLRequestWithURL:(id)arg1 params:(id)arg2 method:(id)arg3 constructingBodyBlock:(CDUnknownBlockType)arg4 commonParams:(id)arg5;
- (id)URLRequestWithRequestModel:(id)arg1 commonParams:(id)arg2;

@end

