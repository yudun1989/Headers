//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSMutableArray, NSRecursiveLock;

@interface NWFilterCenter : NSObject
{
    NSMutableArray *_extRequestHeaderFilters;
    NSMutableArray *_responseFilters;
    NSRecursiveLock *_lock;
    NSArray *_whiteList;
}

+ (id)sharedInstance;
@property(retain) NSArray *whiteList; // @synthesize whiteList=_whiteList;
@property(retain, nonatomic) NSRecursiveLock *lock; // @synthesize lock=_lock;
@property(retain, nonatomic) NSMutableArray *responseFilters; // @synthesize responseFilters=_responseFilters;
@property(retain, nonatomic) NSMutableArray *extRequestHeaderFilters; // @synthesize extRequestHeaderFilters=_extRequestHeaderFilters;
- (void).cxx_destruct;
- (void)removeResponseFilter:(id)arg1;
- (void)removeRequestHeaderFilter:(id)arg1;
- (void)runResponseFilter:(id)arg1 andHost:(id)arg2;
- (id)runExtRequestHeaderFilter:(id)arg1 andFilter:(id)arg2;
- (id)runExtRequestHeaderFilters:(id)arg1;
- (void)addResponseFilter:(id)arg1;
- (void)addExtRequestHeaderFilter:(id)arg1;
- (id)init;

@end

