//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface AliSecXDeviceInfo : NSObject
{
}

+ (id)getAvailableSensors;
+ (id)getContactInfo;
+ (void)getPhotoInfo:(CDUnknownBlockType)arg1;
+ (id)getSDKUpTime;
+ (id)getSysUpTime;
+ (id)getMCC;
+ (id)getMNC;
+ (id)getTimezone;
+ (id)getLanguage;
+ (id)getAppList:(id)arg1;
+ (id)getNetworkInfo;
+ (id)getAppVersion;
+ (id)getAppName;
+ (unsigned long long)getMemorySize;
+ (id)getScreenHeight;
+ (id)getScreenWidth;
+ (id)getHWModel;
+ (id)getKernHostName;
+ (id)getSSIDInfo;
+ (id)getDiskSpace;
+ (long long)getCpuCount;
+ (long long)getCpuFreq;
+ (id)getModelName;
+ (id)getAdvId;
+ (id)getIdForVendor;
+ (id)getDeviceName;
+ (id)carrierName;
+ (_Bool)isEmulator;
+ (unsigned short)isYyabcInfo;
+ (id)screenResolution;
+ (id)getBundleId;
+ (id)getOSName;
+ (id)getOSVersion;
+ (long long)getNetworkStatus:(id)arg1;

@end

