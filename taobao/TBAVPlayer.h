//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AVFoundation/AVPlayer.h>

#import "TBResourceLoaderDelegate-Protocol.h"

@class NSString, NSURL, TBResourceLoader;

@interface TBAVPlayer : AVPlayer <TBResourceLoaderDelegate>
{
    _Bool _isLoadingFromCache;
    _Bool _isObserved;
    double _cacheProgress;
    NSURL *_url;
    TBResourceLoader *_resourceLoader;
}

+ (void)playerWithURL:(id)arg1 options:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
+ (void)playerWithURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (void)playerItemWithURL:(id)arg1 options:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
+ (id)canProcessMIMETypeWhiteList;
@property(retain, nonatomic) TBResourceLoader *resourceLoader; // @synthesize resourceLoader=_resourceLoader;
@property(retain, nonatomic) NSURL *url; // @synthesize url=_url;
@property(nonatomic) _Bool isObserved; // @synthesize isObserved=_isObserved;
@property(nonatomic) double cacheProgress; // @synthesize cacheProgress=_cacheProgress;
@property(nonatomic) _Bool isLoadingFromCache; // @synthesize isLoadingFromCache=_isLoadingFromCache;
- (void).cxx_destruct;
- (void)loader:(id)arg1 failLoadingWithError:(id)arg2;
- (void)loader:(id)arg1 cacheProgress:(double)arg2;
- (void)seekToTime:(CDStruct_1b6d18a9)arg1;
- (void)pause;
- (void)play;
- (void)reloadWithURL:(id)arg1 options:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)reloadWithURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

