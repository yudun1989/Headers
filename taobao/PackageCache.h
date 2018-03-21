//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@protocol OS_dispatch_queue;

@interface PackageCache : NSObject
{
    NSObject<OS_dispatch_queue> *_cacheQueue;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *cacheQueue; // @synthesize cacheQueue=_cacheQueue;
- (void).cxx_destruct;
- (id)fileCache;
- (void)removeOneItemFromAvfs:(id)arg1;
- (void)putContentToAvfs:(id)arg1 content:(id)arg2;
- (id)getContentDictionaryFromAvfs:(id)arg1;
- (id)getContentStringFromAvfs:(id)arg1;
- (id)getContentDataFromAvfs:(id)arg1;
- (id)getContentFromAvfs:(id)arg1;
- (void)cachePage:(id)arg1 url:(id)arg2 data:(id)arg3;
- (void)cachePkgItems:(id)arg1;
- (id)init;

@end

