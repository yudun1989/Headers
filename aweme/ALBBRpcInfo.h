//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSString;

@interface ALBBRpcInfo : NSObject
{
    NSString *_appName;
    NSString *_sdkVersion;
    NSString *_timestamp;
    NSString *_app_id;
    NSString *_token;
    NSString *_useDeviceToken;
    NSString *_deviceTokenSign;
    NSString *_deviceTokenKey;
    NSString *_t;
    NSString *_clientIp;
    NSString *_appVersion;
    NSMutableDictionary *_ext;
}

@property(retain, nonatomic) NSMutableDictionary *ext; // @synthesize ext=_ext;
@property(copy, nonatomic) NSString *appVersion; // @synthesize appVersion=_appVersion;
@property(copy, nonatomic) NSString *clientIp; // @synthesize clientIp=_clientIp;
@property(copy, nonatomic) NSString *t; // @synthesize t=_t;
@property(copy, nonatomic) NSString *deviceTokenKey; // @synthesize deviceTokenKey=_deviceTokenKey;
@property(copy, nonatomic) NSString *deviceTokenSign; // @synthesize deviceTokenSign=_deviceTokenSign;
@property(copy, nonatomic) NSString *useDeviceToken; // @synthesize useDeviceToken=_useDeviceToken;
@property(copy, nonatomic) NSString *token; // @synthesize token=_token;
@property(copy, nonatomic) NSString *app_id; // @synthesize app_id=_app_id;
@property(copy, nonatomic) NSString *timestamp; // @synthesize timestamp=_timestamp;
@property(copy, nonatomic) NSString *sdkVersion; // @synthesize sdkVersion=_sdkVersion;
@property(copy, nonatomic) NSString *appName; // @synthesize appName=_appName;
- (void).cxx_destruct;

@end

