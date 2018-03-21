//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "APResourceLoaderTaskDelegate-Protocol.h"
#import "AVAssetResourceLoaderDelegate-Protocol.h"

@class APResourceLoaderTask, NSMutableArray, NSString;
@protocol APResourceLoaderDelegate;

@interface APResourceLoader : NSObject <APResourceLoaderTaskDelegate, AVAssetResourceLoaderDelegate>
{
    _Bool _seekRequired;
    _Bool _needCacheWhenFinish;
    _Bool _isCloudID;
    _Bool _shouldUseHttps;
    _Bool _canceled;
    id <APResourceLoaderDelegate> _delegate;
    NSString *_cloudID;
    NSString *_identifier;
    NSString *_business;
    NSMutableArray *_requestList;
    APResourceLoaderTask *_requestTask;
    NSString *_contentType;
}

+ (id)originalUrlString:(id)arg1 https:(_Bool)arg2;
+ (id)customUrlWithString:(id)arg1;
@property(nonatomic) _Bool canceled; // @synthesize canceled=_canceled;
@property(retain, nonatomic) NSString *contentType; // @synthesize contentType=_contentType;
@property(retain, nonatomic) APResourceLoaderTask *requestTask; // @synthesize requestTask=_requestTask;
@property(retain, nonatomic) NSMutableArray *requestList; // @synthesize requestList=_requestList;
@property(copy, nonatomic) NSString *business; // @synthesize business=_business;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(nonatomic) _Bool shouldUseHttps; // @synthesize shouldUseHttps=_shouldUseHttps;
@property(nonatomic) _Bool isCloudID; // @synthesize isCloudID=_isCloudID;
@property(retain, nonatomic) NSString *cloudID; // @synthesize cloudID=_cloudID;
@property(nonatomic) _Bool needCacheWhenFinish; // @synthesize needCacheWhenFinish=_needCacheWhenFinish;
@property _Bool seekRequired; // @synthesize seekRequired=_seekRequired;
@property(nonatomic) __weak id <APResourceLoaderDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)resourceLoaderTask:(id)arg1 didSupportRangeAccess:(_Bool)arg2;
- (long long)requestOffsetForLoadidngRequest:(id)arg1;
- (_Bool)finishLoadingWithLoadingRequest:(id)arg1;
- (void)processRequestList;
- (_Bool)needNewTaskWithRequest:(id)arg1;
- (void)removeLoadingRequest:(id)arg1;
- (void)newTaskWithLoadingRequest:(id)arg1;
- (void)addLoadingRequest:(id)arg1;
- (void)requestTaskDidFailWithError:(id)arg1;
- (void)requestTaskDidUpdateCache;
- (void)resourceLoader:(id)arg1 didCancelLoadingRequest:(id)arg2;
- (_Bool)resourceLoader:(id)arg1 shouldWaitForLoadingOfRequestedResource:(id)arg2;
- (void)stopLoading;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

