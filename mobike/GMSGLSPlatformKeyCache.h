//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSURL;

@interface GMSGLSPlatformKeyCache : NSObject
{
    NSURL *_cacheDirectory;
    NSString *_platformKey;
}

- (void).cxx_destruct;
- (id)cacheFileURL;
@property(copy, nonatomic) NSString *platformKey;
- (id)init;
- (id)initWithCacheDirectory:(id)arg1;

@end

