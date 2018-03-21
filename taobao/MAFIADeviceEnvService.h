//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MAFIABaseEnvService.h"

@class CBCentralManager, UITraitCollection;

@interface MAFIADeviceEnvService : MAFIABaseEnvService
{
    CBCentralManager *_central;
    UITraitCollection *_traitCollection;
}

@property(retain, nonatomic) UITraitCollection *traitCollection; // @synthesize traitCollection=_traitCollection;
@property(retain, nonatomic) CBCentralManager *central; // @synthesize central=_central;
- (void).cxx_destruct;
- (id)platformType:(id)arg1;
- (id)fileSizeToGBString:(unsigned long long)arg1;
- (id)fileSizeToMBString:(unsigned long long)arg1;
- (unsigned long long)getRAMUsed;
- (unsigned long long)getRAMTotal;
- (id)batteryLevel;
- (id)isBlueToothSupport;
- (id)is3DtouchSupport;
- (id)isGPSSupport;
- (id)isGyroscopeSupport;
- (id)isTouchIDSupport;
- (id)isGravitySupport;
- (id)isSDCardSupport;
- (id)screenSize;
- (id)romSize;
- (id)ramFreeSize;
- (id)ramSize;
- (id)brandName;
- (id)brandType;
- (id)osVersion;
- (id)appVersion;
- (id)envKeySelectorMaps;

@end

