//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSDictionary, NSString;

@interface QQPAAdReportModel : NSObject
{
    NSString *_pUin;
    unsigned long long _time;
    NSString *_userAgent;
    NSString *_hwAddress;
    NSString *_imsi;
    NSString *_imei;
    NSArray *_adidList;
    NSArray *_adViewIdList;
    NSString *_gdtImpDataString;
    NSArray *_gdtCliDataList;
    long long _retryTimes;
    NSDictionary *_paramDic;
    int _xo;
    unsigned long long _reportType;
}

+ (id)adRTReportKey;
@property(nonatomic) unsigned long long reportType; // @synthesize reportType=_reportType;
@property(retain, nonatomic) NSString *imei; // @dynamic imei;
@property(retain, nonatomic) NSString *imsi; // @dynamic imsi;
@property(retain, nonatomic) NSString *hwAddress; // @dynamic hwAddress;
@property(retain, nonatomic) NSString *userAgent; // @dynamic userAgent;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;

// Remaining properties
@property(retain, nonatomic) NSArray *adViewIdList; // @dynamic adViewIdList;
@property(retain, nonatomic) NSArray *adidList; // @dynamic adidList;
@property(retain, nonatomic) NSArray *gdtCliDataList; // @dynamic gdtCliDataList;
@property(retain, nonatomic) NSString *gdtImpDataString; // @dynamic gdtImpDataString;
@property(retain, nonatomic) NSString *pUin; // @dynamic pUin;
@property(retain, nonatomic) NSDictionary *paramDic; // @dynamic paramDic;
@property(nonatomic) long long retryTimes; // @dynamic retryTimes;
@property(nonatomic) unsigned long long time; // @dynamic time;

@end
