//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "ICacheFormater-Protocol.h"

@class NSString;

@interface StandardCacheFormtater : NSObject <ICacheFormater>
{
}

- (id)cacheAttributes:(id)arg1 forKey:(id)arg2;
- (void)removeFromPath:(id)arg1 forKey:(id)arg2;
- (id)objectFromPath:(id)arg1 forKey:(id)arg2;
- (void)saveObject:(id)arg1 toPath:(id)arg2 forKey:(id)arg3;
- (id)key:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

