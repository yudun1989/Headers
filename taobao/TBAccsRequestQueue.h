//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray, NSString;

@interface TBAccsRequestQueue : NSObject
{
    NSMutableArray *_queueArray;
    struct _opaque_pthread_rwlock_t _lock;
    NSString *_host;
}

+ (id)sharedQueueWithHost:(id)arg1;
+ (void)initialize;
@property(retain, nonatomic) NSString *host; // @synthesize host=_host;
- (void).cxx_destruct;
- (id)description;
- (void)requestIsSuccess:(id)arg1;
- (void)fireRequestForHost:(id)arg1;
- (id)bindServiceIDRequestByServiceID:(id)arg1;
- (id)requestByDataID:(id)arg1;
- (void)removeRequestByDataID:(id)arg1;
- (void)removeRequestByServiceID:(id)arg1;
- (void)removeRequestByLeven:(unsigned long long)arg1;
- (void)removeRequest:(id)arg1;
- (id)addRequest:(id)arg1;
- (id)init;

@end

