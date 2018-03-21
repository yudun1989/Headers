//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface TBLocationUtil : NSObject
{
}

+ (_Bool)isIPv6only;
+ (id)getError:(id)arg1 code:(long long)arg2 msg:(id)arg3 info:(id)arg4;
+ (void)coordinateWGS84ToGCJ02:(id)arg1;
+ (void)transferCoordinate:(double)arg1 lon:(double)arg2 offsetLat:(double *)arg3 offsetLon:(double *)arg4;
+ (id)stringBase64Encode:(id)arg1;
+ (_Bool)isMulitaskingSupport;
+ (id)formatWifiBSSID:(id)arg1;
+ (id)getConnectedWifi;
+ (float)deviceSystemVersion;
+ (id)deviceIPAdress;
+ (id)deviceIPForIPv6Only;
+ (id)deviceIPForCommon;
+ (id)deviceMacAddress;
+ (double)getCLLocationAccuracyByAccuracyLevel:(int)arg1;
+ (int)calculateLocationAccuracy:(float)arg1;

@end

