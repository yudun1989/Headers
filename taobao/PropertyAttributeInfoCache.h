//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSCache;

@interface PropertyAttributeInfoCache : NSObject
{
    NSCache *_cache;
}

+ (id)instance;
- (void).cxx_destruct;
- (void)clearCache;
- (void)putToCacheWithClass:(Class)arg1 AndPropertyName:(id)arg2 WithInfo:(id)arg3;
- (id)getFromCacheWithClass:(Class)arg1 AndPropertyName:(id)arg2;
- (void)dealloc;
- (id)init;

@end
