//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface KTVHCError : NSObject
{
}

+ (id)errorForNotEnoughDiskSpace:(long long)arg1 request:(long long)arg2 totalCacheLength:(long long)arg3 maxCacheLength:(long long)arg4;
+ (id)errorForResponseUnavailable:(id)arg1 request:(id)arg2 response:(id)arg3;

@end

