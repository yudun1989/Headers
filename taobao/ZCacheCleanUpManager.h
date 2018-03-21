//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class ZCacheCleanUpMonitorInfo;

@interface ZCacheCleanUpManager : NSObject
{
    ZCacheCleanUpMonitorInfo *_monitorInfo;
}

+ (id)cleanUp;
+ (_Bool)canInstall:(id)arg1;
+ (id)sharedInstance;
@property(retain, nonatomic) ZCacheCleanUpMonitorInfo *monitorInfo; // @synthesize monitorInfo=_monitorInfo;
- (void).cxx_destruct;
- (unsigned long long)freeDiskSpaceInBytes;
- (unsigned long long)appCoverDiskSpaceInBytes;
- (unsigned long long)storageCapacity;
- (void)trimArray:(id)arg1 toCapacity:(unsigned long long)arg2;
- (void)filterApps:(id)arg1;
- (id)allApps;
- (id)getValidApps;
- (void)cleanUp:(id)arg1;
- (_Bool)canInstall:(id)arg1;

@end

