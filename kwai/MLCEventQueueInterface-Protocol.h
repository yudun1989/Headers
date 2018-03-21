//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSObject, NSString;
@protocol OS_dispatch_queue;

@protocol MLCEventQueueInterface <NSObject>
+ (void)setDisablePriority:(_Bool)arg1;
@property(nonatomic) _Bool ignoreEventQueue;
@property(nonatomic) long long priority;
@property(readonly, retain, nonatomic) NSObject<OS_dispatch_queue> *syncQueue;
- (id)postR:(id (^)(void))arg1 sync:(_Bool)arg2;
- (id)postW:(id (^)(void))arg1 sync:(_Bool)arg2;
- (id)postR:(id (^)(void))arg1;
- (void)postW:(id (^)(void))arg1;

@optional
- (void)postMultiEvents:(NSArray *)arg1 complete:(void (^)(id))arg2;
- (id)postR:(id (^)(void))arg1 sync:(_Bool)arg2 block:(void (^)(id))arg3;
- (id)postW:(id (^)(void))arg1 sync:(_Bool)arg2 block:(void (^)(id))arg3;
- (NSString *)threadId;
@end

