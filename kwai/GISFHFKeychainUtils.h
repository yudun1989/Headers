//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface GISFHFKeychainUtils : NSObject
{
}

+ (void)removeGISdkUserForKey:(id)arg1 inAppKey:(id)arg2;
+ (id)getGISdkUserForKey:(id)arg1 inAppKey:(id)arg2;
+ (void)saveGISdkUser:(id)arg1 forKey:(id)arg2 inAppKey:(id)arg3;
+ (id)serviceName:(id)arg1;
+ (_Bool)deleteItemForUsername:(id)arg1 andServiceName:(id)arg2 error:(id *)arg3;
+ (_Bool)storeUsername:(id)arg1 andPassword:(id)arg2 forServiceName:(id)arg3 updateExisting:(_Bool)arg4 error:(id *)arg5;
+ (id)getPasswordForUsername:(id)arg1 andServiceName:(id)arg2 error:(id *)arg3;

@end

