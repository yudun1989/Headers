//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CFNetwork/NSURLProtocol.h>

@interface TTAdWebResURLProtocol : NSURLProtocol
{
}

+ (id)dataModel:(id)arg1 url:(id)arg2;
+ (void)setPreloadNumDict:(id)arg1 containUrl:(id)arg2;
+ (_Bool)hasModelDict:(id)arg1 containUrl:(id)arg2;
+ (id)canonicalRequestForRequest:(id)arg1;
+ (_Bool)canInitWithRequest:(id)arg1;
- (void)stopLoading;
- (void)startLoading;

@end

