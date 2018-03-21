//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface TBSNSLocalCacheService : NSObject
{
}

+ (id)genCacheKeyWithObjId:(id)arg1 bizType:(long long)arg2 other:(id)arg3;
+ (void)clearAllCache;
+ (void)clearWithKey:(id)arg1;
+ (_Bool)setObject:(id)arg1 withKey:(id)arg2 options:(unsigned long long)arg3;
+ (id)getObjectWithKey:(id)arg1 withDataType:(long long)arg2 itemClass:(Class)arg3;
+ (id)getObjectWithKey:(id)arg1 withDataType:(long long)arg2 itemClass:(Class)arg3 pageListClass:(Class)arg4;
+ (_Bool)needClearWithCheckVersion:(id)arg1;

@end

