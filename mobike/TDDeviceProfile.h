//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TDBaseModel.h"

@class TDDeviceHardwareConfig, TDDeviceId, TDDeviceSoftwareConfig, TDRuntimeConfig;

@interface TDDeviceProfile : TDBaseModel
{
    TDDeviceId *_deviceId;
    TDDeviceHardwareConfig *_hardwareConfig;
    TDDeviceSoftwareConfig *_softwareConfig;
    TDRuntimeConfig *_runtimeConfig;
}

@property(retain, nonatomic) TDRuntimeConfig *runtimeConfig; // @synthesize runtimeConfig=_runtimeConfig;
@property(retain, nonatomic) TDDeviceSoftwareConfig *softwareConfig; // @synthesize softwareConfig=_softwareConfig;
@property(retain, nonatomic) TDDeviceHardwareConfig *hardwareConfig; // @synthesize hardwareConfig=_hardwareConfig;
@property(retain, nonatomic) TDDeviceId *deviceId; // @synthesize deviceId=_deviceId;
- (void).cxx_destruct;
- (id)archiveToDictionary;

@end
