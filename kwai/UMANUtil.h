//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface UMANUtil : NSObject
{
}

+ (_Bool)isEmptyString:(id)arg1;
+ (id)getString:(id)arg1 bytesLength:(int)arg2;
+ (_Bool)isPad;
+ (id)sessionId;
+ (id)deflatedDataPrefixedWith:(id)arg1 level:(int)arg2 source:(id)arg3;
+ (id)deflatedData:(id)arg1;
+ (id)JSONValue:(id)arg1;
+ (id)JSONFragment:(id)arg1;
+ (id)urlEncode:(id)arg1;
+ (id)appPirateString;
+ (_Bool)isAppPirate;
+ (id)appDisplayNameString;
+ (id)appPackageNameString;
+ (_Bool)isDebugging;
+ (id)idfv;
+ (id)idfa;
+ (id)utdid;
+ (id)openUDIDString;
+ (id)deviceJailBreakString;
+ (_Bool)isDeviceJailBreak;
+ (id)dateString;
+ (id)timeString;
+ (id)carrierString;
+ (id)accessString;
+ (id)accessSubType;
+ (_Bool)isOverSeas;
+ (id)mccString;
+ (id)mncString;
+ (int)resolutionWidth;
+ (int)resolutionHeight;
+ (id)resolutionString;
+ (int)timezone;
+ (id)timezoneString;
+ (id)osVersionString;
+ (id)osString;
+ (id)sdkTypeString;
+ (id)appShortVersionString;
+ (id)appVersionString;
+ (id)deviceModelString;
+ (id)sdkVersionString;
+ (id)languageString;
+ (id)countryString;
+ (id)returnCheck:(id)arg1;
+ (id)md5:(id)arg1;
+ (id)bytesToHexString:(char *)arg1 length:(int)arg2;
+ (id)md5DataWithData:(id)arg1;
+ (char *)md5BytesWithString:(id)arg1;
+ (id)deviceMacAddressString;

@end

