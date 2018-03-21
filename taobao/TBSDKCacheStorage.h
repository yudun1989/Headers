//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDictionary, NSMutableDictionary, NSString, TBSDKThreadSafeMutableDictionary;
@protocol OS_dispatch_group, OS_dispatch_queue;

@interface TBSDKCacheStorage : NSObject
{
    NSObject<OS_dispatch_queue> *queue;
    NSObject<OS_dispatch_queue> *downloadQueue;
    NSObject<OS_dispatch_group> *downloadGroup;
    _Bool _syncflag;
    NSString *_path;
    NSDictionary *_mainConfig;
    TBSDKThreadSafeMutableDictionary *_blockConfig;
    TBSDKThreadSafeMutableDictionary *_apiConfig;
    NSMutableDictionary *_blocks;
}

+ (id)sharedInstance;
@property _Bool syncflag; // @synthesize syncflag=_syncflag;
@property(retain, nonatomic) NSMutableDictionary *blocks; // @synthesize blocks=_blocks;
@property(retain, nonatomic) TBSDKThreadSafeMutableDictionary *apiConfig; // @synthesize apiConfig=_apiConfig;
@property(retain, nonatomic) TBSDKThreadSafeMutableDictionary *blockConfig; // @synthesize blockConfig=_blockConfig;
@property(retain, nonatomic) NSDictionary *mainConfig; // @synthesize mainConfig=_mainConfig;
@property(copy, nonatomic) NSString *path; // @synthesize path=_path;
- (void).cxx_destruct;
- (id)open:(id)arg1;
- (void)loadConfig;
- (id)loadURL:(id)arg1 toFile:(id)arg2;
- (id)get:(id)arg1 key:(id)arg2;
- (_Bool)put:(id)arg1 key:(id)arg2 value:(id)arg3;
- (id)select:(id)arg1 key:(id)arg2;
- (void)delete:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)delete:(id)arg1 key:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (_Bool)insert:(id)arg1 key:(id)arg2 value:(id)arg3;
- (void)insert:(id)arg1 key:(id)arg2 value:(id)arg3 callback:(CDUnknownBlockType)arg4;
- (id)getBlockByApiName:(id)arg1 apiVersion:(id)arg2;
- (id)getBlockByAPI:(id)arg1 ver:(id)arg2;
- (id)getConfigWithApiName:(id)arg1 apiVersion:(id)arg2 key:(id)arg3;
- (id)getBlock:(id)arg1;
- (id)getConfigByURL:(id)arg1 key:(id)arg2;
- (_Bool)isCacheEnable:(id)arg1;
- (id)getExcludeQueryListByKey:(id)arg1;
- (void)addConfig:(id)arg1;
- (void)setConfig:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)cleanCache;
- (void)nextStartupCleanCache;
- (void)handleEnvData;

@end

