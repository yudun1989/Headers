//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

@interface GIDRuntimeConfigFetcher : NSObject
{
    NSString *_version;
    NSString *_query;
    NSMutableArray *_handlers;
}

+ (void)setServerURLPrefix:(id)arg1;
+ (id)serverURLPrefix;
- (void).cxx_destruct;
- (void)fetchWithURLString:(id)arg1 history:(id)arg2;
- (void)fetchWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)initWithSDKVersion:(id)arg1 clientID:(id)arg2 bundleID:(id)arg3;

@end

