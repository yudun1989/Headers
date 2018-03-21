//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QQReportBaseModel.h>

#import <QQMainProject/NSCoding-Protocol.h>
#import <QQMainProject/QQReportProtocol-Protocol.h>

@class NSString;

@interface QQReport2402Model : QQReportBaseModel <QQReportProtocol, NSCoding>
{
    int _dwBusinessType;
    int _dwAccountType;
    int _dwNodeReqEntrance;
    int _dwNodeReqUIInit;
    int _dwNodeReqSDKReq;
    int _dwNodeReqSDKUIAppear;
    int _dwNodeReqSDKConnect;
    int _dwNodeReqUIRelease;
    int _dwNodeRecvSDKRecv;
    int _dwNodeRecvUIInit;
    int _dwNodeRecvUIAppear;
    int _dwNodeRecvUIAccept;
    int _dwNodeRecvUIReject;
    int _dwNodeRecvSDKConnect;
    int _dwNodeRecvUIRelease;
    int _dwCrashAppear;
    int _dwRemainMemory;
    int _dwNodeFlag6;
    int _dwNodeFlag7;
    int _dwNodeFlag8;
    int _dwNodeFlag9;
    int _dwNodeFlag10;
    int _dwNodeFlag21;
    int _dwNodeFlag22;
    int _dwNodeFlag23;
    int _dwNodeFlag24;
    int _dwNodeFlag25;
    int _dwNodeFlag26;
    int _dwNodeFlag27;
    int _dwNodeFlag28;
    int _dwNodeFlag29;
    int _dwNodeFlag30;
    NSString *_sPlatom;
    NSString *_sDeviceType;
    NSString *_sDeviceFirmwares;
    NSString *_sOSVersion;
    unsigned long long _dwSelfUin;
    unsigned long long _dwPeerUin;
    NSString *_sNodeStartTime;
    NSString *_sNodeFlag1;
    NSString *_sNodeFlag2;
    NSString *_sNodeFlag3;
    NSString *_sNodeFlag4;
    NSString *_sNodeFlag5;
    NSString *_sNodeFlag11;
    NSString *_sNodeFlag12;
    NSString *_sNodeFlag13;
    NSString *_sNodeFlag14;
    NSString *_sNodeFlag15;
    NSString *_sNodeFlag16;
    NSString *_sNodeFlag17;
    NSString *_sNodeFlag18;
    NSString *_sNodeFlag19;
    NSString *_sNodeFlag20;
}

