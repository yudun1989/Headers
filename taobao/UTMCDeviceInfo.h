//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class CTTelephonyNetworkInfo, NSLock, NSString, Reachability;

@interface UTMCDeviceInfo : NSObject
{
    NSLock *_lock;
    NSString *mOsName;
    NSString *mUtdid;
    NSString *mAppVersion;
    NSString *mImei;
    NSString *mImsi;
    NSString *mBrand;
    NSString *mDeviceModel;
    NSString *mResolution;
    NSString *mCarrier;
    NSString *mAccess;
    NSString *mAccessSubType;
    NSString *mLanguage;
    NSString *mOsVersion;
    CTTelephonyNetworkInfo *telephonyInfo;
    Reachability *mReachability;
}

+ (id)uniqueGlobalDeviceIdentifier;
+ (id)macAddress;
+ (id)getUniqueID;
+ (int)networkStatus;
+ (_Bool)isReachableViaWifi;
+ (struct __SCNetworkReachability *)utCreateReachabilityRef;
+ (unsigned int)reachabilityFlags;
+ (id)resolution;
+ (id)platform;
+ (id)adSupportId;
+ (id)uniqueGlobalAdvertisingIdentifier;
+ (id)imei;
+ (id)utdid;
@property(retain, nonatomic) Reachability *mReachability; // @synthesize mReachability;
@property(retain, nonatomic) CTTelephonyNetworkInfo *telephonyInfo; // @synthesize telephonyInfo;
@property(retain) NSString *mOsVersion; // @synthesize mOsVersion;
@property(retain) NSString *mLanguage; // @synthesize mLanguage;
@property(retain) NSString *mCarrier; // @synthesize mCarrier;
@property(retain) NSString *mResolution; // @synthesize mResolution;
@property(retain) NSString *mDeviceModel; // @synthesize mDeviceModel;
@property(retain) NSString *mBrand; // @synthesize mBrand;
@property(retain) NSString *mImsi; // @synthesize mImsi;
@property(retain) NSString *mImei; // @synthesize mImei;
@property(retain) NSString *mAppVersion; // @synthesize mAppVersion;
@property(retain) NSString *mUtdid; // @synthesize mUtdid;
@property(retain) NSString *mOsName; // @synthesize mOsName;
- (void).cxx_destruct;
- (id)getNetworkSubType;
- (id)getCarrierName;
- (id)deviceInfo;
@property(readonly) NSString *mAccessSubType; // @synthesize mAccessSubType;
@property(readonly) NSString *mAccess; // @synthesize mAccess;
- (void)reachabilityChanged:(id)arg1;
- (void)dealloc;
- (id)init;

@end

