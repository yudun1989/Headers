//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface TTVOwnPlayerCacheWrapper : NSObject
{
}

+ (id)sharedCache;
- (double)getCacheSize;
- (void)clearAllCache;
- (void)clearCacheForVideoID:(id)arg1;
- (_Bool)hasCacheForVideoID:(id)arg1;
- (void)setCacheSizeLimit:(unsigned long long)arg1;

@end

