//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface STPAPIRequest : NSObject
{
}

+ (void)parseResponse:(id)arg1 body:(id)arg2 error:(id)arg3 serializer:(id)arg4 completion:(CDUnknownBlockType)arg5;
+ (id)getWithAPIClient:(id)arg1 endpoint:(id)arg2 parameters:(id)arg3 serializer:(id)arg4 completion:(CDUnknownBlockType)arg5;
+ (id)postWithAPIClient:(id)arg1 endpoint:(id)arg2 parameters:(id)arg3 serializer:(id)arg4 completion:(CDUnknownBlockType)arg5;

@end

