//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface MBKNetworkLogger : NSObject
{
    _Bool _printEnable;
}

+ (id)UTF8ToNString:(id)arg1;
+ (id)mbkRequestMethod:(long long)arg1;
+ (void)logDebugInfoWithResponse:(id)arg1 responseObject:(id)arg2 request:(id)arg3 error:(id)arg4;
+ (void)logDebugInfoWithRequest:(id)arg1 apiName:(id)arg2 requestParams:(id)arg3 httpMethod:(id)arg4;
+ (void)logDebugInfoWithRequest:(id)arg1 responseObject:(id)arg2;
+ (void)logDebugInfoWithRequest:(id)arg1;
+ (id)sharedInstance;
@property(nonatomic) _Bool printEnable; // @synthesize printEnable=_printEnable;

@end

