//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSDictionary, NSString;

@interface aluLBSLocation : NSObject
{
    double _longitude;
    double _latitude;
    double _altitude;
    double _accuracy;
    double _speed;
    double _direction;
    NSArray *_bluetoothDevices;
    NSArray *_gsmInfos;
    NSArray *_wifiInfos;
    NSArray *_cdmaInfos;
    NSDictionary *_extraInfos;
    NSDictionary *_sensors;
    NSString *_wifiConn;
    NSString *_isWifConnectBypassword;
    NSString *_lbsOpen;
    NSString *_accessWirelessNetType;
    NSString *_currentMobileOperator;
    NSString *_isBlueToothOpen;
    NSString *_bluetoothUuid;
    NSString *_voiceOver;
    NSString *_source;
    NSString *_os;
    NSString *_queryLbs;
}

+ (Class)sensorsElementClass;
+ (Class)extraInfosElementClass;
+ (Class)cdmaInfosElementClass;
+ (Class)wifiInfosElementClass;
+ (Class)gsmInfosElementClass;
+ (Class)bluetoothDevicesElementClass;
@property(retain, nonatomic) NSString *queryLbs; // @synthesize queryLbs=_queryLbs;
@property(retain, nonatomic) NSString *os; // @synthesize os=_os;
@property(retain, nonatomic) NSString *source; // @synthesize source=_source;
@property(retain, nonatomic) NSString *voiceOver; // @synthesize voiceOver=_voiceOver;
@property(retain, nonatomic) NSString *bluetoothUuid; // @synthesize bluetoothUuid=_bluetoothUuid;
@property(retain, nonatomic) NSString *isBlueToothOpen; // @synthesize isBlueToothOpen=_isBlueToothOpen;
@property(retain, nonatomic) NSString *currentMobileOperator; // @synthesize currentMobileOperator=_currentMobileOperator;
@property(retain, nonatomic) NSString *accessWirelessNetType; // @synthesize accessWirelessNetType=_accessWirelessNetType;
@property(retain, nonatomic) NSString *lbsOpen; // @synthesize lbsOpen=_lbsOpen;
@property(retain, nonatomic) NSString *isWifConnectBypassword; // @synthesize isWifConnectBypassword=_isWifConnectBypassword;
@property(retain, nonatomic) NSString *wifiConn; // @synthesize wifiConn=_wifiConn;
@property(retain, nonatomic) NSDictionary *sensors; // @synthesize sensors=_sensors;
@property(retain, nonatomic) NSDictionary *extraInfos; // @synthesize extraInfos=_extraInfos;
@property(retain, nonatomic) NSArray *cdmaInfos; // @synthesize cdmaInfos=_cdmaInfos;
@property(retain, nonatomic) NSArray *wifiInfos; // @synthesize wifiInfos=_wifiInfos;
@property(retain, nonatomic) NSArray *gsmInfos; // @synthesize gsmInfos=_gsmInfos;
@property(retain, nonatomic) NSArray *bluetoothDevices; // @synthesize bluetoothDevices=_bluetoothDevices;
@property(nonatomic) double direction; // @synthesize direction=_direction;
@property(nonatomic) double speed; // @synthesize speed=_speed;
@property(nonatomic) double accuracy; // @synthesize accuracy=_accuracy;
@property(nonatomic) double altitude; // @synthesize altitude=_altitude;
@property(nonatomic) double latitude; // @synthesize latitude=_latitude;
@property(nonatomic) double longitude; // @synthesize longitude=_longitude;
- (void).cxx_destruct;

@end

