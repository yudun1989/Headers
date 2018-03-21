//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

@interface KLDomainManager : NSObject
{
    NSMutableDictionary *_domainDict;
    NSObject<OS_dispatch_queue> *_operationQueue;
    NSString *_key;
}

+ (id)shareInstance;
- (void).cxx_destruct;
- (_Bool)isNeedResolve;
- (id)serverResoluton:(id)arg1;
- (id)ipForDomain:(id)arg1;
- (void)startResolve:(id)arg1;
- (id)init;

@end

