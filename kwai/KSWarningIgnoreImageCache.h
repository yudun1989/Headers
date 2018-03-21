//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface KSWarningIgnoreImageCache : NSObject
{
    int _maxCachedSize;
    NSMutableDictionary *_cache;
}

+ (id)warningIgnoreImageCacheWithType:(int)arg1;
+ (id)homeCache;
+ (id)userProfileCache;
@property(retain, nonatomic) NSMutableDictionary *cache; // @synthesize cache=_cache;
@property(nonatomic) int maxCachedSize; // @synthesize maxCachedSize=_maxCachedSize;
- (void).cxx_destruct;
- (void)clearAllImage;
- (void)removeImageForKey:(id)arg1;
- (id)imageForKey:(id)arg1;
- (void)storeImage:(id)arg1 forKey:(id)arg2;
- (id)init;

@end

