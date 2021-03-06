//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface UTMCStorageManager : NSObject
{
    NSString *_cacheRootPath;
}

+ (id)sharedUTMCStorageManager;
@property(retain, nonatomic) NSString *cacheRootPath; // @synthesize cacheRootPath=_cacheRootPath;
- (void).cxx_destruct;
- (id)restoreObjectForKey:(id)arg1 decryption:(_Bool)arg2;
- (id)restoreObjectForKey:(id)arg1;
- (_Bool)saveObject:(id)arg1 forKey:(id)arg2;
- (_Bool)saveObject:(id)arg1 forKey:(id)arg2 expireOn:(id)arg3 encryption:(_Bool)arg4;
- (void)clearExpireCache;
- (id)createCacheRootPath;
- (void)dealloc;
- (id)init;

@end

