//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface TB3dSceneFileCache : NSObject
{
    NSString *cacheDir;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (id)genFilePathForUrl:(id)arg1;
- (void)downLoadAndCacheFileForUrl:(id)arg1 MD5:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)init;

@end

