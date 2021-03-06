//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XFRCObject.h"

#import "NSCoding-Protocol.h"

@class NSArray, NSString;

@interface XFActionLogBase : XFRCObject <NSCoding>
{
    NSString *_deviceId;
    long long _appId;
    long long _clientType;
    NSString *_channel;
    NSArray *_actionLogInfos;
    NSString *_kDeviceId;
    NSString *_osVer;
    NSString *_model;
}

@property(copy, nonatomic) NSString *model; // @synthesize model=_model;
@property(copy, nonatomic) NSString *osVer; // @synthesize osVer=_osVer;
@property(copy, nonatomic) NSString *kDeviceId; // @synthesize kDeviceId=_kDeviceId;
@property(copy, nonatomic) NSArray *actionLogInfos; // @synthesize actionLogInfos=_actionLogInfos;
@property(copy, nonatomic) NSString *channel; // @synthesize channel=_channel;
@property(nonatomic) long long clientType; // @synthesize clientType=_clientType;
@property(nonatomic) long long appId; // @synthesize appId=_appId;
@property(copy, nonatomic) NSString *deviceId; // @synthesize deviceId=_deviceId;
- (void).cxx_destruct;
- (id)init;

@end

