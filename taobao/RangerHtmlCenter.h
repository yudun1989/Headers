//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSCache;

@interface RangerHtmlCenter : NSObject
{
    NSCache *_cache;
}

+ (id)shareInstance;
- (void).cxx_destruct;
- (id)fileWithPath:(id)arg1 withABSupport:(_Bool)arg2;
- (id)fileWithPath:(id)arg1;
- (id)cacheKeyFromUrl:(id)arg1;
- (void)removeAllCaches;
- (void)removeFileCacheWithPaths:(id)arg1;
- (id)init;

@end

