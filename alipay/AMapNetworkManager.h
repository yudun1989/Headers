//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSOperationQueue;

@interface AMapNetworkManager : NSObject
{
    NSOperationQueue *_operationQueue;
}

+ (id)defaultManager;
+ (id)sendSynchronousRequestWithReformer:(id)arg1 returningResponse:(id *)arg2 error:(id *)arg3;
@property(retain, nonatomic) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
- (void).cxx_destruct;
- (void)cancelAllOperations;
- (void)startOperation:(id)arg1;
- (id)startOperationWithRequestReformer:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (id)init;

@end

