//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface MMOfflineDownloadTupleManager : NSObject
{
    NSMutableArray *_tuples;
}

@property(retain, nonatomic) NSMutableArray *tuples; // @synthesize tuples=_tuples;
- (void).cxx_destruct;
- (id)init;
- (id)removeTupleForKey:(id)arg1;
- (void)addTupleWithKey:(id)arg1 cityItem:(id)arg2 completeion:(CDUnknownBlockType)arg3;

@end

