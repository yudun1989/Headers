//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class CTTelephonyNetworkInfo, NSString;

@interface ARUPReachabilityManager : NSObject
{
    int _currentARUPNetworkStatus;
    int _preARUPNetworkStatus;
    struct __SCNetworkReachability *_reachabilityRef;
    NSString *ssid;
    CTTelephonyNetworkInfo *netInfo;
    NSString *_ssidMD5;
}

+ (_Bool)configureProxies;
+ (id)md5:(id)arg1;
+ (id)shareInstance;
- (void).cxx_destruct;
- (void)dealloc;
- (int)_ARUPNetworkStatusForReachabilityFlags:(unsigned int)arg1;
- (int)currentARUPNetworkStatusForiOS7:(int)arg1;
- (_Bool)checkInternetConnection;
- (int)_reachabilityStatus;
- (id)getWiFiSSIDMD5;
- (id)getWifiSSID;
- (id)currentAPN;
- (id)currentARUPNetworkStatusString;
- (int)preARUPNetworkStatus;
- (int)currentARUPNetworkStatus;
- (_Bool)_startNotifier;
- (id)init;

@end

