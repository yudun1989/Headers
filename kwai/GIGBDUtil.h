//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface GIGBDUtil : NSObject
{
    id gxModuleContent_;
}

+ (id)getGxSdkConfigPlistPath;
+ (_Bool)getAllowsForHttp;
+ (int)getIntForUDKey:(id)arg1 andDefaultValue:(int)arg2;
+ (id)decryptionPhoneNumber:(id)arg1;
+ (id)encryptPhoneNumber:(id)arg1;
+ (id)binaryStringWithInteger:(long long)arg1 andLength:(int)arg2;
+ (id)genFetchPnTypeNumByMask:(int)arg1 andMobile:(int)arg2;
+ (int)genFetchPnTypeByMask:(int)arg1 andMobile:(int)arg2;
+ (int)genMobileType;
+ (id)interceptString:(id)arg1 forPrefixKey:(id)arg2 andEndKey:(id)arg3;
+ (_Bool)retriveAppCurBluetoothStates;
+ (id)decryptData:(id)arg1;
+ (id)encryptData:(id)arg1;
+ (id)toGIMD5:(id)arg1;
+ (id)GIBase64Encoding:(id)arg1;
+ (id)dataWithGIBase64EncodedString:(id)arg1;
+ (id)genLocationlatitude:(id)arg1;
+ (id)genLocationLongitude:(id)arg1;
+ (id)formateDetailTime:(id)arg1;
+ (id)formateDate:(id)arg1;
+ (id)formateTime:(id)arg1;
+ (_Bool)getGDBRepeatAllow;
+ (void)setGBDRepaetAllow:(_Bool)arg1;
+ (id)GIJSONValueData:(id)arg1;
+ (id)stringByGIRandomUUID;
+ (id)GIJSONRepresentationWithDict:(id)arg1;
+ (int)applicationState;
+ (_Bool)isUseDyncLocal;
+ (void)saveNSDefaultObject:(id)arg1 forKey:(id)arg2;
+ (id)getNSDefaultObjectForKey:(id)arg1;
+ (_Bool)getNSDefaultBoolForKey:(id)arg1;
+ (id)getNSDefaultStringForKey:(id)arg1;
+ (id)genBeaconRegionByUUID:(id)arg1;
+ (id)createLocationWithLat:(float)arg1 andLon:(float)arg2;
+ (id)createCLLocationManager;
+ (id)sharedInstance;
- (void).cxx_destruct;
- (id)getCustomDebugRankForAppPlist;
- (id)getCustomDebugRankForDocumentsPlist;
- (id)urlHttpSplicing:(id)arg1;
- (id)getFirstUrlStringOfIDC:(id)arg1 andHttpSplicing:(_Bool)arg2;
- (_Bool)isCidMaskValid:(id)arg1 andMask:(id)arg2;
- (_Bool)isMobileTypeOperatorPermitted:(int)arg1;
- (id)gbdRetriveAppNetWorkStates;
- (id)retriveBundleId;
- (id)retriveIDFA;
- (id)retriveDeviceName;
- (id)retriveLocalLanguageCode;
- (id)retriveMobileNetTypeCode;
- (id)modulePhoneApiUrl;
- (id)dyncConfigApiUrl;
- (void)saveModuleClientId:(id)arg1;
- (void)saveModuleAppId:(id)arg1;
- (id)moduleClientId;
- (id)moduleAppId;
- (float)currentDeviceSystemVersion;
- (void)removeNSDefaultForKey:(id)arg1;
- (id)init;

@end

