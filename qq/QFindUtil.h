//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface QFindUtil : NSObject
{
}

+ (void)qfindQueryLostStatus;
+ (_Bool)isQfDeviceLost:(id)arg1;
+ (void)qFLocalNotification:(id)arg1;
+ (void)initQFindDevReporterLua;
+ (id)getInstanceQFindDevReporter;
+ (id)getDicFromCLLocationCoordinate2D:(struct CLLocationCoordinate2D)arg1;
+ (int)parsInt:(id)arg1 location:(unsigned long long)arg2 length:(unsigned long long)arg3;
+ (id)subData:(id)arg1 location:(unsigned long long)arg2 length:(unsigned long long)arg3;
+ (id)CBCentralManagerOptionShowPowerAlertKey;
+ (id)CBCentralManagerScanOptionAllowDuplicatesKey;
+ (id)CBAdvertisementDataManufacturerDataKey;
+ (id)CBAdvertisementDataServiceUUIDsKey;
+ (unsigned long long)UIBackgroundTaskInvalid;
+ (void)getBleState:(CDUnknownBlockType)arg1;
+ (void)setAppSettingIntFlag:(id)arg1 value:(int)arg2;
+ (int)getAppSettingIntFlag:(id)arg1;
+ (void)setAppSettingFlag:(id)arg1 value:(_Bool)arg2;
+ (_Bool)getAppSettingFlag:(id)arg1;

@end