+ (id)keyList;
@property(nonatomic) int dwNodeFlag30; // @synthesize dwNodeFlag30=_dwNodeFlag30;
@property(nonatomic) int dwNodeFlag29; // @synthesize dwNodeFlag29=_dwNodeFlag29;
@property(nonatomic) int dwNodeFlag28; // @synthesize dwNodeFlag28=_dwNodeFlag28;
@property(nonatomic) int dwNodeFlag27; // @synthesize dwNodeFlag27=_dwNodeFlag27;
@property(nonatomic) int dwNodeFlag26; // @synthesize dwNodeFlag26=_dwNodeFlag26;
@property(nonatomic) int dwNodeFlag25; // @synthesize dwNodeFlag25=_dwNodeFlag25;
@property(nonatomic) int dwNodeFlag24; // @synthesize dwNodeFlag24=_dwNodeFlag24;
@property(nonatomic) int dwNodeFlag23; // @synthesize dwNodeFlag23=_dwNodeFlag23;
@property(nonatomic) int dwNodeFlag22; // @synthesize dwNodeFlag22=_dwNodeFlag22;
@property(nonatomic) int dwNodeFlag21; // @synthesize dwNodeFlag21=_dwNodeFlag21;
@property(copy, nonatomic) NSString *sNodeFlag20; // @synthesize sNodeFlag20=_sNodeFlag20;
@property(copy, nonatomic) NSString *sNodeFlag19; // @synthesize sNodeFlag19=_sNodeFlag19;
@property(copy, nonatomic) NSString *sNodeFlag18; // @synthesize sNodeFlag18=_sNodeFlag18;
@property(copy, nonatomic) NSString *sNodeFlag17; // @synthesize sNodeFlag17=_sNodeFlag17;
@property(copy, nonatomic) NSString *sNodeFlag16; // @synthesize sNodeFlag16=_sNodeFlag16;
@property(copy, nonatomic) NSString *sNodeFlag15; // @synthesize sNodeFlag15=_sNodeFlag15;
@property(copy, nonatomic) NSString *sNodeFlag14; // @synthesize sNodeFlag14=_sNodeFlag14;
@property(copy, nonatomic) NSString *sNodeFlag13; // @synthesize sNodeFlag13=_sNodeFlag13;
@property(copy, nonatomic) NSString *sNodeFlag12; // @synthesize sNodeFlag12=_sNodeFlag12;
@property(copy, nonatomic) NSString *sNodeFlag11; // @synthesize sNodeFlag11=_sNodeFlag11;
@property(nonatomic) int dwNodeFlag10; // @synthesize dwNodeFlag10=_dwNodeFlag10;
@property(nonatomic) int dwNodeFlag9; // @synthesize dwNodeFlag9=_dwNodeFlag9;
@property(nonatomic) int dwNodeFlag8; // @synthesize dwNodeFlag8=_dwNodeFlag8;
@property(nonatomic) int dwNodeFlag7; // @synthesize dwNodeFlag7=_dwNodeFlag7;
@property(nonatomic) int dwNodeFlag6; // @synthesize dwNodeFlag6=_dwNodeFlag6;
@property(copy, nonatomic) NSString *sNodeFlag5; // @synthesize sNodeFlag5=_sNodeFlag5;
@property(copy, nonatomic) NSString *sNodeFlag4; // @synthesize sNodeFlag4=_sNodeFlag4;
@property(copy, nonatomic) NSString *sNodeFlag3; // @synthesize sNodeFlag3=_sNodeFlag3;
@property(copy, nonatomic) NSString *sNodeFlag2; // @synthesize sNodeFlag2=_sNodeFlag2;
@property(copy, nonatomic) NSString *sNodeFlag1; // @synthesize sNodeFlag1=_sNodeFlag1;
@property(nonatomic) int dwRemainMemory; // @synthesize dwRemainMemory=_dwRemainMemory;
@property(copy, nonatomic) NSString *sNodeStartTime; // @synthesize sNodeStartTime=_sNodeStartTime;
@property(nonatomic) int dwCrashAppear; // @synthesize dwCrashAppear=_dwCrashAppear;
@property(nonatomic) int dwNodeRecvUIRelease; // @synthesize dwNodeRecvUIRelease=_dwNodeRecvUIRelease;
@property(nonatomic) int dwNodeRecvSDKConnect; // @synthesize dwNodeRecvSDKConnect=_dwNodeRecvSDKConnect;
@property(nonatomic) int dwNodeRecvUIReject; // @synthesize dwNodeRecvUIReject=_dwNodeRecvUIReject;
@property(nonatomic) int dwNodeRecvUIAccept; // @synthesize dwNodeRecvUIAccept=_dwNodeRecvUIAccept;
@property(nonatomic) int dwNodeRecvUIAppear; // @synthesize dwNodeRecvUIAppear=_dwNodeRecvUIAppear;
@property(nonatomic) int dwNodeRecvUIInit; // @synthesize dwNodeRecvUIInit=_dwNodeRecvUIInit;
@property(nonatomic) int dwNodeRecvSDKRecv; // @synthesize dwNodeRecvSDKRecv=_dwNodeRecvSDKRecv;
@property(nonatomic) int dwNodeReqUIRelease; // @synthesize dwNodeReqUIRelease=_dwNodeReqUIRelease;
@property(nonatomic) int dwNodeReqSDKConnect; // @synthesize dwNodeReqSDKConnect=_dwNodeReqSDKConnect;
@property(nonatomic) int dwNodeReqSDKUIAppear; // @synthesize dwNodeReqSDKUIAppear=_dwNodeReqSDKUIAppear;
@property(nonatomic) int dwNodeReqSDKReq; // @synthesize dwNodeReqSDKReq=_dwNodeReqSDKReq;
@property(nonatomic) int dwNodeReqUIInit; // @synthesize dwNodeReqUIInit=_dwNodeReqUIInit;
@property(nonatomic) int dwNodeReqEntrance; // @synthesize dwNodeReqEntrance=_dwNodeReqEntrance;
@property(nonatomic) int dwAccountType; // @synthesize dwAccountType=_dwAccountType;
@property(nonatomic) int dwBusinessType; // @synthesize dwBusinessType=_dwBusinessType;
@property(nonatomic) unsigned long long dwPeerUin; // @synthesize dwPeerUin=_dwPeerUin;
@property(nonatomic) unsigned long long dwSelfUin; // @synthesize dwSelfUin=_dwSelfUin;
@property(copy, nonatomic) NSString *sOSVersion; // @synthesize sOSVersion=_sOSVersion;
@property(copy, nonatomic) NSString *sDeviceFirmwares; // @synthesize sDeviceFirmwares=_sDeviceFirmwares;
@property(copy, nonatomic) NSString *sDeviceType; // @synthesize sDeviceType=_sDeviceType;
@property(copy, nonatomic) NSString *sPlatom; // @synthesize sPlatom=_sPlatom;
- (void)dealloc;
- (void)fixModel:(id)arg1 lvalue:(unsigned long long)arg2;
- (void)fixModel:(id)arg1 sValue:(id)arg2;
- (void)fixModel:(id)arg1 value:(int)arg2;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)merge:(id)arg1;
- (_Bool)compare:(id)arg1;
- (id)logString;
- (id)modelWithLogString:(id)arg1;
- (id)logKey;
@property(readonly, copy) NSString *description;
- (void)initBasicInfo;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

