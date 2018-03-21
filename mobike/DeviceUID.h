//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface DeviceUID : NSObject
{
    NSString *_uid;
    NSString *_uidKey;
}

+ (id)OSVersion;
+ (id)productName;
+ (id)randomUUID;
+ (id)appleIDFV;
+ (id)appleIDFA;
+ (_Bool)removeValueForUserDefultsKey:(id)arg1;
+ (id)valueForUserDefaultsKey:(id)arg1;
+ (_Bool)setValue:(id)arg1 forUserDefaultsKey:(id)arg2;
+ (id)valueForKeychainKey:(id)arg1 service:(id)arg2;
+ (int)setValue:(id)arg1 forKeychainKey:(id)arg2 inService:(id)arg3;
+ (id)keychainItemForKey:(id)arg1 service:(id)arg2;
+ (_Bool)isNewDevice;
+ (void)saveDeviceId;
+ (id)uid;
@property(readonly, nonatomic) NSString *uidKey; // @synthesize uidKey=_uidKey;
- (void).cxx_destruct;
- (void)save;
@property(readonly, nonatomic) NSString *uid; // @synthesize uid=_uid;
- (id)initWithKey:(id)arg1;

@end

