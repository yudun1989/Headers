//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MSToString.h"

@class NSString;

@interface MSMobileTokenReq : MSToString
{
    NSString *_logonId;
    NSString *_tid;
    NSString *_sePubKey;
    NSString *_location;
    NSString *_baseBand;
    NSString *_osType;
    NSString *_osVersion;
    NSString *_hasRooted;
    NSString *_imei;
    NSString *_imsi;
    NSString *_cellId;
    NSString *_mac;
    NSString *_applicationName;
}

@property(retain, nonatomic) NSString *applicationName; // @synthesize applicationName=_applicationName;
@property(retain, nonatomic) NSString *mac; // @synthesize mac=_mac;
@property(retain, nonatomic) NSString *cellId; // @synthesize cellId=_cellId;
@property(retain, nonatomic) NSString *imsi; // @synthesize imsi=_imsi;
@property(retain, nonatomic) NSString *imei; // @synthesize imei=_imei;
@property(retain, nonatomic) NSString *hasRooted; // @synthesize hasRooted=_hasRooted;
@property(retain, nonatomic) NSString *osVersion; // @synthesize osVersion=_osVersion;
@property(retain, nonatomic) NSString *osType; // @synthesize osType=_osType;
@property(retain, nonatomic) NSString *baseBand; // @synthesize baseBand=_baseBand;
@property(retain, nonatomic) NSString *location; // @synthesize location=_location;
@property(retain, nonatomic) NSString *sePubKey; // @synthesize sePubKey=_sePubKey;
@property(retain, nonatomic) NSString *tid; // @synthesize tid=_tid;
@property(retain, nonatomic) NSString *logonId; // @synthesize logonId=_logonId;
- (void).cxx_destruct;

@end

