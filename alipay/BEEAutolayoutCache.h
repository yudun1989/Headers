//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@interface BEEAutolayoutCache : NSObject
{
    NSMutableDictionary *_sectionCache;
}

- (void).cxx_destruct;
- (void)invalidAll;
- (void)invalidSection:(long long)arg1;
- (void)invalidIndexPath:(id)arg1;
- (id)heightForIndexPath:(id)arg1;
- (void)setHeight:(double)arg1 forIndexPath:(id)arg2;
- (id)init;

@end

