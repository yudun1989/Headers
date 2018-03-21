//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray, NSMutableDictionary, NSString;

@interface TCURLCache : NSObject
{
    NSString *_name;
    NSString *_cachePath;
    NSMutableDictionary *_imageCache;
    NSMutableArray *_imageSortedList;
    unsigned long long _totalPixelCount;
    unsigned long long _maxPixelCount;
    long long _totalLoading;
    double _invalidationAge;
    _Bool _disableDiskCache;
    _Bool _disableImageCache;
}

+ (id)cachePathWithName:(id)arg1;
+ (id)sharedCache;
+ (id)cacheWithName:(id)arg1;
@property(copy, nonatomic) NSString *cachePath; // @synthesize cachePath=_cachePath;
- (void)touchDataForKey:(id)arg1;
- (id)initOpenSDKCacheWithName:(id)arg1;
- (void)removeAll:(_Bool)arg1;
- (void)removeKey:(id)arg1;
- (void)removeURL:(id)arg1 fromDisk:(_Bool)arg2;
- (void)moveDataFromPath:(id)arg1 toURL:(id)arg2;
- (void)moveDataForURL:(id)arg1 toURL:(id)arg2;
- (id)storeTemporaryImage:(id)arg1 toDisk:(_Bool)arg2;
- (void)storeImage:(id)arg1 forURL:(id)arg2;
- (void)storeData:(id)arg1 forKey:(id)arg2;
- (void)storeData:(id)arg1 forURL:(id)arg2;
- (id)imageForURL:(id)arg1 fromDisk:(_Bool)arg2;
- (id)imageForURL:(id)arg1;
- (_Bool)hasImageForURL:(id)arg1 fromDisk:(_Bool)arg2;
- (id)dataForKey:(id)arg1 expires:(double)arg2 timestamp:(id *)arg3;
- (_Bool)hasDataForKey:(id)arg1 expires:(double)arg2;
- (id)dataForURL:(id)arg1 expires:(double)arg2 timestamp:(id *)arg3;
- (id)dataForURL:(id)arg1;
- (_Bool)hasDataForURL:(id)arg1;
- (id)etagCachePathForKey:(id)arg1;
- (id)cachePathForKey:(id)arg1;
- (id)cachePathForURL:(id)arg1;
- (id)keyForURL:(id)arg1;
@property(readonly, nonatomic) NSString *etagCachePath;
- (void)didReceiveMemoryWarning:(void *)arg1;
- (id)createUniqueTemporaryURL;
- (id)createTemporaryURL;
- (id)loadEtagFromCacheWithKey:(id)arg1;
- (void)storeImage:(id)arg1 forURL:(id)arg2 force:(_Bool)arg3;
- (void)expireImagesFromMemory;
- (void)dealloc;
- (id)init;
- (id)initWithName:(id)arg1;

@end
