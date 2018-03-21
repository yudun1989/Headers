//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface ASSStorageAccesser : NSObject
{
}

+ (id)getApdidcFromFile;
+ (id)getFromFile;
+ (id)loadBoottimeHistory;
+ (void)saveBoottimeHistory:(id)arg1;
+ (id)loadOtherTokenHistory;
+ (void)saveOtherTokenHistory:(id)arg1;
+ (id)loadAppProfileHistory;
+ (void)saveAppProfileHistory:(id)arg1;
+ (id)loadImageHistory;
+ (void)saveImageHistory:(id)arg1;
+ (id)loadContactHistory;
+ (void)saveContactHistory:(id)arg1;
+ (void)deleteContactDetailInfo;
+ (id)loadContactDetailInfo;
+ (void)saveContactDetailInfo:(id)arg1;
+ (id)loadJBErrorHistory;
+ (void)saveJBErrorHistory:(id)arg1;
+ (id)loadTrustData;
+ (void)saveTrustData:(id)arg1;
+ (void)saveEnvironmentMode:(id)arg1 keyName:(id)arg2;
+ (id)loadEnvironmentMode:(id)arg1;
+ (id)loadLocalTid;
+ (void)saveTidToLocal:(id)arg1;
+ (id)loadArpMac;
+ (void)saveArpMac:(id)arg1;
+ (id)loadUmidToken;
+ (void)saveUmidToken:(id)arg1;
+ (id)loadDynamicKey;
+ (void)saveDynamicKey:(id)arg1;
+ (id)loadApdidc;
+ (void)saveApdidc:(id)arg1;
+ (id)loadLocalToken:(id)arg1;
+ (void)saveLocalToken:(id)arg1 keyName:(id)arg2;
+ (void)saveCurrentLoginTime:(id)arg1 keyName:(id)arg2;
+ (id)loadLastLoginTime:(id)arg1;
+ (id)loadLastLoginTime;
+ (id)getNewRadomizedID;
+ (id)getRandomizedID;
+ (id)loadPreviousApdid;
+ (id)loadStorageModelFromKeychain;
+ (void)saveStorageModel:(id)arg1;

@end

