//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FileCache2.h"

@interface MediaCache : FileCache2
{
}

+ (id)defaultCache;
- (id)objectPathForKey:(id)arg1 checkExistence:(_Bool)arg2;
- (id)generatePathForKey:(id)arg1;
- (void)removeObjectForKey:(id)arg1;
- (_Bool)setObjectWithPath:(id)arg1 WithKey:(id)arg2 mediaInfo:(id)arg3;
- (id)mediaInfoWithKey:(id)arg1;
- (id)initWithName:(id)arg1;

@end
