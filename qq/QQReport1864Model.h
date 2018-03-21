//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QQReportBaseModel.h>

#import <QQMainProject/QQReportProtocol-Protocol.h>

@class NSString;

@interface QQReport1864Model : QQReportBaseModel <QQReportProtocol>
{
    NSString *_oper_time;
    NSString *_lat;
    NSString *_lng;
    NSString *_alt;
    NSString *_accurancy;
    NSString *_appid;
    NSString *_platform;
    NSString *_reserved1;
    NSString *_reserved2;
    NSString *_reserved3;
    NSString *_reserved4;
}

+ (id)keyList;
@property(copy, nonatomic) NSString *reserved4; // @synthesize reserved4=_reserved4;
@property(copy, nonatomic) NSString *reserved3; // @synthesize reserved3=_reserved3;
@property(copy, nonatomic) NSString *reserved2; // @synthesize reserved2=_reserved2;
@property(copy, nonatomic) NSString *reserved1; // @synthesize reserved1=_reserved1;
@property(copy, nonatomic) NSString *platform; // @synthesize platform=_platform;
@property(copy, nonatomic) NSString *appid; // @synthesize appid=_appid;
@property(copy, nonatomic) NSString *accurancy; // @synthesize accurancy=_accurancy;
@property(copy, nonatomic) NSString *alt; // @synthesize alt=_alt;
@property(copy, nonatomic) NSString *lng; // @synthesize lng=_lng;
@property(copy, nonatomic) NSString *lat; // @synthesize lat=_lat;
@property(copy, nonatomic) NSString *oper_time; // @synthesize oper_time=_oper_time;
- (void).cxx_destruct;
- (id)merge:(id)arg1;
- (_Bool)compare:(id)arg1;
- (id)logString;
- (id)modelWithLogString:(id)arg1;
- (id)logKey;
@property(readonly, copy) NSString *description;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

