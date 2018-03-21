//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface KSSystemInfo : NSObject
{
}

+ (id)systemInfo;
+ (id)buildType;
+ (_Bool)hasAppStoreReceipt;
+ (_Bool)isTestBuild;
+ (id)receiptUrlPath;
+ (_Bool)isSimulatorBuild;
+ (_Bool)isDebugBuild;
+ (_Bool)isJailbroken;
+ (id)currentCPUArch;
+ (id)CPUArchForCPUType:(int)arg1 subType:(int)arg2;
+ (id)deviceAndAppHash;
+ (id)appUUID;
+ (id)executablePath;
+ (id)uuidBytesToString:(const char *)arg1;
+ (id)dateSysctl:(id)arg1;
+ (id)stringSysctl:(id)arg1;
+ (id)int64Sysctl:(id)arg1;
+ (id)int32Sysctl:(id)arg1;

@end

