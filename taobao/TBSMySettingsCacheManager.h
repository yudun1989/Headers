//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface TBSMySettingsCacheManager : NSObject
{
}

+ (id)getMenuConfig:(id)arg1 withVersion:(id)arg2;
+ (_Bool)saveMenuConfig:(id)arg1 withFileName:(id)arg2 andVersion:(id)arg3;
+ (void)clearUserInfoWith:(id)arg1;
+ (id)cacheFileName:(id)arg1;
+ (id)getUserInfoFromCache:(id)arg1 withVersion:(id)arg2;
+ (_Bool)saveUserInfoWith:(id)arg1 withFileName:(id)arg2 andVersion:(id)arg3;

@end

